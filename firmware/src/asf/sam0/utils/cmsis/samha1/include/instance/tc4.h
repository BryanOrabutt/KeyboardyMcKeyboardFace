/**
 * \file
 *
 * \brief Instance description for TC4
 *
 * Copyright (c) 2016-2018 Microchip Technology Inc. and its subsidiaries.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Subject to your compliance with these terms, you may use Microchip
 * software and any derivatives exclusively with Microchip products.
 * It is your responsibility to comply with third party license terms applicable
 * to your use of third party software (including open source software) that
 * may accompany Microchip software.
 *
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES,
 * WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE,
 * INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY,
 * AND FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT WILL MICROCHIP BE
 * LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, INCIDENTAL OR CONSEQUENTIAL
 * LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND WHATSOEVER RELATED TO THE
 * SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS BEEN ADVISED OF THE
 * POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.  TO THE FULLEST EXTENT
 * ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY
 * RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
 * THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 * \asf_license_stop
 *
 */

#ifndef _SAMHA1_TC4_INSTANCE_
#define _SAMHA1_TC4_INSTANCE_

/* ========== Register definition for TC4 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_TC4_CTRLA              (0x42003000) /**< \brief (TC4) Control A */
#define REG_TC4_READREQ            (0x42003002) /**< \brief (TC4) Read Request */
#define REG_TC4_CTRLBCLR           (0x42003004) /**< \brief (TC4) Control B Clear */
#define REG_TC4_CTRLBSET           (0x42003005) /**< \brief (TC4) Control B Set */
#define REG_TC4_CTRLC              (0x42003006) /**< \brief (TC4) Control C */
#define REG_TC4_DBGCTRL            (0x42003008) /**< \brief (TC4) Debug Control */
#define REG_TC4_EVCTRL             (0x4200300A) /**< \brief (TC4) Event Control */
#define REG_TC4_INTENCLR           (0x4200300C) /**< \brief (TC4) Interrupt Enable Clear */
#define REG_TC4_INTENSET           (0x4200300D) /**< \brief (TC4) Interrupt Enable Set */
#define REG_TC4_INTFLAG            (0x4200300E) /**< \brief (TC4) Interrupt Flag Status and Clear */
#define REG_TC4_STATUS             (0x4200300F) /**< \brief (TC4) Status */
#define REG_TC4_COUNT16_COUNT      (0x42003010) /**< \brief (TC4) COUNT16 Counter Value */
#define REG_TC4_COUNT16_CC0        (0x42003018) /**< \brief (TC4) COUNT16 Compare/Capture 0 */
#define REG_TC4_COUNT16_CC1        (0x4200301A) /**< \brief (TC4) COUNT16 Compare/Capture 1 */
#define REG_TC4_COUNT32_COUNT      (0x42003010) /**< \brief (TC4) COUNT32 Counter Value */
#define REG_TC4_COUNT32_CC0        (0x42003018) /**< \brief (TC4) COUNT32 Compare/Capture 0 */
#define REG_TC4_COUNT32_CC1        (0x4200301C) /**< \brief (TC4) COUNT32 Compare/Capture 1 */
#define REG_TC4_COUNT8_COUNT       (0x42003010) /**< \brief (TC4) COUNT8 Counter Value */
#define REG_TC4_COUNT8_PER         (0x42003014) /**< \brief (TC4) COUNT8 Period Value */
#define REG_TC4_COUNT8_CC0         (0x42003018) /**< \brief (TC4) COUNT8 Compare/Capture 0 */
#define REG_TC4_COUNT8_CC1         (0x42003019) /**< \brief (TC4) COUNT8 Compare/Capture 1 */
#else
#define REG_TC4_CTRLA              (*(RwReg16*)0x42003000UL) /**< \brief (TC4) Control A */
#define REG_TC4_READREQ            (*(RwReg16*)0x42003002UL) /**< \brief (TC4) Read Request */
#define REG_TC4_CTRLBCLR           (*(RwReg8 *)0x42003004UL) /**< \brief (TC4) Control B Clear */
#define REG_TC4_CTRLBSET           (*(RwReg8 *)0x42003005UL) /**< \brief (TC4) Control B Set */
#define REG_TC4_CTRLC              (*(RwReg8 *)0x42003006UL) /**< \brief (TC4) Control C */
#define REG_TC4_DBGCTRL            (*(RwReg8 *)0x42003008UL) /**< \brief (TC4) Debug Control */
#define REG_TC4_EVCTRL             (*(RwReg16*)0x4200300AUL) /**< \brief (TC4) Event Control */
#define REG_TC4_INTENCLR           (*(RwReg8 *)0x4200300CUL) /**< \brief (TC4) Interrupt Enable Clear */
#define REG_TC4_INTENSET           (*(RwReg8 *)0x4200300DUL) /**< \brief (TC4) Interrupt Enable Set */
#define REG_TC4_INTFLAG            (*(RwReg8 *)0x4200300EUL) /**< \brief (TC4) Interrupt Flag Status and Clear */
#define REG_TC4_STATUS             (*(RoReg8 *)0x4200300FUL) /**< \brief (TC4) Status */
#define REG_TC4_COUNT16_COUNT      (*(RwReg16*)0x42003010UL) /**< \brief (TC4) COUNT16 Counter Value */
#define REG_TC4_COUNT16_CC0        (*(RwReg16*)0x42003018UL) /**< \brief (TC4) COUNT16 Compare/Capture 0 */
#define REG_TC4_COUNT16_CC1        (*(RwReg16*)0x4200301AUL) /**< \brief (TC4) COUNT16 Compare/Capture 1 */
#define REG_TC4_COUNT32_COUNT      (*(RwReg  *)0x42003010UL) /**< \brief (TC4) COUNT32 Counter Value */
#define REG_TC4_COUNT32_CC0        (*(RwReg  *)0x42003018UL) /**< \brief (TC4) COUNT32 Compare/Capture 0 */
#define REG_TC4_COUNT32_CC1        (*(RwReg  *)0x4200301CUL) /**< \brief (TC4) COUNT32 Compare/Capture 1 */
#define REG_TC4_COUNT8_COUNT       (*(RwReg8 *)0x42003010UL) /**< \brief (TC4) COUNT8 Counter Value */
#define REG_TC4_COUNT8_PER         (*(RwReg8 *)0x42003014UL) /**< \brief (TC4) COUNT8 Period Value */
#define REG_TC4_COUNT8_CC0         (*(RwReg8 *)0x42003018UL) /**< \brief (TC4) COUNT8 Compare/Capture 0 */
#define REG_TC4_COUNT8_CC1         (*(RwReg8 *)0x42003019UL) /**< \brief (TC4) COUNT8 Compare/Capture 1 */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for TC4 peripheral ========== */
#define TC4_CC8_NUM                 2        // Number of 8-bit Counters
#define TC4_CC16_NUM                2        // Number of 16-bit Counters
#define TC4_CC32_NUM                2        // Number of 32-bit Counters
#define TC4_DITHERING_EXT           0        // Dithering feature implemented
#define TC4_DMAC_ID_MC_0            28
#define TC4_DMAC_ID_MC_1            29
#define TC4_DMAC_ID_MC_LSB          28
#define TC4_DMAC_ID_MC_MSB          29
#define TC4_DMAC_ID_MC_SIZE         2
#define TC4_DMAC_ID_OVF             27       // Indexes of DMA Overflow trigger
#define TC4_GCLK_ID                 28       // Index of Generic Clock
#define TC4_MASTER                  1       
#define TC4_OW_NUM                  2        // Number of Output Waveforms
#define TC4_PERIOD_EXT              0        // Period feature implemented
#define TC4_SHADOW_EXT              0        // Shadow feature implemented

#endif /* _SAMHA1_TC4_INSTANCE_ */
