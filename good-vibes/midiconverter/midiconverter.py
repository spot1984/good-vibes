'''
    midiconverter.py
    mini midi converter for good-vibes audio library midi player 
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

    ***************************************************************************
    
    Welcome to my monolith...
    I'm not proud of the code in this file but it works and it's been fun.
    What do you expect for free?  ;-)
    
    Usage:
        python midiconverter.py input_midi output_c [byte_count]
            input_midi    input midi filespec to be converted
            output_c      output c filespec, this file will be overwritten without warning!
            voices        number of voices
            byte_count    byte count limit for output file

    This program uses the mido midi library: https://pypi.org/project/mido/
    Install mido:
        python3 -m pip install mido
        
    ***************************************************************************
    
    ToDo
        [x] V2 8 voice
            byt bit desc
            1   8   ticks
                    0xff song end (max delay 253)
                    0xfe extended delay (16 bit delay) two more bytecount then note info
            2   1.7 voice.2 high and note
                6.2 velocity.6 voicelow.2, velocity 0 is note off  
        [] Investigate drum events (dolb.mid)
        [] V3 (work in progress)
            v3 concept 8 channels, 8 instruments
            cmd    
            0 delay short    1    cmd.3:delay.5
            1 delay long     2    cmd.3:delay.5 delay.8 
            2 key on         3    cmd.3:voice.3,instrument.1 instrument.1,note:7, velocity:instrument.1
            3 key off        1    cmd.3:x.2:voice.3
            4 set tempo      2    cmd.3:tempo.5 tempo.8
            5 song end       1    cmd.3.x.6
            6 controller (pitch bend) ?
            7 unused
        [] v4 (work in progress) maintain original midi tracks
            0 delay short    1    cmd.3:delay.5
            1 delay long     2    cmd.3:delay.5 delay.8 
            2 key on         3    cmd.3:voice.3,instrument.1 instrument.1,note:7, velocity:instrument.1
            3 key off        1    cmd.3:x.2:voice.3
            4 set tempo      2    cmd.3:tempo.5 tempo.8
            5 song end       1    cmd.3.x.6
            6 controller (pitch bend) ?
            7 unused
            
        [] Starting tick delay
        [] Map track instruments to mini midi instruments
        [] Define instrument bank in header
'''

from mido import MidiFile
import sys

###############################################################################
# Program entry
# Input section

def usage():
    #      0123456789001234567890012345678900123456789001234567890012345678900123456789001234567890
    print("midiconverter.py")
    print("Mini-midi converter for use with CH32V003 mini-midi player")
    print("by D. Scott Williamson 2023")
    print("")
    print("Usage:")
    print("    python midiconverter.py input_midi output_c [byte_count]")
    print("        input_midi    input midi filespec to be converted")
    print("        output_c      output c filespec, this file will be overwritten without warning!")
    print("        voices        number of voices")
    print("        byte_count    byte count limit for output file")
    
    print("")


# read and validate inputs
if (len(sys.argv)!=5):
    print("ERROR: Wrong number of arguments: %d (expected 4)\n"%(len(sys.argv)-1))
    print (sys.argv)
    usage()
    exit(1)

# input midi file 
in_midi_filespec=sys.argv[1] # path to midi file

# output c file
out_c_filespec=sys.argv[2] # destination path

# voices
voices=int(sys.argv[3])

# byte limit
bytelimit=int(sys.argv[4])

###############################################################################
# Read and parse source midi file

# list all the messages in all the tracks of a midi file 
def midi_list_events(mid): 
    for i, track in enumerate(mid.tracks):
        print('Track {}: {}'.format(i, track.name))
        for msg in track:
            print(msg)
            # exit on first note off to see early events 
            #if msg.type=='note_off':
            #    exit(0)      


# open midifile
mid = MidiFile(in_midi_filespec)
          
# initialize timing values
ticksperbeat=mid.ticks_per_beat;
tempo=500000

# list to capture timestamped events from all tracks
events=[]

# track the number of unique notes and velocities used in the midi file
notes=set()
velocities=set()
for i, track in enumerate(mid.tracks):
    #print('Track {}: {}'.format(i, track.name))
    stime=0
    for msg in track:
        #print(msg)
         
        # keep track of the absolute tick time
        stime+=msg.time 
        if msg.time <0:
            print("ERROR: Negative mini message time (ticks), exiting")
            exit(1)
        #print(msg.time)
        
        # handle message events
        
        if msg.type=='set_tempo':
            # not sure if stime should be calculated after tempo change
            tempo=msg.tempo
            # this is a bs way to encode tempo but the events
            events.append(("tempo",stime,i,msg.tempo))
        
        if msg.type=='note_on' or msg.type=='note_off':
            track=i
            note=msg.note
            if msg.type=='note_on':
                velocity=msg.velocity
            else:
                velocity=0
            velocities.add(velocity)
            notes.add(note)
            events.append(("note",stime,i,note,velocity))
            
# sort all the events from all channels by absolute timestamp (in ticks)            
events.sort(key=lambda a:a[1])

###############################################################################
# Output target c file for use with mini-midi player on CH32V003

# create output file
f = open(out_c_filespec, "w")

