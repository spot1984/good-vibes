/*
    audio_instruments.c
    Audio Library Instrument Definitions
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
#include "../../../good-vibes/audiolib/audio.h"

int8_t audio_sine_sampler(uint16_t index);
int8_t audio_triangle_sampler(uint16_t index);
int8_t audio_square_sampler(uint16_t index);
int8_t audio_sawtooth_sampler(uint16_t index);
int8_t audio_4octave_sine_sampler(uint16_t index);
int8_t audio_4octave_mix_sampler(uint16_t index);
int8_t audio_noise1_sampler(uint16_t index);
int8_t audio_noise2_sampler(uint16_t index);
int8_t audio_robot_sampler(uint16_t index);
int8_t audio_noise2_sampler(uint16_t index);

// Minimum 10ms
#define ADSR_RAMP_MS(ms) (256/((ms)/10))
//#define ADSR_VOLUME(pct) (255*(pct)/100)

// ADSR parameters: attack delta, attack peak, decay delta, sustain value, release delta
const AL_ADSR audio_adsr_on =     {256, 255, 0, 255, -255};
const AL_ADSR audio_adsr_piano =  {256, 255, ADSR_RAMP_MS(050),255*.60,ADSR_RAMP_MS(900)};  
const AL_ADSR audio_adsr_8bit =   {ADSR_RAMP_MS(50), 255, ADSR_RAMP_MS(300), 255*.66, ADSR_RAMP_MS(900)};  
const AL_ADSR audio_adsr_violin = {ADSR_RAMP_MS(150),255, ADSR_RAMP_MS(300), 255*.76, ADSR_RAMP_MS(90)};  
const AL_ADSR audio_adsr_flute =  {ADSR_RAMP_MS(350),255, ADSR_RAMP_MS(300), 255*.66, ADSR_RAMP_MS(90)};  
const AL_ADSR audio_adsr_sax =    {ADSR_RAMP_MS(350),255, ADSR_RAMP_MS(300), 255*.66, ADSR_RAMP_MS(90)};  
const AL_ADSR audio_adsr_tom =    {128, 255, ADSR_RAMP_MS(250) ,  0, 0};  
const AL_ADSR audio_adsr_snare =  {128, 255, ADSR_RAMP_MS(3000),  0, 0};  
const AL_ADSR audio_adsr_cymbol = {128, 255, ADSR_RAMP_MS(650) ,  0, 0};  
const AL_ADSR audio_adsr_hihat =  {128, 255, ADSR_RAMP_MS(1000), 64, ADSR_RAMP_MS(150)};  
    
// Instrument: sampler, ADSR, vibrato amplitude, vibrato delta, tremolo amplitude, tremolo delta
const AL_Instrument audio_instrument_sine =   { audio_sine_sampler,       (AL_ADSR *) &audio_adsr_on,         0,0,    0,0};
const AL_Instrument audio_instrument_triangle={ audio_triangle_sampler,   (AL_ADSR *) &audio_adsr_on,         0,0,    0,0};
const AL_Instrument audio_instrument_square = { audio_square_sampler,     (AL_ADSR *) &audio_adsr_on,         0,0,    0,0};
const AL_Instrument audio_instrument_sawtooth={ audio_sawtooth_sampler,   (AL_ADSR *) &audio_adsr_on,         0,0,    0,0};
const AL_Instrument audio_instrument_4octave_sine= { audio_4octave_sine_sampler,(AL_ADSR *) &audio_adsr_on,   0,0,    0,0};
const AL_Instrument audio_instrument_4octave_sawtooth= { audio_4octave_mix_sampler,(AL_ADSR *) &audio_adsr_on,0,0,    0,0};

const AL_Instrument audio_instrument_piano =  { audio_sine_sampler,       (AL_ADSR *) &audio_adsr_piano,      0,0,    0,0};
const AL_Instrument audio_instrument_organ =  { audio_triangle_sampler,   (AL_ADSR *) &audio_adsr_piano,      0,0,    0,0};
const AL_Instrument audio_instrument_fat_organ={ audio_4octave_mix_sampler,(AL_ADSR *) &audio_adsr_piano,   0,0,    0,0};
const AL_Instrument audio_instrument_synth =  { audio_sawtooth_sampler,   (AL_ADSR *) &audio_adsr_piano,      0,0,    0,0};
const AL_Instrument audio_instrument_8bit =   { audio_square_sampler,     (AL_ADSR *) &audio_adsr_8bit,       0,0,    0,0};
const AL_Instrument audio_instrument_vibraphone={ audio_sine_sampler,     (AL_ADSR *) &audio_adsr_piano,      4<<4,1<<4,    2<<4,1<<4};

const AL_Instrument audio_instrument_violin = { audio_sawtooth_sampler,   (AL_ADSR *) &audio_adsr_violin,     48,4,    32,4};
//const AL_Instrument audio_instrument_violin = { audio_sawtooth_sampler,   &audio_adsr_violin,     4<<4,1<<4,    2<<4,1<<4};

const AL_Instrument audio_instrument_drum =   { audio_noise2_sampler,     (AL_ADSR *) &audio_adsr_piano,      0,0,    0,0};
const AL_Instrument audio_instrument_hihat =  { audio_noise2_sampler,     (AL_ADSR *) &audio_adsr_hihat,      5<<4,-1<<4,   0,0};
const AL_Instrument audio_instrument_snare =  { audio_noise2_sampler,     (AL_ADSR *) &audio_adsr_tom,        1000<<4,-1,0,0};
const AL_Instrument audio_instrument_cymbol = { audio_noise2_sampler,     (AL_ADSR *) &audio_adsr_cymbol,     50<<4,-5<<4,  0,0};
const AL_Instrument audio_instrument_tom =    { audio_sine_sampler,       (AL_ADSR *) &audio_adsr_tom,        100<<4,-1<<4, 0,0};

const AL_Instrument audio_instrument_flute =  { audio_triangle_sampler,   (AL_ADSR *) &audio_adsr_flute,      4<<4,1<<4,    2<<4,1<<4};
const AL_Instrument audio_instrument_sax =    { audio_sawtooth_sampler,   (AL_ADSR *) &audio_adsr_sax,        4<<4,1<<4,    2<<4,1<<4};

const AL_Instrument audio_instrument_xylophone={ audio_sine_sampler,       (AL_ADSR *) &audio_adsr_tom,-1,10,0,0};