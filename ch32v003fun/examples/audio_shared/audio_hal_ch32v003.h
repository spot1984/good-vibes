/*
    audio_hal_ch32v003.h
    Audio Library HAL ch32v003
    Copyright (c) 2023 D. Scott Williamson

	MIT License

	Permission is hereby granted, free of charge, to any person obtaining a copy
	of this software and associated documentation files (the "Software"), to deal
	in the Software without restriction, including without limitation the rights
	to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
	copies of the Software, and to permit persons to whom the Software is
	furnished to do so, subject to the following conditions:

	The above copyright notice and this permission notice shall be included in all
	copies or substantial portions of the Software.

	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
	SOFTWARE.

    This file is a user configuration file for the Audio Library.  

    This file is a configuration file for the Audio Library to be used with the CH32V003 
    processor.  Copies and modifications of this file are considered uses of the Audio 
    Library's configuration interface and do not constitute modification of the Library 
    Source provided under the LGPL 2.1 license.
    
    This file depends on ch32v003fun.h provided under MIT license and Copyright (c) 2023 CNLohr.

    This file does not contain configuration parameters and does not require modification.
*/


#ifndef AUDIO_LIBRARY_HAL_CH32V003
#define AUDIO_LIBRARY_HAL_CH32V003

// Do not modify this file.

#include "ch32v003fun.h"

// ch32v003 specific definitions (do not modify below this line)
// Audio Timer Prescaler and reload value
#define AUDIO_TIMER_PRESCALER (FUNCONF_SYSTEM_CORE_CLOCK/(256*(AUDIO_UPDATE_FREQUENCY)))
#define AUDIO_TIMER_RELOAD (FUNCONF_SYSTEM_CORE_CLOCK/((AUDIO_TIMER_PRESCALER)*(AUDIO_UPDATE_FREQUENCY)))

// Actual audio update frequency based on system clock
// timer prescaler and reload values
#define AUDIO_ACTUAL_UPDATE_FREQUENCY (FUNCONF_SYSTEM_CORE_CLOCK/(AUDIO_TIMER_PRESCALER*AUDIO_TIMER_RELOAD))

// Audio noise source, system clock
#define AUDIO_NOISE_SOURCE (SysTick->CNT) 

#endif  // AUDIO_LIBRARY_HAL_CH32V003