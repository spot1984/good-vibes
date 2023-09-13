/*
    audio_shim.c
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

// Audio shim headeer (unlicensed)
// The shim header includes the local configuration header, the hal header
// audio library header, and midi library headers.
#include "audio_shim.h"

// Audio library source (License: LGPL 3.0)
#include "../../../good-vibes/audiolib/audio.c"

// Mini midi library header (License: LGPL 3.0)
#include "../../../good-vibes/audiolib/midi.c"