# write C comment and array declaration information
f.write('''/*
    minimidi file created by midiconverter.py v2 
        
    Times are in 10 ms (.010s)
    Assumes same instrument is on all tracks
    
    byt bit desc
    1   8   ticks
            0xff song end (max delay 253)
            0xfe extended delay (16 bit delay) two more bytecount then note info
            
    2   1.7 voicehigh.1 note.7
        6.2 velocity.6 voicelow.2, velocity 0 is note off
*/\n
const unsigned char song[]={\n
''')

# centralize logic to pick a voice to play a sound
def pickvoice():
    # select first 0 volume voice or lowest volume voice
    # ignores instrument from track
    # todo ignores decay from key off, need more 
    minv=255
    voice=0
    for i in range(voices):
        if voicevolume[i]==0:
            voice=i
            break   
        if voicevolume[i]<minv:
            minv=voicevolume[i]
            voice=i
    return voice

# select a voice playing a note for note of events
def findvoice(note):
    # select first voice playing same note
    # ignores instrument from track, different tracks may play the same note at the same time
    # this finds the first one
    voice=None
    for i in range(voices):
        if voicenote[i]==note:
            voice=i
            break   
    return voice

# track maximum difference in time
maxdt=0
# track the number of long deltatime events
over=0
# track the number of normal delta time events
under=0

# Track the notes and volumes on each voice
voicenote=[0]*voices
voicevolume=[0]*voices


# previous tick count
pticks=0
# delta tick count
dticks=0

# output byte count
bytecount=0
# set midi default tempo
tempo=500000
for i in range(len(events)):
    # lazy comparison to worst case
    if (bytecount+1+4)>=bytelimit:
        print("Byte limit reached (limit: %d), stopping output."%(bytelimit))
        break
    
    # get event
    event=events[i]
    
    # get parts of events
    # type
    etype=event[0]
    # absolute tick time
    ticks=event[1]
    # track number
    track=event[2]

    # accumulate elapsed ticks (needed to account for tempo change events that don't coincide with note events) 
    dticks+=ticks-pticks
    # update previous ticks for delta calculation 
    pticks=ticks
    
    # calculate delta time in 1/100ths of a second
    dtime=int(tempo*dticks*100/(ticksperbeat*1000000.0))
   
    # track maximum delta time 
    if dtime>maxdt:
        maxdt=dtime
    
    # print events
    #print(i, bytecount, dtime,event)

    # process events by type
    if 'tempo' in etype:
        # get tempo from event payload
        tempo=event[3]
    elif 'note' in etype:
        # get note and velocity from event payload
        note=event[3]
        velocity=event[4]
        # determine if note on or note off
        if velocity!=0:
            # note on
            # pick voice to play on
            voice=pickvoice()
            voicenote[voice]=note
            voicevolume[voice]=velocity
        else:
            # note off
            # find voice note is playing on
            voice=findvoice(note)
            if voice!=None:
                voicenote[voice]=0
                voicevolume[voice]=0
        if voice==None:
            f.write('\t// Note off skipped, note %d not found in channels, probably interrupted\n'%(note))
        else:
            # output 
            # output delta time in 1/100ths of a second
            if dtime<=253:
                # small delta
                # track count of small delta events
                under+=1
                # write normal time event
                f.write('\t%d,'%(dtime))
                # track output bytes
                bytecount+=1
            else:
                # large delta
                # track count of large delta events
                over+=1
                # write extended time event
                f.write('\t0xfe,%d,%d,'%(int((dtime/256))&0xff,int(dtime)&0xff))
                # track output bytes
                bytecount+=3
            
            # output note bytes
            
            # v1 output (4 voices, 7 bit velocity)
            #f.write('%d,'%(((voice&2)<<6)|(note&0x7f)))            # bit packed binary output
            #f.write('%d,'%((voice&1)|((velocity&0x7f)<<1)))        # bit packed binary output
            #f.write('((( %d &2)<<6)|( %d &0x7f)), '%(voice,note))   # more human readable(ish) output
            #f.write('((%d &1)|((%d &0x7f)<<1)),'%(voice,velocity))  # more human readable(ish) output
            
            # v2 output (8 voices, 6 bit velocity)
            f.write('((( %d &4)<<5)|( %d &0x7f)), '%(voice,note))   # more human readable(ish) output
            f.write('((%d &3)|((%d &0x7e)<<1)),'%(voice,velocity))  # more human readable(ish) output
            
            # add comment to line with explanation
            f.write('\t//# %d, ticks %d, elapsed %d, voice: %d note: %d velocity %d event %s\n'%(i,ticks,dtime,voice, note, velocity, str(event)))
            
            # track output bytes
            bytecount+=2
            # reset delta time
            dticks=0

    if dtime < 0:
        print("wtf")
        exit(999)    

# write end song byte    
f.write('0xff };\n\n')
bytecount+=1

# close the output file
f.close()

# display statistics gathered in the process
print("%d bytecount"%(bytecount))
print("%d ticks per beat"%(mid.ticks_per_beat))
print("%d notes %d velocities"%(len(notes),len(velocities)))
print("longest delay ",maxdt)
print("under %d over %d total %d percent over %.1f%% "%(under,over,under+over,float(over)*100.0/float(under+over)))



