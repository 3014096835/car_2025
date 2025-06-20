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
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

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
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define M3_A_Pin GPIO_PIN_9
#define M3_A_GPIO_Port GPIOE
#define M3_B_Pin GPIO_PIN_11
#define M3_B_GPIO_Port GPIOE
#define M4_A_Pin GPIO_PIN_13
#define M4_A_GPIO_Port GPIOE
#define M4_B_Pin GPIO_PIN_14
#define M4_B_GPIO_Port GPIOE
#define KEY1_Pin GPIO_PIN_3
#define KEY1_GPIO_Port GPIOG
#define KEY2_Pin GPIO_PIN_4
#define KEY2_GPIO_Port GPIOG
#define KEY3_Pin GPIO_PIN_5
#define KEY3_GPIO_Port GPIOG
#define M1_A_Pin GPIO_PIN_6
#define M1_A_GPIO_Port GPIOC
#define M1_B_Pin GPIO_PIN_7
#define M1_B_GPIO_Port GPIOC
#define M2_A_Pin GPIO_PIN_8
#define M2_A_GPIO_Port GPIOC
#define M2_B_Pin GPIO_PIN_9
#define M2_B_GPIO_Port GPIOC
#define LED1_Pin GPIO_PIN_15
#define LED1_GPIO_Port GPIOG
#define SCL_Pin GPIO_PIN_6
#define SCL_GPIO_Port GPIOB
#define SDA_Pin GPIO_PIN_7
#define SDA_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
