/**
 * \file
 *
 * \brief SAM R21 Xplained Pro test configuration.
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
 *
 */
/*
 * Support and FAQ: visit <a href="https://www.microchip.com/support/">Microchip Support</a>
 */

#ifndef CONF_TEST_H_INCLUDED
#define CONF_TEST_H_INCLUDED

#define CONF_STDIO_USART          EDBG_CDC_MODULE
#define CONF_STDIO_MUX_SETTING    EDBG_CDC_SERCOM_MUX_SETTING
#define CONF_STDIO_PINMUX_PAD0    EDBG_CDC_SERCOM_PINMUX_PAD0
#define CONF_STDIO_PINMUX_PAD1    EDBG_CDC_SERCOM_PINMUX_PAD1
#define CONF_STDIO_PINMUX_PAD2    EDBG_CDC_SERCOM_PINMUX_PAD2
#define CONF_STDIO_PINMUX_PAD3    EDBG_CDC_SERCOM_PINMUX_PAD3
#define CONF_STDIO_BAUDRATE       38400

/* SERCOM SPI pin-out defines for SPI slave */
#define CONF_SPI_SLAVE_MODULE              SERCOM5
#define CONF_SPI_SLAVE_SPI_MUX             SPI_SIGNAL_MUX_SETTING_O
#define CONF_SPI_SLAVE_DATA_IN_PIN_MUX     PINMUX_PB22D_SERCOM5_PAD2
#define CONF_SPI_SLAVE_SS_PIN_MUX          PINMUX_PB03D_SERCOM5_PAD1
#define CONF_SPI_SLAVE_DATA_OUT_PIN_MUX    PINMUX_PB02D_SERCOM5_PAD0
#define CONF_SPI_SLAVE_SCK_PIN_MUX         PINMUX_PB23D_SERCOM5_PAD3

/* SERCOM SPI pin-out defines for SPI master */
#define CONF_SPI_MASTER_MODULE             SERCOM3
#define CONF_SPI_MASTER_SPI_MUX            SPI_SIGNAL_MUX_SETTING_E
#define CONF_SPI_MASTER_DATA_IN_PIN_MUX    PINMUX_PA16D_SERCOM3_PAD0
#define CONF_SPI_MASTER_DATA_OUT_PIN_MUX   PINMUX_PA18D_SERCOM3_PAD2
#define CONF_SPI_MASTER_SCK_PIN_MUX        PINMUX_PA19D_SERCOM3_PAD3
#define CONF_SPI_SLAVE_SS_PIN              EXT1_PIN_12

#endif /* CONF_TEST_H_INCLUDED */
