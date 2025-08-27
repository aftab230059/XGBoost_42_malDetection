
# MalwareDetection on STM32 (NUCLEO-H753ZI)

Edge deployment of multi-class network attack detection with **XGBoost** on **STM32H753ZI**.
Train in Python → export to C (TL2cgen) → build in STM32CubeIDE → measure **latency**, **throughput**, **Flash**, **static RAM** on device.

**Tested HW/clock/UART**

* Board: NUCLEO-H753ZI (STM32H753ZITx, Cortex-M7)
* Clock: HSI 64 MHz (no PLL); FPv5-D16, hard-float
* UART: ST-Link VCP (`/dev/ttyACM0` on Linux)

---

## Repo layout

```
.
├─ notebooks/                     # training/eval notebooks (PC)
├─ models/                        # saved models (pkl/json) and exports
│  ├─ xgb_42f/
│  │   ├─ xgb_cw_42f_LLf.pkl
│  │   ├─ xgb_cw_42f.json         # for codegen
│  │   └─ tl2cgen_src/            # header.h + tu*.c (generated)
│  ├─ xgb_20f/
│  │   └─ tl2cgen_src/            # header.h + tu*.c
│  └─ xgb_10f/
│      └─ tl2cgen_src/            # header.h + tu*.c
├─ firmware/
│  └─ STM32CubeIDE_project/       # CubeIDE project (Core/, Drivers/, ...)
│      ├─ Core/Inc/header.h       # overwritten by model export
│      ├─ Core/Src/tu*.c          # overwritten by model export
│      ├─ Core/Src/main.c         # wrapper: prints + benchmarks
│      └─ Debug/MalwareDetection.elf (built)
└─ README.md
```

> Note: the project name “42f” comes from training; the exported model reports **Features=41** at runtime (one feature was unused/constant). That’s expected—keep the naming but trust `get_num_feature()` on device.

---

## Software requirements

### Python (PC side)

* Python 3.10–3.11 (we used a venv named `thesis-env`)
* Packages:

  * `xgboost>=2.0.0`
  * `scikit-learn>=1.4.0`
  * `pandas>=2.2.0`
  * `numpy>=1.26.0`
  * `joblib>=1.3.0`
  * `jupyterlab` (optional)
  * **Codegen:** TL2cgen (included in repo tooling). *(Optional RF path uses `m2cgen>=0.10.0`.)*

Quick setup:

```bash
python -m venv thesis-env
source thesis-env/bin/activate
pip install -U pip
pip install -r requirements.txt
```

`requirements.txt`

Below are the files ready to drop in.

---

### `requirements.txt` (curated, pinned, slim)

```txt
# --- Core stack ---
numpy==2.1.3
scipy==1.15.2
pandas==2.2.3
joblib==1.4.2

# --- Classical ML ---
scikit-learn==1.6.1
xgboost==2.0.3
lightgbm==4.6.0
imbalanced-learn==0.13.0

# --- Model → C tools ---
tl2cgen==1.0.0
m2cgen==0.10.0
treelite==4.4.1
treelite-runtime==4.4.1   # keep runtime aligned with treelite; your freeze had 3.9.1

# --- Viz / notebooks ---
matplotlib==3.10.1
seaborn==0.13.2
ipykernel==6.29.5
ipywidgets==8.1.7

# --- Utility (serial monitor in Python, optional) ---
pyserial==3.5
```

Install:

```bash
python -m venv thesis-env
source thesis-env/bin/activate
pip install -U pip
pip install -r requirements.txt
```

---

### `requirements-dl.txt` (optional heavy extras)

These aren’t needed for the MCU work; include only if you want your TF experiments reproducible.

```txt
tensorflow==2.19.0
keras==3.9.2
tensorboard==2.19.0
```

Install (on top of the base env):

```bash
pip install -r requirements-dl.txt
```

---


### STM32 toolchain (device side)

* STM32CubeIDE 1.19.0 (includes GNU Arm Embedded 13.3.rel1)
* STM32CubeProgrammer 2.20.0
* ST-LINK GDB Server 7.11.0
* Serial terminal: `picocom` (or `screen`/`minicom`)

  ```bash
  sudo apt install picocom
  sudo usermod -a -G dialout $USER    # re-login
  # If port is busy:
  sudo lsof -n /dev/ttyACM0
  sudo fuser -v /dev/ttyACM0
  sudo systemctl stop ModemManager
  ```

---

## Train & export (summary)

1. Train 42f, derive top-20/top-10 by importance, retrain:

