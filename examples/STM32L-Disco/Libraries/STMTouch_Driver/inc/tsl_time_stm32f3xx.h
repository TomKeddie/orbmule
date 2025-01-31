/**
  ******************************************************************************
  * @file    tsl_time_stm32f3xx.h
  * @author  MCD Application Team
  * @version V1.4.4
  * @date    31-March-2014
  * @brief   This file contains external declarations of the tsl_time_stm32f3xx.c file.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT 2014 STMicroelectronics</center></h2>
  *
  * Licensed under MCD-ST Liberty SW License Agreement V2, (the "License");
  * You may not use this file except in compliance with the License.
  * You may obtain a copy of the License at:
  *
  *        http://www.st.com/software_license_agreement_liberty_v2
  *
  * Unless required by applicable law or agreed to in writing, software
  * distributed under the License is distributed on an "AS IS" BASIS,
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __TSL_TIME_STM32F3XX_H
#define __TSL_TIME_STM32F3XX_H

/* Includes ------------------------------------------------------------------*/

#if defined(STM32F303xC) || defined(STM32F334x8) || defined(STM32F303x8) || defined(STM32F301x8) || defined(STM32F302x8)
    #include "stm32f30x.h"
#endif

#if defined(STM32F37X)
    #include "stm32f37x.h"
#endif

#include "tsl_conf_stm32f3xx.h"
#include "tsl_types.h"

/* Exported types ------------------------------------------------------------*/

TSL_Status_enum_T TSL_tim_Init(void);

#endif /* __TSL_TIME_STM32F3XX_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
