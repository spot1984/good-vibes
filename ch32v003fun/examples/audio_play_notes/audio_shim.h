/*
    audio_shim.h
    Audio Library Shim 
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

    This file is a user configuration file for the Audio Library.  Copies and modifications
    of this file are considered uses of the Audio Library's configuration interface and 
    do not constitute modification of the Library Source provided under the LGPL 2.1 license.
*/

// Audio library configuration header (unlicensed)
// It is where you make modifications to configure the audio library
#include "audio_configuration.h"

// Audio library hardware abstraction layer for the ch32v003 (unlicensed)
// This file should not require modification
// This file depends ch32v003fun.h provided as part of the ch32v003fun project
// provided under MIT license and Copyright (c) 2023 CNLohr.
#include "../audio_shared/audio_hal_ch32v003.h"

// Audio library header (License: LGPL 2.0)
#include "../../../good-vibes/audiolib/audio.h"

// Mini midi library header (License: LGPL 2.0)
#include "../../../good-vibes/audiolib/midi.h"