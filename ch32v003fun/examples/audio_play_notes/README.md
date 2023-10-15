
# good-vibes audio library <br> (&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;(&nbsp;&nbsp;&nbsp;(&nbsp;&nbsp;(&nbsp;((-_-))&nbsp;)&nbsp;&nbsp;)&nbsp;&nbsp;&nbsp;)&nbsp;&nbsp;&nbsp;&nbsp;) 

A cross platform audio library.

(c) 2023 D. Scott Williamson <br>
spot1984@gmail.com

The audio library is provided under GNU Lesser General Public License version 2.1.  
The ch32v001 hal, examples, and instruments are provided under the same MIT license as ch32v001fun.
The appropriate license fils are in their respective directories.

#  Example:`audio_play_notes`
This example demonstrates:
* Playing notes of different instruments with different velocities and pitches
* Playback loop updating the audio FIFO for playback from interrupt service routine
* Use Timer 1 for both PWM (pulse width modulation) and as the interrupt timer source
* The configuration of the good-vibes audio library for the ch32v003 processor<br>using 

PWM audio output is on PD0, connect it and ground to a high impedance amplified speaker input.  
**DO NOT** connect PD0 directly to a low impedance like an unamplified speaker, it may damage the processor.

### Files
[audio_play_notes.c](audio_play_notes.c) Is the sample source file<br> 
[audio_shim.c](audio_shim.c) Includes the good-vibes audio library files and ch32v003 hardware abstraction header into the example.<br>
[audio_configuration.h](audio_configuration.h) Configures the good-vibes audio library for one voice on one output channel with a playback and PWM frequency of 32000 samples per second.


### Shared folder
[../audio_shared](../audio_shared) The folder of shared audio source files used in multiple samples:
* [audio_instruments.c](../audio_shared/audio_instruments.c) Instrument definitions that may be shared in examples or used in projects
* [audio_hal_ch32v003.h](../audio_shared/audio_hal_ch32v003.h) Hardware abstraction header for the ch32V003 RISC V processor (does not require user modification)

