# good-vibes audio library <br> &nbsp;(&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;(&nbsp;&nbsp;&nbsp;(&nbsp;&nbsp;(&nbsp;((-_-))&nbsp;)&nbsp;&nbsp;)&nbsp;&nbsp;&nbsp;)&nbsp;&nbsp;&nbsp;&nbsp;) &nbsp;

A cross platform audio library.

(c) 2023 D. Scott Williamson <br>
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


## Audio Library

### Interface

#### Structures

* **`AL_System`** Holds the Audio system fifo, array of channels, and master volume.

* **`AL_Channel`** A channel is a physical output, e.g. a PWM pin, D to A pin, or digital pins in an R2R ladder.  Channels have individual volumes.

* **`AL_Voice`** A voice is one of potentially several waveforms on a polyphonic channel.  Each voice has a volume, pitch bend, and an instrument definition.

* **`AL_Instrument`** An instrument describes a sound that can be keyed on and off.  It includes a waveform sampler, ADSR envelope, vibrato, and tremolo settings.

* **`AL_ADSR`** The ADSR Envelop contains settings for Attack, Decay, Sustain, and Release.  When a note is keyed on the Attack, Sustain, and Sustain are played in sequence automatically.  When the note is keyed off, the Decay begins.

* **`AL_FIFO`**  The audio system update fills a First In First Out (FIFO) buffer with values for each channel.  An interrupt reads from the FIFO buffer and writes them to appropriate output hardware for each channel.  


#### Functions
* **`void audio_initialize( void )`**	Audio system initialization 

* **`void audio_update( void )`** Audio system update (update channel values for fifo)

* **`unsigned char audio_get_channel_value(uint16_t channel)`** Return channel value to be sent to output (e.g. PWM, A2D, etc.)

* **`void audio_set_master_volume(uint16_t volume )`** Set audio system master volume

* **`void audio_set_channel_volume(uint16_t channel,uint16_t volume )`** Set audio system channel volume

* **`void audio_set_voice_volume(uint16_t channel, uint16_t voice, uint16_t volume )`**  Set audio system voice volume

* **`void audio_set_voice_pitchbend(uint16_t channel,uint16_t voice,uint16_t pitchbend )`** Set audio system voice pitch bend

* **`inline void audio_set_instrument(   uint16_t channel,uint16_t voice,const AL_Instrument *instrument)`** Set a voice's instrument parameters 

* **`void audio_keyon(   uint16_t channel, uint16_t voice, uint16_t frequency, uint16_t velocity )`** Key a note on a voice on

* **`void audio_keyoff(   uint16_t channel, uint16_t voice)`** Key a note on a voice off (trigger sound decay)

* **`void audio_stopvoice(uint16_t channel, uint16_t voice)`**  Stop and silence a voice
         
* **`void audio_release( void )`** Shutdown audio library and release resources

#### Audio Library FIFO functions
These audio FIFO functions are normally used inside the audio library and the playback interrupt but are listed here in case you'd like to use the FIFO for something else like digitized sound playback.

* **`void fifo_initialize(AL_FIFO* fifo)`** Initialize FIFO

* **`uint8_t fifo_read(AL_FIFO* fifo)`** Read an element from the FIFO

* **`uint8_t fifo_write(AL_FIFO* fifo,uint8_t data)`** Write an element to the FIFO, return true if successful

* **`uint16_t fifo_free(AL_FIFO* fifo)`** Return the amount of data free in the FIFO

* **`uint16_t fifo_used(AL_FIFO* fifo)`** Return the amount of used in the FIFO


## Mini MIDI library

### Interface

#### Structures
* **`MIDI_Player`** MIDI player structure that holds the state of the MIDI player (user access not required  for normal operation of MIDI Player)

#### Functions
* **`void midi_player_initialize(void)`** Initialize music player
* **`void midi_player_start_song(uint16_t channel, uint8_t *psong)`** Start playing a mini MIDI song
* **`void midi_player_stop_song(void)`** Stop playing a mini midi song
* **`uint16_t midi_player_playing_song(void)`** Return true if mini MIDI player is playing a song
* **`void midi_player_update(void)`** Midi update to be called at audio playback frequency
* **`void midi_player_release(void)`** Release music player