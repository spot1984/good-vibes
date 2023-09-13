/*
	audio_play_notes.c
	Audio library and mini midi player example
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

	Adapted PWM from ch32v003fun
	Example for using Advanced Control Timer (TIM1) for PWM generation
	03-28-2023 E. Brombaugh
 */

#include "ch32v003fun.h"
#include <stdio.h>
#include <stdbool.h>
#include "audio_shim.h"
#include "../audio_shared/audio_instruments.c"

// Structure to describe an instrument for this playback example
typedef struct {
	const AL_Instrument *pInstrument;
	char *name;
	uint8_t startnote,endnote;
} Instrument_description;

// list of instrument descriptions
Instrument_description instrument_descriptions[]={
	{&audio_instrument_piano,"piano",81},
	{&audio_instrument_synth,"synth",69},
	{&audio_instrument_fat_organ,"organ",57},
	{&audio_instrument_violin,"violin",81},
	{&audio_instrument_flute,"flute",81},
	{&audio_instrument_sax,"sax",57},
	{&audio_instrument_vibraphone,"vibraphone",81},
	{&audio_instrument_xylophone,"xylophone",69},
	{&audio_instrument_drum,"drum",57},
	{&audio_instrument_tom,"tom",57},
	{&audio_instrument_hihat,"hihat",105},
	{&audio_instrument_snare,"snare",81},
	{&audio_instrument_cymbol,"cymbol",128-12},
	{&audio_instrument_sine,"sine",81},
	{&audio_instrument_triangle,"triangle",81},
	{&audio_instrument_sawtooth,"sawtooth",81},
	{&audio_instrument_square,"square",81},
	{&audio_instrument_8bit,"8bit",81},
	{&audio_instrument_4octave_sine,"4octave_sine",81},
	{&audio_instrument_4octave_sawtooth,"4octave_sawtooth",81},
};

/*
 * initialize TIM1 for PWM
 */
void t1pwm_init( void )
{
	// Enable GPIOC, GPIOD and TIM1
	RCC->APB2PCENR |= 	RCC_APB2Periph_GPIOD | RCC_APB2Periph_GPIOC |
						RCC_APB2Periph_TIM1;
	
	// PD0 is T1CH1N, 10MHz Output alt func, push-pull
	GPIOD->CFGLR &= ~(0xf<<(4*0));
	GPIOD->CFGLR |= (GPIO_Speed_10MHz | GPIO_CNF_OUT_PP_AF)<<(4*0);

	// Reset TIM1 to init all regs
	RCC->APB2PRSTR |= RCC_APB2Periph_TIM1;
	RCC->APB2PRSTR &= ~RCC_APB2Periph_TIM1;
	
	// CTLR1: default is up, events generated, edge align
	// SMCFGR: default clk input is CK_INT

	// Prescaler 
	// CH32V003RM.pdf 
	//	10.2.3 Counters and peripherals
	// 		CK_PSC is input to the prescaler (PSC) for dividing. the PSC is 16-bit and 
	// 		the actual dividing factor is equal to the value of R16_TIMx_PSC + 1.
	TIM1->PSC = AUDIO_TIMER_PRESCALER-1;
	
	// Auto Reload - sets period and PWM max width
	TIM1->ATRLR = AUDIO_TIMER_RELOAD;	

	// Reload immediately
	TIM1->SWEVGR |= TIM_UG;
	
	// Enable CH1N output, positive pol
	TIM1->CCER |= TIM_CC1NE | TIM_CC1NP;
	
	// Enable CH4 output, positive pol
	TIM1->CCER |= TIM_CC4E | TIM_CC4P;
	
	// CH1 Mode is output, PWM1 (CC1S = 00, OC1M = 110)
	TIM1->CHCTLR1 |= TIM_OC1M_2 | TIM_OC1M_1;
	
	// Set the Capture Compare Register value to 50% initially
	TIM1->CH1CVR = 128;
	
	// Enable TIM1 outputs
	TIM1->BDTR |= TIM_MOE;
	
	NVIC_EnableIRQ( TIM1_UP_IRQn );
    TIM1->INTFR = ~TIM_FLAG_Update;
    TIM1->DMAINTENR |= TIM_IT_Update;

	// Enable TIM1
	TIM1->CTLR1 |= TIM_CEN;
}

