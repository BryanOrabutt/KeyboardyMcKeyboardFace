#
# Copyright (c) 2011 Atmel Corporation. All rights reserved.
#
# \asf_license_start
#
# \page License
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions are met:
#
# 1. Redistributions of source code must retain the above copyright notice,
#    this list of conditions and the following disclaimer.
#
# 2. Redistributions in binary form must reproduce the above copyright notice,
#    this list of conditions and the following disclaimer in the documentation
#    and/or other materials provided with the distribution.
#
# 3. The name of Atmel may not be used to endorse or promote products derived
#    from this software without specific prior written permission.
#
# 4. This software may only be redistributed and used in connection with an
#    Atmel microcontroller product.
#
# THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
# WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
# MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
# EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
# ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
# DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
# OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
# HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
# STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
# ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
# POSSIBILITY OF SUCH DAMAGE.
#
# \asf_license_stop
#

# Path to top level ASF directory relative to this project directory.
PRJ_PATH = ./
BUILD_DIR = build 
OBJ_DIR = obj

# Target CPU architecture: cortex-m3, cortex-m4
ARCH = cortex-m4

# Target part: none, sam3n4 or sam4l4aa
PART = sam4sd32c

# Application target name. Given with suffix .a for library and .elf for a
# standalone application.
TARGET_FLASH = free_rtos_demo.elf
TARGET_SRAM = free_rtos_demo.elf

# List of C source files.
CSRCS = \
       main_blinky.c							\
       ParTest.c							\
       asf/common/services/clock/sam4s/sysclk.c             		\
       asf/common/services/delay/sam/cycle_counter.c        		\
       asf/sam/boards/sam4s_xplained_pro/init.c             		\
       asf/sam/drivers/pio/pio.c                            		\
       asf/sam/drivers/pio/pio_handler.c                    		\
       asf/sam/drivers/pmc/pmc.c                            		\
       asf/sam/drivers/pmc/sleep.c                          		\
       asf/sam/drivers/wdt/wdt.c                                	\
       asf/sam/drivers/tc/tc.c                                	\
       asf/sam/utils/cmsis/sam4s/source/templates/gcc/startup_sam4s.c 	\
       asf/sam/utils/cmsis/sam4s/source/templates/system_sam4s.c 	\
       asf/sam/utils/syscalls/gcc/syscalls.c				\
       asf/thirdparty/FreeRTOS/event_groups.c				\
       asf/thirdparty/FreeRTOS/list.c					\
       asf/thirdparty/FreeRTOS/queue.c					\
       asf/thirdparty/FreeRTOS/tasks.c					\
       asf/thirdparty/FreeRTOS/timers.c					\
       asf/thirdparty/FreeRTOS/portable/GCC/ARM_CM3/port.c		\
       asf/thirdparty/FreeRTOS/portable/MemMang/heap_4.c

# List of assembler source files.
ASSRCS = 

# List of include paths.
INC_PATH = \
       ./						\
       config                                   	\
       tests						\
       tests/include					\
       asf/common/boards                                \
       asf/common/services/clock                        \
       asf/common/services/gpio                         \
       asf/common/services/ioport/sam                   \
       asf/common/services/ioport                       \
       asf/common/services/delay                        \
       asf/common/services/serial/sam_uart              \
       asf/common/services/serial                       \
       asf/common/utils                                 \
       asf/common/utils/interrupt                       \
       asf/common/utils/stdio/stdio_serial              \
       asf/sam/boards                                   \
       asf/sam/boards/sam4s_xplained_pro                \
       asf/sam/drivers/pio                              \
       asf/sam/drivers/pmc                              \
       asf/sam/drivers/wdt                              \
       asf/sam/drivers/uart                             \
       asf/sam/drivers/usart                            \
       asf/sam/drivers/tc	                        \
       asf/sam/utils                                    \
       asf/sam/utils/cmsis/sam4s/include                \
       asf/sam/utils/cmsis/sam4s/source/templates       \
       asf/sam/utils/header_files                       \
       asf/sam/utils/preprocessor                       \
       asf/thirdparty/CMSIS/Include                     \
       asf/thirdparty/CMSIS/Lib/GCC			\
       asf/thirdparty/FreeRTOS				\
       asf/thirdparty/FreeRTOS/include			\
       asf/thirdparty/FreeRTOS/portable/GCC/ARM_CM3

# Additional search paths for libraries.
LIB_PATH =  \
       asf/thirdparty/CMSIS/Lib/GCC

# List of libraries to use during linking.
LIBS =  \
       arm_cortexM4l_math                                 \
       m                                                 

# Path relative to top level directory pointing to a linker script.
LINKER_SCRIPT_FLASH = ../linker_scripts/sam4sd32/flash.ld
LINKER_SCRIPT_SRAM  = ../linker_scripts/sam4sd32/sram.ld

# Path relative to top level directory pointing to a linker script.
DEBUG_SCRIPT_FLASH = ../debug_scripts/sam4s_xplained_pro_flash.gdb
DEBUG_SCRIPT_SRAM  = ../debug_scripts/sam4s_xplained_pro_sram.gdb

# Project type parameter: all, sram or flash
PROJECT_TYPE        = flash

# Additional options for debugging. By default the common Makefile.in will
# add -g3.
DBGFLAGS = 

# Application optimization used during compilation and linking:
# -O0, -O1, -O2, -O3 or -Os
OPTIMIZATION = -O1

# Extra flags to use when archiving.
ARFLAGS = 

# Extra flags to use when assembling.
ASFLAGS = 

# Extra flags to use when compiling.
CFLAGS = 

# Extra flags to use when preprocessing.
#
# Preprocessor symbol definitions
#   To add a definition use the format "-D name[=definition]".
#   To cancel a definition use the format "-U name".
#
# The most relevant symbols to define for the preprocessor are:
#   BOARD      Target board in use, see boards/board.h for a list.
#   EXT_BOARD  Optional extension board in use, see boards/board.h for a list.
CPPFLAGS = \
       -D ARM_MATH_CM4=true                               \
       -D BOARD=SAM4S_XPLAINED_PRO                        \
       -D __SAM4SD32C__                                    \
       -D printf=iprintf                                  \
       -D scanf=iscanf

# Extra flags to use when linking
LDFLAGS = -lc -u _printf_float \

# Pre- and post-build commands
PREBUILD_CMD = 
POSTBUILD_CMD = 
