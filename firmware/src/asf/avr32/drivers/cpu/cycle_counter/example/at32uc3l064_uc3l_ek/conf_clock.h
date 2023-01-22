/**
 * \file
 *
 * \brief Clock configuration
 *
 * Copyright (c) 2014-2018 Microchip Technology Inc. and its subsidiaries.
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
 */
/*
 * Support and FAQ: visit <a href="https://www.microchip.com/support/">Microchip Support</a>
 */
#ifndef CONF_CLOCK_H_INCLUDED
#define CONF_CLOCK_H_INCLUDED

/**
 * \note Clock source - DFLL is used to generate 12MHz CPU clock
 */
// ===== System Clock Source Options
#define CONFIG_SYSCLK_SOURCE          SYSCLK_SRC_DFLL

// ===== DFLL Options
#define CONFIG_DFLL0_SOURCE           GENCLK_SRC_RCSYS
/*
 * DFLL min output frequency is 40MHz. Make sure that MUL and DIV doesn't
 * result in an output less than 40MHz frequency.
 */
#define CONFIG_DFLL0_MUL              (48000000UL / OSC_RCSYS_NOMINAL_HZ)
#define CONFIG_DFLL0_DIV              1

// ===== System Clock Bus Division Options to result in 12MHz CPU frequency
#define CONFIG_SYSCLK_CPU_DIV         2 /* Fcpu = Fsys/(2 ^ CPU_div) */
#define CONFIG_SYSCLK_PBA_DIV         2 /* Fpba = Fsys/(2 ^ PBA_div) */
#define CONFIG_SYSCLK_PBB_DIV         2 /* Fpbb = Fsys/(2 ^ PBB_div) */

// ===== Peripheral Clock Management Options-> Enable USART3 for trace messages
#define CONFIG_SYSCLK_INIT_PBAMASK  (1 << SYSCLK_USART3)

#endif /* CONF_CLOCK_H_INCLUDED */