```python
# split
X_train_clean, X_test_clean, y_train_clean, y_test_clean = train_test_split(
    X_clean, y_clean, test_size=0.2, stratify=y_clean, random_state=42
)

# 42f baseline
xgb42 = joblib.load("models/xgb_42f/xgb_cw_42f_LLf.pkl")

# top-k features and reduced frames
imp = pd.Series(xgb42.feature_importances_, index=X_train_clean.columns).sort_values(ascending=False)
top20, top10 = imp.index[:20].tolist(), imp.index[:10].tolist()
X_train_20, X_test_20 = X_train_clean[top20], X_test_clean[top20]
X_train_10, X_test_10 = X_train_clean[top10], X_test_clean[top10]

# retrain reduced models
xgb20 = XGBClassifier(objective="multi:softprob", num_class=len(class_names),
                      tree_method="hist", eval_metric="mlogloss", random_state=42).fit(X_train_20, y_train_clean)
xgb10 = XGBClassifier(objective="multi:softprob", num_class=len(class_names),
                      tree_method="hist", eval_metric="mlogloss", random_state=42).fit(X_train_10, y_train_clean)

joblib.dump(xgb20, "models/xgb_20f/xgb_cw_20f.pkl"); xgb20.save_model("models/xgb_20f/xgb_cw_20f.json")
joblib.dump(xgb10, "models/xgb_10f/xgb_cw_10f.pkl"); xgb10.save_model("models/xgb_10f/xgb_cw_10f.json")
```

2. Export to C with **TL2cgen** → generates `header.h` + `tu*.c` in `tl2cgen_src/`.

---

## Build firmware (STM32CubeIDE)

1. Open `firmware/STM32CubeIDE_project/` in CubeIDE.
2. Replace model sources:

   * Copy `header.h` → `Core/Inc/header.h`
   * Copy all `tu*.c` → `Core/Src/`
3. Keep our `Core/Src/main.c` (it prints metadata, runs one preset inference, then a 200-run benchmark).
4. Build (Project → Build Project).

**Flags already set**: `-Ofast -ffunction-sections -fdata-sections -mfpu=fpv5-d16 -mfloat-abi=hard --specs=nano.specs -u _printf_float`.

---

## Flash & run

Flash from CubeIDE (Run/Debug), then open a terminal:

```bash
picocom -b 115200 --nolock /dev/ttyACM0
# for interactive CSV mode you can use mappings:
# picocom -b 115200 --imap lfcrlf --omap crlf --nolock /dev/ttyACM0
```

You should see something like:

```
STM32 XGBoost (multiclass) AUTO-RUN
Features=41, Classes=15
Approx RAM headroom: 522067 bytes
Preset inference: ...
Latency over 200 runs: avg=2860.46 us ... (throughput=349.6/s)
-- DONE --
```

Interactive variant accepts:

* `preset`
* `bench N`
* or a CSV with exactly `get_num_feature()` floats in training order.

---

## Measuring Flash & RAM

```bash
cd firmware/STM32CubeIDE_project/Debug
arm-none-eabi-size MalwareDetection.elf
#   text   data    bss    dec    hex  filename
# 1190220    476   3164 1193860 123784 MalwareDetection.elf
```

* **Flash (MiB)** ≈ `(text + data) / 1048576`
* **Static RAM (KiB)** ≈ `(data + bss) / 1024`

Example (10f): Flash ≈ **1.136 MiB**, Static RAM ≈ **3.56 KiB**.

---

## On-device results (NUCLEO-H753ZI @ 64 MHz)

| Model         | #Feat | #Classes |  Avg μs |  Min μs |  Max μs | Throughput (inf/s) | Flash (MiB) | Static RAM (KiB) |
| :------------ | ----: | -------: | ------: | ------: | ------: | -----------------: | ----------: | ---------------: |
| XGBoost (42f) |    41 |       15 | 2860.46 | 2859.23 | 2861.11 |              349.6 |       1.681 |             3.56 |
| XGBoost (20f) |    20 |       15 | 2964.30 | 2963.14 | 2964.91 |              337.3 |       1.546 |             3.56 |
| XGBoost (10f) |    10 |       15 | 2595.73 | 2594.70 | 2596.56 |              385.2 |       1.136 |             3.56 |

PC accuracy (add your numbers for 20f/10f):

* XGB-42f: Acc ≈ **0.9687**, F1-weighted ≈ **0.9717**

---

## Troubleshooting

* **No UART / cannot type**: only one process can hold `/dev/ttyACM0`. Close other terminals/IDE consoles.
  `sudo lsof -n /dev/ttyACM0` / `sudo fuser -v /dev/ttyACM0`
* **ModemManager grabs the port**: `sudo systemctl stop ModemManager`
* **Permission denied**: `sudo usermod -a -G dialout $USER` then re-login
* **Undefined reference to `predict`**: ensure all `tu*.c` are in `Core/Src` and compiled.
* **Feature count mismatch**: ensure preset/CSV uses the *same column order* as in training and equals `get_num_feature()`.

---

## Repro notes

* HSI 64 MHz, no PLL; DWT CYCCNT used for timing (excludes UART print time).
* Latency measured for `predict()` + `postprocess()`.
* Throughput = `1e6 / avg_us`.
* Flash = `text + data`; Static RAM = `data + bss` (from `arm-none-eabi-size`).

