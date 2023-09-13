/*
    audio_configuration.h
    Audio Library Configuration 
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

#ifndef AUDIO_LIBRARY_CONFIGURATION
#define AUDIO_LIBRARY_CONFIGURATION

// Audio Library configuration definitions (modify these to configure library)
#define AUDIO_CHANNELS (1)

#if 0
//  4 voice presets
//  The PWM frequency and the audio playback update frequency
#   define AUDIO_UPDATE_FREQUENCY (22000)
//  Audio voices power of 2, actual voices are 2^AUDIO_VOICES_POW2
//  Examples:
//  AUDIO_VOICES_POW2 (0) => 1 voice
//  AUDIO_VOICES_POW2 (1) => 2 voices
//  AUDIO_VOICES_POW2 (2) => 4 voices
//  AUDIO_VOICES_POW2 (3) => 8 voices
#   define AUDIO_VOICES_POW2 (2)
// Audio FIFO size power of 2, actual FIFO size in bytes is 2^AUDIO_FIFO_SIZE_POW2
// Example: 
// AUDIO_FIFO_SIZE_POW2 (7) => 128 byte FIFO (used for all voices and channels)
#   define AUDIO_FIFO_SIZE_POW2 (7)
#else
//  8 voice presets
//  The PWM frequency and the audio playback update frequency
#   define AUDIO_UPDATE_FREQUENCY (16000)
//  Audio voices power of 2, actual voices are 2^AUDIO_VOICES_POW2
//  Examples:
//  AUDIO_VOICES_POW2 (0) => 1 voice
//  AUDIO_VOICES_POW2 (1) => 2 voices
//  AUDIO_VOICES_POW2 (2) => 4 voices
//  AUDIO_VOICES_POW2 (3) => 8 voices
#   define AUDIO_VOICES_POW2 (3)
//  Audio FIFO size power of 2, actual FIFO size in bytes is 2^AUDIO_FIFO_SIZE_POW2
//  Example: 
//  AUDIO_FIFO_SIZE_POW2 (7) => 128 byte FIFO (used for all voices and channels)
#   define AUDIO_FIFO_SIZE_POW2 (7)
#endif

// Uncomment the following line for debugging output
#define AUDIO_DEBUG

#endif // AUDIO_LIBRARY_CONFIGURATION