/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
#define EN0_Pin GPIO_PIN_1
#define EN0_GPIO_Port GPIOA
#define EN1_Pin GPIO_PIN_2
#define EN1_GPIO_Port GPIOA
#define EN2_Pin GPIO_PIN_3
#define EN2_GPIO_Port GPIOA
#define EN3_Pin GPIO_PIN_4
#define EN3_GPIO_Port GPIOA
#define LED_RED_Pin GPIO_PIN_5
#define LED_RED_GPIO_Port GPIOA
#define LED_YELLOW_Pin GPIO_PIN_6
#define LED_YELLOW_GPIO_Port GPIOA
#define LED_GREEN_Pin GPIO_PIN_7
#define LED_GREEN_GPIO_Port GPIOA
#define LED_A_Pin GPIO_PIN_0
#define LED_A_GPIO_Port GPIOB
#define LED_B_Pin GPIO_PIN_1
#define LED_B_GPIO_Port GPIOB
#define LED_C_Pin GPIO_PIN_2
#define LED_C_GPIO_Port GPIOB
#define LED_RED1_Pin GPIO_PIN_8
#define LED_RED1_GPIO_Port GPIOA
#define LED_YELLOW1_Pin GPIO_PIN_9
#define LED_YELLOW1_GPIO_Port GPIOA
#define LED_GREEN1_Pin GPIO_PIN_10
#define LED_GREEN1_GPIO_Port GPIOA
#define LED_D_Pin GPIO_PIN_3
#define LED_D_GPIO_Port GPIOB
#define LED_E_Pin GPIO_PIN_4
#define LED_E_GPIO_Port GPIOB
#define LED_F_Pin GPIO_PIN_5
#define LED_F_GPIO_Port GPIOB
#define LED_G_Pin GPIO_PIN_6
#define LED_G_GPIO_Port GPIOB
#define BUTTON1_Pin GPIO_PIN_7
#define BUTTON1_GPIO_Port GPIOB
#define BUTTON2_Pin GPIO_PIN_8
#define BUTTON2_GPIO_Port GPIOB
#define BUTTON3_Pin GPIO_PIN_9
#define BUTTON3_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
