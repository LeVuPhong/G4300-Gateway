/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
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
#include "stm32l4xx_hal.h"

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
#define DI0_Pin GPIO_PIN_2
#define DI0_GPIO_Port GPIOE
#define DI1_Pin GPIO_PIN_3
#define DI1_GPIO_Port GPIOE
#define PW_VGSM_EN_Pin GPIO_PIN_6
#define PW_VGSM_EN_GPIO_Port GPIOE
#define LP_UART_RX_Pin GPIO_PIN_0
#define LP_UART_RX_GPIO_Port GPIOC
#define LP_UART_TX_Pin GPIO_PIN_1
#define LP_UART_TX_GPIO_Port GPIOC
#define LP_UART_EN_Pin GPIO_PIN_2
#define LP_UART_EN_GPIO_Port GPIOC
#define PW_VGSM_ENC3_Pin GPIO_PIN_3
#define PW_VGSM_ENC3_GPIO_Port GPIOC
#define MODE0_Pin GPIO_PIN_7
#define MODE0_GPIO_Port GPIOE
#define MODE1_Pin GPIO_PIN_8
#define MODE1_GPIO_Port GPIOE
#define LED0_Pin GPIO_PIN_9
#define LED0_GPIO_Port GPIOE
#define VEXT_PG_Pin GPIO_PIN_10
#define VEXT_PG_GPIO_Port GPIOE
#define SPI1_CS2_Pin GPIO_PIN_11
#define SPI1_CS2_GPIO_Port GPIOE
#define SPI1_CS_Pin GPIO_PIN_12
#define SPI1_CS_GPIO_Port GPIOE
#define PW_VSEN_EN_Pin GPIO_PIN_13
#define PW_VSEN_EN_GPIO_Port GPIOD
#define VGSM_PG_Pin GPIO_PIN_14
#define VGSM_PG_GPIO_Port GPIOD
#define PW_VEXT1_EN_Pin GPIO_PIN_6
#define PW_VEXT1_EN_GPIO_Port GPIOC
#define PW_VEXT2_EN_Pin GPIO_PIN_7
#define PW_VEXT2_EN_GPIO_Port GPIOC
#define PW_VEXT3_EN_Pin GPIO_PIN_8
#define PW_VEXT3_EN_GPIO_Port GPIOC
#define SPI3_CS_Pin GPIO_PIN_9
#define SPI3_CS_GPIO_Port GPIOC
#define CG_LOW_BAT_Pin GPIO_PIN_8
#define CG_LOW_BAT_GPIO_Port GPIOA
#define CG_PG_Pin GPIO_PIN_15
#define CG_PG_GPIO_Port GPIOA
#define GSM_RST_Pin GPIO_PIN_0
#define GSM_RST_GPIO_Port GPIOD
#define GSM_PW_ON_Pin GPIO_PIN_1
#define GSM_PW_ON_GPIO_Port GPIOD
#define GSM_PW_SENSE_Pin GPIO_PIN_2
#define GSM_PW_SENSE_GPIO_Port GPIOD
#define PW_VRF_EN_Pin GPIO_PIN_7
#define PW_VRF_EN_GPIO_Port GPIOD
#define PW_VSEN_OK_Pin GPIO_PIN_3
#define PW_VSEN_OK_GPIO_Port GPIOB
#define BT_RST_Pin GPIO_PIN_8
#define BT_RST_GPIO_Port GPIOB
#define V_BT_EN_Pin GPIO_PIN_9
#define V_BT_EN_GPIO_Port GPIOB
#define CG_CE_Pin GPIO_PIN_0
#define CG_CE_GPIO_Port GPIOE
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
