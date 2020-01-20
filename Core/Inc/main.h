/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
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

/* Includes ------------------------------------------------------------------*/
#include "stm32f3xx_hal.h"
#include "stm32f303xc.h"

#define SPIx SPI1
#define SPIx_CLK_ENABLE() __HAL_RCC_SPI1_CLK_ENABLE()
#define SPIx_SCK_GPIO_CLK_ENABLE() __HAL_RCC_GPIOA_CLK_ENABLE()
#define SPIx_MISO_GPIO_CLK_ENABLE() __HAL_RCC_GPIOA_CLK_ENABLE()
#define SPIx_MOSI_GPIO_CLK_ENABLE() __HAL_RCC_GPIOA_CLK_ENABLE()

#define SPIx_FORCE_RESET() __HAL_RCC_SPI1_FORCE_RESET()
#define SPIx_RELEASE_RESET() __HAL_RCC_SPI1_RELEASE_RESET()

/* Definition for SPIx Pins */
/**SPI1 GPIO Configuration    
    PA4     ------> SPI1_NSS
    PA5     ------> SPI1_SCK
    PA6     ------> SPI1_MISO
    PA7     ------> SPI1_MOSI 
    */
#define SPIx_SCK_PIN GPIO_PIN_5
#define SPIx_SCK_GPIO_PORT GPIOA
#define SPIx_SCK_AF GPIO_AF5_SPI1
#define SPIx_MISO_PIN GPIO_PIN_6
#define SPIx_MISO_GPIO_PORT GPIOA
#define SPIx_MISO_AF GPIO_AF5_SPI1
#define SPIx_MOSI_PIN GPIO_PIN_7
#define SPIx_MOSI_GPIO_PORT GPIOA
#define SPIx_MOSI_AF GPIO_AF5_SPI1
#define SPIx_NSS GPIO_PIN_4
#define SPIx_NSS_AF GPIO_AF5_SPI1
#define SPIx_NSS_GPIO_PORT GPIOA

/* Size of buffer */
#define BUFFERSIZE1 (COUNTOF(aTxBufferOn) - 1)
#define BUFFERSIZE2 (COUNTOF(aTxBufferOff) - 1)
/* Exported macro ------------------------------------------------------------*/
#define COUNTOF(__BUFFER__) (sizeof(__BUFFER__) / sizeof(*(__BUFFER__)))
/* Exported functions ------------------------------------------------------- */
#endif /* __MAIN_H */

/************************ (C) COPYRIGHT Krishen Soobramoney *****END OF FILE****/