#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include "header.h"                // TL2cgen API
#include "stm32h7xx_nucleo.h"      // BSP_COM_Init
#include "core_cm7.h"              // DWT counter

/* ===== Class names (LabelEncoder order) ===== */
static const char *CLASS_NAMES[15] = {
  "Backdoor","DDoS_HTTP","DDoS_ICMP","DDoS_TCP","DDoS_UDP","Fingerprinting",
  "MITM","Normal","Password","Port_Scanning","Ransomware","SQL_injection",
  "Uploading","Vulnerability_scanner","XSS"
};

COM_InitTypeDef BspCOMInit;

static inline void dwt_init(void){ CoreDebug->DEMCR|=CoreDebug_DEMCR_TRCENA_Msk;
#ifdef DWT_LAR
  DWT->LAR = 0xC5ACCE55;
#endif
  DWT->CYCCNT=0; DWT->CTRL|=DWT_CTRL_CYCCNTENA_Msk;
}
static inline uint32_t dwt_cycles(void){ return DWT->CYCCNT; }

static int argmax(const float *a, int n){
  int m=0; float b=a[0]; for(int i=1;i<n;++i) if(a[i]>b){b=a[i]; m=i;} return m;
}

/* ===== Preset vector (index 33) — EXACT training order, 41 features ===== */
static const float PRESET_33[41] = {
  0,0,0,0,0,0,0,0,0, 1, 520514560, 21724, 0,0,0,0, 80,24,1,102,1,
  0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0, 0
};

void SystemClock_Config(void);
static void MX_GPIO_Init(void);
void Error_Handler(void);

static void print_ram_headroom(void){
  extern char end; volatile char s;
  uint32_t heap = (uint32_t)&end, sp=(uint32_t)&s;
  if (sp>heap) printf("Approx RAM headroom: %lu bytes\r\n",(unsigned long)(sp-heap));
}

int main(void){
  HAL_Init(); SystemClock_Config(); MX_GPIO_Init();

  /* USART3 (virtual COM) */
  BspCOMInit.BaudRate=115200; BspCOMInit.WordLength=COM_WORDLENGTH_8B;
  BspCOMInit.StopBits=COM_STOPBITS_1; BspCOMInit.Parity=COM_PARITY_NONE;
  BspCOMInit.HwFlowCtl=COM_HWCONTROL_NONE;
  if (BSP_COM_Init(COM1, &BspCOMInit) != BSP_ERROR_NONE) Error_Handler();
  setvbuf(stdout,NULL,_IONBF,0); HAL_Delay(100);

  const int32_t nfeat = get_num_feature();
  int32_t nclass_arr[MAX_N_CLASS]={0}; get_num_class(nclass_arr);
  const int nclass = nclass_arr[0];

  printf("\r\nSTM32 XGBoost (multiclass) AUTO-RUN\r\n");
  printf("Features=%ld, Classes=%d\r\n",(long)nfeat,nclass);
  print_ram_headroom();
  dwt_init();

  static union Entry xbuf[256];
  static float ybuf[MAX_N_CLASS];

  /* load preset into input buffer */
  for(int i=0;i<nfeat;++i) xbuf[i].fvalue = (i<(int)(sizeof(PRESET_33)/sizeof(PRESET_33[0]))) ? PRESET_33[i] : 0.0f;

  /* single inference */
  predict(xbuf, 0, ybuf);
  postprocess(ybuf);
  int k = argmax(ybuf, nclass);
  printf("\r\nPreset inference:\r\n");
  printf("Top: %s (id=%d) p=%.4f\r\n", CLASS_NAMES[k], k, ybuf[k]);
  for (int i=0;i<nclass;++i){ printf("%2d:%s=%.4f  ", i, CLASS_NAMES[i], ybuf[i]); if((i%4)==3) printf("\r\n"); }
  printf("\r\n");

  /* benchmark */
  int runs = 200;
  for(int i=0;i<10;++i){ predict(xbuf,0,ybuf); postprocess(ybuf); } // warmup

  uint32_t minc=0xFFFFFFFFu,maxc=0,sumc=0, hclk=HAL_RCC_GetHCLKFreq();
  for(int i=0;i<runs;++i){
    uint32_t t0=dwt_cycles(); predict(xbuf,0,ybuf); postprocess(ybuf);
    uint32_t dt=dwt_cycles()-t0; if(dt<minc)minc=dt; if(dt>maxc)maxc=dt; sumc+=dt;
  }
  float avg_us=(sumc/(float)runs)*1e6f/hclk, min_us=minc*1e6f/hclk, max_us=maxc*1e6f/hclk;
  float tps = 1e6f/avg_us;
  printf("Latency over %d runs: avg=%.2f us  min=%.2f us  max=%.2f us  @HCLK=%lu Hz  (throughput=%.1f/s)\r\n",
         runs, avg_us, min_us, max_us, (unsigned long)hclk, tps);

  printf("\r\n-- DONE --\r\n"); while(1){ HAL_Delay(1000); }
}

/* GPIO / Error / Clock (unchanged) */
static void MX_GPIO_Init(void){ __HAL_RCC_GPIOC_CLK_ENABLE(); __HAL_RCC_GPIOH_CLK_ENABLE(); }
void Error_Handler(void){ __disable_irq(); while (1){} }
void SystemClock_Config(void){
  RCC_OscInitTypeDef o={0}; RCC_ClkInitTypeDef c={0};
  HAL_PWREx_ConfigSupply(PWR_LDO_SUPPLY);
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE2);
  while(!__HAL_PWR_GET_FLAG(PWR_FLAG_VOSRDY)){}
  o.OscillatorType=RCC_OSCILLATORTYPE_HSI; o.HSIState=RCC_HSI_DIV1; o.HSICalibrationValue=RCC_HSICALIBRATION_DEFAULT;
  o.PLL.PLLState=RCC_PLL_NONE; if(HAL_RCC_OscConfig(&o)!=HAL_OK) Error_Handler();
  c.ClockType=RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK|RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2|RCC_CLOCKTYPE_D3PCLK1|RCC_CLOCKTYPE_D1PCLK1;
  c.SYSCLKSource=RCC_SYSCLKSOURCE_HSI; c.SYSCLKDivider=RCC_SYSCLK_DIV1; c.AHBCLKDivider=RCC_HCLK_DIV1;
  c.APB3CLKDivider=RCC_APB3_DIV1; c.APB1CLKDivider=RCC_APB1_DIV1; c.APB2CLKDivider=RCC_APB2_DIV1; c.APB4CLKDivider=RCC_APB4_DIV1;
  if(HAL_RCC_ClockConfig(&c, FLASH_LATENCY_1)!=HAL_OK) Error_Handler();
}
