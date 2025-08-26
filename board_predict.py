# board_predict.py
import re
import time
import argparse
import serial

# Optional PC inference
try:
    import joblib, numpy as np
    JOBLIB_OK = True
except Exception:
    JOBLIB_OK = False

DEFAULT_CLASSES = [
  "Backdoor","DDoS_HTTP","DDoS_ICMP","DDoS_TCP","DDoS_UDP","Fingerprinting",
  "MITM","Normal","Password","Port_Scanning","Ransomware","SQL_injection",
  "Uploading","Vulnerability_scanner","XSS"
]

PROMPT = b"> "

def read_until_prompt(ser, overall_timeout=6.0):
    """Read bytes until we see the CLI prompt or timeout. Returns text."""
    ser.flush()
    out = bytearray()
    t0 = time.time()
    while time.time() - t0 < overall_timeout:
        b = ser.read(ser.in_waiting or 1)
        if b:
            out.extend(b)
            if out.endswith(PROMPT):
                break
        else:
            time.sleep(0.01)
    return out.decode(errors="ignore")

def send_cmd(ser, cmd, wait=6.0):
    ser.write((cmd + "\r\n").encode())
    ser.flush()
    return read_until_prompt(ser, wait)

def parse_c_array(text):
    """
    Accepts full C-style 'static const float TEST[41] = { ... };' or just '{...}' or the numbers.
    Returns list[float].
    """
    # keep only inside braces if present
    m = re.search(r"\{([^}]*)\}", text, flags=re.S)
    core = m.group(1) if m else text

    # split on commas
    toks = [t.strip() for t in core.split(",") if t.strip()]

    floats = []
    for t in toks:
        # remove trailing 'f' or 'F' from 1f, 3.14f, 1e-3f, etc.
        t = re.sub(r"([0-9eE\+\-\.])f$", r"\1", t)
        # remove any lingering non-number chars (just in case)
        t = re.sub(r"[^0-9eE\+\-\.]", "", t)
        if t == "" or t == "." or t == "-" or t == "+":  # skip junk
            continue
        try:
            floats.append(float(t))
        except ValueError:
            pass
    return floats

def main():
    ap = argparse.ArgumentParser(description="Send test vectors to STM32 CLI and (optionally) compare with PC model.")
    ap.add_argument("--port", default="/dev/ttyACM0")
    ap.add_argument("--baud", type=int, default=115200)
    ap.add_argument("--preset", action="store_true", help="Run 'preset' first.")
    ap.add_argument("--bench", type=int, default=0, help="Run 'bench N' after preset/row.")
    group = ap.add_mutually_exclusive_group()
    group.add_argument("--carray", type=str, help="Paste the full C-array line or just the '{...}' with floats.")
    group.add_argument("--rowcsv", type=str, help="CSV floats as a single string.")
    group.add_argument("--file", type=str, help="File containing a C-array or a CSV row.")
    # Optional PC inference
    ap.add_argument("--pcmodel", type=str, default=None, help="Path to joblib .pkl for PC inference (optional).")
    ap.add_argument("--classes", type=str, default=None, help="Comma-separated class names in correct order (optional).")
    ap.add_argument("--timeout", type=float, default=6.0)
    args = ap.parse_args()

    # Load optional PC model
    clf = None
    class_names = DEFAULT_CLASSES
    if args.classes:
        class_names = [c.strip() for c in args.classes.split(",") if c.strip()]
    if args.pcmodel:
        if not JOBLIB_OK:
            print("joblib/numpy not available; install with: pip install joblib numpy")
            return
        clf = joblib.load(args.pcmodel)

    # Get row floats
    text_src = None
    if args.carray:
        text_src = args.carray
    elif args.rowcsv:
        text_src = args.rowcsv
    elif args.file:
        with open(args.file, "r") as f:
            text_src = f.read()
    else:
        # fallback: prompt user
        print("Paste your C-array or CSV row, then Ctrl-D:")
        import sys
        text_src = sys.stdin.read()

    # parse to list of floats
    if args.carray or (text_src and "{" in text_src and "}" in text_src):
        row = parse_c_array(text_src)
    else:
        # assume CSV list
        row = [float(x) for x in text_src.replace("\n", " ").split(",") if x.strip()]

    print(f"Features in row: {len(row)}")
    csv_line = ",".join(str(x) for x in row)

    # Connect to serial
    ser = serial.Serial(args.port, args.baud, timeout=1)
    time.sleep(1.0)
    ser.reset_input_buffer()

    # Read banner to first prompt
    banner = read_until_prompt(ser, args.timeout)
    if banner:
        print(banner, end="")

    # Optional: preset
    if args.preset:
        out = send_cmd(ser, "preset", args.timeout)
        print(out, end="")

    # Send our row
    out = send_cmd(ser, csv_line, args.timeout)
    print(out, end="")

    # Optional: bench
    if args.bench > 0:
        out = send_cmd(ser, f"bench {args.bench}", args.timeout + max(4.0, args.bench * 0.01))
        print(out, end="")

    # Optional PC inference
    if clf is not None:
        X = np.asarray(row, dtype=np.float32).reshape(1, -1)
        if hasattr(clf, "predict_proba"):
            probs = clf.predict_proba(X)[0]
            top = int(np.argmax(probs))
            pname = class_names[top] if top < len(class_names) else str(top)
            print(f"\nPC says: class_id={top}  name={pname}  p={probs[top]:.4f}")
        else:
            pred = int(clf.predict(X)[0])
            pname = class_names[pred] if pred < len(class_names) else str(pred)
            print(f"\nPC says: class_id={pred}  name={pname}  (no proba)")    

if __name__ == "__main__":
    main()
