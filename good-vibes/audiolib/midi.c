/*
    Mini MIDI player
    (c) 2023 D. Scott Williamson
    spot1984@gmail.com
       
    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 2.1 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>. 
*/

// This source file is device independent and can be compiled without 
// HAL or configuration, these defines provide meaningless values that permit
// compilation to demonstrate there are no external dependencies.

// Configuration defines
#ifndef AUDIO_CHANNELS
#   define AUDIO_CHANNELS 0
#   warning Using AUDIO_CHANNELS dummy parameter
#endif
#ifndef AUDIO_VOICES_POW2
#   define AUDIO_VOICES_POW2 0
#   warning Using AUDIO_VOICES_POW2 dummy parameter
#endif
#ifndef AUDIO_UPDATE_FREQUENCY
#   define AUDIO_UPDATE_FREQUENCY 0
#   warning Using AUDIO_UPDATE_FREQUENCY dummy parameter
#endif
#ifndef AUDIO_FIFO_SIZE_POW2
#   define AUDIO_FIFO_SIZE_POW2 0
#   warning Using AUDIO_FIFO_SIZE_POW2 dummy parameter
#endif

// HAL defines
#ifndef AUDIO_TIMER_PRESCALER
#   define AUDIO_TIMER_PRESCALER 0
#   warning Using AUDIO_TIMER_PRESCALER dummy parameter
#endif
#ifndef AUDIO_TIMER_RELOAD
#   define AUDIO_TIMER_RELOAD 0
#   warning Using AUDIO_TIMER_RELOAD dummy parameter
#endif
#ifndef AUDIO_ACTUAL_UPDATE_FREQUENCY
#   define AUDIO_ACTUAL_UPDATE_FREQUENCY 0
#   warning Using AUDIO_ACTUAL_UPDATE_FREQUENCY dummy parameter
#endif
#ifndef AUDIO_NOISE_SOURCE
#   define AUDIO_NOISE_SOURCE 0
#   warning Using AUDIO_NOISE_SOURCE dummy parameter
#endif

#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>
#include "audio.h"
#include "midi.h"

// MIDI player instance
MIDI_Player midi_player;

// MIDI note frequencies C1 through G9
const uint16_t midi_note_frequencies[];

// Initialize music player
void midi_player_initialize()
{
     midi_player.samplespertick = 0xffff;
     midi_player.sample_timer=0xffff;
     midi_player.tick_timer=0xffff;
     midi_player.pevent=NULL;
}

// Start playing a mini midi song
void midi_player_start_song(uint16_t channel, uint8_t *psong)
{
    // Save channel
    midi_player.channel=channel;

    // Set tempo
    midi_player.samplespertick = (AUDIO_UPDATE_FREQUENCY)/100;
    
    // start song
    midi_player.pevent=psong;
    midi_player.first=true;
    midi_player.tick_timer=1;   // starts next update
}

// Stop playing a mini midi song
void midi_player_stop_song(void)
{
    // Silence voices on the midi player channel
    for(int voice=0; voice<AUDIO_VOICES; ++voice)
    {
        audio_keyoff(midi_player.channel,voice);
    }

    midi_player.pevent=NULL;
    midi_player.first=false;
}

// Return true if mini midi player is playing a song
uint16_t midi_player_playing_song(void)
{
    return midi_player.pevent!=NULL;
}

// MIDI update to be called at 100 Hz (every 10ms)
void midi_player_update(void)
{
    if (midi_player.pevent)
    {
        if (--midi_player.sample_timer==0)
        {
            midi_player.sample_timer=midi_player.samplespertick;
            --midi_player.tick_timer;
            while(midi_player.tick_timer==0)
            {
                if (midi_player.first)
                {
                    // First iteration, skip pending event to first delay 
                    // (Could be optimized if tick parsing was in a routine and called from song start)
                    midi_player.first=false;
                }
                else            
                {
                    // Parse event at index
                    uint8_t d0=*midi_player.pevent++;
                    uint8_t d1=*midi_player.pevent++;

                    // v1
                    //uint16_t note = d0 & 0x7f;
                    //uint16_t velocity = (d1&0xfe);
                    //uint16_t voice = ((d0>>6)&0x02)|(d1&0x01);
                    //uint16_t volume = velocity;

                    // v2
                    uint16_t note = d0 & 0x7f;
                    uint16_t velocity = (d1&0xfc);
                    uint16_t voice = ((d0>>5)&0x04)|(d1&0x03);
                    uint16_t volume = velocity+3;

                    // Velocity determines note on from note off
                    if (velocity>0)
                    {
                        // Note on
                        uint16_t frequency = midi_note_frequencies[note];
                        audio_keyon(midi_player.channel,voice,frequency,volume);
                    }
                    else
                    {
                        // Note off
                        audio_keyoff(midi_player.channel,voice);
                    }
                }
                
                uint8_t tick=*midi_player.pevent++;
                switch (tick)
                {
                    case 0xff:
                        // End of song

                        // Key off all voices
                        for(int voice=0; voice<AUDIO_VOICES; ++voice)
                        {
                            audio_keyoff(midi_player.channel,voice);
                        }
                                          
                        midi_player_initialize();
                        return;
                    case 0xfe:
                        // Extended tick
                        tick=*midi_player.pevent++;
                        tick+=((uint16_t) *midi_player.pevent++)<<8;
                        break;
                    default:
                        midi_player.tick_timer=tick;
                }
            }
        }
    }
}

// Release music player
void midi_player_release(void)
{
    midi_player_stop_song();
}

// MIDI note frequencies C1 through G9
const uint16_t midi_note_frequencies[]={
    8, 9, 9, 10, 10, 11, 12, 12, 13, 14, 15, 15, 16, 17, 18, 19, 
    21, 22, 23, 25, 26, 28, 29, 31, 33, 35, 37, 39, 41, 44, 46, 49, 
    52, 55, 58, 62, 65, 69, 73, 78, 82, 87, 92, 98, 104, 110, 117, 123, 
    131, 139, 147, 156, 165, 175, 185, 196, 208, 220, 233, 247, 262, 277, 
    294, 311, 330, 349, 370, 392, 415, 440, 466, 494, 523, 554, 587, 622, 
    659, 698, 740, 784, 831, 880, 932, 988, 1047, 1109, 1175, 1245, 1319, 
    1397, 1480, 1568, 1661, 1760, 1865, 1976, 2093, 2217, 2349, 2489, 2637, 2794, 
    2960, 3136, 3322, 3520, 3729, 3951, 4186, 4435, 4699, 4978, 5274, 5588, 5920, 
    6272, 6645, 7040, 7459, 7902, 8372, 8870, 9397, 9956, 10548, 11175, 11840, 12544,
};

