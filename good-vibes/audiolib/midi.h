/*
    midi.h
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

#ifndef MIDI_LIBRARY
#define MIDI_LIBRARY

typedef struct
{
    uint16_t channel;           // Channel song is playing on
    uint16_t samplespertick;    // Samples per 10ms mini-midi tick
    uint16_t sample_timer;      // Sample timer
    uint16_t tick_timer;        // Ticks until next event
    uint8_t  *pevent;           // Pointer to next event, NULL if not playing
    uint8_t  first;             // Flag needed for first event
} MIDI_Player;

// Initialize music player
void midi_player_initialize(void);    

// Start playing a mini MIDI song
void midi_player_start_song(uint16_t channel, uint8_t *psong);

// Stop playing a mini MIDI song
void midi_player_stop_song(void);

// Return true if mini MIDI player is playing a song
uint16_t midi_player_playing_song(void);

// MIDI update to be called at audio playback frequency
void midi_player_update(void);

// Release music player
void midi_player_release(void);

#endif //#ifndef MIDI_LIBRARY