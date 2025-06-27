/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
  /* USER CODE END Header */

  /* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

  /* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

#include "stm32f4xx_ll_rcc.h"
#include "stm32f4xx_ll_bus.h"
#include "stm32f4xx_ll_system.h"
#include "stm32f4xx_ll_exti.h"
#include "stm32f4xx_ll_cortex.h"
#include "stm32f4xx_ll_utils.h"
#include "stm32f4xx_ll_pwr.h"
#include "stm32f4xx_ll_dma.h"
#include "stm32f4xx_ll_usart.h"
#include "stm32f4xx_ll_gpio.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

//my peripheral header files
#include "cmsis_os.h"
#include "usart.h"
#include "gpio.h"


//micro library header files
#include <stdint.h>
#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <assert.h>




/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
  void Error_Handler (void);

  /* USER CODE BEGIN EFP */

  /* USER CODE END EFP */

  /* Private defines -----------------------------------------------------------*/
#define sys_LED_Pin LL_GPIO_PIN_13
#define sys_LED_GPIO_Port GPIOC
#define white_LED_Pin LL_GPIO_PIN_8
#define white_LED_GPIO_Port GPIOA
#define green_LED_Pin LL_GPIO_PIN_9
#define green_LED_GPIO_Port GPIOA

/* USER CODE BEGIN Private defines */

  typedef enum { OFF , ON } LED_StateTypeDef;
#define SYS_LED_SWITCH(ON_OFF)  (LED_StateTypeDef)(ON_OFF)?LL_GPIO_ResetOutputPin(sys_LED_GPIO_Port, sys_LED_Pin):LL_GPIO_SetOutputPin(sys_LED_GPIO_Port, sys_LED_Pin)
#define WHITE_LED_SWITCH(ON_OFF) (LED_StateTypeDef)(ON_OFF)?LL_GPIO_ResetOutputPin(white_LED_GPIO_Port, white_LED_Pin):LL_GPIO_SetOutputPin(white_LED_GPIO_Port, white_LED_Pin)
#define GREEN_LED_SWITCH(ON_OFF)  (LED_StateTypeDef)(ON_OFF)?LL_GPIO_ResetOutputPin(green_LED_GPIO_Port, green_LED_Pin):LL_GPIO_SetOutputPin(green_LED_GPIO_Port, green_LED_Pin)
#define SYS_LED_TOGGLE()   LL_GPIO_TogglePin(sys_LED_GPIO_Port, sys_LED_Pin)
#define WHITE_LED_TOGGLE()  LL_GPIO_TogglePin(white_LED_GPIO_Port, white_LED_Pin)
#define GREEN_LED_TOGGLE()   LL_GPIO_TogglePin(green_LED_GPIO_Port, green_LED_Pin)

  /* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
