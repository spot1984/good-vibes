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


## Mini MIDI Converter 
[midiconverter.py](midiconverter.py) Converts the specified MIDI file to a good-vibes mini MIDI .c souce file to be compiled into an application.  In addition to the MIDI input filespec and .c output filespec the program accepts the number of voices to play the music on which should be between one and the number of voices configured in the good-vibes audio library.  Lower voice counts may cause notes to interrupt one another degrading music playback quality.  The final optional parameter is a maximum byte count that is used to truncate files so they may fit in the target memory budget.

### Usage

```
python midiconverter.py input_midi output_c \[byte_count\]
	input_midi    input MIDI filespec to be converted
	output_c      output c filespec, this file will be overwritten without warning!
	voices        number of voices
	byte_count    byte count limit for output file
```

### Included examples
The [midi](midi) directory contains example MIDI files, the [convertmidi.bat](midi/convertmidi.bat) batch file to convert all of them for 4 and 8 voice configruations of the [audio_play_music example](../../audio_play_music/README.md) found [here](../../ch32v003fun\examples\audio_play_music).  If you want to modify or add additional music files to the example, be sure to coppy the appropriate .c files to the [audio_play_music\/music](ch32v003fun\examples\audio_play_music\music) directory and include them in the sample code before compilation.

### Current limitations and future work

* The audio library supports simultaneous playback of different instruments on each voice, the mini MIDI player does not yet support multiple instruments.  
* The audio library supports pitch bend but MIDI controllers such as pitch bend are not yet supported
