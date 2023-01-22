#!/bin/sh

# This file should be executed from the command line prior to the first
# build. Copies all the required files from their location within the standard
# FreeRTOS directory structure to under the Atmel Studio project directory.

# Standard paths
FREERTOS_SOURCE=../FreeRTOS/FreeRTOS/Source
COMMON_SOURCE=../FreeRTOS/FreeRTOS/Demo/Common/Minimal
COMMON_INCLUDE=../FreeRTOS/FreeRTOS/Demo/Common/include

# Have the files already been copied?
if [ -d "asf/thirdparty/FreeRTOS" ]
then
    echo "File structure already generated."
else
    # Create the required directory structure.
    echo "Creating file structure..."
    mkdir asf/thirdparty/FreeRTOS
    mkdir asf/thirdparty/FreeRTOS/include
    mkdir asf/thirdparty/FreeRTOS/portable
    mkdir asf/thirdparty/FreeRTOS/portable/GCC
    mkdir asf/thirdparty/FreeRTOS/portable/GCC/ARM_CM3
    mkdir asf/thirdparty/FreeRTOS/portable/MemMang
    mkdir libs/include
fi

    echo "Copying project files..."
    ## cp the core kernel files into the project directory
    cp $FREERTOS_SOURCE/tasks.c asf/thirdparty/FreeRTOS
    cp $FREERTOS_SOURCE/queue.c asf/thirdparty/FreeRTOS
    cp $FREERTOS_SOURCE/list.c asf/thirdparty/FreeRTOS
    cp $FREERTOS_SOURCE/timers.c asf/thirdparty/FreeRTOS
    cp $FREERTOS_SOURCE/event_groups.c asf/thirdparty/FreeRTOS

    # cp the common header files into the project directory
    cp $FREERTOS_SOURCE/include/* asf/thirdparty/FreeRTOS/include

    # cp the portable layer files into the project directory
    cp $FREERTOS_SOURCE/portable/GCC/ARM_CM3/* asf/thirdparty/FreeRTOS/portable/GCC/ARM_CM3

    # cp the memory allocation files into the project directory
    cp $FREERTOS_SOURCE/portable/MemMang/heap_4.c asf/thirdparty/FreeRTOS/portable/MemMang

    # cp the files that define the common demo tasks.
    cp $COMMON_SOURCE/dynamic.c         libs
    cp $COMMON_SOURCE/BlockQ.c          libs
    cp $COMMON_SOURCE/flash_timer.c     libs
    cp $COMMON_SOURCE/death.c           libs
    cp $COMMON_SOURCE/blocktim.c        libs
    cp $COMMON_SOURCE/semtest.c         libs
    cp $COMMON_SOURCE/PollQ.c           libs
    cp $COMMON_SOURCE/GenQTest.c        libs
    cp $COMMON_SOURCE/recmutex.c        libs
    cp $COMMON_SOURCE/countsem.c        libs
    cp $COMMON_SOURCE/integer.c         libs
    cp $COMMON_SOURCE/QueueSet.c        libs
    cp $COMMON_SOURCE/IntQueue.c        libs
    cp $COMMON_SOURCE/TaskNotify.c      libs
    cp $COMMON_SOURCE/TimerDemo.c       libs
    cp $COMMON_SOURCE/EventGroupsDemo.c libs
    cp $COMMON_SOURCE/IntSemTest.c      libs

    # cp the common demo file headers.
    cp $COMMON_INCLUDE/*.h              libs/include
