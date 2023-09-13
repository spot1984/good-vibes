/*
    audio.h
    Audio library
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

#ifndef AUDIO_LIBRARY
#define AUDIO_LIBRARY

// Verify configurarion has been defined
#ifndef AUDIO_CHANNELS
#   warning  "AUDIO_CHANNELS must be defined for your application to configure the audio library."
#   define AUDIO_NOT_CONFIGURED
#endif
#ifndef AUDIO_UPDATE_FREQUENCY
#   warning  "AUDIO_UPDATE_FREQUENCY must be defined for your application to configure the audio library."
#   define AUDIO_NOT_CONFIGURED
#endif
#ifndef AUDIO_VOICES_POW2
#   warning  "AUDIO_VOICES_POW2 must be defined for your application to configure the audio library."
#   define AUDIO_NOT_CONFIGURED
#endif
#ifndef AUDIO_FIFO_SIZE_POW2
#   warning  "AUDIO_FIFO_SIZE_POW2 must be defined for your application to configure the audio library."
#   define AUDIO_NOT_CONFIGURED
#endif
#ifdef AUDIO_NOT_CONFIGURED
#   error "Audio library is not fully configured, see previous warnings for details."
#endif

// Derived definitions

// Number of voices per channel
#define AUDIO_VOICES (1<<AUDIO_VOICES_POW2)

// Audio FIFO size in bytes

#define AUDIO_FIFO_SIZE (1<<AUDIO_FIFO_SIZE_POW2)

// Audio shape update divider (100 Hz or update every 10MS)
#define AUDIO_SHAPE_DIVIDER (AUDIO_UPDATE_FREQUENCY/100)

///////////////////////////////////////////////////////////////////////////////
// Audio library structures

// AL_ADSR
// ADSR envelope
typedef struct
{
    uint16_t attack_delta;  // Ramp from 0 to max
    uint16_t attack_peak;   // Attack peak value
    uint16_t decay_delta;   // Ramp from max to sustain value
    uint16_t sustain_value; // Sustain value
    uint16_t release_delta; // Ramp from sustain to 0
} AL_ADSR;

// AL_Instrument
// The components that describe an instrument
typedef struct 
{
    int8_t (*sample)(uint16_t index); // waveform sampler
    AL_ADSR   *pADSR;               // pointer to ADSR envelope
    uint16_t  vibrato_amplitude;    // Vibrato amplitude (4 bits fraction)
    int16_t   vibrato_delta;        // Vibrato delta (4 bits fraction)
    uint16_t  tremolo_amplitude;    // Tremolo amplitude (4 bits fraction)
    int16_t   tremolo_delta;        // Tremolo delta (4 bits fraction)
} AL_Instrument;

// AL_Voice
// A voice plays a single instrument
typedef struct AL_Voice
{
    uint16_t position;      // Position in wave table fixed point 0 to 1
    uint16_t delta;         // Derived from frequency and length of wave table
    uint16_t pitchbend;     // Pitch bend (delta on delta)

    uint16_t volume;        // 8 bit volume 
    uint16_t compositevolume;  // voice volume * channel volume * master volume
    uint16_t sample_volume; // The volume applied to samples
    int16_t output_value;   // Value

    uint8_t playing;        // True if voice is playing
 
    uint8_t ADSR_phase;     // Current phase
    int16_t ADSR_volume;    // Current volume of the envelope
    AL_ADSR ADSR_composite; // ADSR settings scaled by composite volume at keyon

    int16_t vibrato;        // Vibrato value
    int16_t vibrato_delta;  // Vibrato delta

    int16_t tremolo;        // Tremolo value
    int16_t tremolo_delta;  // Tremolo delta
    int16_t tremolo_amplitude; // Tremolo amplitude scaled by composite volume at keyon

    const AL_Instrument *pInstrument; // Pointer to instrument
    uint8_t flags;          
} AL_Voice;

// AL Channel
// A channel is a polyphonic physical output (a single PWM pin)
typedef struct 
{
    AL_Voice voice[AUDIO_VOICES];   // Voices in the channel
    uint16_t volume;                // Channel set volume
    uint16_t compositevolume;       // Channel volume * master volume
    int16_t  output_value;          // Value of all voices in the channel
    uint8_t flags;
} AL_Channel;

// AL_FIFO
// Audio Library FIFO
typedef struct 
{
    volatile uint8_t audio_fifo[AUDIO_FIFO_SIZE]; // FIFO Buffer
    uint16_t  index_head;   // Index to FIFO head (where data will be added)
    uint16_t  index_tail;   // Index to FIFO tail (Where data will be read)
    uint16_t  free;         // Amount of free data in FIFO
} AL_FIFO;

// AL_System is the entire audio system
typedef struct 
{
    AL_Channel channel[AUDIO_CHANNELS]; // Polyphonic sound channels
    uint16_t volume;                    // Master volume
    uint16_t envelopedivider;           // For lower frequency shaping processing
    uint8_t flags;
    AL_FIFO fifo;                       // fifo    
#define AL_SYSTEM_FLAG_UPDATE_VOLUME (1<<0)
#define AL_SYSTEM_FLAG_UPDATE_COMPOSITE_VOLUME (1<<1)
} AL_System;

// Audio system instance
extern AL_System audio_system;

///////////////////////////////////////////////////////////////////////////////
// Audio library API

// Auido system initialization 
void audio_initialize( void );

// Audio system update (update channel values for fifo)
void audio_update( void );

// Return channel value to be sent to PWM
unsigned char audio_get_channel_value(uint16_t channel);

// Set audio system master volume
void audio_set_master_volume(uint16_t volume );


// Set audio system channel volume
void audio_set_channel_volume(uint16_t channel,
                            uint16_t volume );

// Set audio system voice volume
void audio_set_voice_volume(uint16_t channel,
                          uint16_t voice,
                          uint16_t volume );

// Set audio system voice volume
inline void audio_set_voice_pitchbend(uint16_t channel,
                          uint16_t voice,
                          uint16_t pitchbend )
{
    audio_system.channel[channel].voice[voice].pitchbend=pitchbend;
}

// Set a voice's instrument parameters
inline void audio_set_instrument(   uint16_t channel,
                            uint16_t voice,
                            const AL_Instrument *instrument)
{
    audio_system.channel[channel].voice[voice].pInstrument=instrument;
}

// Key a note on a voice on
void audio_keyon(   uint16_t channel,
                    uint16_t voice,
                    uint16_t frequency,
                    uint16_t velocity );

// Key a note on a voice off (trigger sound decay)
void audio_keyoff(   uint16_t channel,
                    uint16_t voice);

// Stop and silence a voice
void audio_stopvoice(uint16_t channel,
                    uint16_t voice);
         
// Shutdown audio library and release resources
void audio_release( void );

// Audio Library FIFO functions

// Initialize FIFO
void fifo_initialize(AL_FIFO* fifo);

// Read an element from the FIFO
uint8_t fifo_read(AL_FIFO* fifo);

// Write an element to the FIFO, return true if successful
uint8_t fifo_write(AL_FIFO* fifo,uint8_t data);

// Return the amount of data free in the FIFO
uint16_t fifo_free(AL_FIFO* fifo);

// Return the amount of used in the FIFO
uint16_t fifo_used(AL_FIFO* fifo);

#endif //#ifndef AUDIO_LIBRARY