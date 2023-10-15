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

The Audio library is a device independent library to create sound and music.  The library supports multiple physical output channels like left and right channels with separate output pins.  Each channel is polyphonic meaning it may play multiple sounds at the same time like keys on a keyboard.  Each sound is defined as an instrument that includes a waveform generator, an ADSR envelope, vibrato, and tremelo settings.  Included are sine wave, triangle wave, sawtooth, square, and other waveform generators.  ADSR stands for Attack, Decay, Sustain, and Release which are used to shape the volume profile of the sound when started, sustained, and released.  Think of a key on a piano, when you hit the key the volume is very loud very quickly, this is the attack, then the volume decays to a normal level while you hold the key down, this is the decay to the sustain level.  Finally, when you release the key the volume tapers to silence, this is the decay.  Vibrato is a cyclic chainge in frequency that causes a warbly type of sound typically heard by the sustain.  This occurs when a violinist or guitarist bends the string or rocks their finger back and forth on the fretboard while a note is played.  Tremolo is a cyclic change in volume similar to vibrato but for amplitude.  

## Mini MIDI Library
The mini MIDI library is able to play songs converted from MIDI files by the python script accompanying the library.  The midiconverter.py script can convert MIDI files into a source code that can be compiled into the application and played back.

## Development Reference
* [General audio and mini MIDI description](README.md)
* [Detailed audio and mini MIDI library API and details](audiolib/README.md)

## Examples for ch32v001
* [ch32v003fun/examples/audio](../ch32v003fun/examples) Audio examples are in here
  * [audio_play_notes](../ch32v003fun/examples/audio_play_notes/README.md) Audio playback example
  * [audio_play_music](../ch32v003fun/examples/audio_play_music/README.md) Music playback example
  * [audio_shared](../ch32v003fun/examples/audio_shared) Hardware abstraction for the ch32v001 and shared files for examples

## Future work

* The audio library supports simultaneous playback of different instruments on each voice, the mini MIDI player does not yet support multiple instruments.  
* The audio library supports pitch bend but MIDI controllers such as pitch bend are not yet supported
