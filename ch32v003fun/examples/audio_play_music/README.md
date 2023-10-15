# good-vibes audio library <br> (&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;(&nbsp;&nbsp;&nbsp;(&nbsp;&nbsp;(&nbsp;((-_-))&nbsp;)&nbsp;&nbsp;)&nbsp;&nbsp;&nbsp;)&nbsp;&nbsp;&nbsp;&nbsp;) 

A cross platform audio library.

(c) 2023 D. Scott Williamson <br>
spot1984@gmail.com

The audio library is provided under GNU Lesser General Public License version 2.1.  
The ch32v001 hal, examples, and instruments are provided under the same MIT license as ch32v001fun.
The appropriate license fils are in their respective directories.

#  Example:`audio_play_music`
This example demonstrates:
* Polyphonic music playback using good-vibes Mini MIDI and audio libraries
  * Set one of 12 songs to play back by setting `MIDI_SONG`<br>
	  ```// Song to play
	  // 1 Toccata and Fugue in Dm
	  // 2 Solfeggietto
	  // 3 Fur Elise
	  // 4 Brandenburg Concerto #3
	  // 5 Korobeiniki (Tetris theme)
	  // 6 In the hall of the Mountain King
	  // 7 Super Mario Bros Theme
	  // 8 Sweet Child of Mine
	  // 9 Brandenburg-Concerto-Nr-5-Bwv-1047
	  // 10 Tubular Bells (The Exorcist Theme)
	  // 11 Godzilla
	  // 12 Blister in the Sun
	  #define MIDI_SONG 12
	  ```
      **Note:** Four and Eight voice versions of each song have been included, the correct mini MIDI file will be included based on the number of voices configured in [audio_configuration.h](audio_configuration.h) (see below)
	  
  * The simplicity of starting the good-vibes audio library, midi library, setting instruments, and playing music<br>
	  ```
	  int main()
	  {
	  	SystemInit();
	  	Delay_Ms( 100 );
	  
	  	printf("\r\r\n\naudio_play_music example\n\r");
	  
	  	// init TIM1 for PWM
	  	printf("initializing tim1...");
	  	t1pwm_init();
	  	printf("done.\n\r");
			  
	  	// Initialize audio system
	  	printf("initializing audio system...");
	  	audio_initialize();
	  
	  	// Initialize mini midi player
	  	printf("initializing mini midi player...");
	  	midi_player_initialize();
	  
	  	// Set up track instruments
	  	for(int voice=0; voice<AUDIO_VOICES; ++voice)
	  	{
	  		audio_set_instrument(0,voice,pinstrument);
	  	}
	  
	  	printf("looping...\n\r");
	  	while(true)
	  	{
	  		// Play the song if none is playing 
	  		if (midi_player_playing_song()==false)
	  		{
	  
	  			// Start the song
	  			midi_player_start_song(0,(uint8_t*) song);
	  		}
	  		
	  		// Keep audio fifo full
	  		while (fifo_free(&audio_system.fifo))
	  		{
	  			// Update midi player
	  			midi_player_update();
	  
	  			// Update audio system
	  			audio_update();
	  			
	  			// Write current audio sample to the fifo
	  			fifo_write(&audio_system.fifo,audio_get_channel_value(0));
	  
	  		}
	  		
	  		// Do whatever your program needs to do here, so long as it doesn't
	  		// starve the audio fifo or disrupt the timer 1 interrupt 
	  	}
	  
	  	// Shut down mini midi player
	  	printf("releasing mini midi player...");
	  	midi_player_release();
	  
	  	// Shut down audio system
	  	printf("initializing audio system...");
	  	audio_release();
	  }
	  ```
* Playback loop updating the audio FIFO for playback from interrupt service routine
* Use Timer 1 for both PWM (pulse width modulation) and as the interrupt timer source
* The configuration of the good-vibes audio library for the ch32v003 processor

PWM audio output is on PD0, connect it and ground to a high impedance amplified speaker input.  
**DO NOT** connect PD0 directly to a low impedance like an unamplified speaker, it may damage the processor.

### Files
[audio_play_music.c](audio_play_music.c) Is the sample source file<br> 
[audio_shim.c](audio_shim.c) Includes the good-vibes audio library files and ch32v003 hardware abstraction header into the example.<br>
[audio_configuration.h](audio_configuration.h) Configures the good-vibes audio library:
* One output channel
* Four or eight voices per output channel, default eight (2^2^ or 2^3^ respectively)
* playback and PWM frequency of 16000 samples per second
* Audio FIFO buffer size of 128 bytes (2^7^)

### Shared folder
[audio_shared](../audio_shared) The folder of shared audio source files used in multiple samples:
* [audio_instruments.c](../audio_shared/audio_instruments.c) Instrument definitions that may be shared in examples or used in projects
* [audio_hal_ch32v003.h](../audio_shared/audio_hal_ch32v003.h) Hardware abstraction header for the ch32V003 RISC V processor (does not require user modification)

