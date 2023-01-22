/**
 * \file
 *
 * \brief 32-bit operators program test
 *
 * Copyright (c) 2011-2018 Microchip Technology Inc. and its subsidiaries.
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

/**
 * \mainpage
 * \section intro Introduction
 * This example demonstrates use of 32-bit fixed point operator functions.\n
 * To visualize the result, you may set a breakpoint after the sprintf and
 * check the string variable output through Watch Window in AVR Studio 5.
 * Through this page, you can access the \ref group_dsplib documentation.
 *
 * \section files Main Files
 * - operators_example.c : DSPLIB Operators example
 * - conf_board.h: Simulator configuration for example
 * - conf_clock.h: Clock configuration for example
 *
 * \section compinfo Compilation Info
 * This software was written for the GNU GCC for AVR32.
 *
 * \section configinfo Configuration Information
 * This example has been tested with the following configuration:
 * - AVR Simulator
 * - CPU clock: <i> Internal RC oscillator (about 115200 Hz) </i>.
 *
 * \section contactinfo Contact Information
 * For further information, visit
 * <A href="http://www.microchip.com/design-centers/32-bit /">Atmel AVR32</A>.\n
 */
/*
 * Support and FAQ: visit <a href="https://www.microchip.com/support/">Microchip Support</a>
 */

#include <avr32/io.h>

#include "compiler.h"
#include "board.h"

#include "dsp.h"
#include "dsp_debug.h"

#include "sysclk.h"
#include "cycle_counter.h"

#define NUMBER_TO_COMPUTE 0.50000000000

//! The main function
int main(int argc, char *argv[])
{
	dsp32_t number, result;
	int cycle_count;
	char sin_result[50], cos_result[50], asin_result[50], acos_result[50],
			rand_result[50], sqrt_result[50], abs_result[50], ln_result[50],
			log2_result[50], log10_result[50], exp_result[50], pow_result[50];
	/**
	 * \note the call to sysclk_init() will disable all non-vital
	 * peripheral clocks, except for the peripheral clocks explicitly
	 * enabled in conf_clock.h.
	 */
	sysclk_init();

	// Initialize the DSP debug USART module when running in external board
#if BOARD != AVR_SIMULATOR_UC3
	dsp_debug_initialization(FOSC0);
#endif

	number = DSP32_Q(NUMBER_TO_COMPUTE);
	/*
	 * Place a breakpoint on sprintf and check the ASCII output in
	 * %operator%_result in Watch Window or Memory Window.
	 * Note: Edit the variable name in Watch Window and append
	 * "&" at the start and ",s" at the end for displaying string.
	 * Read Watch Window Format Specifiers for more info.
	 */
	// 32-bit fixed point cosine
	cycle_count = Get_sys_count();
	result = dsp32_op_cos(number);
	cycle_count = Get_sys_count() - cycle_count;
	dsp32_debug_sprintf(cos_result, "cos(%f) %f (%i cycles)\n", number,
			result, cycle_count);

	// 32-bit fixed point sine
	cycle_count = Get_sys_count();
	result = dsp32_op_sin(number);
	cycle_count = Get_sys_count() - cycle_count;
	dsp32_debug_sprintf(sin_result, "sin(%f) %f (%i cycles)\n", number,
			result, cycle_count);

	// 32-bit fixed point arc cosine
	cycle_count = Get_sys_count();
	result = dsp32_op_acos(number);
	cycle_count = Get_sys_count() - cycle_count;
	dsp32_debug_sprintf(acos_result, "acos(%f) %f (%i cycles)\n", number,
			result, cycle_count);

	// 32-bit fixed point arc sine
	cycle_count = Get_sys_count();
	result = dsp32_op_asin(number);
	cycle_count = Get_sys_count() - cycle_count;
	dsp32_debug_sprintf(asin_result, "asin(%f) %f (%i cycles)\n", number,
			result, cycle_count);

	// 32-bit fixed point random
	dsp_op_srand(number);
	cycle_count = Get_sys_count();
	result = dsp32_op_rand();
	cycle_count = Get_sys_count() - cycle_count;
	dsp32_debug_sprintf(rand_result, "rand() %f (%i cycles)\n", result,
			cycle_count);

	// 32-bit fixed point square root
	cycle_count = Get_sys_count();
	result = dsp32_op_sqrt(number);
	cycle_count = Get_sys_count() - cycle_count;
	dsp32_debug_sprintf(sqrt_result, "sqrt(%f) %f (%i cycles)\n", number,
			result, cycle_count);

	// 32-bit fixed point absolute
	cycle_count = Get_sys_count();
	result = dsp32_op_abs(number);
	cycle_count = Get_sys_count() - cycle_count;
	dsp32_debug_sprintf(abs_result, "abs(%f) %f (%i cycles)\n", number,
			result, cycle_count);

	// 32-bit fixed point natural logarithm
	cycle_count = Get_sys_count();
	result = dsp32_op_ln(number);
	cycle_count = Get_sys_count() - cycle_count;
	dsp32_debug_sprintf(ln_result, "ln(%f) %f (%i cycles)\n", number,
			result, cycle_count);

	// 32-bit fixed point binary logarithm
	cycle_count = Get_sys_count();
	result = dsp32_op_log2(number);
	cycle_count = Get_sys_count() - cycle_count;
	dsp32_debug_sprintf(log2_result, "log2(%f) %f (%i cycles)\n", number,
			result, cycle_count);

	// 32-bit fixed point common logarithm
	cycle_count = Get_sys_count();
	result = dsp32_op_log10(number);
	cycle_count = Get_sys_count() - cycle_count;
	dsp32_debug_sprintf(log10_result, "log10(%f) %f (%i cycles)\n", number,
			result, cycle_count);

	// 32-bit fixed point exponential
	cycle_count = Get_sys_count();
	result = dsp32_op_exp(number);
	cycle_count = Get_sys_count() - cycle_count;
	dsp32_debug_sprintf(exp_result, "exp(%f) %f (%i cycles)\n", number,
			result, cycle_count);

	// 32-bit fixed point power
	cycle_count = Get_sys_count();
	result = dsp32_op_pow(DSP32_Q(0.), number);
	cycle_count = Get_sys_count() - cycle_count;
	dsp32_debug_sprintf(pow_result, "pow(0.5, %f) %f (%i cycles)\n", number,
			result, cycle_count);

	while (1) {
		// Intentionally left blank.
	}
}

