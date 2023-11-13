/*
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

// This source file is device independent and can be compiled without 
// HAL or configuration, these defines provide meaningless values that permit
// compilation to demonstrate there are no external dependencies.

// Configuration defines
#ifndef AUDIO_CHANNELS
#   define AUDIO_CHANNELS 0
#   warning Using AUDIO_CHANNELS dummy parameter (audio library will not function)
#endif
#ifndef AUDIO_VOICES_POW2
#   define AUDIO_VOICES_POW2 0
#   warning Using AUDIO_VOICES_POW2 dummy parameter (audio library will not function)
#endif
#ifndef AUDIO_UPDATE_FREQUENCY
#   define AUDIO_UPDATE_FREQUENCY 0
#   warning Using AUDIO_UPDATE_FREQUENCY dummy parameter (audio library will not function)
#endif
#ifndef AUDIO_FIFO_SIZE_POW2
#   define AUDIO_FIFO_SIZE_POW2 0
#   warning Using AUDIO_FIFO_SIZE_POW2 dummy parameter (audio library will not function)
#endif

// HAL defines
#ifndef AUDIO_TIMER_PRESCALER
#   define AUDIO_TIMER_PRESCALER 0
#   warning Using AUDIO_TIMER_PRESCALER dummy parameter (audio library will not function)
#endif
#ifndef AUDIO_TIMER_RELOAD
#   define AUDIO_TIMER_RELOAD 0
#   warning Using AUDIO_TIMER_RELOAD dummy parameter (audio library will not function)
#endif
#ifndef AUDIO_ACTUAL_UPDATE_FREQUENCY
#   define AUDIO_ACTUAL_UPDATE_FREQUENCY 0
#   warning Using AUDIO_ACTUAL_UPDATE_FREQUENCY dummy parameter (audio library will not function)
#endif
#ifndef AUDIO_NOISE_SOURCE
#   define AUDIO_NOISE_SOURCE 0
#   warning Using AUDIO_NOISE_SOURCE dummy parameter (audio library will not function)
#endif

#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>
#include "audio.h"

// Audio system instance
AL_System audio_system;

// Noise sampler
int8_t audio_noise1_sampler(uint16_t index)
{

    static int8_t value;
    value = (AUDIO_NOISE_SOURCE) ^value;  // tinny white noise
    return value;
}

// Noise 2 sampler
int8_t audio_noise2_sampler(uint16_t index)
{

    static int8_t value;
    value = (AUDIO_NOISE_SOURCE) ^value^index;  // midtone white noise, index changes pitch
    return value;
}

// Robot sampler
int8_t audio_robot_sampler(uint16_t index)
{
   return (AUDIO_NOISE_SOURCE)^index;  // midtone robotfrequency changes pitch
}

// Sawtooth sampler
int8_t audio_sawtooth_sampler(uint16_t index)
{
    return (int8_t) (index>>8);
}

// Square wave sampler
int8_t audio_square_sampler(uint16_t index)
{
    return (int8_t) ((index& 0x8000)?-127:127);
}

// Triangle sampler
int8_t audio_triangle_sampler(uint16_t index)
{
    if (index&0x8000)
    {
        return -((int8_t) (((index>>7)&0xff)))-129;
    }
    else
    {
        return (int8_t) (((index>>7)&0xff))+128;
    }
} 

// Quarter sintab, signed, 0 center
const int8_t quartersintab[256]={
        0,0,1,2,3,3,4,5,6,7,7,8,9,10,10,11,
        12,13,14,14,15,16,17,18,18,19,20,21,21,22,23,24,
        24,25,26,27,28,28,29,30,31,31,32,33,34,34,35,36,
        37,37,38,39,40,40,41,42,43,43,44,45,46,46,47,48,
        48,49,50,51,51,52,53,54,54,55,56,56,57,58,58,59,
        60,61,61,62,63,63,64,65,65,66,67,67,68,69,69,70,
        71,71,72,73,73,74,74,75,76,76,77,78,78,79,79,80,
        81,81,82,83,83,84,84,85,85,86,87,87,88,88,89,89,
        90,91,91,92,92,93,93,94,94,95,95,96,96,97,97,98,
        98,99,99,100,100,101,101,102,102,103,103,104,104,105,105,105,
        106,106,107,107,108,108,108,109,109,110,110,110,111,111,112,112,
        112,113,113,113,114,114,115,115,115,116,116,116,117,117,117,117,
        118,118,118,119,119,119,119,120,120,120,121,121,121,121,122,122,
        122,122,122,123,123,123,123,123,124,124,124,124,124,125,125,125,
        125,125,125,125,126,126,126,126,126,126,126,126,127,127,127,127,
        127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127
};

// Sine sampler
int8_t audio_sine_sampler(uint16_t index)
{
    uint16_t tableindex=(index>>6)& 0xff;
    switch (index&0xc000)
    {
        case 0x0000:
            return quartersintab[tableindex];
        case 0x4000:
            return quartersintab[255-tableindex];
        case 0x8000:
            return -(quartersintab[tableindex]);
        default:
        case 0xc000:
            return -(quartersintab[255-tableindex]);
    }
}

// 4 Octave sine sampler
int8_t audio_4octave_sine_sampler(uint16_t index)
{
    int16_t sample =   audio_sine_sampler(index)
                     + audio_sine_sampler(index<<1)
                     + audio_sine_sampler(index<<2)
                     + audio_sine_sampler(index<<3);
    return sample>>2;
}     
// 4 Octave sawtooth sampler
int8_t audio_4octave_mix_sampler(uint16_t index)
{
    int16_t sample =   audio_sawtooth_sampler(index<<1)
                     + (audio_triangle_sampler(index<<0)<<1);
                     
    return sample>>1;
}       

// Multiply an 8 bit unsigned volume by an 8 bit signed sample, returning a signed modulated sample
int16_t audio_volume_sample_multiply(uint16_t u,int16_t s)
{
    uint16_t su = (s>=0) ? (uint16_t) s : -((uint16_t) s);
    uint16_t ret = 0;
	uint16_t multiplicand = su; //small_num;
	uint16_t mutliplicant = u;  //big_num;
	do
	{
		if( multiplicand & 1 )
			ret += mutliplicant;
		mutliplicant<<=1;
		multiplicand>>=1;
	} while( multiplicand );

	return ((s>=0) ? (int16_t) ret : -((int16_t) ret))>>8;
}

// Multiply 8 bit unsigned volumes by one another, returning an 8 bit volume
uint16_t audio_volume_volume_multiply(uint16_t v1,uint16_t v2)
{
    uint16_t ret = 0;
	uint16_t multiplicand = v1; //small_num;
	uint16_t mutliplicant = v2;  //big_num;
	do
	{
		if( multiplicand & 1 )
			ret += mutliplicant;
		mutliplicant<<=1;
		multiplicand>>=1;
	} while( multiplicand );

	return ret>>8;
}

// Initialize audio library
void audio_initialize( void )
{
    audio_system.volume=255;
    audio_system.envelopedivider=AUDIO_SHAPE_DIVIDER; 
    fifo_initialize(&audio_system.fifo);
    for (uint16_t channel=0;channel<AUDIO_CHANNELS; ++channel)
    {
        AL_Channel *pChannel=&audio_system.channel[channel];
        pChannel->volume=255;
        pChannel->compositevolume=(255*255>>8);

        for (uint16_t voice=0;voice<AUDIO_VOICES; ++voice)
        {
            AL_Voice *pVoice=&pChannel->voice[voice];
            pVoice->position=0;            
            pVoice->delta=0;            
            pVoice->pitchbend=0;            
            pVoice->volume=255;
            pVoice->compositevolume=(255*255*255>>16);
            pVoice->output_value=0;
            pVoice->pInstrument=NULL;
        }
    }    

#ifdef AUDIO_DEBUG
    printf("Audio initialize\n");
    printf("Audio system has %d channels, each with %d voices\n",AUDIO_CHANNELS,AUDIO_VOICES);
    printf("Audio sample update frequency is %d Hz (actual %d Hz)\n",AUDIO_UPDATE_FREQUENCY, AUDIO_ACTUAL_UPDATE_FREQUENCY);
    printf("Audio shape update frequency is %d Hz\n",AUDIO_UPDATE_FREQUENCY/AUDIO_SHAPE_DIVIDER);
    printf("Audio fifo size is %d (for all channels)\n",AUDIO_FIFO_SIZE);
    printf("sizeof(audio_system)=%d\n",sizeof(audio_system));
#endif
}

// Audio update
void audio_update( void )
{
    // Update compositeolumes if system, channel, or voice volumes have changed
    if ( audio_system.flags & AL_SYSTEM_FLAG_UPDATE_COMPOSITE_VOLUME)
    {
        for (uint16_t channel=0 ; channel < AUDIO_CHANNELS ; ++channel)
        {
            AL_Channel *pChannel=&audio_system.channel[channel];

            // Update composite channel volumes
            if ( (audio_system.flags & AL_SYSTEM_FLAG_UPDATE_VOLUME) | 
                (pChannel->flags & AL_SYSTEM_FLAG_UPDATE_VOLUME) )
            {         
                pChannel->compositevolume = audio_volume_volume_multiply(audio_system.volume,pChannel->volume);
                pChannel->flags |= AL_SYSTEM_FLAG_UPDATE_VOLUME;
            }

            // Update composite voice volumes
            for (uint16_t voice=0;voice<AUDIO_VOICES; ++voice)
            {
                AL_Voice *pVoice=&pChannel->voice[voice];

                if ( (pChannel->flags & AL_SYSTEM_FLAG_UPDATE_VOLUME) |
                    (pVoice->flags & AL_SYSTEM_FLAG_UPDATE_VOLUME) )
                {
                    pVoice->compositevolume = audio_volume_volume_multiply(pChannel->compositevolume,pVoice->volume);              
                    pVoice->flags &= ~AL_SYSTEM_FLAG_UPDATE_VOLUME;
                }
            }
            pChannel->flags&= ~AL_SYSTEM_FLAG_UPDATE_VOLUME;
        }
        audio_system.flags &= ~AL_SYSTEM_FLAG_UPDATE_VOLUME;
    }

    // Update timers of all voice playback parameters
    for (uint16_t channel=0;channel<AUDIO_CHANNELS; ++channel)
    {
        AL_Channel *pChannel=&audio_system.channel[channel];
        pChannel->output_value=0;
        for (uint16_t voice=0;voice<AUDIO_VOICES; ++voice)
        {
            AL_Voice *pVoice=&pChannel->voice[voice];
            if (pVoice->playing)
            {
                if (pVoice->pInstrument!=NULL)
                {
                    // There is an instrument, process
                    pVoice->position += pVoice->delta + (pVoice->vibrato>>4) + pVoice->pitchbend;
                    int16_t sample = (int16_t) pVoice->pInstrument->sample(pVoice->position);
                    pVoice->output_value=audio_volume_sample_multiply(pVoice->sample_volume, sample);
                }
            }
            else
            {
                // Voice not playing 
                // Drift value to center 
                if (pVoice->output_value!=0)
                {
                    if (pVoice->output_value > 0)
                    {
                        --pVoice->output_value;
                    }
                    else
                    {
                        ++pVoice->output_value;
                    }  
                }
            }
            pChannel->output_value+=pVoice->output_value;
        }
        // If there is more than one voice then we need to prevent clipping
        #if AUDIO_VOICES_POW2
        pChannel->output_value>>=AUDIO_VOICES_POW2;
        #endif
    }

    // Update audio evelope (ADSR, vibrato, tremelo)
    if (--audio_system.envelopedivider==0)
    {
        audio_system.envelopedivider=AUDIO_SHAPE_DIVIDER;    // 10ms
        // Envelope update
        for (uint16_t channel=0;channel<AUDIO_CHANNELS; ++channel)
        {
            AL_Channel *pChannel=&audio_system.channel[channel];
            for (uint16_t voice=0;voice<AUDIO_VOICES; ++voice)
            {
                AL_Voice *pVoice=&pChannel->voice[voice];
                if (pVoice->playing)
                {
                    AL_ADSR *padsr=&pVoice->ADSR_composite;
                    switch (pVoice->ADSR_phase)
                    {
                        case 'a':
                            // Attack
                            pVoice->ADSR_volume += padsr->attack_delta;
                            if (pVoice->ADSR_volume >= padsr->attack_peak)
                            {
                                pVoice->ADSR_phase = 'd';
                                pVoice->ADSR_volume = padsr->attack_peak;
                            }
                            break;
                        case 'd':
                            // Decay
                            pVoice->ADSR_volume -= padsr->decay_delta;
                            if ((pVoice->ADSR_volume <= padsr->sustain_value) || (pVoice->ADSR_volume <0))
                            {
                                pVoice->ADSR_phase='s';
                                pVoice->ADSR_volume=padsr->sustain_value;
                            }
                            break;
                        case 's':
                            // Sustain 
                            // Sustain does nothing but waits for a key release
                            break;
                        case 'r':
                            // Release
                            pVoice->ADSR_volume -= padsr->release_delta;
                            if (pVoice->ADSR_volume < 0)
                            {
                                pVoice->ADSR_phase='x';
                                pVoice->ADSR_volume=0;
                                pVoice->playing=false;
                            }
                            break;   
                        default:
                            // ADSR not active
                            break;                     
                    }
                    // Update vibrato
                    pVoice->vibrato += pVoice->vibrato_delta;
                    if (pVoice->vibrato > 0)
                    {
                        if (pVoice->vibrato >= pVoice->pInstrument->vibrato_amplitude)
                        {
                            pVoice->vibrato_delta = -pVoice->vibrato_delta;
                            pVoice->vibrato = (pVoice->pInstrument->vibrato_amplitude<<1)-pVoice->vibrato;
                        }
                    }   
                    else if (pVoice->vibrato < 0)
                    {
                        if ((-pVoice->vibrato) >= pVoice->pInstrument->vibrato_amplitude)
                        {
                            pVoice->vibrato_delta = -pVoice->vibrato_delta;
                            pVoice->vibrato = -(pVoice->pInstrument->vibrato_amplitude<<1)-pVoice->vibrato;
                        }
                    }
                    // Update tremolo
                    pVoice->tremolo += pVoice->tremolo_delta;
                    if (pVoice->tremolo>0)
                    {
                        if (pVoice->tremolo >= pVoice->tremolo_amplitude)
                        {
                            pVoice->tremolo_delta = -pVoice->tremolo_delta;
                            pVoice->tremolo = (pVoice->tremolo_amplitude << 1) - pVoice->tremolo;
                        }
                    }   
                    else if (pVoice->tremolo < 0)
                    {
                        if (-pVoice->tremolo > pVoice->tremolo_amplitude)
                        {
                            pVoice->tremolo_delta = -pVoice->tremolo_delta;
                            pVoice->tremolo = -(pVoice->tremolo_amplitude<<1) - pVoice->tremolo;
                        }
                    }

                    // Calculate volume to be applied to the sampler
                    // Note: Composite volume is applied to ADSR and tremolo parameters in keyon
                    // Note: It is possible for tremolo to push amplitude to clip at high volumes
                    pVoice->sample_volume = pVoice->ADSR_volume + (pVoice->tremolo>>4);
                }
            }
        }
    }
}

// Get the value of an output pin
unsigned char audio_get_channel_value(uint16_t channel)
{   
    // Make the signed output value a positive byte for the FIFO
    int16_t value = audio_system.channel[channel].output_value+128;

    // Clamp to PWM range to prevent wrapping
    if (value<0)  
    {
        value=0;
    }
    if (value>255) 
    {
        value=255;
    }

    return (unsigned char) value;
}

// Set audio system master volume
inline void audio_set_master_volume(uint16_t volume ) 
{
    // Volume changes are expensive and only should be done when needed (no hardware multiply)
    if (audio_system.volume != volume)
    {
        // Set the master volume
        audio_system.volume=volume;
        // Flag that composite volumes need to be updated next update and that the master volume has changed
        audio_system.flags |= AL_SYSTEM_FLAG_UPDATE_VOLUME | AL_SYSTEM_FLAG_UPDATE_COMPOSITE_VOLUME;
    }
}

// Set audio system channel volume
inline void audio_set_channel_volume(uint16_t channel,
                                     uint16_t volume )
{
    // Volume changes are expensive and only should be done when needed (no hardware multiply)
    if (audio_system.channel[channel].volume != volume)
    {
        // Set the channel volume
        audio_system.channel[channel].volume=volume;
        // Flag that the channel composite volume needs update
        audio_system.channel[channel].flags |= AL_SYSTEM_FLAG_UPDATE_VOLUME;
        // Flag that a volume has changed and composite volumes need to be updated next update
        audio_system.flags |= AL_SYSTEM_FLAG_UPDATE_COMPOSITE_VOLUME;
    }
}

// Set audio system voice volume
inline void audio_set_voice_volume( uint16_t channel,
                                    uint16_t voice,
                                    uint16_t volume )
{
    // Volume changes are expensive and only should be done when needed (no hardware multiply)
    if (audio_system.channel[channel].voice[voice].volume != volume)
    {
        // Set the voice volume
        audio_system.channel[channel].voice[voice].volume = volume;
        // Flag that the voice composite volume needs update
        audio_system.channel[channel].voice[voice].flags |= AL_SYSTEM_FLAG_UPDATE_VOLUME;
        // Flag that a volume has changed and composite volumes need to be updated next update
        audio_system.flags |= AL_SYSTEM_FLAG_UPDATE_COMPOSITE_VOLUME;
    }
}

// Key a note on a voice on
void audio_keyon(   uint16_t channel,
                    uint16_t voice,
                    uint16_t frequency,
                    uint16_t velocity )
{
    AL_Voice *pVoice = &audio_system.channel[channel].voice[voice];
    // Rrequency calculations
    // samplerstepspersecond=samplerstepspercycle*cyclespersecond
    uint32_t samplerstepspersecond = ((uint32_t) frequency)<<16;
    
    // Potential Optimization:  If AUDIO_UPDATE_FREQUENCY is a power of 2,
    //                          divide can be replaced by a shift
    //                          32768, 16536, 8192

    // stepsperupdate=stepspersecond/updatespersecond
    pVoice->delta=samplerstepspersecond/((uint32_t)AUDIO_UPDATE_FREQUENCY);
    
    // Zero pitch bend for new note
    pVoice->pitchbend=0;

    // Potential Optimization:  Use a more efficient volume multiply routine 
    //                          with early exit

    //pVoice->position=0;       // commented out to maintain phase if interrupted playing channel
    //pVoice->output_value=0;   // commented out to prevent audible click

    const AL_Instrument *pInstrument = pVoice->pInstrument;

    // Calculate overall voice volume (system*channel*voice*velocity)
    uint16_t compositevelocityvolume = (uint16_t) ((uint32_t) pVoice->compositevolume * (uint32_t) velocity)>>8;

    // Potential Optimization:  Only update when velocity or adsr are different 
    //                          (cache compositevolume and instrument)

    // Scale ADSR by voice velocity composite volume 
    AL_ADSR *pADSR_instrument = pInstrument->pADSR;
    AL_ADSR *pADSR_voice = &pVoice->ADSR_composite;
    pADSR_voice->attack_delta  = (uint16_t) ((uint32_t) pADSR_instrument->attack_delta * (uint32_t) compositevelocityvolume)>>8;
    pADSR_voice->attack_peak   = (uint16_t) ((uint32_t) pADSR_instrument->attack_peak * (uint32_t) compositevelocityvolume)>>8;
    pADSR_voice->decay_delta   = (uint16_t) ((uint32_t) pADSR_instrument->decay_delta * (uint32_t) compositevelocityvolume)>>8;
    pADSR_voice->sustain_value = (uint16_t) ((uint32_t) pADSR_instrument->sustain_value * (uint32_t) compositevelocityvolume)>>8;
    pADSR_voice->release_delta = (uint16_t) ((uint32_t) pADSR_instrument->release_delta * (uint32_t) compositevelocityvolume)>>8;
    // Start ADSR
    pVoice->ADSR_phase='a';
    pVoice->ADSR_volume=pADSR_voice->attack_delta;

    // Start vibrato
    pVoice->vibrato = 
    pVoice->vibrato_delta = 
        pInstrument->vibrato_delta;

    // Scale tremolo by voice velocity composite volume and start tremolo
    pVoice->tremolo =
    pVoice->tremolo_delta =
        (uint16_t) ((uint32_t) pInstrument->tremolo_delta * (uint32_t) compositevelocityvolume)>>8;
    pVoice->tremolo_amplitude =        
        (uint16_t) ((uint32_t) pInstrument->tremolo_amplitude * (uint32_t) compositevelocityvolume)>>8;

    // Set the initial sample volume
    pVoice->sample_volume = pVoice->ADSR_volume + pVoice->tremolo;

    // Start the voice playing
    pVoice->playing=true;
}

// Key a note on a voice off (trigger sound decay)
void audio_keyoff(   uint16_t channel,
                    uint16_t voice)
{
    AL_Voice *pVoice = &audio_system.channel[channel].voice[voice];
    if (pVoice->playing)
    {
        pVoice->ADSR_phase='r';
    }
}

// Stop and silence a voice
void audio_stopvoice(uint16_t channel,
                    uint16_t voice)
{
    // Stopping a voice immediately stops playing a sound
    // an audible click is possible
    audio_system.channel[channel].voice[voice].playing=false;
}

// Shutdown audio library and release resources
void audio_release( void )
{
#ifdef AUDIO_DEBUG
    printf("Audio release\n");
#endif
    // Nothing to do since audio library is statically allocated 
    // and update should no longer be called
}

// Initialize FIFO
void fifo_initialize(AL_FIFO* fifo)
{
    fifo->index_head=0;
    fifo->index_tail=0;
    fifo->free=AUDIO_FIFO_SIZE;
}

// Read an element from the FIFO
uint8_t fifo_read(AL_FIFO* fifo)
{
    if (fifo->free == AUDIO_FIFO_SIZE)
    {
        // FIFO empty
        // Return the last value in the fifo
        return fifo->audio_fifo[(fifo->index_tail-1)&((1<<AUDIO_FIFO_SIZE_POW2)-1)];
    }
    else
    {
        // Return current data and advance tail index
        uint8_t data=fifo->audio_fifo[fifo->index_tail++];
        
        // Wrap tail in buffer
        fifo->index_tail&=((1<<AUDIO_FIFO_SIZE_POW2)-1);
        
        // Track data read
        ++fifo->free;

        // Return data
        return data;
    }
}

// Write an element to the FIFO, return true if successful
uint8_t fifo_write(AL_FIFO* fifo,uint8_t data)
{
    // If the head passes the tail, one FIFO of data will be discarded
    if (fifo->free==0)
    {
        // FIFO full, fail write
        return false;
    }
    else
    {
        // Return current data and advance tail index
        fifo->audio_fifo[fifo->index_head++]=data;
        // Wrap tail in buffer
        fifo->index_head&=((1<<AUDIO_FIFO_SIZE_POW2)-1);
        // Track data written
        --fifo->free;
        // Return success
        return true;
    }
}

// Return the amount of data free in the FIFO
uint16_t fifo_free(AL_FIFO* fifo)
{
    return fifo->free;
}

// Return the amount of used in the FIFO
uint16_t fifo_used(AL_FIFO* fifo)
{
    return AUDIO_FIFO_SIZE-fifo->free;
}