// Timer 1 "UP" reload interrupt service routine
void TIM1_UP_IRQHandler(void) __attribute__((interrupt));
void TIM1_UP_IRQHandler() {
    if(TIM1->INTFR & TIM_FLAG_Update) {
        TIM1->INTFR = ~TIM_FLAG_Update;
		// Set channel 0 pwm value from fifo
		TIM1->CH1CVR = fifo_read(&audio_system.fifo); // PWM output on pin D0
    }
}

/*
 * entry
 */
int main()
{
	SystemInit();
	Delay_Ms( 100 );

	printf("\r\r\n\naudio_play_notes example\n\r");

	// init TIM1 for PWM
	printf("initializing tim1...");
	t1pwm_init();
	printf("done.\n\r");
		
	// Initialize audio system
	printf("initializing audio system...");
	audio_initialize();

// SysTick->CNT count for one second 
#define ONE_SECOND (FUNCONF_SYSTEM_CORE_CLOCK/8)

// Time for attack, decay, sustain
#define INTERVAL1 (0.75*ONE_SECOND/2)
// Time for release
#define INTERVAL2 (0.25*ONE_SECOND/2)

	uint32_t timertarget=SysTick->CNT+INTERVAL1;
	uint32_t timerstate=0;
	uint16_t noteindex=0;
	uint16_t instrumentindex = 0;
	const uint16_t notedeltas[]= {0,2,3,5,7,8,10,12};
	uint16_t volume=255;

	printf("looping...\n\r");
	while(true)
	{
		if ((timertarget - SysTick->CNT) & 0x80000000)
		{
			switch (timerstate)
			{
				case 0:
					// Time to play a new note

					// Update timer target
					timertarget+=INTERVAL1;

					// Update state variable to decay next
					++timerstate;

					// Set instrument
					audio_set_instrument(0,0,instrument_descriptions[instrumentindex].pInstrument);

					// Determine midi note					
					uint16_t note = instrument_descriptions[instrumentindex].startnote+notedeltas[noteindex];

					// Lookup frequency of note
					extern uint16_t midi_note_frequencies[];
					uint16_t frequency = midi_note_frequencies[note];

					// Key on sound on channel 0, voice 0
					audio_keyon(0,0,frequency,volume);

					// Print out
					printf("Instrument: %s, midi note: %d, frequency: %d, volume:%d\n",
						instrument_descriptions[instrumentindex].name, note, frequency, volume);

					// Decrease volume
					volume -= 32;

					// Cycle through notes in a scale
					if (++noteindex >= sizeof(notedeltas)/sizeof(uint16_t))
					{
						noteindex=0;
						volume=255;

						// Cycle through instruments
						if (++instrumentindex >= sizeof(instrument_descriptions)/sizeof(Instrument_description))
						{
							instrumentindex=0;
						}
					}

					break;

				case 1:
					// Time to key off note and start decay

					// Update timer target
					timertarget+=INTERVAL2;

					// Update state variable to play note next
					timerstate=0;

					// Key off note on channel 0 voice 0, start decay
					audio_keyoff(0,0);
					break;
			}
		}
		
			// Keep audio fifo full
		while (fifo_free(&audio_system.fifo))
		{
			// Update audio system
			audio_update();
			
			// Write current audio sample to the fifo
			fifo_write(&audio_system.fifo,audio_get_channel_value(0));
		}
		
		// Do whatever your program needs to do here, so long as it doesn't
		// starve the audio fifo or disrupt the timer 1 interrupt 
	}

	// Shut down mini midi player
	midi_player_release();

	// Shut down audio system
	audio_release();
}
 