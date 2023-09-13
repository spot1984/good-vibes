/*
    minimidi file created by midiconverter.py v2 
        
    Times are in 10 ms (.010s)
    Assumes same instrument is on all tracks
    
    byt bit desc
    1   8   ticks
            0xff song end (max delay 253)
            0xfe extended delay (16 bit delay) two more bytecount then note info
            
    2   1.7 voicehigh.1 note.7
        6.2 velocity.6 voicelow.2, velocity 0 is note off
*/

const unsigned char song[]={

	199,((( 0 &4)<<5)|( 79 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1, ticks 420, elapsed 199, voice: 0 note: 79 velocity 64 event ('note', 420, 1, 79, 64)
	0,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2, ticks 420, elapsed 0, voice: 1 note: 67 velocity 64 event ('note', 420, 2, 67, 64)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3, ticks 420, elapsed 0, voice: 2 note: 67 velocity 64 event ('note', 420, 3, 67, 64)
	0,((( 3 &4)<<5)|( 55 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 4, ticks 420, elapsed 0, voice: 3 note: 55 velocity 64 event ('note', 420, 4, 55, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 5, ticks 420, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 420, 5, 55, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 6, ticks 420, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 420, 6, 43, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 7, ticks 420, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 420, 7, 43, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 8, ticks 420, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 420, 8, 43, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 9, ticks 420, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 420, 9, 43, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 10, ticks 420, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 420, 10, 43, 64)
	// Note off skipped, note 79 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 12, ticks 449, elapsed 13, voice: 1 note: 67 velocity 0 event ('note', 449, 2, 67, 0)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 13, ticks 449, elapsed 0, voice: 2 note: 67 velocity 0 event ('note', 449, 3, 67, 0)
	0,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 14, ticks 450, elapsed 0, voice: 1 note: 78 velocity 64 event ('note', 450, 1, 78, 64)
	0,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 15, ticks 450, elapsed 0, voice: 2 note: 66 velocity 64 event ('note', 450, 2, 66, 64)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 16, ticks 450, elapsed 0, voice: 0 note: 66 velocity 64 event ('note', 450, 3, 66, 64)
	13,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 17, ticks 479, elapsed 13, voice: 1 note: 78 velocity 0 event ('note', 479, 1, 78, 0)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 18, ticks 479, elapsed 0, voice: 0 note: 66 velocity 0 event ('note', 479, 2, 66, 0)
	0,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 19, ticks 479, elapsed 0, voice: 2 note: 66 velocity 0 event ('note', 479, 3, 66, 0)
	0,((( 3 &4)<<5)|( 55 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 20, ticks 479, elapsed 0, voice: 3 note: 55 velocity 0 event ('note', 479, 4, 55, 0)
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 79 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 27, ticks 480, elapsed 0, voice: 0 note: 79 velocity 64 event ('note', 480, 1, 79, 64)
	0,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 28, ticks 480, elapsed 0, voice: 1 note: 67 velocity 64 event ('note', 480, 2, 67, 64)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 29, ticks 480, elapsed 0, voice: 2 note: 67 velocity 64 event ('note', 480, 3, 67, 64)
	0,((( 3 &4)<<5)|( 59 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 30, ticks 480, elapsed 0, voice: 3 note: 59 velocity 64 event ('note', 480, 4, 59, 64)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 31, ticks 480, elapsed 0, voice: 0 note: 59 velocity 64 event ('note', 480, 5, 59, 64)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 32, ticks 480, elapsed 0, voice: 0 note: 47 velocity 64 event ('note', 480, 6, 47, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 33, ticks 480, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 480, 7, 43, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 34, ticks 480, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 480, 8, 43, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 35, ticks 480, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 480, 9, 43, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 36, ticks 480, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 480, 10, 43, 64)
	// Note off skipped, note 79 not found in channels, probably interrupted
	28,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 38, ticks 539, elapsed 28, voice: 1 note: 67 velocity 0 event ('note', 539, 2, 67, 0)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 39, ticks 539, elapsed 0, voice: 2 note: 67 velocity 0 event ('note', 539, 3, 67, 0)
	0,((( 3 &4)<<5)|( 59 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 40, ticks 539, elapsed 0, voice: 3 note: 59 velocity 0 event ('note', 539, 4, 59, 0)
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 43, ticks 539, elapsed 0, voice: 0 note: 43 velocity 0 event ('note', 539, 7, 43, 0)
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 47, ticks 540, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 540, 1, 74, 64)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 48, ticks 540, elapsed 0, voice: 1 note: 62 velocity 64 event ('note', 540, 2, 62, 64)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 49, ticks 540, elapsed 0, voice: 2 note: 62 velocity 64 event ('note', 540, 3, 62, 64)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 50, ticks 540, elapsed 0, voice: 3 note: 62 velocity 64 event ('note', 540, 4, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 51, ticks 540, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 540, 5, 62, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 52, ticks 540, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 540, 6, 50, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 53, ticks 540, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 540, 7, 55, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 54, ticks 540, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 540, 8, 55, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 55, ticks 540, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 540, 9, 55, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 56, ticks 540, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 540, 10, 55, 64)
	// Note off skipped, note 74 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 58, ticks 569, elapsed 13, voice: 1 note: 62 velocity 0 event ('note', 569, 2, 62, 0)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 59, ticks 569, elapsed 0, voice: 2 note: 62 velocity 0 event ('note', 569, 3, 62, 0)
	0,((( 1 &4)<<5)|( 72 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 60, ticks 570, elapsed 0, voice: 1 note: 72 velocity 64 event ('note', 570, 1, 72, 64)
	0,((( 2 &4)<<5)|( 60 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 61, ticks 570, elapsed 0, voice: 2 note: 60 velocity 64 event ('note', 570, 2, 60, 64)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 62, ticks 570, elapsed 0, voice: 0 note: 60 velocity 64 event ('note', 570, 3, 60, 64)
	13,((( 1 &4)<<5)|( 72 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 63, ticks 599, elapsed 13, voice: 1 note: 72 velocity 0 event ('note', 599, 1, 72, 0)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 64, ticks 599, elapsed 0, voice: 0 note: 60 velocity 0 event ('note', 599, 2, 60, 0)
	0,((( 2 &4)<<5)|( 60 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 65, ticks 599, elapsed 0, voice: 2 note: 60 velocity 0 event ('note', 599, 3, 60, 0)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 66, ticks 599, elapsed 0, voice: 3 note: 62 velocity 0 event ('note', 599, 4, 62, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 73, ticks 600, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 600, 1, 74, 64)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 74, ticks 600, elapsed 0, voice: 1 note: 62 velocity 64 event ('note', 600, 2, 62, 64)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 75, ticks 600, elapsed 0, voice: 2 note: 62 velocity 64 event ('note', 600, 3, 62, 64)
	0,((( 3 &4)<<5)|( 59 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 76, ticks 600, elapsed 0, voice: 3 note: 59 velocity 64 event ('note', 600, 4, 59, 64)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 77, ticks 600, elapsed 0, voice: 0 note: 59 velocity 64 event ('note', 600, 5, 59, 64)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 78, ticks 600, elapsed 0, voice: 0 note: 47 velocity 64 event ('note', 600, 6, 47, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 79, ticks 600, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 600, 7, 55, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 80, ticks 600, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 600, 8, 55, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 81, ticks 600, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 600, 9, 55, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 82, ticks 600, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 600, 10, 55, 64)
	// Note off skipped, note 74 not found in channels, probably interrupted
	28,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 84, ticks 659, elapsed 28, voice: 1 note: 62 velocity 0 event ('note', 659, 2, 62, 0)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 85, ticks 659, elapsed 0, voice: 2 note: 62 velocity 0 event ('note', 659, 3, 62, 0)
	0,((( 3 &4)<<5)|( 59 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 86, ticks 659, elapsed 0, voice: 3 note: 59 velocity 0 event ('note', 659, 4, 59, 0)
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 89, ticks 659, elapsed 0, voice: 0 note: 55 velocity 0 event ('note', 659, 7, 55, 0)
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 79 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 93, ticks 660, elapsed 0, voice: 0 note: 79 velocity 64 event ('note', 660, 1, 79, 64)
	0,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 94, ticks 660, elapsed 0, voice: 1 note: 67 velocity 64 event ('note', 660, 2, 67, 64)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 95, ticks 660, elapsed 0, voice: 2 note: 67 velocity 64 event ('note', 660, 3, 67, 64)
	0,((( 3 &4)<<5)|( 55 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 96, ticks 660, elapsed 0, voice: 3 note: 55 velocity 64 event ('note', 660, 4, 55, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 97, ticks 660, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 660, 5, 55, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 98, ticks 660, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 660, 6, 43, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 99, ticks 660, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 660, 7, 43, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 100, ticks 660, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 660, 8, 43, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 101, ticks 660, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 660, 9, 43, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 102, ticks 660, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 660, 10, 43, 64)
	// Note off skipped, note 79 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 104, ticks 689, elapsed 13, voice: 1 note: 67 velocity 0 event ('note', 689, 2, 67, 0)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 105, ticks 689, elapsed 0, voice: 2 note: 67 velocity 0 event ('note', 689, 3, 67, 0)
	0,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 106, ticks 690, elapsed 0, voice: 1 note: 78 velocity 64 event ('note', 690, 1, 78, 64)
	0,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 107, ticks 690, elapsed 0, voice: 2 note: 66 velocity 64 event ('note', 690, 2, 66, 64)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 108, ticks 690, elapsed 0, voice: 0 note: 66 velocity 64 event ('note', 690, 3, 66, 64)
	13,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 109, ticks 719, elapsed 13, voice: 1 note: 78 velocity 0 event ('note', 719, 1, 78, 0)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 110, ticks 719, elapsed 0, voice: 0 note: 66 velocity 0 event ('note', 719, 2, 66, 0)
	0,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 111, ticks 719, elapsed 0, voice: 2 note: 66 velocity 0 event ('note', 719, 3, 66, 0)
	0,((( 3 &4)<<5)|( 55 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 112, ticks 719, elapsed 0, voice: 3 note: 55 velocity 0 event ('note', 719, 4, 55, 0)
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 79 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 119, ticks 720, elapsed 0, voice: 0 note: 79 velocity 64 event ('note', 720, 1, 79, 64)
	0,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 120, ticks 720, elapsed 0, voice: 1 note: 67 velocity 64 event ('note', 720, 2, 67, 64)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 121, ticks 720, elapsed 0, voice: 2 note: 67 velocity 64 event ('note', 720, 3, 67, 64)
	0,((( 3 &4)<<5)|( 59 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 122, ticks 720, elapsed 0, voice: 3 note: 59 velocity 64 event ('note', 720, 4, 59, 64)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 123, ticks 720, elapsed 0, voice: 0 note: 59 velocity 64 event ('note', 720, 5, 59, 64)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 124, ticks 720, elapsed 0, voice: 0 note: 47 velocity 64 event ('note', 720, 6, 47, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 125, ticks 720, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 720, 7, 43, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 126, ticks 720, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 720, 8, 43, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 127, ticks 720, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 720, 9, 43, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 128, ticks 720, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 720, 10, 43, 64)
	// Note off skipped, note 79 not found in channels, probably interrupted
	28,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 130, ticks 779, elapsed 28, voice: 1 note: 67 velocity 0 event ('note', 779, 2, 67, 0)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 131, ticks 779, elapsed 0, voice: 2 note: 67 velocity 0 event ('note', 779, 3, 67, 0)
	0,((( 3 &4)<<5)|( 59 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 132, ticks 779, elapsed 0, voice: 3 note: 59 velocity 0 event ('note', 779, 4, 59, 0)
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 135, ticks 779, elapsed 0, voice: 0 note: 43 velocity 0 event ('note', 779, 7, 43, 0)
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 139, ticks 780, elapsed 0, voice: 0 note: 71 velocity 64 event ('note', 780, 1, 71, 64)
	0,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 140, ticks 780, elapsed 0, voice: 1 note: 59 velocity 64 event ('note', 780, 2, 59, 64)
	0,((( 2 &4)<<5)|( 59 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 141, ticks 780, elapsed 0, voice: 2 note: 59 velocity 64 event ('note', 780, 3, 59, 64)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 142, ticks 780, elapsed 0, voice: 3 note: 62 velocity 64 event ('note', 780, 4, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 143, ticks 780, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 780, 5, 62, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 144, ticks 780, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 780, 6, 50, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 145, ticks 780, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 780, 7, 55, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 146, ticks 780, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 780, 8, 55, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 147, ticks 780, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 780, 9, 55, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 148, ticks 780, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 780, 10, 55, 64)
	// Note off skipped, note 71 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 150, ticks 809, elapsed 13, voice: 1 note: 59 velocity 0 event ('note', 809, 2, 59, 0)
	0,((( 2 &4)<<5)|( 59 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 151, ticks 809, elapsed 0, voice: 2 note: 59 velocity 0 event ('note', 809, 3, 59, 0)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 152, ticks 810, elapsed 0, voice: 1 note: 69 velocity 64 event ('note', 810, 1, 69, 64)
	0,((( 2 &4)<<5)|( 57 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 153, ticks 810, elapsed 0, voice: 2 note: 57 velocity 64 event ('note', 810, 2, 57, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 154, ticks 810, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 810, 3, 57, 64)
	13,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 155, ticks 839, elapsed 13, voice: 1 note: 69 velocity 0 event ('note', 839, 1, 69, 0)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 156, ticks 839, elapsed 0, voice: 0 note: 57 velocity 0 event ('note', 839, 2, 57, 0)
	0,((( 2 &4)<<5)|( 57 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 157, ticks 839, elapsed 0, voice: 2 note: 57 velocity 0 event ('note', 839, 3, 57, 0)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 158, ticks 839, elapsed 0, voice: 3 note: 62 velocity 0 event ('note', 839, 4, 62, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 165, ticks 840, elapsed 0, voice: 0 note: 71 velocity 64 event ('note', 840, 1, 71, 64)
	0,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 166, ticks 840, elapsed 0, voice: 1 note: 59 velocity 64 event ('note', 840, 2, 59, 64)
	0,((( 2 &4)<<5)|( 59 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 167, ticks 840, elapsed 0, voice: 2 note: 59 velocity 64 event ('note', 840, 3, 59, 64)
	0,((( 3 &4)<<5)|( 59 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 168, ticks 840, elapsed 0, voice: 3 note: 59 velocity 64 event ('note', 840, 4, 59, 64)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 169, ticks 840, elapsed 0, voice: 0 note: 59 velocity 64 event ('note', 840, 5, 59, 64)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 170, ticks 840, elapsed 0, voice: 0 note: 47 velocity 64 event ('note', 840, 6, 47, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 171, ticks 840, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 840, 7, 55, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 172, ticks 840, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 840, 8, 55, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 173, ticks 840, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 840, 9, 55, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 174, ticks 840, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 840, 10, 55, 64)
	// Note off skipped, note 71 not found in channels, probably interrupted
	28,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 176, ticks 899, elapsed 28, voice: 1 note: 59 velocity 0 event ('note', 899, 2, 59, 0)
	0,((( 2 &4)<<5)|( 59 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 177, ticks 899, elapsed 0, voice: 2 note: 59 velocity 0 event ('note', 899, 3, 59, 0)
	0,((( 3 &4)<<5)|( 59 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 178, ticks 899, elapsed 0, voice: 3 note: 59 velocity 0 event ('note', 899, 4, 59, 0)
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 181, ticks 899, elapsed 0, voice: 0 note: 55 velocity 0 event ('note', 899, 7, 55, 0)
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 79 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 185, ticks 900, elapsed 0, voice: 0 note: 79 velocity 64 event ('note', 900, 1, 79, 64)
	0,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 186, ticks 900, elapsed 0, voice: 1 note: 67 velocity 64 event ('note', 900, 2, 67, 64)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 187, ticks 900, elapsed 0, voice: 2 note: 67 velocity 64 event ('note', 900, 3, 67, 64)
	0,((( 3 &4)<<5)|( 55 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 188, ticks 900, elapsed 0, voice: 3 note: 55 velocity 64 event ('note', 900, 4, 55, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 189, ticks 900, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 900, 5, 55, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 190, ticks 900, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 900, 6, 43, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 191, ticks 900, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 900, 7, 43, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 192, ticks 900, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 900, 8, 43, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 193, ticks 900, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 900, 9, 43, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 194, ticks 900, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 900, 10, 43, 64)
	// Note off skipped, note 79 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 196, ticks 929, elapsed 13, voice: 1 note: 67 velocity 0 event ('note', 929, 2, 67, 0)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 197, ticks 929, elapsed 0, voice: 2 note: 67 velocity 0 event ('note', 929, 3, 67, 0)
	0,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 198, ticks 930, elapsed 0, voice: 1 note: 78 velocity 64 event ('note', 930, 1, 78, 64)
	0,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 199, ticks 930, elapsed 0, voice: 2 note: 66 velocity 64 event ('note', 930, 2, 66, 64)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 200, ticks 930, elapsed 0, voice: 0 note: 66 velocity 64 event ('note', 930, 3, 66, 64)
	13,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 201, ticks 959, elapsed 13, voice: 1 note: 78 velocity 0 event ('note', 959, 1, 78, 0)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 202, ticks 959, elapsed 0, voice: 0 note: 66 velocity 0 event ('note', 959, 2, 66, 0)
	0,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 203, ticks 959, elapsed 0, voice: 2 note: 66 velocity 0 event ('note', 959, 3, 66, 0)
	0,((( 3 &4)<<5)|( 55 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 204, ticks 959, elapsed 0, voice: 3 note: 55 velocity 0 event ('note', 959, 4, 55, 0)
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 79 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 211, ticks 960, elapsed 0, voice: 0 note: 79 velocity 64 event ('note', 960, 1, 79, 64)
	0,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 212, ticks 960, elapsed 0, voice: 1 note: 67 velocity 64 event ('note', 960, 2, 67, 64)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 213, ticks 960, elapsed 0, voice: 2 note: 67 velocity 64 event ('note', 960, 3, 67, 64)
	0,((( 3 &4)<<5)|( 59 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 214, ticks 960, elapsed 0, voice: 3 note: 59 velocity 64 event ('note', 960, 4, 59, 64)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 215, ticks 960, elapsed 0, voice: 0 note: 59 velocity 64 event ('note', 960, 5, 59, 64)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 216, ticks 960, elapsed 0, voice: 0 note: 47 velocity 64 event ('note', 960, 6, 47, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 217, ticks 960, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 960, 7, 43, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 218, ticks 960, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 960, 8, 43, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 219, ticks 960, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 960, 9, 43, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 220, ticks 960, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 960, 10, 43, 64)
	// Note off skipped, note 79 not found in channels, probably interrupted
	28,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 222, ticks 1019, elapsed 28, voice: 1 note: 67 velocity 0 event ('note', 1019, 2, 67, 0)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 223, ticks 1019, elapsed 0, voice: 2 note: 67 velocity 0 event ('note', 1019, 3, 67, 0)
	0,((( 3 &4)<<5)|( 59 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 224, ticks 1019, elapsed 0, voice: 3 note: 59 velocity 0 event ('note', 1019, 4, 59, 0)
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 227, ticks 1019, elapsed 0, voice: 0 note: 43 velocity 0 event ('note', 1019, 7, 43, 0)
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 231, ticks 1020, elapsed 0, voice: 0 note: 67 velocity 64 event ('note', 1020, 1, 67, 64)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 232, ticks 1020, elapsed 0, voice: 1 note: 55 velocity 64 event ('note', 1020, 2, 55, 64)
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 233, ticks 1020, elapsed 0, voice: 2 note: 55 velocity 64 event ('note', 1020, 3, 55, 64)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 234, ticks 1020, elapsed 0, voice: 3 note: 62 velocity 64 event ('note', 1020, 4, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 235, ticks 1020, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 1020, 5, 62, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 236, ticks 1020, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 1020, 6, 50, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 237, ticks 1020, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 1020, 7, 55, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 238, ticks 1020, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 1020, 8, 55, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 239, ticks 1020, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 1020, 9, 55, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 240, ticks 1020, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 1020, 10, 55, 64)
	// Note off skipped, note 67 not found in channels, probably interrupted
	13,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 242, ticks 1049, elapsed 13, voice: 0 note: 55 velocity 0 event ('note', 1049, 2, 55, 0)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 243, ticks 1049, elapsed 0, voice: 1 note: 55 velocity 0 event ('note', 1049, 3, 55, 0)
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 244, ticks 1049, elapsed 0, voice: 2 note: 55 velocity 0 event ('note', 1049, 7, 55, 0)
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 248, ticks 1050, elapsed 0, voice: 0 note: 69 velocity 64 event ('note', 1050, 1, 69, 64)
	0,((( 1 &4)<<5)|( 57 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 249, ticks 1050, elapsed 0, voice: 1 note: 57 velocity 64 event ('note', 1050, 2, 57, 64)
	0,((( 2 &4)<<5)|( 57 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 250, ticks 1050, elapsed 0, voice: 2 note: 57 velocity 64 event ('note', 1050, 3, 57, 64)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 251, ticks 1050, elapsed 0, voice: 0 note: 54 velocity 64 event ('note', 1050, 7, 54, 64)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 252, ticks 1050, elapsed 0, voice: 0 note: 54 velocity 64 event ('note', 1050, 8, 54, 64)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 253, ticks 1050, elapsed 0, voice: 0 note: 54 velocity 64 event ('note', 1050, 9, 54, 64)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 254, ticks 1050, elapsed 0, voice: 0 note: 54 velocity 64 event ('note', 1050, 10, 54, 64)
	// Note off skipped, note 69 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 57 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 256, ticks 1079, elapsed 13, voice: 1 note: 57 velocity 0 event ('note', 1079, 2, 57, 0)
	0,((( 2 &4)<<5)|( 57 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 257, ticks 1079, elapsed 0, voice: 2 note: 57 velocity 0 event ('note', 1079, 3, 57, 0)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 258, ticks 1079, elapsed 0, voice: 3 note: 62 velocity 0 event ('note', 1079, 4, 62, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 261, ticks 1079, elapsed 0, voice: 0 note: 54 velocity 0 event ('note', 1079, 7, 54, 0)
	// Note off skipped, note 54 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 265, ticks 1080, elapsed 0, voice: 0 note: 71 velocity 64 event ('note', 1080, 1, 71, 64)
	0,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 266, ticks 1080, elapsed 0, voice: 1 note: 59 velocity 64 event ('note', 1080, 2, 59, 64)
	0,((( 2 &4)<<5)|( 59 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 267, ticks 1080, elapsed 0, voice: 2 note: 59 velocity 64 event ('note', 1080, 3, 59, 64)
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 268, ticks 1080, elapsed 0, voice: 3 note: 67 velocity 64 event ('note', 1080, 4, 67, 64)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 269, ticks 1080, elapsed 0, voice: 0 note: 67 velocity 64 event ('note', 1080, 5, 67, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 270, ticks 1080, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 1080, 6, 55, 64)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 271, ticks 1080, elapsed 0, voice: 0 note: 52 velocity 64 event ('note', 1080, 7, 52, 64)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 272, ticks 1080, elapsed 0, voice: 0 note: 52 velocity 64 event ('note', 1080, 8, 52, 64)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 273, ticks 1080, elapsed 0, voice: 0 note: 52 velocity 64 event ('note', 1080, 9, 52, 64)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 274, ticks 1080, elapsed 0, voice: 0 note: 52 velocity 64 event ('note', 1080, 10, 52, 64)
	13,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 275, ticks 1109, elapsed 13, voice: 3 note: 67 velocity 0 event ('note', 1109, 4, 67, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 71 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 278, ticks 1110, elapsed 0, voice: 3 note: 71 velocity 64 event ('note', 1110, 4, 71, 64)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 279, ticks 1110, elapsed 0, voice: 0 note: 71 velocity 64 event ('note', 1110, 5, 71, 64)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 280, ticks 1110, elapsed 0, voice: 0 note: 59 velocity 64 event ('note', 1110, 6, 59, 64)
	13,((( 3 &4)<<5)|( 71 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 281, ticks 1139, elapsed 13, voice: 3 note: 71 velocity 0 event ('note', 1139, 1, 71, 0)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 282, ticks 1139, elapsed 0, voice: 0 note: 59 velocity 0 event ('note', 1139, 2, 59, 0)
	0,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 283, ticks 1139, elapsed 0, voice: 1 note: 59 velocity 0 event ('note', 1139, 3, 59, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 71 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 59 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 286, ticks 1139, elapsed 0, voice: 2 note: 59 velocity 0 event ('note', 1139, 6, 59, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	// Note off skipped, note 52 not found in channels, probably interrupted
	// Note off skipped, note 52 not found in channels, probably interrupted
	// Note off skipped, note 52 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 291, ticks 1140, elapsed 0, voice: 0 note: 73 velocity 64 event ('note', 1140, 1, 73, 64)
	0,((( 1 &4)<<5)|( 61 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 292, ticks 1140, elapsed 0, voice: 1 note: 61 velocity 64 event ('note', 1140, 2, 61, 64)
	0,((( 2 &4)<<5)|( 61 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 293, ticks 1140, elapsed 0, voice: 2 note: 61 velocity 64 event ('note', 1140, 3, 61, 64)
	0,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 294, ticks 1140, elapsed 0, voice: 3 note: 69 velocity 64 event ('note', 1140, 4, 69, 64)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 295, ticks 1140, elapsed 0, voice: 0 note: 69 velocity 64 event ('note', 1140, 5, 69, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 296, ticks 1140, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 1140, 6, 57, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 297, ticks 1140, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 1140, 7, 57, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 298, ticks 1140, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 1140, 8, 57, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 299, ticks 1140, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 1140, 9, 57, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 300, ticks 1140, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 1140, 10, 57, 64)
	13,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 301, ticks 1169, elapsed 13, voice: 3 note: 69 velocity 0 event ('note', 1169, 4, 69, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 303, ticks 1169, elapsed 0, voice: 0 note: 57 velocity 0 event ('note', 1169, 6, 57, 0)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 304, ticks 1170, elapsed 0, voice: 0 note: 67 velocity 64 event ('note', 1170, 4, 67, 64)
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 305, ticks 1170, elapsed 0, voice: 3 note: 67 velocity 64 event ('note', 1170, 5, 67, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 306, ticks 1170, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 1170, 6, 55, 64)
	// Note off skipped, note 73 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 61 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 308, ticks 1199, elapsed 13, voice: 1 note: 61 velocity 0 event ('note', 1199, 2, 61, 0)
	0,((( 2 &4)<<5)|( 61 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 309, ticks 1199, elapsed 0, voice: 2 note: 61 velocity 0 event ('note', 1199, 3, 61, 0)
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 310, ticks 1199, elapsed 0, voice: 3 note: 67 velocity 0 event ('note', 1199, 4, 67, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 312, ticks 1199, elapsed 0, voice: 0 note: 55 velocity 0 event ('note', 1199, 6, 55, 0)
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 317, ticks 1200, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 1200, 1, 74, 64)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 318, ticks 1200, elapsed 0, voice: 1 note: 62 velocity 64 event ('note', 1200, 2, 62, 64)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 319, ticks 1200, elapsed 0, voice: 2 note: 62 velocity 64 event ('note', 1200, 3, 62, 64)
	0,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 320, ticks 1200, elapsed 0, voice: 3 note: 66 velocity 64 event ('note', 1200, 4, 66, 64)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 321, ticks 1200, elapsed 0, voice: 0 note: 66 velocity 64 event ('note', 1200, 5, 66, 64)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 322, ticks 1200, elapsed 0, voice: 0 note: 54 velocity 64 event ('note', 1200, 6, 54, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 323, ticks 1200, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 1200, 7, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 324, ticks 1200, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 1200, 8, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 325, ticks 1200, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 1200, 9, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 326, ticks 1200, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 1200, 10, 50, 64)
	// Note off skipped, note 74 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 328, ticks 1229, elapsed 13, voice: 1 note: 62 velocity 0 event ('note', 1229, 2, 62, 0)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 329, ticks 1229, elapsed 0, voice: 2 note: 62 velocity 0 event ('note', 1229, 3, 62, 0)
	0,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 330, ticks 1230, elapsed 0, voice: 1 note: 73 velocity 64 event ('note', 1230, 1, 73, 64)
	0,((( 2 &4)<<5)|( 61 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 331, ticks 1230, elapsed 0, voice: 2 note: 61 velocity 64 event ('note', 1230, 2, 61, 64)
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 332, ticks 1230, elapsed 0, voice: 0 note: 61 velocity 64 event ('note', 1230, 3, 61, 64)
	13,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 333, ticks 1259, elapsed 13, voice: 1 note: 73 velocity 0 event ('note', 1259, 1, 73, 0)
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 334, ticks 1259, elapsed 0, voice: 0 note: 61 velocity 0 event ('note', 1259, 2, 61, 0)
	0,((( 2 &4)<<5)|( 61 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 335, ticks 1259, elapsed 0, voice: 2 note: 61 velocity 0 event ('note', 1259, 3, 61, 0)
	0,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 336, ticks 1259, elapsed 0, voice: 3 note: 66 velocity 0 event ('note', 1259, 4, 66, 0)
	// Note off skipped, note 66 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 343, ticks 1260, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 1260, 1, 74, 64)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 344, ticks 1260, elapsed 0, voice: 1 note: 62 velocity 64 event ('note', 1260, 2, 62, 64)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 345, ticks 1260, elapsed 0, voice: 2 note: 62 velocity 64 event ('note', 1260, 3, 62, 64)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 346, ticks 1260, elapsed 0, voice: 3 note: 62 velocity 64 event ('note', 1260, 4, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 347, ticks 1260, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 1260, 5, 62, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 348, ticks 1260, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 1260, 6, 50, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 349, ticks 1260, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 1260, 7, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 350, ticks 1260, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 1260, 8, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 351, ticks 1260, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 1260, 9, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 352, ticks 1260, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 1260, 10, 62, 64)
	// Note off skipped, note 74 not found in channels, probably interrupted
	13,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 354, ticks 1289, elapsed 13, voice: 0 note: 62 velocity 0 event ('note', 1289, 2, 62, 0)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 355, ticks 1289, elapsed 0, voice: 1 note: 62 velocity 0 event ('note', 1289, 3, 62, 0)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 356, ticks 1289, elapsed 0, voice: 2 note: 62 velocity 0 event ('note', 1289, 7, 62, 0)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 357, ticks 1289, elapsed 0, voice: 3 note: 62 velocity 0 event ('note', 1289, 8, 62, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 360, ticks 1290, elapsed 0, voice: 0 note: 76 velocity 64 event ('note', 1290, 1, 76, 64)
	0,((( 1 &4)<<5)|( 64 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 361, ticks 1290, elapsed 0, voice: 1 note: 64 velocity 64 event ('note', 1290, 2, 64, 64)
	0,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 362, ticks 1290, elapsed 0, voice: 2 note: 64 velocity 64 event ('note', 1290, 3, 64, 64)
	0,((( 3 &4)<<5)|( 61 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 363, ticks 1290, elapsed 0, voice: 3 note: 61 velocity 64 event ('note', 1290, 7, 61, 64)
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 364, ticks 1290, elapsed 0, voice: 0 note: 61 velocity 64 event ('note', 1290, 8, 61, 64)
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 365, ticks 1290, elapsed 0, voice: 0 note: 61 velocity 64 event ('note', 1290, 9, 61, 64)
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 366, ticks 1290, elapsed 0, voice: 0 note: 61 velocity 64 event ('note', 1290, 10, 61, 64)
	// Note off skipped, note 76 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 64 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 368, ticks 1319, elapsed 13, voice: 1 note: 64 velocity 0 event ('note', 1319, 2, 64, 0)
	0,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 369, ticks 1319, elapsed 0, voice: 2 note: 64 velocity 0 event ('note', 1319, 3, 64, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 373, ticks 1319, elapsed 0, voice: 0 note: 61 velocity 0 event ('note', 1319, 7, 61, 0)
	0,((( 3 &4)<<5)|( 61 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 374, ticks 1319, elapsed 0, voice: 3 note: 61 velocity 0 event ('note', 1319, 8, 61, 0)
	// Note off skipped, note 61 not found in channels, probably interrupted
	// Note off skipped, note 61 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 377, ticks 1320, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 1320, 1, 74, 64)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 378, ticks 1320, elapsed 0, voice: 1 note: 62 velocity 64 event ('note', 1320, 2, 62, 64)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 379, ticks 1320, elapsed 0, voice: 2 note: 62 velocity 64 event ('note', 1320, 3, 62, 64)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 380, ticks 1320, elapsed 0, voice: 3 note: 62 velocity 64 event ('note', 1320, 7, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 381, ticks 1320, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 1320, 8, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 382, ticks 1320, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 1320, 9, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 383, ticks 1320, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 1320, 10, 62, 64)
	// Note off skipped, note 74 not found in channels, probably interrupted
	13,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 385, ticks 1349, elapsed 13, voice: 0 note: 62 velocity 0 event ('note', 1349, 2, 62, 0)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 386, ticks 1349, elapsed 0, voice: 1 note: 62 velocity 0 event ('note', 1349, 3, 62, 0)
	0,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 387, ticks 1350, elapsed 0, voice: 0 note: 78 velocity 64 event ('note', 1350, 1, 78, 64)
	0,((( 1 &4)<<5)|( 66 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 388, ticks 1350, elapsed 0, voice: 1 note: 66 velocity 64 event ('note', 1350, 2, 66, 64)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 389, ticks 1350, elapsed 0, voice: 0 note: 66 velocity 64 event ('note', 1350, 3, 66, 64)
	// Note off skipped, note 78 not found in channels, probably interrupted
	13,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 391, ticks 1379, elapsed 13, voice: 0 note: 66 velocity 0 event ('note', 1379, 2, 66, 0)
	0,((( 1 &4)<<5)|( 66 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 392, ticks 1379, elapsed 0, voice: 1 note: 66 velocity 0 event ('note', 1379, 3, 66, 0)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 393, ticks 1379, elapsed 0, voice: 2 note: 62 velocity 0 event ('note', 1379, 7, 62, 0)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 394, ticks 1379, elapsed 0, voice: 3 note: 62 velocity 0 event ('note', 1379, 8, 62, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 397, ticks 1380, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 1380, 1, 74, 64)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 398, ticks 1380, elapsed 0, voice: 1 note: 62 velocity 64 event ('note', 1380, 2, 62, 64)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 399, ticks 1380, elapsed 0, voice: 2 note: 62 velocity 64 event ('note', 1380, 3, 62, 64)
	0,((( 3 &4)<<5)|( 71 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 400, ticks 1380, elapsed 0, voice: 3 note: 71 velocity 64 event ('note', 1380, 4, 71, 64)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 401, ticks 1380, elapsed 0, voice: 0 note: 71 velocity 64 event ('note', 1380, 5, 71, 64)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 402, ticks 1380, elapsed 0, voice: 0 note: 59 velocity 64 event ('note', 1380, 6, 59, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 403, ticks 1380, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 1380, 7, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 404, ticks 1380, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 1380, 8, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 405, ticks 1380, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 1380, 9, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 406, ticks 1380, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 1380, 10, 50, 64)
	// Note off skipped, note 74 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 408, ticks 1409, elapsed 13, voice: 1 note: 62 velocity 0 event ('note', 1409, 2, 62, 0)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 409, ticks 1409, elapsed 0, voice: 2 note: 62 velocity 0 event ('note', 1409, 3, 62, 0)
	0,((( 1 &4)<<5)|( 79 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 410, ticks 1410, elapsed 0, voice: 1 note: 79 velocity 64 event ('note', 1410, 1, 79, 64)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 411, ticks 1410, elapsed 0, voice: 2 note: 67 velocity 64 event ('note', 1410, 2, 67, 64)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 412, ticks 1410, elapsed 0, voice: 0 note: 67 velocity 64 event ('note', 1410, 3, 67, 64)
	13,((( 1 &4)<<5)|( 79 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 413, ticks 1439, elapsed 13, voice: 1 note: 79 velocity 0 event ('note', 1439, 1, 79, 0)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 414, ticks 1439, elapsed 0, voice: 0 note: 67 velocity 0 event ('note', 1439, 2, 67, 0)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 415, ticks 1439, elapsed 0, voice: 2 note: 67 velocity 0 event ('note', 1439, 3, 67, 0)
	0,((( 3 &4)<<5)|( 71 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 416, ticks 1439, elapsed 0, voice: 3 note: 71 velocity 0 event ('note', 1439, 4, 71, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 423, ticks 1440, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 1440, 1, 74, 64)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 424, ticks 1440, elapsed 0, voice: 1 note: 62 velocity 64 event ('note', 1440, 2, 62, 64)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 425, ticks 1440, elapsed 0, voice: 2 note: 62 velocity 64 event ('note', 1440, 3, 62, 64)
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 426, ticks 1440, elapsed 0, voice: 3 note: 67 velocity 64 event ('note', 1440, 4, 67, 64)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 427, ticks 1440, elapsed 0, voice: 0 note: 67 velocity 64 event ('note', 1440, 5, 67, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 428, ticks 1440, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 1440, 6, 55, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 429, ticks 1440, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 1440, 7, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 430, ticks 1440, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 1440, 8, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 431, ticks 1440, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 1440, 9, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 432, ticks 1440, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 1440, 10, 50, 64)
	// Note off skipped, note 74 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 434, ticks 1469, elapsed 13, voice: 1 note: 62 velocity 0 event ('note', 1469, 2, 62, 0)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 435, ticks 1469, elapsed 0, voice: 2 note: 62 velocity 0 event ('note', 1469, 3, 62, 0)
	0,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 436, ticks 1470, elapsed 0, voice: 1 note: 73 velocity 64 event ('note', 1470, 1, 73, 64)
	0,((( 2 &4)<<5)|( 61 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 437, ticks 1470, elapsed 0, voice: 2 note: 61 velocity 64 event ('note', 1470, 2, 61, 64)
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 438, ticks 1470, elapsed 0, voice: 0 note: 61 velocity 64 event ('note', 1470, 3, 61, 64)
	13,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 439, ticks 1499, elapsed 13, voice: 1 note: 73 velocity 0 event ('note', 1499, 1, 73, 0)
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 440, ticks 1499, elapsed 0, voice: 0 note: 61 velocity 0 event ('note', 1499, 2, 61, 0)
	0,((( 2 &4)<<5)|( 61 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 441, ticks 1499, elapsed 0, voice: 2 note: 61 velocity 0 event ('note', 1499, 3, 61, 0)
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 442, ticks 1499, elapsed 0, voice: 3 note: 67 velocity 0 event ('note', 1499, 4, 67, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 449, ticks 1500, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 1500, 1, 74, 64)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 450, ticks 1500, elapsed 0, voice: 1 note: 62 velocity 64 event ('note', 1500, 2, 62, 64)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 451, ticks 1500, elapsed 0, voice: 2 note: 62 velocity 64 event ('note', 1500, 3, 62, 64)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 452, ticks 1500, elapsed 0, voice: 3 note: 62 velocity 64 event ('note', 1500, 4, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 453, ticks 1500, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 1500, 5, 62, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 454, ticks 1500, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 1500, 6, 50, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 455, ticks 1500, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 1500, 7, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 456, ticks 1500, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 1500, 8, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 457, ticks 1500, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 1500, 9, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 458, ticks 1500, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 1500, 10, 62, 64)
	// Note off skipped, note 74 not found in channels, probably interrupted
	13,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 460, ticks 1529, elapsed 13, voice: 0 note: 62 velocity 0 event ('note', 1529, 2, 62, 0)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 461, ticks 1529, elapsed 0, voice: 1 note: 62 velocity 0 event ('note', 1529, 3, 62, 0)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 462, ticks 1529, elapsed 0, voice: 2 note: 62 velocity 0 event ('note', 1529, 7, 62, 0)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 463, ticks 1529, elapsed 0, voice: 3 note: 62 velocity 0 event ('note', 1529, 8, 62, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 466, ticks 1530, elapsed 0, voice: 0 note: 76 velocity 64 event ('note', 1530, 1, 76, 64)
	0,((( 1 &4)<<5)|( 64 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 467, ticks 1530, elapsed 0, voice: 1 note: 64 velocity 64 event ('note', 1530, 2, 64, 64)
	0,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 468, ticks 1530, elapsed 0, voice: 2 note: 64 velocity 64 event ('note', 1530, 3, 64, 64)
	0,((( 3 &4)<<5)|( 61 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 469, ticks 1530, elapsed 0, voice: 3 note: 61 velocity 64 event ('note', 1530, 7, 61, 64)
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 470, ticks 1530, elapsed 0, voice: 0 note: 61 velocity 64 event ('note', 1530, 8, 61, 64)
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 471, ticks 1530, elapsed 0, voice: 0 note: 61 velocity 64 event ('note', 1530, 9, 61, 64)
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 472, ticks 1530, elapsed 0, voice: 0 note: 61 velocity 64 event ('note', 1530, 10, 61, 64)
	// Note off skipped, note 76 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 64 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 474, ticks 1559, elapsed 13, voice: 1 note: 64 velocity 0 event ('note', 1559, 2, 64, 0)
	0,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 475, ticks 1559, elapsed 0, voice: 2 note: 64 velocity 0 event ('note', 1559, 3, 64, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 479, ticks 1559, elapsed 0, voice: 0 note: 61 velocity 0 event ('note', 1559, 7, 61, 0)
	0,((( 3 &4)<<5)|( 61 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 480, ticks 1559, elapsed 0, voice: 3 note: 61 velocity 0 event ('note', 1559, 8, 61, 0)
	// Note off skipped, note 61 not found in channels, probably interrupted
	// Note off skipped, note 61 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 483, ticks 1560, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 1560, 1, 74, 64)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 484, ticks 1560, elapsed 0, voice: 1 note: 62 velocity 64 event ('note', 1560, 2, 62, 64)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 485, ticks 1560, elapsed 0, voice: 2 note: 62 velocity 64 event ('note', 1560, 3, 62, 64)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 486, ticks 1560, elapsed 0, voice: 3 note: 62 velocity 64 event ('note', 1560, 7, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 487, ticks 1560, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 1560, 8, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 488, ticks 1560, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 1560, 9, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 489, ticks 1560, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 1560, 10, 62, 64)
	// Note off skipped, note 74 not found in channels, probably interrupted
	13,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 491, ticks 1589, elapsed 13, voice: 0 note: 62 velocity 0 event ('note', 1589, 2, 62, 0)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 492, ticks 1589, elapsed 0, voice: 1 note: 62 velocity 0 event ('note', 1589, 3, 62, 0)
	0,((( 0 &4)<<5)|( 81 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 493, ticks 1590, elapsed 0, voice: 0 note: 81 velocity 64 event ('note', 1590, 1, 81, 64)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 494, ticks 1590, elapsed 0, voice: 1 note: 69 velocity 64 event ('note', 1590, 2, 69, 64)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 495, ticks 1590, elapsed 0, voice: 0 note: 69 velocity 64 event ('note', 1590, 3, 69, 64)
	// Note off skipped, note 81 not found in channels, probably interrupted
	13,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 497, ticks 1619, elapsed 13, voice: 0 note: 69 velocity 0 event ('note', 1619, 2, 69, 0)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 498, ticks 1619, elapsed 0, voice: 1 note: 69 velocity 0 event ('note', 1619, 3, 69, 0)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 499, ticks 1619, elapsed 0, voice: 2 note: 62 velocity 0 event ('note', 1619, 7, 62, 0)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 500, ticks 1619, elapsed 0, voice: 3 note: 62 velocity 0 event ('note', 1619, 8, 62, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 503, ticks 1620, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 1620, 1, 74, 64)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 504, ticks 1620, elapsed 0, voice: 1 note: 62 velocity 64 event ('note', 1620, 2, 62, 64)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 505, ticks 1620, elapsed 0, voice: 2 note: 62 velocity 64 event ('note', 1620, 3, 62, 64)
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 506, ticks 1620, elapsed 0, voice: 3 note: 67 velocity 64 event ('note', 1620, 4, 67, 64)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 507, ticks 1620, elapsed 0, voice: 0 note: 67 velocity 64 event ('note', 1620, 5, 67, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 508, ticks 1620, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 1620, 6, 55, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 509, ticks 1620, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 1620, 7, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 510, ticks 1620, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 1620, 8, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 511, ticks 1620, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 1620, 9, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 512, ticks 1620, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 1620, 10, 50, 64)
	// Note off skipped, note 74 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 514, ticks 1649, elapsed 13, voice: 1 note: 62 velocity 0 event ('note', 1649, 2, 62, 0)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 515, ticks 1649, elapsed 0, voice: 2 note: 62 velocity 0 event ('note', 1649, 3, 62, 0)
	0,((( 1 &4)<<5)|( 83 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 516, ticks 1650, elapsed 0, voice: 1 note: 83 velocity 64 event ('note', 1650, 1, 83, 64)
	0,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 517, ticks 1650, elapsed 0, voice: 2 note: 71 velocity 64 event ('note', 1650, 2, 71, 64)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 518, ticks 1650, elapsed 0, voice: 0 note: 71 velocity 64 event ('note', 1650, 3, 71, 64)
	13,((( 1 &4)<<5)|( 83 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 519, ticks 1679, elapsed 13, voice: 1 note: 83 velocity 0 event ('note', 1679, 1, 83, 0)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 520, ticks 1679, elapsed 0, voice: 0 note: 71 velocity 0 event ('note', 1679, 2, 71, 0)
	0,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 521, ticks 1679, elapsed 0, voice: 2 note: 71 velocity 0 event ('note', 1679, 3, 71, 0)
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 522, ticks 1679, elapsed 0, voice: 3 note: 67 velocity 0 event ('note', 1679, 4, 67, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 529, ticks 1680, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 1680, 1, 74, 64)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 530, ticks 1680, elapsed 0, voice: 1 note: 62 velocity 64 event ('note', 1680, 2, 62, 64)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 531, ticks 1680, elapsed 0, voice: 2 note: 62 velocity 64 event ('note', 1680, 3, 62, 64)
	0,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 532, ticks 1680, elapsed 0, voice: 3 note: 66 velocity 64 event ('note', 1680, 4, 66, 64)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 533, ticks 1680, elapsed 0, voice: 0 note: 66 velocity 64 event ('note', 1680, 5, 66, 64)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 534, ticks 1680, elapsed 0, voice: 0 note: 54 velocity 64 event ('note', 1680, 6, 54, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 535, ticks 1680, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 1680, 7, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 536, ticks 1680, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 1680, 8, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 537, ticks 1680, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 1680, 9, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 538, ticks 1680, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 1680, 10, 50, 64)
	// Note off skipped, note 74 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 540, ticks 1709, elapsed 13, voice: 1 note: 62 velocity 0 event ('note', 1709, 2, 62, 0)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 541, ticks 1709, elapsed 0, voice: 2 note: 62 velocity 0 event ('note', 1709, 3, 62, 0)
	0,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 542, ticks 1710, elapsed 0, voice: 1 note: 73 velocity 64 event ('note', 1710, 1, 73, 64)
	0,((( 2 &4)<<5)|( 61 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 543, ticks 1710, elapsed 0, voice: 2 note: 61 velocity 64 event ('note', 1710, 2, 61, 64)
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 544, ticks 1710, elapsed 0, voice: 0 note: 61 velocity 64 event ('note', 1710, 3, 61, 64)
	13,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 545, ticks 1739, elapsed 13, voice: 1 note: 73 velocity 0 event ('note', 1739, 1, 73, 0)
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 546, ticks 1739, elapsed 0, voice: 0 note: 61 velocity 0 event ('note', 1739, 2, 61, 0)
	0,((( 2 &4)<<5)|( 61 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 547, ticks 1739, elapsed 0, voice: 2 note: 61 velocity 0 event ('note', 1739, 3, 61, 0)
	0,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 548, ticks 1739, elapsed 0, voice: 3 note: 66 velocity 0 event ('note', 1739, 4, 66, 0)
	// Note off skipped, note 66 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 555, ticks 1740, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 1740, 1, 74, 64)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 556, ticks 1740, elapsed 0, voice: 1 note: 62 velocity 64 event ('note', 1740, 2, 62, 64)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 557, ticks 1740, elapsed 0, voice: 2 note: 62 velocity 64 event ('note', 1740, 3, 62, 64)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 558, ticks 1740, elapsed 0, voice: 3 note: 62 velocity 64 event ('note', 1740, 4, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 559, ticks 1740, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 1740, 5, 62, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 560, ticks 1740, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 1740, 6, 50, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 561, ticks 1740, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 1740, 7, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 562, ticks 1740, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 1740, 8, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 563, ticks 1740, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 1740, 9, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 564, ticks 1740, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 1740, 10, 62, 64)
	// Note off skipped, note 74 not found in channels, probably interrupted
	13,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 566, ticks 1769, elapsed 13, voice: 0 note: 62 velocity 0 event ('note', 1769, 2, 62, 0)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 567, ticks 1769, elapsed 0, voice: 1 note: 62 velocity 0 event ('note', 1769, 3, 62, 0)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 568, ticks 1769, elapsed 0, voice: 2 note: 62 velocity 0 event ('note', 1769, 7, 62, 0)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 569, ticks 1769, elapsed 0, voice: 3 note: 62 velocity 0 event ('note', 1769, 8, 62, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 572, ticks 1770, elapsed 0, voice: 0 note: 76 velocity 64 event ('note', 1770, 1, 76, 64)
	0,((( 1 &4)<<5)|( 64 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 573, ticks 1770, elapsed 0, voice: 1 note: 64 velocity 64 event ('note', 1770, 2, 64, 64)
	0,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 574, ticks 1770, elapsed 0, voice: 2 note: 64 velocity 64 event ('note', 1770, 3, 64, 64)
	0,((( 3 &4)<<5)|( 61 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 575, ticks 1770, elapsed 0, voice: 3 note: 61 velocity 64 event ('note', 1770, 7, 61, 64)
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 576, ticks 1770, elapsed 0, voice: 0 note: 61 velocity 64 event ('note', 1770, 8, 61, 64)
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 577, ticks 1770, elapsed 0, voice: 0 note: 61 velocity 64 event ('note', 1770, 9, 61, 64)
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 578, ticks 1770, elapsed 0, voice: 0 note: 61 velocity 64 event ('note', 1770, 10, 61, 64)
	// Note off skipped, note 76 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 64 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 580, ticks 1799, elapsed 13, voice: 1 note: 64 velocity 0 event ('note', 1799, 2, 64, 0)
	0,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 581, ticks 1799, elapsed 0, voice: 2 note: 64 velocity 0 event ('note', 1799, 3, 64, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 585, ticks 1799, elapsed 0, voice: 0 note: 61 velocity 0 event ('note', 1799, 7, 61, 0)
	0,((( 3 &4)<<5)|( 61 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 586, ticks 1799, elapsed 0, voice: 3 note: 61 velocity 0 event ('note', 1799, 8, 61, 0)
	// Note off skipped, note 61 not found in channels, probably interrupted
	// Note off skipped, note 61 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 589, ticks 1800, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 1800, 1, 74, 64)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 590, ticks 1800, elapsed 0, voice: 1 note: 62 velocity 64 event ('note', 1800, 2, 62, 64)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 591, ticks 1800, elapsed 0, voice: 2 note: 62 velocity 64 event ('note', 1800, 3, 62, 64)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 592, ticks 1800, elapsed 0, voice: 3 note: 62 velocity 64 event ('note', 1800, 7, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 593, ticks 1800, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 1800, 8, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 594, ticks 1800, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 1800, 9, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 595, ticks 1800, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 1800, 10, 62, 64)
	// Note off skipped, note 74 not found in channels, probably interrupted
	13,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 597, ticks 1829, elapsed 13, voice: 0 note: 62 velocity 0 event ('note', 1829, 2, 62, 0)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 598, ticks 1829, elapsed 0, voice: 1 note: 62 velocity 0 event ('note', 1829, 3, 62, 0)
	0,((( 0 &4)<<5)|( 84 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 599, ticks 1830, elapsed 0, voice: 0 note: 84 velocity 64 event ('note', 1830, 1, 84, 64)
	0,((( 1 &4)<<5)|( 72 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 600, ticks 1830, elapsed 0, voice: 1 note: 72 velocity 64 event ('note', 1830, 2, 72, 64)
	0,((( 0 &4)<<5)|( 72 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 601, ticks 1830, elapsed 0, voice: 0 note: 72 velocity 64 event ('note', 1830, 3, 72, 64)
	// Note off skipped, note 84 not found in channels, probably interrupted
	13,((( 0 &4)<<5)|( 72 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 603, ticks 1859, elapsed 13, voice: 0 note: 72 velocity 0 event ('note', 1859, 2, 72, 0)
	0,((( 1 &4)<<5)|( 72 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 604, ticks 1859, elapsed 0, voice: 1 note: 72 velocity 0 event ('note', 1859, 3, 72, 0)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 605, ticks 1859, elapsed 0, voice: 2 note: 62 velocity 0 event ('note', 1859, 7, 62, 0)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 606, ticks 1859, elapsed 0, voice: 3 note: 62 velocity 0 event ('note', 1859, 8, 62, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 609, ticks 1860, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 1860, 1, 74, 64)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 610, ticks 1860, elapsed 0, voice: 1 note: 62 velocity 64 event ('note', 1860, 2, 62, 64)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 611, ticks 1860, elapsed 0, voice: 2 note: 62 velocity 64 event ('note', 1860, 3, 62, 64)
	0,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 612, ticks 1860, elapsed 0, voice: 3 note: 69 velocity 64 event ('note', 1860, 4, 69, 64)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 613, ticks 1860, elapsed 0, voice: 0 note: 69 velocity 64 event ('note', 1860, 5, 69, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 614, ticks 1860, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 1860, 6, 57, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 615, ticks 1860, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 1860, 7, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 616, ticks 1860, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 1860, 8, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 617, ticks 1860, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 1860, 9, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 618, ticks 1860, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 1860, 10, 50, 64)
	// Note off skipped, note 74 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 620, ticks 1889, elapsed 13, voice: 1 note: 62 velocity 0 event ('note', 1889, 2, 62, 0)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 621, ticks 1889, elapsed 0, voice: 2 note: 62 velocity 0 event ('note', 1889, 3, 62, 0)
	0,((( 1 &4)<<5)|( 86 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 622, ticks 1890, elapsed 0, voice: 1 note: 86 velocity 64 event ('note', 1890, 1, 86, 64)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 623, ticks 1890, elapsed 0, voice: 2 note: 74 velocity 64 event ('note', 1890, 2, 74, 64)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 624, ticks 1890, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 1890, 3, 74, 64)
	13,((( 1 &4)<<5)|( 86 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 625, ticks 1919, elapsed 13, voice: 1 note: 86 velocity 0 event ('note', 1919, 1, 86, 0)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 626, ticks 1919, elapsed 0, voice: 0 note: 74 velocity 0 event ('note', 1919, 2, 74, 0)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 627, ticks 1919, elapsed 0, voice: 2 note: 74 velocity 0 event ('note', 1919, 3, 74, 0)
	0,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 628, ticks 1919, elapsed 0, voice: 3 note: 69 velocity 0 event ('note', 1919, 4, 69, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 83 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 635, ticks 1920, elapsed 0, voice: 0 note: 83 velocity 64 event ('note', 1920, 1, 83, 64)
	0,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 636, ticks 1920, elapsed 0, voice: 1 note: 71 velocity 64 event ('note', 1920, 2, 71, 64)
	0,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 637, ticks 1920, elapsed 0, voice: 2 note: 71 velocity 64 event ('note', 1920, 3, 71, 64)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 638, ticks 1920, elapsed 0, voice: 3 note: 62 velocity 64 event ('note', 1920, 4, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 639, ticks 1920, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 1920, 5, 62, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 640, ticks 1920, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 1920, 6, 50, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 641, ticks 1920, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 1920, 7, 55, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 642, ticks 1920, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 1920, 8, 55, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 643, ticks 1920, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 1920, 9, 55, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 644, ticks 1920, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 1920, 10, 55, 64)
	// Note off skipped, note 83 not found in channels, probably interrupted
	28,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 646, ticks 1979, elapsed 28, voice: 1 note: 71 velocity 0 event ('note', 1979, 2, 71, 0)
	0,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 647, ticks 1979, elapsed 0, voice: 2 note: 71 velocity 0 event ('note', 1979, 3, 71, 0)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 648, ticks 1979, elapsed 0, voice: 3 note: 62 velocity 0 event ('note', 1979, 4, 62, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 651, ticks 1979, elapsed 0, voice: 0 note: 55 velocity 0 event ('note', 1979, 7, 55, 0)
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 81 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 655, ticks 1980, elapsed 0, voice: 0 note: 81 velocity 64 event ('note', 1980, 1, 81, 64)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 656, ticks 1980, elapsed 0, voice: 1 note: 69 velocity 64 event ('note', 1980, 2, 69, 64)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 657, ticks 1980, elapsed 0, voice: 2 note: 69 velocity 64 event ('note', 1980, 3, 69, 64)
	0,((( 3 &4)<<5)|( 60 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 658, ticks 1980, elapsed 0, voice: 3 note: 60 velocity 64 event ('note', 1980, 4, 60, 64)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 659, ticks 1980, elapsed 0, voice: 0 note: 60 velocity 64 event ('note', 1980, 5, 60, 64)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 660, ticks 1980, elapsed 0, voice: 0 note: 48 velocity 64 event ('note', 1980, 6, 48, 64)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 661, ticks 1980, elapsed 0, voice: 0 note: 52 velocity 64 event ('note', 1980, 7, 52, 64)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 662, ticks 1980, elapsed 0, voice: 0 note: 52 velocity 64 event ('note', 1980, 8, 52, 64)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 663, ticks 1980, elapsed 0, voice: 0 note: 52 velocity 64 event ('note', 1980, 9, 52, 64)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 664, ticks 1980, elapsed 0, voice: 0 note: 52 velocity 64 event ('note', 1980, 10, 52, 64)
	// Note off skipped, note 81 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 666, ticks 2009, elapsed 13, voice: 1 note: 69 velocity 0 event ('note', 2009, 2, 69, 0)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 667, ticks 2009, elapsed 0, voice: 2 note: 69 velocity 0 event ('note', 2009, 3, 69, 0)
	0,((( 3 &4)<<5)|( 60 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 668, ticks 2009, elapsed 0, voice: 3 note: 60 velocity 0 event ('note', 2009, 4, 60, 0)
	// Note off skipped, note 60 not found in channels, probably interrupted
	// Note off skipped, note 48 not found in channels, probably interrupted
	0,((( 1 &4)<<5)|( 79 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 671, ticks 2010, elapsed 0, voice: 1 note: 79 velocity 64 event ('note', 2010, 1, 79, 64)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 672, ticks 2010, elapsed 0, voice: 2 note: 67 velocity 64 event ('note', 2010, 2, 67, 64)
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 673, ticks 2010, elapsed 0, voice: 3 note: 67 velocity 64 event ('note', 2010, 3, 67, 64)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 674, ticks 2010, elapsed 0, voice: 0 note: 59 velocity 64 event ('note', 2010, 4, 59, 64)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 675, ticks 2010, elapsed 0, voice: 0 note: 59 velocity 64 event ('note', 2010, 5, 59, 64)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 676, ticks 2010, elapsed 0, voice: 0 note: 47 velocity 64 event ('note', 2010, 6, 47, 64)
	13,((( 1 &4)<<5)|( 79 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 677, ticks 2039, elapsed 13, voice: 1 note: 79 velocity 0 event ('note', 2039, 1, 79, 0)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 678, ticks 2039, elapsed 0, voice: 2 note: 67 velocity 0 event ('note', 2039, 2, 67, 0)
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 679, ticks 2039, elapsed 0, voice: 3 note: 67 velocity 0 event ('note', 2039, 3, 67, 0)
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 682, ticks 2039, elapsed 0, voice: 0 note: 47 velocity 0 event ('note', 2039, 6, 47, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	// Note off skipped, note 52 not found in channels, probably interrupted
	// Note off skipped, note 52 not found in channels, probably interrupted
	// Note off skipped, note 52 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 81 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 687, ticks 2040, elapsed 0, voice: 0 note: 81 velocity 64 event ('note', 2040, 1, 81, 64)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 688, ticks 2040, elapsed 0, voice: 1 note: 69 velocity 64 event ('note', 2040, 2, 69, 64)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 689, ticks 2040, elapsed 0, voice: 2 note: 69 velocity 64 event ('note', 2040, 3, 69, 64)
	0,((( 3 &4)<<5)|( 60 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 690, ticks 2040, elapsed 0, voice: 3 note: 60 velocity 64 event ('note', 2040, 4, 60, 64)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 691, ticks 2040, elapsed 0, voice: 0 note: 60 velocity 64 event ('note', 2040, 5, 60, 64)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 692, ticks 2040, elapsed 0, voice: 0 note: 48 velocity 64 event ('note', 2040, 6, 48, 64)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 693, ticks 2040, elapsed 0, voice: 0 note: 48 velocity 64 event ('note', 2040, 7, 48, 64)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 694, ticks 2040, elapsed 0, voice: 0 note: 48 velocity 64 event ('note', 2040, 8, 48, 64)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 695, ticks 2040, elapsed 0, voice: 0 note: 48 velocity 64 event ('note', 2040, 9, 48, 64)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 696, ticks 2040, elapsed 0, voice: 0 note: 48 velocity 64 event ('note', 2040, 10, 48, 64)
	// Note off skipped, note 81 not found in channels, probably interrupted
	28,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 698, ticks 2099, elapsed 28, voice: 1 note: 69 velocity 0 event ('note', 2099, 2, 69, 0)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 699, ticks 2099, elapsed 0, voice: 2 note: 69 velocity 0 event ('note', 2099, 3, 69, 0)
	0,((( 3 &4)<<5)|( 60 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 700, ticks 2099, elapsed 0, voice: 3 note: 60 velocity 0 event ('note', 2099, 4, 60, 0)
	// Note off skipped, note 60 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 702, ticks 2099, elapsed 0, voice: 0 note: 48 velocity 0 event ('note', 2099, 6, 48, 0)
	// Note off skipped, note 48 not found in channels, probably interrupted
	// Note off skipped, note 48 not found in channels, probably interrupted
	// Note off skipped, note 48 not found in channels, probably interrupted
	// Note off skipped, note 48 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 79 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 707, ticks 2100, elapsed 0, voice: 0 note: 79 velocity 64 event ('note', 2100, 1, 79, 64)
	0,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 708, ticks 2100, elapsed 0, voice: 1 note: 67 velocity 64 event ('note', 2100, 2, 67, 64)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 709, ticks 2100, elapsed 0, voice: 2 note: 67 velocity 64 event ('note', 2100, 3, 67, 64)
	0,((( 3 &4)<<5)|( 59 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 710, ticks 2100, elapsed 0, voice: 3 note: 59 velocity 64 event ('note', 2100, 4, 59, 64)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 711, ticks 2100, elapsed 0, voice: 0 note: 59 velocity 64 event ('note', 2100, 5, 59, 64)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 712, ticks 2100, elapsed 0, voice: 0 note: 47 velocity 64 event ('note', 2100, 6, 47, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 713, ticks 2100, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 2100, 7, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 714, ticks 2100, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 2100, 8, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 715, ticks 2100, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 2100, 9, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 716, ticks 2100, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 2100, 10, 50, 64)
	// Note off skipped, note 79 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 718, ticks 2129, elapsed 13, voice: 1 note: 67 velocity 0 event ('note', 2129, 2, 67, 0)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 719, ticks 2129, elapsed 0, voice: 2 note: 67 velocity 0 event ('note', 2129, 3, 67, 0)
	0,((( 3 &4)<<5)|( 59 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 720, ticks 2129, elapsed 0, voice: 3 note: 59 velocity 0 event ('note', 2129, 4, 59, 0)
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 723, ticks 2130, elapsed 0, voice: 1 note: 78 velocity 64 event ('note', 2130, 1, 78, 64)
	0,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 724, ticks 2130, elapsed 0, voice: 2 note: 66 velocity 64 event ('note', 2130, 2, 66, 64)
	0,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 725, ticks 2130, elapsed 0, voice: 3 note: 66 velocity 64 event ('note', 2130, 3, 66, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 726, ticks 2130, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 2130, 4, 57, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 727, ticks 2130, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 2130, 5, 57, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 728, ticks 2130, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 2130, 6, 45, 64)
	13,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 729, ticks 2159, elapsed 13, voice: 1 note: 78 velocity 0 event ('note', 2159, 1, 78, 0)
	0,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 730, ticks 2159, elapsed 0, voice: 2 note: 66 velocity 0 event ('note', 2159, 2, 66, 0)
	0,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 731, ticks 2159, elapsed 0, voice: 3 note: 66 velocity 0 event ('note', 2159, 3, 66, 0)
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 734, ticks 2159, elapsed 0, voice: 0 note: 45 velocity 0 event ('note', 2159, 6, 45, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 79 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 739, ticks 2160, elapsed 0, voice: 0 note: 79 velocity 64 event ('note', 2160, 1, 79, 64)
	0,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 740, ticks 2160, elapsed 0, voice: 1 note: 67 velocity 64 event ('note', 2160, 2, 67, 64)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 741, ticks 2160, elapsed 0, voice: 2 note: 67 velocity 64 event ('note', 2160, 3, 67, 64)
	0,((( 3 &4)<<5)|( 55 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 742, ticks 2160, elapsed 0, voice: 3 note: 55 velocity 64 event ('note', 2160, 4, 55, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 743, ticks 2160, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 2160, 5, 55, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 744, ticks 2160, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 2160, 6, 43, 64)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 745, ticks 2160, elapsed 0, voice: 0 note: 52 velocity 64 event ('note', 2160, 7, 52, 64)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 746, ticks 2160, elapsed 0, voice: 0 note: 52 velocity 64 event ('note', 2160, 8, 52, 64)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 747, ticks 2160, elapsed 0, voice: 0 note: 52 velocity 64 event ('note', 2160, 9, 52, 64)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 748, ticks 2160, elapsed 0, voice: 0 note: 52 velocity 64 event ('note', 2160, 10, 52, 64)
	// Note off skipped, note 79 not found in channels, probably interrupted
	28,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 750, ticks 2219, elapsed 28, voice: 1 note: 67 velocity 0 event ('note', 2219, 2, 67, 0)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 751, ticks 2219, elapsed 0, voice: 2 note: 67 velocity 0 event ('note', 2219, 3, 67, 0)
	0,((( 3 &4)<<5)|( 55 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 752, ticks 2219, elapsed 0, voice: 3 note: 55 velocity 0 event ('note', 2219, 4, 55, 0)
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 755, ticks 2219, elapsed 0, voice: 0 note: 52 velocity 0 event ('note', 2219, 7, 52, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	// Note off skipped, note 52 not found in channels, probably interrupted
	// Note off skipped, note 52 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 759, ticks 2220, elapsed 0, voice: 0 note: 78 velocity 64 event ('note', 2220, 1, 78, 64)
	0,((( 1 &4)<<5)|( 66 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 760, ticks 2220, elapsed 0, voice: 1 note: 66 velocity 64 event ('note', 2220, 2, 66, 64)
	0,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 761, ticks 2220, elapsed 0, voice: 2 note: 66 velocity 64 event ('note', 2220, 3, 66, 64)
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 762, ticks 2220, elapsed 0, voice: 3 note: 67 velocity 64 event ('note', 2220, 4, 67, 64)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 763, ticks 2220, elapsed 0, voice: 0 note: 67 velocity 64 event ('note', 2220, 5, 67, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 764, ticks 2220, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 2220, 6, 55, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 765, ticks 2220, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 2220, 7, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 766, ticks 2220, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 2220, 8, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 767, ticks 2220, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 2220, 9, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 768, ticks 2220, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 2220, 10, 50, 64)
	// Note off skipped, note 78 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 66 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 770, ticks 2249, elapsed 13, voice: 1 note: 66 velocity 0 event ('note', 2249, 2, 66, 0)
	0,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 771, ticks 2249, elapsed 0, voice: 2 note: 66 velocity 0 event ('note', 2249, 3, 66, 0)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 772, ticks 2249, elapsed 0, voice: 0 note: 50 velocity 0 event ('note', 2249, 7, 50, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 776, ticks 2250, elapsed 0, voice: 0 note: 76 velocity 64 event ('note', 2250, 1, 76, 64)
	0,((( 1 &4)<<5)|( 64 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 777, ticks 2250, elapsed 0, voice: 1 note: 64 velocity 64 event ('note', 2250, 2, 64, 64)
	0,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 778, ticks 2250, elapsed 0, voice: 2 note: 64 velocity 64 event ('note', 2250, 3, 64, 64)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 779, ticks 2250, elapsed 0, voice: 0 note: 48 velocity 64 event ('note', 2250, 7, 48, 64)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 780, ticks 2250, elapsed 0, voice: 0 note: 48 velocity 64 event ('note', 2250, 8, 48, 64)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 781, ticks 2250, elapsed 0, voice: 0 note: 48 velocity 64 event ('note', 2250, 9, 48, 64)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 782, ticks 2250, elapsed 0, voice: 0 note: 48 velocity 64 event ('note', 2250, 10, 48, 64)
	// Note off skipped, note 76 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 64 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 784, ticks 2279, elapsed 13, voice: 1 note: 64 velocity 0 event ('note', 2279, 2, 64, 0)
	0,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 785, ticks 2279, elapsed 0, voice: 2 note: 64 velocity 0 event ('note', 2279, 3, 64, 0)
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 786, ticks 2279, elapsed 0, voice: 3 note: 67 velocity 0 event ('note', 2279, 4, 67, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 789, ticks 2279, elapsed 0, voice: 0 note: 48 velocity 0 event ('note', 2279, 7, 48, 0)
	// Note off skipped, note 48 not found in channels, probably interrupted
	// Note off skipped, note 48 not found in channels, probably interrupted
	// Note off skipped, note 48 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 793, ticks 2280, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 2280, 1, 74, 64)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 794, ticks 2280, elapsed 0, voice: 1 note: 62 velocity 64 event ('note', 2280, 2, 62, 64)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 795, ticks 2280, elapsed 0, voice: 2 note: 62 velocity 64 event ('note', 2280, 3, 62, 64)
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 796, ticks 2280, elapsed 0, voice: 3 note: 67 velocity 64 event ('note', 2280, 4, 67, 64)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 797, ticks 2280, elapsed 0, voice: 0 note: 67 velocity 64 event ('note', 2280, 5, 67, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 798, ticks 2280, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 2280, 6, 55, 64)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 799, ticks 2280, elapsed 0, voice: 0 note: 47 velocity 64 event ('note', 2280, 7, 47, 64)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 800, ticks 2280, elapsed 0, voice: 0 note: 47 velocity 64 event ('note', 2280, 8, 47, 64)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 801, ticks 2280, elapsed 0, voice: 0 note: 47 velocity 64 event ('note', 2280, 9, 47, 64)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 802, ticks 2280, elapsed 0, voice: 0 note: 47 velocity 64 event ('note', 2280, 10, 47, 64)
	// Note off skipped, note 74 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 804, ticks 2309, elapsed 13, voice: 1 note: 62 velocity 0 event ('note', 2309, 2, 62, 0)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 805, ticks 2309, elapsed 0, voice: 2 note: 62 velocity 0 event ('note', 2309, 3, 62, 0)
	0,((( 1 &4)<<5)|( 79 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 806, ticks 2310, elapsed 0, voice: 1 note: 79 velocity 64 event ('note', 2310, 1, 79, 64)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 807, ticks 2310, elapsed 0, voice: 2 note: 67 velocity 64 event ('note', 2310, 2, 67, 64)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 808, ticks 2310, elapsed 0, voice: 0 note: 67 velocity 64 event ('note', 2310, 3, 67, 64)
	13,((( 1 &4)<<5)|( 79 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 809, ticks 2339, elapsed 13, voice: 1 note: 79 velocity 0 event ('note', 2339, 1, 79, 0)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 810, ticks 2339, elapsed 0, voice: 0 note: 67 velocity 0 event ('note', 2339, 2, 67, 0)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 811, ticks 2339, elapsed 0, voice: 2 note: 67 velocity 0 event ('note', 2339, 3, 67, 0)
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 812, ticks 2339, elapsed 0, voice: 3 note: 67 velocity 0 event ('note', 2339, 4, 67, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 819, ticks 2340, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 2340, 1, 74, 64)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 820, ticks 2340, elapsed 0, voice: 1 note: 62 velocity 64 event ('note', 2340, 2, 62, 64)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 821, ticks 2340, elapsed 0, voice: 2 note: 62 velocity 64 event ('note', 2340, 3, 62, 64)
	0,((( 3 &4)<<5)|( 55 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 822, ticks 2340, elapsed 0, voice: 3 note: 55 velocity 64 event ('note', 2340, 4, 55, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 823, ticks 2340, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 2340, 5, 55, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 824, ticks 2340, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 2340, 6, 43, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 825, ticks 2340, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 2340, 7, 45, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 826, ticks 2340, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 2340, 8, 45, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 827, ticks 2340, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 2340, 9, 45, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 828, ticks 2340, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 2340, 10, 45, 64)
	// Note off skipped, note 74 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 830, ticks 2369, elapsed 13, voice: 1 note: 62 velocity 0 event ('note', 2369, 2, 62, 0)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 831, ticks 2369, elapsed 0, voice: 2 note: 62 velocity 0 event ('note', 2369, 3, 62, 0)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 832, ticks 2369, elapsed 0, voice: 0 note: 45 velocity 0 event ('note', 2369, 7, 45, 0)
	// Note off skipped, note 45 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 79 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 836, ticks 2370, elapsed 0, voice: 0 note: 79 velocity 64 event ('note', 2370, 1, 79, 64)
	0,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 837, ticks 2370, elapsed 0, voice: 1 note: 67 velocity 64 event ('note', 2370, 2, 67, 64)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 838, ticks 2370, elapsed 0, voice: 2 note: 67 velocity 64 event ('note', 2370, 3, 67, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 839, ticks 2370, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 2370, 7, 43, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 840, ticks 2370, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 2370, 8, 43, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 841, ticks 2370, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 2370, 9, 43, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 842, ticks 2370, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 2370, 10, 43, 64)
	// Note off skipped, note 79 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 844, ticks 2399, elapsed 13, voice: 1 note: 67 velocity 0 event ('note', 2399, 2, 67, 0)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 845, ticks 2399, elapsed 0, voice: 2 note: 67 velocity 0 event ('note', 2399, 3, 67, 0)
	0,((( 3 &4)<<5)|( 55 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 846, ticks 2399, elapsed 0, voice: 3 note: 55 velocity 0 event ('note', 2399, 4, 55, 0)
	// Note off skipped, note 55 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 848, ticks 2399, elapsed 0, voice: 0 note: 43 velocity 0 event ('note', 2399, 6, 43, 0)
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 853, ticks 2400, elapsed 0, voice: 0 note: 76 velocity 64 event ('note', 2400, 1, 76, 64)
	0,((( 1 &4)<<5)|( 64 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 854, ticks 2400, elapsed 0, voice: 1 note: 64 velocity 64 event ('note', 2400, 2, 64, 64)
	0,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 855, ticks 2400, elapsed 0, voice: 2 note: 64 velocity 64 event ('note', 2400, 3, 64, 64)
	0,((( 3 &4)<<5)|( 55 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 856, ticks 2400, elapsed 0, voice: 3 note: 55 velocity 64 event ('note', 2400, 4, 55, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 857, ticks 2400, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 2400, 5, 55, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 858, ticks 2400, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 2400, 6, 43, 64)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 859, ticks 2400, elapsed 0, voice: 0 note: 48 velocity 64 event ('note', 2400, 7, 48, 64)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 860, ticks 2400, elapsed 0, voice: 0 note: 48 velocity 64 event ('note', 2400, 8, 48, 64)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 861, ticks 2400, elapsed 0, voice: 0 note: 48 velocity 64 event ('note', 2400, 9, 48, 64)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 862, ticks 2400, elapsed 0, voice: 0 note: 48 velocity 64 event ('note', 2400, 10, 48, 64)
	// Note off skipped, note 76 not found in channels, probably interrupted
	28,((( 1 &4)<<5)|( 64 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 864, ticks 2459, elapsed 28, voice: 1 note: 64 velocity 0 event ('note', 2459, 2, 64, 0)
	0,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 865, ticks 2459, elapsed 0, voice: 2 note: 64 velocity 0 event ('note', 2459, 3, 64, 0)
	0,((( 3 &4)<<5)|( 55 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 866, ticks 2459, elapsed 0, voice: 3 note: 55 velocity 0 event ('note', 2459, 4, 55, 0)
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 869, ticks 2459, elapsed 0, voice: 0 note: 48 velocity 0 event ('note', 2459, 7, 48, 0)
	// Note off skipped, note 48 not found in channels, probably interrupted
	// Note off skipped, note 48 not found in channels, probably interrupted
	// Note off skipped, note 48 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 873, ticks 2460, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 2460, 1, 74, 64)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 874, ticks 2460, elapsed 0, voice: 1 note: 62 velocity 64 event ('note', 2460, 2, 62, 64)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 875, ticks 2460, elapsed 0, voice: 2 note: 62 velocity 64 event ('note', 2460, 3, 62, 64)
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 876, ticks 2460, elapsed 0, voice: 3 note: 67 velocity 64 event ('note', 2460, 4, 67, 64)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 877, ticks 2460, elapsed 0, voice: 0 note: 67 velocity 64 event ('note', 2460, 5, 67, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 878, ticks 2460, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 2460, 6, 55, 64)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 879, ticks 2460, elapsed 0, voice: 0 note: 47 velocity 64 event ('note', 2460, 7, 47, 64)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 880, ticks 2460, elapsed 0, voice: 0 note: 47 velocity 64 event ('note', 2460, 8, 47, 64)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 881, ticks 2460, elapsed 0, voice: 0 note: 47 velocity 64 event ('note', 2460, 9, 47, 64)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 882, ticks 2460, elapsed 0, voice: 0 note: 47 velocity 64 event ('note', 2460, 10, 47, 64)
	// Note off skipped, note 74 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 884, ticks 2489, elapsed 13, voice: 1 note: 62 velocity 0 event ('note', 2489, 2, 62, 0)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 885, ticks 2489, elapsed 0, voice: 2 note: 62 velocity 0 event ('note', 2489, 3, 62, 0)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 886, ticks 2489, elapsed 0, voice: 0 note: 47 velocity 0 event ('note', 2489, 7, 47, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 72 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 890, ticks 2490, elapsed 0, voice: 0 note: 72 velocity 64 event ('note', 2490, 1, 72, 64)
	0,((( 1 &4)<<5)|( 60 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 891, ticks 2490, elapsed 0, voice: 1 note: 60 velocity 64 event ('note', 2490, 2, 60, 64)
	0,((( 2 &4)<<5)|( 60 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 892, ticks 2490, elapsed 0, voice: 2 note: 60 velocity 64 event ('note', 2490, 3, 60, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 893, ticks 2490, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 2490, 7, 45, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 894, ticks 2490, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 2490, 8, 45, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 895, ticks 2490, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 2490, 9, 45, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 896, ticks 2490, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 2490, 10, 45, 64)
	// Note off skipped, note 72 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 60 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 898, ticks 2519, elapsed 13, voice: 1 note: 60 velocity 0 event ('note', 2519, 2, 60, 0)
	0,((( 2 &4)<<5)|( 60 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 899, ticks 2519, elapsed 0, voice: 2 note: 60 velocity 0 event ('note', 2519, 3, 60, 0)
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 900, ticks 2519, elapsed 0, voice: 3 note: 67 velocity 0 event ('note', 2519, 4, 67, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 903, ticks 2519, elapsed 0, voice: 0 note: 45 velocity 0 event ('note', 2519, 7, 45, 0)
	// Note off skipped, note 45 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 907, ticks 2520, elapsed 0, voice: 0 note: 71 velocity 64 event ('note', 2520, 1, 71, 64)
	0,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 908, ticks 2520, elapsed 0, voice: 1 note: 59 velocity 64 event ('note', 2520, 2, 59, 64)
	0,((( 2 &4)<<5)|( 59 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 909, ticks 2520, elapsed 0, voice: 2 note: 59 velocity 64 event ('note', 2520, 3, 59, 64)
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 910, ticks 2520, elapsed 0, voice: 3 note: 67 velocity 64 event ('note', 2520, 4, 67, 64)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 911, ticks 2520, elapsed 0, voice: 0 note: 67 velocity 64 event ('note', 2520, 5, 67, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 912, ticks 2520, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 2520, 6, 55, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 913, ticks 2520, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 2520, 7, 43, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 914, ticks 2520, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 2520, 8, 43, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 915, ticks 2520, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 2520, 9, 43, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 916, ticks 2520, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 2520, 10, 43, 64)
	// Note off skipped, note 71 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 918, ticks 2549, elapsed 13, voice: 1 note: 59 velocity 0 event ('note', 2549, 2, 59, 0)
	0,((( 2 &4)<<5)|( 59 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 919, ticks 2549, elapsed 0, voice: 2 note: 59 velocity 0 event ('note', 2549, 3, 59, 0)
	0,((( 1 &4)<<5)|( 79 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 920, ticks 2550, elapsed 0, voice: 1 note: 79 velocity 64 event ('note', 2550, 1, 79, 64)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 921, ticks 2550, elapsed 0, voice: 2 note: 67 velocity 64 event ('note', 2550, 2, 67, 64)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 922, ticks 2550, elapsed 0, voice: 0 note: 67 velocity 64 event ('note', 2550, 3, 67, 64)
	13,((( 1 &4)<<5)|( 79 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 923, ticks 2579, elapsed 13, voice: 1 note: 79 velocity 0 event ('note', 2579, 1, 79, 0)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 924, ticks 2579, elapsed 0, voice: 0 note: 67 velocity 0 event ('note', 2579, 2, 67, 0)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 925, ticks 2579, elapsed 0, voice: 2 note: 67 velocity 0 event ('note', 2579, 3, 67, 0)
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 926, ticks 2579, elapsed 0, voice: 3 note: 67 velocity 0 event ('note', 2579, 4, 67, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 933, ticks 2580, elapsed 0, voice: 0 note: 71 velocity 64 event ('note', 2580, 1, 71, 64)
	0,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 934, ticks 2580, elapsed 0, voice: 1 note: 59 velocity 64 event ('note', 2580, 2, 59, 64)
	0,((( 2 &4)<<5)|( 59 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 935, ticks 2580, elapsed 0, voice: 2 note: 59 velocity 64 event ('note', 2580, 3, 59, 64)
	0,((( 3 &4)<<5)|( 55 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 936, ticks 2580, elapsed 0, voice: 3 note: 55 velocity 64 event ('note', 2580, 4, 55, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 937, ticks 2580, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 2580, 5, 55, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 938, ticks 2580, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 2580, 6, 43, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 939, ticks 2580, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 2580, 7, 55, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 940, ticks 2580, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 2580, 8, 55, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 941, ticks 2580, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 2580, 9, 55, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 942, ticks 2580, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 2580, 10, 55, 64)
	// Note off skipped, note 71 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 944, ticks 2609, elapsed 13, voice: 1 note: 59 velocity 0 event ('note', 2609, 2, 59, 0)
	0,((( 2 &4)<<5)|( 59 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 945, ticks 2609, elapsed 0, voice: 2 note: 59 velocity 0 event ('note', 2609, 3, 59, 0)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 946, ticks 2609, elapsed 0, voice: 0 note: 55 velocity 0 event ('note', 2609, 7, 55, 0)
	0,((( 3 &4)<<5)|( 55 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 947, ticks 2609, elapsed 0, voice: 3 note: 55 velocity 0 event ('note', 2609, 8, 55, 0)
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 79 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 950, ticks 2610, elapsed 0, voice: 0 note: 79 velocity 64 event ('note', 2610, 1, 79, 64)
	0,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 951, ticks 2610, elapsed 0, voice: 1 note: 67 velocity 64 event ('note', 2610, 2, 67, 64)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 952, ticks 2610, elapsed 0, voice: 2 note: 67 velocity 64 event ('note', 2610, 3, 67, 64)
	0,((( 3 &4)<<5)|( 54 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 953, ticks 2610, elapsed 0, voice: 3 note: 54 velocity 64 event ('note', 2610, 7, 54, 64)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 954, ticks 2610, elapsed 0, voice: 0 note: 54 velocity 64 event ('note', 2610, 8, 54, 64)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 955, ticks 2610, elapsed 0, voice: 0 note: 54 velocity 64 event ('note', 2610, 9, 54, 64)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 956, ticks 2610, elapsed 0, voice: 0 note: 54 velocity 64 event ('note', 2610, 10, 54, 64)
	// Note off skipped, note 79 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 958, ticks 2639, elapsed 13, voice: 1 note: 67 velocity 0 event ('note', 2639, 2, 67, 0)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 959, ticks 2639, elapsed 0, voice: 2 note: 67 velocity 0 event ('note', 2639, 3, 67, 0)
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 963, ticks 2639, elapsed 0, voice: 0 note: 54 velocity 0 event ('note', 2639, 7, 54, 0)
	0,((( 3 &4)<<5)|( 54 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 964, ticks 2639, elapsed 0, voice: 3 note: 54 velocity 0 event ('note', 2639, 8, 54, 0)
	// Note off skipped, note 54 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 72 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 967, ticks 2640, elapsed 0, voice: 0 note: 72 velocity 64 event ('note', 2640, 1, 72, 64)
	0,((( 1 &4)<<5)|( 60 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 968, ticks 2640, elapsed 0, voice: 1 note: 60 velocity 64 event ('note', 2640, 2, 60, 64)
	0,((( 2 &4)<<5)|( 60 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 969, ticks 2640, elapsed 0, voice: 2 note: 60 velocity 64 event ('note', 2640, 3, 60, 64)
	0,((( 3 &4)<<5)|( 55 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 970, ticks 2640, elapsed 0, voice: 3 note: 55 velocity 64 event ('note', 2640, 4, 55, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 971, ticks 2640, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 2640, 5, 55, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 972, ticks 2640, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 2640, 6, 43, 64)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 973, ticks 2640, elapsed 0, voice: 0 note: 52 velocity 64 event ('note', 2640, 7, 52, 64)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 974, ticks 2640, elapsed 0, voice: 0 note: 52 velocity 64 event ('note', 2640, 8, 52, 64)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 975, ticks 2640, elapsed 0, voice: 0 note: 52 velocity 64 event ('note', 2640, 9, 52, 64)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 976, ticks 2640, elapsed 0, voice: 0 note: 52 velocity 64 event ('note', 2640, 10, 52, 64)
	// Note off skipped, note 72 not found in channels, probably interrupted
	28,((( 1 &4)<<5)|( 60 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 978, ticks 2699, elapsed 28, voice: 1 note: 60 velocity 0 event ('note', 2699, 2, 60, 0)
	0,((( 2 &4)<<5)|( 60 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 979, ticks 2699, elapsed 0, voice: 2 note: 60 velocity 0 event ('note', 2699, 3, 60, 0)
	0,((( 3 &4)<<5)|( 55 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 980, ticks 2699, elapsed 0, voice: 3 note: 55 velocity 0 event ('note', 2699, 4, 55, 0)
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 983, ticks 2699, elapsed 0, voice: 0 note: 52 velocity 0 event ('note', 2699, 7, 52, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	// Note off skipped, note 52 not found in channels, probably interrupted
	// Note off skipped, note 52 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 987, ticks 2700, elapsed 0, voice: 0 note: 71 velocity 64 event ('note', 2700, 1, 71, 64)
	0,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 988, ticks 2700, elapsed 0, voice: 1 note: 59 velocity 64 event ('note', 2700, 2, 59, 64)
	0,((( 2 &4)<<5)|( 59 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 989, ticks 2700, elapsed 0, voice: 2 note: 59 velocity 64 event ('note', 2700, 3, 59, 64)
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 990, ticks 2700, elapsed 0, voice: 3 note: 67 velocity 64 event ('note', 2700, 4, 67, 64)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 991, ticks 2700, elapsed 0, voice: 0 note: 67 velocity 64 event ('note', 2700, 5, 67, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 992, ticks 2700, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 2700, 6, 55, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 993, ticks 2700, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 2700, 7, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 994, ticks 2700, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 2700, 8, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 995, ticks 2700, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 2700, 9, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 996, ticks 2700, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 2700, 10, 50, 64)
	// Note off skipped, note 71 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 998, ticks 2729, elapsed 13, voice: 1 note: 59 velocity 0 event ('note', 2729, 2, 59, 0)
	0,((( 2 &4)<<5)|( 59 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 999, ticks 2729, elapsed 0, voice: 2 note: 59 velocity 0 event ('note', 2729, 3, 59, 0)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1000, ticks 2729, elapsed 0, voice: 0 note: 50 velocity 0 event ('note', 2729, 7, 50, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1004, ticks 2730, elapsed 0, voice: 0 note: 69 velocity 64 event ('note', 2730, 1, 69, 64)
	0,((( 1 &4)<<5)|( 57 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1005, ticks 2730, elapsed 0, voice: 1 note: 57 velocity 64 event ('note', 2730, 2, 57, 64)
	0,((( 2 &4)<<5)|( 57 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1006, ticks 2730, elapsed 0, voice: 2 note: 57 velocity 64 event ('note', 2730, 3, 57, 64)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1007, ticks 2730, elapsed 0, voice: 0 note: 48 velocity 64 event ('note', 2730, 7, 48, 64)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1008, ticks 2730, elapsed 0, voice: 0 note: 48 velocity 64 event ('note', 2730, 8, 48, 64)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1009, ticks 2730, elapsed 0, voice: 0 note: 48 velocity 64 event ('note', 2730, 9, 48, 64)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1010, ticks 2730, elapsed 0, voice: 0 note: 48 velocity 64 event ('note', 2730, 10, 48, 64)
	// Note off skipped, note 69 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 57 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1012, ticks 2759, elapsed 13, voice: 1 note: 57 velocity 0 event ('note', 2759, 2, 57, 0)
	0,((( 2 &4)<<5)|( 57 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1013, ticks 2759, elapsed 0, voice: 2 note: 57 velocity 0 event ('note', 2759, 3, 57, 0)
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1014, ticks 2759, elapsed 0, voice: 3 note: 67 velocity 0 event ('note', 2759, 4, 67, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1017, ticks 2759, elapsed 0, voice: 0 note: 48 velocity 0 event ('note', 2759, 7, 48, 0)
	// Note off skipped, note 48 not found in channels, probably interrupted
	// Note off skipped, note 48 not found in channels, probably interrupted
	// Note off skipped, note 48 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1021, ticks 2760, elapsed 0, voice: 0 note: 67 velocity 64 event ('note', 2760, 1, 67, 64)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1022, ticks 2760, elapsed 0, voice: 1 note: 55 velocity 64 event ('note', 2760, 2, 55, 64)
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1023, ticks 2760, elapsed 0, voice: 2 note: 55 velocity 64 event ('note', 2760, 3, 55, 64)
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 1024, ticks 2760, elapsed 0, voice: 3 note: 67 velocity 64 event ('note', 2760, 4, 67, 64)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1025, ticks 2760, elapsed 0, voice: 0 note: 67 velocity 64 event ('note', 2760, 5, 67, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1026, ticks 2760, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 2760, 6, 55, 64)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1027, ticks 2760, elapsed 0, voice: 0 note: 47 velocity 64 event ('note', 2760, 7, 47, 64)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1028, ticks 2760, elapsed 0, voice: 0 note: 47 velocity 64 event ('note', 2760, 8, 47, 64)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1029, ticks 2760, elapsed 0, voice: 0 note: 47 velocity 64 event ('note', 2760, 9, 47, 64)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1030, ticks 2760, elapsed 0, voice: 0 note: 47 velocity 64 event ('note', 2760, 10, 47, 64)
	13,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1031, ticks 2789, elapsed 13, voice: 3 note: 67 velocity 0 event ('note', 2789, 1, 67, 0)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1032, ticks 2789, elapsed 0, voice: 1 note: 55 velocity 0 event ('note', 2789, 2, 55, 0)
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1033, ticks 2789, elapsed 0, voice: 2 note: 55 velocity 0 event ('note', 2789, 3, 55, 0)
	0,((( 1 &4)<<5)|( 79 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1034, ticks 2790, elapsed 0, voice: 1 note: 79 velocity 64 event ('note', 2790, 1, 79, 64)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1035, ticks 2790, elapsed 0, voice: 2 note: 67 velocity 64 event ('note', 2790, 2, 67, 64)
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 1036, ticks 2790, elapsed 0, voice: 3 note: 67 velocity 64 event ('note', 2790, 3, 67, 64)
	13,((( 1 &4)<<5)|( 79 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1037, ticks 2819, elapsed 13, voice: 1 note: 79 velocity 0 event ('note', 2819, 1, 79, 0)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1038, ticks 2819, elapsed 0, voice: 2 note: 67 velocity 0 event ('note', 2819, 2, 67, 0)
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1039, ticks 2819, elapsed 0, voice: 3 note: 67 velocity 0 event ('note', 2819, 3, 67, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1043, ticks 2819, elapsed 0, voice: 0 note: 47 velocity 0 event ('note', 2819, 7, 47, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1047, ticks 2820, elapsed 0, voice: 0 note: 69 velocity 64 event ('note', 2820, 1, 69, 64)
	0,((( 1 &4)<<5)|( 57 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1048, ticks 2820, elapsed 0, voice: 1 note: 57 velocity 64 event ('note', 2820, 2, 57, 64)
	0,((( 2 &4)<<5)|( 57 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1049, ticks 2820, elapsed 0, voice: 2 note: 57 velocity 64 event ('note', 2820, 3, 57, 64)
	0,((( 3 &4)<<5)|( 55 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 1050, ticks 2820, elapsed 0, voice: 3 note: 55 velocity 64 event ('note', 2820, 4, 55, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1051, ticks 2820, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 2820, 5, 55, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1052, ticks 2820, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 2820, 6, 43, 64)
	0,((( 0 &4)<<5)|( 49 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1053, ticks 2820, elapsed 0, voice: 0 note: 49 velocity 64 event ('note', 2820, 7, 49, 64)
	0,((( 0 &4)<<5)|( 49 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1054, ticks 2820, elapsed 0, voice: 0 note: 49 velocity 64 event ('note', 2820, 8, 49, 64)
	0,((( 0 &4)<<5)|( 49 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1055, ticks 2820, elapsed 0, voice: 0 note: 49 velocity 64 event ('note', 2820, 9, 49, 64)
	0,((( 0 &4)<<5)|( 49 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1056, ticks 2820, elapsed 0, voice: 0 note: 49 velocity 64 event ('note', 2820, 10, 49, 64)
	// Note off skipped, note 69 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 57 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1058, ticks 2849, elapsed 13, voice: 1 note: 57 velocity 0 event ('note', 2849, 2, 57, 0)
	0,((( 2 &4)<<5)|( 57 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1059, ticks 2849, elapsed 0, voice: 2 note: 57 velocity 0 event ('note', 2849, 3, 57, 0)
	0,((( 1 &4)<<5)|( 79 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1060, ticks 2850, elapsed 0, voice: 1 note: 79 velocity 64 event ('note', 2850, 1, 79, 64)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1061, ticks 2850, elapsed 0, voice: 2 note: 67 velocity 64 event ('note', 2850, 2, 67, 64)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1062, ticks 2850, elapsed 0, voice: 0 note: 67 velocity 64 event ('note', 2850, 3, 67, 64)
	13,((( 1 &4)<<5)|( 79 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1063, ticks 2879, elapsed 13, voice: 1 note: 79 velocity 0 event ('note', 2879, 1, 79, 0)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1064, ticks 2879, elapsed 0, voice: 0 note: 67 velocity 0 event ('note', 2879, 2, 67, 0)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1065, ticks 2879, elapsed 0, voice: 2 note: 67 velocity 0 event ('note', 2879, 3, 67, 0)
	0,((( 3 &4)<<5)|( 55 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1066, ticks 2879, elapsed 0, voice: 3 note: 55 velocity 0 event ('note', 2879, 4, 55, 0)
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 49 not found in channels, probably interrupted
	// Note off skipped, note 49 not found in channels, probably interrupted
	// Note off skipped, note 49 not found in channels, probably interrupted
	// Note off skipped, note 49 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1073, ticks 2880, elapsed 0, voice: 0 note: 71 velocity 64 event ('note', 2880, 1, 71, 64)
	0,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1074, ticks 2880, elapsed 0, voice: 1 note: 59 velocity 64 event ('note', 2880, 2, 59, 64)
	0,((( 2 &4)<<5)|( 59 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1075, ticks 2880, elapsed 0, voice: 2 note: 59 velocity 64 event ('note', 2880, 3, 59, 64)
	0,((( 3 &4)<<5)|( 55 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 1076, ticks 2880, elapsed 0, voice: 3 note: 55 velocity 64 event ('note', 2880, 4, 55, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1077, ticks 2880, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 2880, 5, 55, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1078, ticks 2880, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 2880, 6, 43, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1079, ticks 2880, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 2880, 7, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1080, ticks 2880, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 2880, 8, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1081, ticks 2880, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 2880, 9, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1082, ticks 2880, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 2880, 10, 50, 64)
	// Note off skipped, note 71 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1084, ticks 2909, elapsed 13, voice: 1 note: 59 velocity 0 event ('note', 2909, 2, 59, 0)
	0,((( 2 &4)<<5)|( 59 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1085, ticks 2909, elapsed 0, voice: 2 note: 59 velocity 0 event ('note', 2909, 3, 59, 0)
	0,((( 1 &4)<<5)|( 79 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1086, ticks 2910, elapsed 0, voice: 1 note: 79 velocity 64 event ('note', 2910, 1, 79, 64)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1087, ticks 2910, elapsed 0, voice: 2 note: 67 velocity 64 event ('note', 2910, 2, 67, 64)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1088, ticks 2910, elapsed 0, voice: 0 note: 67 velocity 64 event ('note', 2910, 3, 67, 64)
	13,((( 1 &4)<<5)|( 79 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1089, ticks 2939, elapsed 13, voice: 1 note: 79 velocity 0 event ('note', 2939, 1, 79, 0)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1090, ticks 2939, elapsed 0, voice: 0 note: 67 velocity 0 event ('note', 2939, 2, 67, 0)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1091, ticks 2939, elapsed 0, voice: 2 note: 67 velocity 0 event ('note', 2939, 3, 67, 0)
	0,((( 3 &4)<<5)|( 55 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1092, ticks 2939, elapsed 0, voice: 3 note: 55 velocity 0 event ('note', 2939, 4, 55, 0)
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1099, ticks 2940, elapsed 0, voice: 0 note: 73 velocity 64 event ('note', 2940, 1, 73, 64)
	0,((( 1 &4)<<5)|( 61 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1100, ticks 2940, elapsed 0, voice: 1 note: 61 velocity 64 event ('note', 2940, 2, 61, 64)
	0,((( 2 &4)<<5)|( 61 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1101, ticks 2940, elapsed 0, voice: 2 note: 61 velocity 64 event ('note', 2940, 3, 61, 64)
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 1102, ticks 2940, elapsed 0, voice: 3 note: 67 velocity 64 event ('note', 2940, 4, 67, 64)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1103, ticks 2940, elapsed 0, voice: 0 note: 67 velocity 64 event ('note', 2940, 5, 67, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1104, ticks 2940, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 2940, 6, 55, 64)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1105, ticks 2940, elapsed 0, voice: 0 note: 38 velocity 64 event ('note', 2940, 7, 38, 64)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1106, ticks 2940, elapsed 0, voice: 0 note: 38 velocity 64 event ('note', 2940, 8, 38, 64)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1107, ticks 2940, elapsed 0, voice: 0 note: 38 velocity 64 event ('note', 2940, 9, 38, 64)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1108, ticks 2940, elapsed 0, voice: 0 note: 38 velocity 64 event ('note', 2940, 10, 38, 64)
	// Note off skipped, note 73 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 61 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1110, ticks 2969, elapsed 13, voice: 1 note: 61 velocity 0 event ('note', 2969, 2, 61, 0)
	0,((( 2 &4)<<5)|( 61 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1111, ticks 2969, elapsed 0, voice: 2 note: 61 velocity 0 event ('note', 2969, 3, 61, 0)
	0,((( 1 &4)<<5)|( 79 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1112, ticks 2970, elapsed 0, voice: 1 note: 79 velocity 64 event ('note', 2970, 1, 79, 64)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1113, ticks 2970, elapsed 0, voice: 2 note: 67 velocity 64 event ('note', 2970, 2, 67, 64)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1114, ticks 2970, elapsed 0, voice: 0 note: 67 velocity 64 event ('note', 2970, 3, 67, 64)
	13,((( 1 &4)<<5)|( 79 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1115, ticks 2999, elapsed 13, voice: 1 note: 79 velocity 0 event ('note', 2999, 1, 79, 0)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1116, ticks 2999, elapsed 0, voice: 0 note: 67 velocity 0 event ('note', 2999, 2, 67, 0)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1117, ticks 2999, elapsed 0, voice: 2 note: 67 velocity 0 event ('note', 2999, 3, 67, 0)
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1118, ticks 2999, elapsed 0, voice: 3 note: 67 velocity 0 event ('note', 2999, 4, 67, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 38 not found in channels, probably interrupted
	// Note off skipped, note 38 not found in channels, probably interrupted
	// Note off skipped, note 38 not found in channels, probably interrupted
	// Note off skipped, note 38 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1125, ticks 3000, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 3000, 1, 74, 64)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1126, ticks 3000, elapsed 0, voice: 1 note: 62 velocity 64 event ('note', 3000, 2, 62, 64)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1127, ticks 3000, elapsed 0, voice: 2 note: 62 velocity 64 event ('note', 3000, 3, 62, 64)
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 1128, ticks 3000, elapsed 0, voice: 3 note: 67 velocity 64 event ('note', 3000, 4, 67, 64)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1129, ticks 3000, elapsed 0, voice: 0 note: 67 velocity 64 event ('note', 3000, 5, 67, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1130, ticks 3000, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 3000, 6, 55, 64)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1131, ticks 3000, elapsed 0, voice: 0 note: 38 velocity 64 event ('note', 3000, 7, 38, 64)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1132, ticks 3000, elapsed 0, voice: 0 note: 38 velocity 64 event ('note', 3000, 8, 38, 64)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1133, ticks 3000, elapsed 0, voice: 0 note: 38 velocity 64 event ('note', 3000, 9, 38, 64)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1134, ticks 3000, elapsed 0, voice: 0 note: 38 velocity 64 event ('note', 3000, 10, 38, 64)
	// Note off skipped, note 74 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1136, ticks 3029, elapsed 13, voice: 1 note: 62 velocity 0 event ('note', 3029, 2, 62, 0)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1137, ticks 3029, elapsed 0, voice: 2 note: 62 velocity 0 event ('note', 3029, 3, 62, 0)
	0,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1138, ticks 3030, elapsed 0, voice: 1 note: 78 velocity 64 event ('note', 3030, 1, 78, 64)
	0,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1139, ticks 3030, elapsed 0, voice: 2 note: 66 velocity 64 event ('note', 3030, 2, 66, 64)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1140, ticks 3030, elapsed 0, voice: 0 note: 66 velocity 64 event ('note', 3030, 3, 66, 64)
	13,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1141, ticks 3059, elapsed 13, voice: 1 note: 78 velocity 0 event ('note', 3059, 1, 78, 0)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1142, ticks 3059, elapsed 0, voice: 0 note: 66 velocity 0 event ('note', 3059, 2, 66, 0)
	0,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1143, ticks 3059, elapsed 0, voice: 2 note: 66 velocity 0 event ('note', 3059, 3, 66, 0)
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1144, ticks 3059, elapsed 0, voice: 3 note: 67 velocity 0 event ('note', 3059, 4, 67, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 38 not found in channels, probably interrupted
	// Note off skipped, note 38 not found in channels, probably interrupted
	// Note off skipped, note 38 not found in channels, probably interrupted
	// Note off skipped, note 38 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1151, ticks 3060, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 3060, 1, 74, 64)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1152, ticks 3060, elapsed 0, voice: 1 note: 62 velocity 64 event ('note', 3060, 2, 62, 64)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1153, ticks 3060, elapsed 0, voice: 2 note: 62 velocity 64 event ('note', 3060, 3, 62, 64)
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 1154, ticks 3060, elapsed 0, voice: 3 note: 67 velocity 64 event ('note', 3060, 4, 67, 64)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1155, ticks 3060, elapsed 0, voice: 0 note: 67 velocity 64 event ('note', 3060, 5, 67, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1156, ticks 3060, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 3060, 6, 55, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1157, ticks 3060, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 3060, 7, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1158, ticks 3060, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 3060, 8, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1159, ticks 3060, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 3060, 9, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1160, ticks 3060, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 3060, 10, 50, 64)
	// Note off skipped, note 74 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1162, ticks 3089, elapsed 13, voice: 1 note: 62 velocity 0 event ('note', 3089, 2, 62, 0)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1163, ticks 3089, elapsed 0, voice: 2 note: 62 velocity 0 event ('note', 3089, 3, 62, 0)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1164, ticks 3089, elapsed 0, voice: 0 note: 50 velocity 0 event ('note', 3089, 7, 50, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 79 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1168, ticks 3090, elapsed 0, voice: 0 note: 79 velocity 64 event ('note', 3090, 1, 79, 64)
	0,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1169, ticks 3090, elapsed 0, voice: 1 note: 67 velocity 64 event ('note', 3090, 2, 67, 64)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1170, ticks 3090, elapsed 0, voice: 2 note: 67 velocity 64 event ('note', 3090, 3, 67, 64)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1171, ticks 3090, elapsed 0, voice: 0 note: 52 velocity 64 event ('note', 3090, 7, 52, 64)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1172, ticks 3090, elapsed 0, voice: 0 note: 52 velocity 64 event ('note', 3090, 8, 52, 64)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1173, ticks 3090, elapsed 0, voice: 0 note: 52 velocity 64 event ('note', 3090, 9, 52, 64)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1174, ticks 3090, elapsed 0, voice: 0 note: 52 velocity 64 event ('note', 3090, 10, 52, 64)
	// Note off skipped, note 79 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1176, ticks 3119, elapsed 13, voice: 1 note: 67 velocity 0 event ('note', 3119, 2, 67, 0)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1177, ticks 3119, elapsed 0, voice: 2 note: 67 velocity 0 event ('note', 3119, 3, 67, 0)
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1178, ticks 3119, elapsed 0, voice: 3 note: 67 velocity 0 event ('note', 3119, 4, 67, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1181, ticks 3119, elapsed 0, voice: 0 note: 52 velocity 0 event ('note', 3119, 7, 52, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	// Note off skipped, note 52 not found in channels, probably interrupted
	// Note off skipped, note 52 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1185, ticks 3120, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 3120, 1, 74, 64)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1186, ticks 3120, elapsed 0, voice: 1 note: 62 velocity 64 event ('note', 3120, 2, 62, 64)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1187, ticks 3120, elapsed 0, voice: 2 note: 62 velocity 64 event ('note', 3120, 3, 62, 64)
	0,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 1188, ticks 3120, elapsed 0, voice: 3 note: 69 velocity 64 event ('note', 3120, 4, 69, 64)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1189, ticks 3120, elapsed 0, voice: 0 note: 69 velocity 64 event ('note', 3120, 5, 69, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1190, ticks 3120, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 3120, 6, 57, 64)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1191, ticks 3120, elapsed 0, voice: 0 note: 54 velocity 64 event ('note', 3120, 7, 54, 64)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1192, ticks 3120, elapsed 0, voice: 0 note: 54 velocity 64 event ('note', 3120, 8, 54, 64)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1193, ticks 3120, elapsed 0, voice: 0 note: 54 velocity 64 event ('note', 3120, 9, 54, 64)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1194, ticks 3120, elapsed 0, voice: 0 note: 54 velocity 64 event ('note', 3120, 10, 54, 64)
	// Note off skipped, note 74 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1196, ticks 3149, elapsed 13, voice: 1 note: 62 velocity 0 event ('note', 3149, 2, 62, 0)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1197, ticks 3149, elapsed 0, voice: 2 note: 62 velocity 0 event ('note', 3149, 3, 62, 0)
	0,((( 1 &4)<<5)|( 81 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1198, ticks 3150, elapsed 0, voice: 1 note: 81 velocity 64 event ('note', 3150, 1, 81, 64)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1199, ticks 3150, elapsed 0, voice: 2 note: 69 velocity 64 event ('note', 3150, 2, 69, 64)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1200, ticks 3150, elapsed 0, voice: 0 note: 69 velocity 64 event ('note', 3150, 3, 69, 64)
	13,((( 1 &4)<<5)|( 81 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1201, ticks 3179, elapsed 13, voice: 1 note: 81 velocity 0 event ('note', 3179, 1, 81, 0)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1202, ticks 3179, elapsed 0, voice: 0 note: 69 velocity 0 event ('note', 3179, 2, 69, 0)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1203, ticks 3179, elapsed 0, voice: 2 note: 69 velocity 0 event ('note', 3179, 3, 69, 0)
	0,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1204, ticks 3179, elapsed 0, voice: 3 note: 69 velocity 0 event ('note', 3179, 4, 69, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1211, ticks 3180, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 3180, 1, 74, 64)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1212, ticks 3180, elapsed 0, voice: 1 note: 62 velocity 64 event ('note', 3180, 2, 62, 64)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1213, ticks 3180, elapsed 0, voice: 2 note: 62 velocity 64 event ('note', 3180, 3, 62, 64)
	0,((( 3 &4)<<5)|( 71 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 1214, ticks 3180, elapsed 0, voice: 3 note: 71 velocity 64 event ('note', 3180, 4, 71, 64)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1215, ticks 3180, elapsed 0, voice: 0 note: 71 velocity 64 event ('note', 3180, 5, 71, 64)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1216, ticks 3180, elapsed 0, voice: 0 note: 59 velocity 64 event ('note', 3180, 6, 59, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1217, ticks 3180, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 3180, 7, 55, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1218, ticks 3180, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 3180, 8, 55, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1219, ticks 3180, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 3180, 9, 55, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1220, ticks 3180, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 3180, 10, 55, 64)
	// Note off skipped, note 74 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1222, ticks 3209, elapsed 13, voice: 1 note: 62 velocity 0 event ('note', 3209, 2, 62, 0)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1223, ticks 3209, elapsed 0, voice: 2 note: 62 velocity 0 event ('note', 3209, 3, 62, 0)
	0,((( 1 &4)<<5)|( 83 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1224, ticks 3210, elapsed 0, voice: 1 note: 83 velocity 64 event ('note', 3210, 1, 83, 64)
	0,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1225, ticks 3210, elapsed 0, voice: 2 note: 71 velocity 64 event ('note', 3210, 2, 71, 64)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1226, ticks 3210, elapsed 0, voice: 0 note: 71 velocity 64 event ('note', 3210, 3, 71, 64)
	13,((( 1 &4)<<5)|( 83 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1227, ticks 3239, elapsed 13, voice: 1 note: 83 velocity 0 event ('note', 3239, 1, 83, 0)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1228, ticks 3239, elapsed 0, voice: 0 note: 71 velocity 0 event ('note', 3239, 2, 71, 0)
	0,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1229, ticks 3239, elapsed 0, voice: 2 note: 71 velocity 0 event ('note', 3239, 3, 71, 0)
	0,((( 3 &4)<<5)|( 71 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1230, ticks 3239, elapsed 0, voice: 3 note: 71 velocity 0 event ('note', 3239, 4, 71, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1237, ticks 3240, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 3240, 1, 74, 64)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1238, ticks 3240, elapsed 0, voice: 1 note: 62 velocity 64 event ('note', 3240, 2, 62, 64)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1239, ticks 3240, elapsed 0, voice: 2 note: 62 velocity 64 event ('note', 3240, 3, 62, 64)
	0,((( 3 &4)<<5)|( 72 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 1240, ticks 3240, elapsed 0, voice: 3 note: 72 velocity 64 event ('note', 3240, 4, 72, 64)
	0,((( 0 &4)<<5)|( 72 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1241, ticks 3240, elapsed 0, voice: 0 note: 72 velocity 64 event ('note', 3240, 5, 72, 64)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1242, ticks 3240, elapsed 0, voice: 0 note: 60 velocity 64 event ('note', 3240, 6, 60, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1243, ticks 3240, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 3240, 7, 57, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1244, ticks 3240, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 3240, 8, 57, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1245, ticks 3240, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 3240, 9, 57, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1246, ticks 3240, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 3240, 10, 57, 64)
	// Note off skipped, note 74 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1248, ticks 3269, elapsed 13, voice: 1 note: 62 velocity 0 event ('note', 3269, 2, 62, 0)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1249, ticks 3269, elapsed 0, voice: 2 note: 62 velocity 0 event ('note', 3269, 3, 62, 0)
	0,((( 1 &4)<<5)|( 84 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1250, ticks 3270, elapsed 0, voice: 1 note: 84 velocity 64 event ('note', 3270, 1, 84, 64)
	0,((( 2 &4)<<5)|( 72 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1251, ticks 3270, elapsed 0, voice: 2 note: 72 velocity 64 event ('note', 3270, 2, 72, 64)
	0,((( 0 &4)<<5)|( 72 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1252, ticks 3270, elapsed 0, voice: 0 note: 72 velocity 64 event ('note', 3270, 3, 72, 64)
	13,((( 1 &4)<<5)|( 84 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1253, ticks 3299, elapsed 13, voice: 1 note: 84 velocity 0 event ('note', 3299, 1, 84, 0)
	0,((( 0 &4)<<5)|( 72 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1254, ticks 3299, elapsed 0, voice: 0 note: 72 velocity 0 event ('note', 3299, 2, 72, 0)
	0,((( 2 &4)<<5)|( 72 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1255, ticks 3299, elapsed 0, voice: 2 note: 72 velocity 0 event ('note', 3299, 3, 72, 0)
	0,((( 3 &4)<<5)|( 72 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1256, ticks 3299, elapsed 0, voice: 3 note: 72 velocity 0 event ('note', 3299, 4, 72, 0)
	// Note off skipped, note 72 not found in channels, probably interrupted
	// Note off skipped, note 60 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1263, ticks 3300, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 3300, 1, 74, 64)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1264, ticks 3300, elapsed 0, voice: 1 note: 62 velocity 64 event ('note', 3300, 2, 62, 64)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1265, ticks 3300, elapsed 0, voice: 2 note: 62 velocity 64 event ('note', 3300, 3, 62, 64)
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 1266, ticks 3300, elapsed 0, voice: 3 note: 74 velocity 64 event ('note', 3300, 4, 74, 64)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1267, ticks 3300, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 3300, 5, 74, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1268, ticks 3300, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 3300, 6, 62, 64)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1269, ticks 3300, elapsed 0, voice: 0 note: 54 velocity 64 event ('note', 3300, 7, 54, 64)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1270, ticks 3300, elapsed 0, voice: 0 note: 54 velocity 64 event ('note', 3300, 8, 54, 64)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1271, ticks 3300, elapsed 0, voice: 0 note: 54 velocity 64 event ('note', 3300, 9, 54, 64)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1272, ticks 3300, elapsed 0, voice: 0 note: 54 velocity 64 event ('note', 3300, 10, 54, 64)
	13,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1273, ticks 3329, elapsed 13, voice: 3 note: 74 velocity 0 event ('note', 3329, 1, 74, 0)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1274, ticks 3329, elapsed 0, voice: 1 note: 62 velocity 0 event ('note', 3329, 2, 62, 0)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1275, ticks 3329, elapsed 0, voice: 2 note: 62 velocity 0 event ('note', 3329, 3, 62, 0)
	0,((( 1 &4)<<5)|( 86 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1276, ticks 3330, elapsed 0, voice: 1 note: 86 velocity 64 event ('note', 3330, 1, 86, 64)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1277, ticks 3330, elapsed 0, voice: 2 note: 74 velocity 64 event ('note', 3330, 2, 74, 64)
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 1278, ticks 3330, elapsed 0, voice: 3 note: 74 velocity 64 event ('note', 3330, 3, 74, 64)
	13,((( 1 &4)<<5)|( 86 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1279, ticks 3359, elapsed 13, voice: 1 note: 86 velocity 0 event ('note', 3359, 1, 86, 0)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1280, ticks 3359, elapsed 0, voice: 2 note: 74 velocity 0 event ('note', 3359, 2, 74, 0)
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1281, ticks 3359, elapsed 0, voice: 3 note: 74 velocity 0 event ('note', 3359, 3, 74, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1285, ticks 3359, elapsed 0, voice: 0 note: 54 velocity 0 event ('note', 3359, 7, 54, 0)
	// Note off skipped, note 54 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 83 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1289, ticks 3360, elapsed 0, voice: 0 note: 83 velocity 64 event ('note', 3360, 1, 83, 64)
	0,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1290, ticks 3360, elapsed 0, voice: 1 note: 71 velocity 64 event ('note', 3360, 2, 71, 64)
	0,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1291, ticks 3360, elapsed 0, voice: 2 note: 71 velocity 64 event ('note', 3360, 3, 71, 64)
	0,((( 3 &4)<<5)|( 71 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 1292, ticks 3360, elapsed 0, voice: 3 note: 71 velocity 64 event ('note', 3360, 4, 71, 64)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1293, ticks 3360, elapsed 0, voice: 0 note: 71 velocity 64 event ('note', 3360, 5, 71, 64)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1294, ticks 3360, elapsed 0, voice: 0 note: 59 velocity 64 event ('note', 3360, 6, 59, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1295, ticks 3360, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 3360, 7, 55, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1296, ticks 3360, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 3360, 8, 55, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1297, ticks 3360, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 3360, 9, 55, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1298, ticks 3360, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 3360, 10, 55, 64)
	// Note off skipped, note 83 not found in channels, probably interrupted
	28,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1300, ticks 3419, elapsed 28, voice: 1 note: 71 velocity 0 event ('note', 3419, 2, 71, 0)
	0,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1301, ticks 3419, elapsed 0, voice: 2 note: 71 velocity 0 event ('note', 3419, 3, 71, 0)
	0,((( 3 &4)<<5)|( 71 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1302, ticks 3419, elapsed 0, voice: 3 note: 71 velocity 0 event ('note', 3419, 4, 71, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1305, ticks 3419, elapsed 0, voice: 0 note: 55 velocity 0 event ('note', 3419, 7, 55, 0)
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 81 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1309, ticks 3420, elapsed 0, voice: 0 note: 81 velocity 64 event ('note', 3420, 1, 81, 64)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1310, ticks 3420, elapsed 0, voice: 1 note: 69 velocity 64 event ('note', 3420, 2, 69, 64)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1311, ticks 3420, elapsed 0, voice: 2 note: 69 velocity 64 event ('note', 3420, 3, 69, 64)
	0,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 1312, ticks 3420, elapsed 0, voice: 3 note: 69 velocity 64 event ('note', 3420, 4, 69, 64)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1313, ticks 3420, elapsed 0, voice: 0 note: 69 velocity 64 event ('note', 3420, 5, 69, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1314, ticks 3420, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 3420, 6, 57, 64)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1315, ticks 3420, elapsed 0, voice: 0 note: 60 velocity 64 event ('note', 3420, 7, 60, 64)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1316, ticks 3420, elapsed 0, voice: 0 note: 60 velocity 64 event ('note', 3420, 8, 60, 64)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1317, ticks 3420, elapsed 0, voice: 0 note: 60 velocity 64 event ('note', 3420, 9, 60, 64)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1318, ticks 3420, elapsed 0, voice: 0 note: 60 velocity 64 event ('note', 3420, 10, 60, 64)
	// Note off skipped, note 81 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1320, ticks 3449, elapsed 13, voice: 1 note: 69 velocity 0 event ('note', 3449, 2, 69, 0)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1321, ticks 3449, elapsed 0, voice: 2 note: 69 velocity 0 event ('note', 3449, 3, 69, 0)
	0,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1322, ticks 3449, elapsed 0, voice: 3 note: 69 velocity 0 event ('note', 3449, 4, 69, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	0,((( 1 &4)<<5)|( 79 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1325, ticks 3450, elapsed 0, voice: 1 note: 79 velocity 64 event ('note', 3450, 1, 79, 64)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1326, ticks 3450, elapsed 0, voice: 2 note: 67 velocity 64 event ('note', 3450, 2, 67, 64)
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 1327, ticks 3450, elapsed 0, voice: 3 note: 67 velocity 64 event ('note', 3450, 3, 67, 64)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1328, ticks 3450, elapsed 0, voice: 0 note: 67 velocity 64 event ('note', 3450, 4, 67, 64)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1329, ticks 3450, elapsed 0, voice: 0 note: 67 velocity 64 event ('note', 3450, 5, 67, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1330, ticks 3450, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 3450, 6, 55, 64)
	13,((( 1 &4)<<5)|( 79 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1331, ticks 3479, elapsed 13, voice: 1 note: 79 velocity 0 event ('note', 3479, 1, 79, 0)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1332, ticks 3479, elapsed 0, voice: 2 note: 67 velocity 0 event ('note', 3479, 2, 67, 0)
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1333, ticks 3479, elapsed 0, voice: 3 note: 67 velocity 0 event ('note', 3479, 3, 67, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 67 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1336, ticks 3479, elapsed 0, voice: 0 note: 55 velocity 0 event ('note', 3479, 6, 55, 0)
	// Note off skipped, note 60 not found in channels, probably interrupted
	// Note off skipped, note 60 not found in channels, probably interrupted
	// Note off skipped, note 60 not found in channels, probably interrupted
	// Note off skipped, note 60 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1341, ticks 3480, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 3480, 1, 74, 64)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1342, ticks 3480, elapsed 0, voice: 1 note: 62 velocity 64 event ('note', 3480, 2, 62, 64)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1343, ticks 3480, elapsed 0, voice: 2 note: 62 velocity 64 event ('note', 3480, 3, 62, 64)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 1344, ticks 3480, elapsed 0, voice: 3 note: 62 velocity 64 event ('note', 3480, 4, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1345, ticks 3480, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 3480, 5, 62, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1346, ticks 3480, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 3480, 6, 50, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1347, ticks 3480, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 3480, 7, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1348, ticks 3480, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 3480, 8, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1349, ticks 3480, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 3480, 9, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1350, ticks 3480, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 3480, 10, 62, 64)
	// Note off skipped, note 74 not found in channels, probably interrupted
	28,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1352, ticks 3539, elapsed 28, voice: 0 note: 62 velocity 0 event ('note', 3539, 2, 62, 0)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1353, ticks 3539, elapsed 0, voice: 1 note: 62 velocity 0 event ('note', 3539, 3, 62, 0)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1354, ticks 3539, elapsed 0, voice: 2 note: 62 velocity 0 event ('note', 3539, 4, 62, 0)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1355, ticks 3539, elapsed 0, voice: 3 note: 62 velocity 0 event ('note', 3539, 5, 62, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1361, ticks 3540, elapsed 0, voice: 0 note: 78 velocity 64 event ('note', 3540, 1, 78, 64)
	0,((( 1 &4)<<5)|( 66 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1362, ticks 3540, elapsed 0, voice: 1 note: 66 velocity 64 event ('note', 3540, 2, 66, 64)
	0,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1363, ticks 3540, elapsed 0, voice: 2 note: 66 velocity 64 event ('note', 3540, 3, 66, 64)
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 1364, ticks 3540, elapsed 0, voice: 3 note: 67 velocity 64 event ('note', 3540, 4, 67, 64)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1365, ticks 3540, elapsed 0, voice: 0 note: 67 velocity 64 event ('note', 3540, 5, 67, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1366, ticks 3540, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 3540, 6, 55, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1367, ticks 3540, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 3540, 7, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1368, ticks 3540, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 3540, 8, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1369, ticks 3540, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 3540, 9, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1370, ticks 3540, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 3540, 10, 50, 64)
	// Note off skipped, note 78 not found in channels, probably interrupted
	28,((( 1 &4)<<5)|( 66 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1372, ticks 3599, elapsed 28, voice: 1 note: 66 velocity 0 event ('note', 3599, 2, 66, 0)
	0,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1373, ticks 3599, elapsed 0, voice: 2 note: 66 velocity 0 event ('note', 3599, 3, 66, 0)
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1374, ticks 3599, elapsed 0, voice: 3 note: 67 velocity 0 event ('note', 3599, 4, 67, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1377, ticks 3599, elapsed 0, voice: 0 note: 50 velocity 0 event ('note', 3599, 7, 50, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 79 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1381, ticks 3600, elapsed 0, voice: 0 note: 79 velocity 64 event ('note', 3600, 1, 79, 64)
	0,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1382, ticks 3600, elapsed 0, voice: 1 note: 67 velocity 64 event ('note', 3600, 2, 67, 64)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1383, ticks 3600, elapsed 0, voice: 2 note: 67 velocity 64 event ('note', 3600, 3, 67, 64)
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 1384, ticks 3600, elapsed 0, voice: 3 note: 67 velocity 64 event ('note', 3600, 4, 67, 64)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1385, ticks 3600, elapsed 0, voice: 0 note: 67 velocity 64 event ('note', 3600, 5, 67, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1386, ticks 3600, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 3600, 6, 55, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1387, ticks 3600, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 3600, 7, 55, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1388, ticks 3600, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 3600, 8, 55, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1389, ticks 3600, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 3600, 9, 55, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1390, ticks 3600, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 3600, 10, 55, 64)
	// Note off skipped, note 79 not found in channels, probably interrupted
	28,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1392, ticks 3659, elapsed 28, voice: 1 note: 67 velocity 0 event ('note', 3659, 2, 67, 0)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1393, ticks 3659, elapsed 0, voice: 2 note: 67 velocity 0 event ('note', 3659, 3, 67, 0)
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1394, ticks 3659, elapsed 0, voice: 3 note: 67 velocity 0 event ('note', 3659, 4, 67, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1396, ticks 3659, elapsed 0, voice: 0 note: 55 velocity 0 event ('note', 3659, 6, 55, 0)
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1401, ticks 3660, elapsed 0, voice: 0 note: 78 velocity 64 event ('note', 3660, 1, 78, 64)
	0,((( 1 &4)<<5)|( 66 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1402, ticks 3660, elapsed 0, voice: 1 note: 66 velocity 64 event ('note', 3660, 2, 66, 64)
	0,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1403, ticks 3660, elapsed 0, voice: 2 note: 66 velocity 64 event ('note', 3660, 3, 66, 64)
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 1404, ticks 3660, elapsed 0, voice: 3 note: 67 velocity 64 event ('note', 3660, 4, 67, 64)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1405, ticks 3660, elapsed 0, voice: 0 note: 67 velocity 64 event ('note', 3660, 5, 67, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1406, ticks 3660, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 3660, 6, 55, 64)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1407, ticks 3660, elapsed 0, voice: 0 note: 54 velocity 64 event ('note', 3660, 7, 54, 64)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1408, ticks 3660, elapsed 0, voice: 0 note: 54 velocity 64 event ('note', 3660, 8, 54, 64)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1409, ticks 3660, elapsed 0, voice: 0 note: 54 velocity 64 event ('note', 3660, 9, 54, 64)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1410, ticks 3660, elapsed 0, voice: 0 note: 54 velocity 64 event ('note', 3660, 10, 54, 64)
	// Note off skipped, note 78 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 66 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1412, ticks 3689, elapsed 13, voice: 1 note: 66 velocity 0 event ('note', 3689, 2, 66, 0)
	0,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1413, ticks 3689, elapsed 0, voice: 2 note: 66 velocity 0 event ('note', 3689, 3, 66, 0)
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1414, ticks 3689, elapsed 0, voice: 3 note: 67 velocity 0 event ('note', 3689, 4, 67, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1417, ticks 3689, elapsed 0, voice: 0 note: 54 velocity 0 event ('note', 3689, 7, 54, 0)
	// Note off skipped, note 54 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1421, ticks 3690, elapsed 0, voice: 0 note: 76 velocity 64 event ('note', 3690, 1, 76, 64)
	0,((( 1 &4)<<5)|( 64 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1422, ticks 3690, elapsed 0, voice: 1 note: 64 velocity 64 event ('note', 3690, 2, 64, 64)
	0,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1423, ticks 3690, elapsed 0, voice: 2 note: 64 velocity 64 event ('note', 3690, 3, 64, 64)
	0,((( 3 &4)<<5)|( 64 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 1424, ticks 3690, elapsed 0, voice: 3 note: 64 velocity 64 event ('note', 3690, 4, 64, 64)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1425, ticks 3690, elapsed 0, voice: 0 note: 64 velocity 64 event ('note', 3690, 5, 64, 64)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1426, ticks 3690, elapsed 0, voice: 0 note: 52 velocity 64 event ('note', 3690, 6, 52, 64)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1427, ticks 3690, elapsed 0, voice: 0 note: 52 velocity 64 event ('note', 3690, 7, 52, 64)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1428, ticks 3690, elapsed 0, voice: 0 note: 52 velocity 64 event ('note', 3690, 8, 52, 64)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1429, ticks 3690, elapsed 0, voice: 0 note: 52 velocity 64 event ('note', 3690, 9, 52, 64)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1430, ticks 3690, elapsed 0, voice: 0 note: 52 velocity 64 event ('note', 3690, 10, 52, 64)
	// Note off skipped, note 76 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 64 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1432, ticks 3719, elapsed 13, voice: 1 note: 64 velocity 0 event ('note', 3719, 2, 64, 0)
	0,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1433, ticks 3719, elapsed 0, voice: 2 note: 64 velocity 0 event ('note', 3719, 3, 64, 0)
	0,((( 3 &4)<<5)|( 64 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1434, ticks 3719, elapsed 0, voice: 3 note: 64 velocity 0 event ('note', 3719, 4, 64, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1436, ticks 3719, elapsed 0, voice: 0 note: 52 velocity 0 event ('note', 3719, 6, 52, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	// Note off skipped, note 52 not found in channels, probably interrupted
	// Note off skipped, note 52 not found in channels, probably interrupted
	// Note off skipped, note 52 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1441, ticks 3720, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 3720, 1, 74, 64)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1442, ticks 3720, elapsed 0, voice: 1 note: 62 velocity 64 event ('note', 3720, 2, 62, 64)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1443, ticks 3720, elapsed 0, voice: 2 note: 62 velocity 64 event ('note', 3720, 3, 62, 64)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 1444, ticks 3720, elapsed 0, voice: 3 note: 62 velocity 64 event ('note', 3720, 4, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1445, ticks 3720, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 3720, 5, 62, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1446, ticks 3720, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 3720, 6, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1447, ticks 3720, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 3720, 7, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1448, ticks 3720, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 3720, 8, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1449, ticks 3720, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 3720, 9, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1450, ticks 3720, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 3720, 10, 50, 64)
	// Note off skipped, note 74 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1452, ticks 3749, elapsed 13, voice: 1 note: 62 velocity 0 event ('note', 3749, 2, 62, 0)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1453, ticks 3749, elapsed 0, voice: 2 note: 62 velocity 0 event ('note', 3749, 3, 62, 0)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1454, ticks 3749, elapsed 0, voice: 3 note: 62 velocity 0 event ('note', 3749, 4, 62, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1456, ticks 3749, elapsed 0, voice: 0 note: 50 velocity 0 event ('note', 3749, 6, 50, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 72 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1461, ticks 3750, elapsed 0, voice: 0 note: 72 velocity 64 event ('note', 3750, 1, 72, 64)
	0,((( 1 &4)<<5)|( 60 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1462, ticks 3750, elapsed 0, voice: 1 note: 60 velocity 64 event ('note', 3750, 2, 60, 64)
	0,((( 2 &4)<<5)|( 60 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1463, ticks 3750, elapsed 0, voice: 2 note: 60 velocity 64 event ('note', 3750, 3, 60, 64)
	0,((( 3 &4)<<5)|( 60 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 1464, ticks 3750, elapsed 0, voice: 3 note: 60 velocity 64 event ('note', 3750, 4, 60, 64)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1465, ticks 3750, elapsed 0, voice: 0 note: 60 velocity 64 event ('note', 3750, 5, 60, 64)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1466, ticks 3750, elapsed 0, voice: 0 note: 48 velocity 64 event ('note', 3750, 6, 48, 64)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1467, ticks 3750, elapsed 0, voice: 0 note: 48 velocity 64 event ('note', 3750, 7, 48, 64)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1468, ticks 3750, elapsed 0, voice: 0 note: 48 velocity 64 event ('note', 3750, 8, 48, 64)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1469, ticks 3750, elapsed 0, voice: 0 note: 48 velocity 64 event ('note', 3750, 9, 48, 64)
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1470, ticks 3750, elapsed 0, voice: 0 note: 48 velocity 64 event ('note', 3750, 10, 48, 64)
	// Note off skipped, note 72 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 60 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1472, ticks 3779, elapsed 13, voice: 1 note: 60 velocity 0 event ('note', 3779, 2, 60, 0)
	0,((( 2 &4)<<5)|( 60 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1473, ticks 3779, elapsed 0, voice: 2 note: 60 velocity 0 event ('note', 3779, 3, 60, 0)
	0,((( 3 &4)<<5)|( 60 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1474, ticks 3779, elapsed 0, voice: 3 note: 60 velocity 0 event ('note', 3779, 4, 60, 0)
	// Note off skipped, note 60 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 48 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1476, ticks 3779, elapsed 0, voice: 0 note: 48 velocity 0 event ('note', 3779, 6, 48, 0)
	// Note off skipped, note 48 not found in channels, probably interrupted
	// Note off skipped, note 48 not found in channels, probably interrupted
	// Note off skipped, note 48 not found in channels, probably interrupted
	// Note off skipped, note 48 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1481, ticks 3780, elapsed 0, voice: 0 note: 71 velocity 64 event ('note', 3780, 1, 71, 64)
	0,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1482, ticks 3780, elapsed 0, voice: 1 note: 59 velocity 64 event ('note', 3780, 2, 59, 64)
	0,((( 2 &4)<<5)|( 59 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1483, ticks 3780, elapsed 0, voice: 2 note: 59 velocity 64 event ('note', 3780, 3, 59, 64)
	0,((( 3 &4)<<5)|( 59 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 1484, ticks 3780, elapsed 0, voice: 3 note: 59 velocity 64 event ('note', 3780, 4, 59, 64)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1485, ticks 3780, elapsed 0, voice: 0 note: 59 velocity 64 event ('note', 3780, 5, 59, 64)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1486, ticks 3780, elapsed 0, voice: 0 note: 47 velocity 64 event ('note', 3780, 6, 47, 64)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1487, ticks 3780, elapsed 0, voice: 0 note: 47 velocity 64 event ('note', 3780, 7, 47, 64)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1488, ticks 3780, elapsed 0, voice: 0 note: 47 velocity 64 event ('note', 3780, 8, 47, 64)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1489, ticks 3780, elapsed 0, voice: 0 note: 47 velocity 64 event ('note', 3780, 9, 47, 64)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1490, ticks 3780, elapsed 0, voice: 0 note: 47 velocity 64 event ('note', 3780, 10, 47, 64)
	// Note off skipped, note 71 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1492, ticks 3809, elapsed 13, voice: 1 note: 59 velocity 0 event ('note', 3809, 2, 59, 0)
	0,((( 2 &4)<<5)|( 59 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1493, ticks 3809, elapsed 0, voice: 2 note: 59 velocity 0 event ('note', 3809, 3, 59, 0)
	0,((( 3 &4)<<5)|( 59 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1494, ticks 3809, elapsed 0, voice: 3 note: 59 velocity 0 event ('note', 3809, 4, 59, 0)
	// Note off skipped, note 59 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1496, ticks 3809, elapsed 0, voice: 0 note: 47 velocity 0 event ('note', 3809, 6, 47, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1501, ticks 3810, elapsed 0, voice: 0 note: 69 velocity 64 event ('note', 3810, 1, 69, 64)
	0,((( 1 &4)<<5)|( 57 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1502, ticks 3810, elapsed 0, voice: 1 note: 57 velocity 64 event ('note', 3810, 2, 57, 64)
	0,((( 2 &4)<<5)|( 57 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1503, ticks 3810, elapsed 0, voice: 2 note: 57 velocity 64 event ('note', 3810, 3, 57, 64)
	0,((( 3 &4)<<5)|( 57 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 1504, ticks 3810, elapsed 0, voice: 3 note: 57 velocity 64 event ('note', 3810, 4, 57, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1505, ticks 3810, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 3810, 5, 57, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1506, ticks 3810, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 3810, 6, 45, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1507, ticks 3810, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 3810, 7, 45, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1508, ticks 3810, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 3810, 8, 45, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1509, ticks 3810, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 3810, 9, 45, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1510, ticks 3810, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 3810, 10, 45, 64)
	// Note off skipped, note 69 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 57 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1512, ticks 3839, elapsed 13, voice: 1 note: 57 velocity 0 event ('note', 3839, 2, 57, 0)
	0,((( 2 &4)<<5)|( 57 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1513, ticks 3839, elapsed 0, voice: 2 note: 57 velocity 0 event ('note', 3839, 3, 57, 0)
	0,((( 3 &4)<<5)|( 57 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1514, ticks 3839, elapsed 0, voice: 3 note: 57 velocity 0 event ('note', 3839, 4, 57, 0)
	// Note off skipped, note 57 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1516, ticks 3839, elapsed 0, voice: 0 note: 45 velocity 0 event ('note', 3839, 6, 45, 0)
	// Note off skipped, note 45 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1521, ticks 3840, elapsed 0, voice: 0 note: 71 velocity 64 event ('note', 3840, 1, 71, 64)
	0,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1522, ticks 3840, elapsed 0, voice: 1 note: 59 velocity 64 event ('note', 3840, 2, 59, 64)
	0,((( 2 &4)<<5)|( 59 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1523, ticks 3840, elapsed 0, voice: 2 note: 59 velocity 64 event ('note', 3840, 3, 59, 64)
	0,((( 3 &4)<<5)|( 59 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 1524, ticks 3840, elapsed 0, voice: 3 note: 59 velocity 64 event ('note', 3840, 4, 59, 64)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1525, ticks 3840, elapsed 0, voice: 0 note: 59 velocity 64 event ('note', 3840, 5, 59, 64)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1526, ticks 3840, elapsed 0, voice: 0 note: 47 velocity 64 event ('note', 3840, 6, 47, 64)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1527, ticks 3840, elapsed 0, voice: 0 note: 47 velocity 64 event ('note', 3840, 7, 47, 64)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1528, ticks 3840, elapsed 0, voice: 0 note: 47 velocity 64 event ('note', 3840, 8, 47, 64)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1529, ticks 3840, elapsed 0, voice: 0 note: 47 velocity 64 event ('note', 3840, 9, 47, 64)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1530, ticks 3840, elapsed 0, voice: 0 note: 47 velocity 64 event ('note', 3840, 10, 47, 64)
	// Note off skipped, note 71 not found in channels, probably interrupted
	28,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1532, ticks 3899, elapsed 28, voice: 1 note: 59 velocity 0 event ('note', 3899, 2, 59, 0)
	0,((( 2 &4)<<5)|( 59 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1533, ticks 3899, elapsed 0, voice: 2 note: 59 velocity 0 event ('note', 3899, 3, 59, 0)
	0,((( 3 &4)<<5)|( 59 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1534, ticks 3899, elapsed 0, voice: 3 note: 59 velocity 0 event ('note', 3899, 4, 59, 0)
	// Note off skipped, note 59 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1536, ticks 3899, elapsed 0, voice: 0 note: 47 velocity 0 event ('note', 3899, 6, 47, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1541, ticks 3900, elapsed 0, voice: 0 note: 69 velocity 64 event ('note', 3900, 1, 69, 64)
	0,((( 1 &4)<<5)|( 57 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1542, ticks 3900, elapsed 0, voice: 1 note: 57 velocity 64 event ('note', 3900, 2, 57, 64)
	0,((( 2 &4)<<5)|( 57 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1543, ticks 3900, elapsed 0, voice: 2 note: 57 velocity 64 event ('note', 3900, 3, 57, 64)
	0,((( 3 &4)<<5)|( 57 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 1544, ticks 3900, elapsed 0, voice: 3 note: 57 velocity 64 event ('note', 3900, 4, 57, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1545, ticks 3900, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 3900, 5, 57, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1546, ticks 3900, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 3900, 6, 45, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1547, ticks 3900, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 3900, 7, 45, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1548, ticks 3900, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 3900, 8, 45, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1549, ticks 3900, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 3900, 9, 45, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1550, ticks 3900, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 3900, 10, 45, 64)
	// Note off skipped, note 69 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 57 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1552, ticks 3929, elapsed 13, voice: 1 note: 57 velocity 0 event ('note', 3929, 2, 57, 0)
	0,((( 2 &4)<<5)|( 57 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1553, ticks 3929, elapsed 0, voice: 2 note: 57 velocity 0 event ('note', 3929, 3, 57, 0)
	0,((( 3 &4)<<5)|( 57 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1554, ticks 3929, elapsed 0, voice: 3 note: 57 velocity 0 event ('note', 3929, 4, 57, 0)
	// Note off skipped, note 57 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1556, ticks 3929, elapsed 0, voice: 0 note: 45 velocity 0 event ('note', 3929, 6, 45, 0)
	// Note off skipped, note 45 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1561, ticks 3930, elapsed 0, voice: 0 note: 67 velocity 64 event ('note', 3930, 1, 67, 64)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1562, ticks 3930, elapsed 0, voice: 1 note: 55 velocity 64 event ('note', 3930, 2, 55, 64)
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1563, ticks 3930, elapsed 0, voice: 2 note: 55 velocity 64 event ('note', 3930, 3, 55, 64)
	0,((( 3 &4)<<5)|( 55 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 1564, ticks 3930, elapsed 0, voice: 3 note: 55 velocity 64 event ('note', 3930, 4, 55, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1565, ticks 3930, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 3930, 5, 55, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1566, ticks 3930, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 3930, 6, 43, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1567, ticks 3930, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 3930, 7, 43, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1568, ticks 3930, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 3930, 8, 43, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1569, ticks 3930, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 3930, 9, 43, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1570, ticks 3930, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 3930, 10, 43, 64)
	// Note off skipped, note 67 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1572, ticks 3959, elapsed 13, voice: 1 note: 55 velocity 0 event ('note', 3959, 2, 55, 0)
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1573, ticks 3959, elapsed 0, voice: 2 note: 55 velocity 0 event ('note', 3959, 3, 55, 0)
	0,((( 3 &4)<<5)|( 55 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1574, ticks 3959, elapsed 0, voice: 3 note: 55 velocity 0 event ('note', 3959, 4, 55, 0)
	// Note off skipped, note 55 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1576, ticks 3959, elapsed 0, voice: 0 note: 43 velocity 0 event ('note', 3959, 6, 43, 0)
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1581, ticks 3960, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 3960, 1, 74, 64)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1582, ticks 3960, elapsed 0, voice: 1 note: 62 velocity 64 event ('note', 3960, 2, 62, 64)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1583, ticks 3960, elapsed 0, voice: 2 note: 62 velocity 64 event ('note', 3960, 3, 62, 64)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 1584, ticks 3960, elapsed 0, voice: 3 note: 62 velocity 64 event ('note', 3960, 4, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1585, ticks 3960, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 3960, 5, 62, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1586, ticks 3960, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 3960, 6, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1587, ticks 3960, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 3960, 7, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1588, ticks 3960, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 3960, 8, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1589, ticks 3960, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 3960, 9, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1590, ticks 3960, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 3960, 10, 50, 64)
	// Note off skipped, note 74 not found in channels, probably interrupted
	28,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1592, ticks 4019, elapsed 28, voice: 1 note: 62 velocity 0 event ('note', 4019, 2, 62, 0)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1593, ticks 4019, elapsed 0, voice: 2 note: 62 velocity 0 event ('note', 4019, 3, 62, 0)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1594, ticks 4019, elapsed 0, voice: 3 note: 62 velocity 0 event ('note', 4019, 4, 62, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1596, ticks 4019, elapsed 0, voice: 0 note: 50 velocity 0 event ('note', 4019, 6, 50, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1601, ticks 4020, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 4020, 1, 74, 64)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1602, ticks 4020, elapsed 0, voice: 1 note: 62 velocity 64 event ('note', 4020, 2, 62, 64)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1603, ticks 4020, elapsed 0, voice: 2 note: 62 velocity 64 event ('note', 4020, 3, 62, 64)
	0,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 1604, ticks 4020, elapsed 0, voice: 3 note: 50 velocity 64 event ('note', 4020, 4, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1605, ticks 4020, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 4020, 5, 50, 64)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1606, ticks 4020, elapsed 0, voice: 0 note: 38 velocity 64 event ('note', 4020, 6, 38, 64)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1607, ticks 4020, elapsed 0, voice: 0 note: 38 velocity 64 event ('note', 4020, 7, 38, 64)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1608, ticks 4020, elapsed 0, voice: 0 note: 38 velocity 64 event ('note', 4020, 8, 38, 64)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1609, ticks 4020, elapsed 0, voice: 0 note: 38 velocity 64 event ('note', 4020, 9, 38, 64)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1610, ticks 4020, elapsed 0, voice: 0 note: 38 velocity 64 event ('note', 4020, 10, 38, 64)
	// Note off skipped, note 74 not found in channels, probably interrupted
	28,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1612, ticks 4079, elapsed 28, voice: 1 note: 62 velocity 0 event ('note', 4079, 2, 62, 0)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1613, ticks 4079, elapsed 0, voice: 2 note: 62 velocity 0 event ('note', 4079, 3, 62, 0)
	0,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1614, ticks 4079, elapsed 0, voice: 3 note: 50 velocity 0 event ('note', 4079, 4, 50, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1616, ticks 4079, elapsed 0, voice: 0 note: 38 velocity 0 event ('note', 4079, 6, 38, 0)
	// Note off skipped, note 38 not found in channels, probably interrupted
	// Note off skipped, note 38 not found in channels, probably interrupted
	// Note off skipped, note 38 not found in channels, probably interrupted
	// Note off skipped, note 38 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1621, ticks 4080, elapsed 0, voice: 0 note: 67 velocity 64 event ('note', 4080, 1, 67, 64)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1622, ticks 4080, elapsed 0, voice: 1 note: 55 velocity 64 event ('note', 4080, 2, 55, 64)
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1623, ticks 4080, elapsed 0, voice: 2 note: 55 velocity 64 event ('note', 4080, 3, 55, 64)
	0,((( 3 &4)<<5)|( 55 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 1624, ticks 4080, elapsed 0, voice: 3 note: 55 velocity 64 event ('note', 4080, 4, 55, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1625, ticks 4080, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 4080, 5, 55, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1626, ticks 4080, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 4080, 6, 43, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1627, ticks 4080, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 4080, 7, 43, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1628, ticks 4080, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 4080, 8, 43, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1629, ticks 4080, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 4080, 9, 43, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1630, ticks 4080, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 4080, 10, 43, 64)
	28,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1631, ticks 4139, elapsed 28, voice: 1 note: 55 velocity 0 event ('note', 4139, 4, 55, 0)
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1632, ticks 4139, elapsed 0, voice: 2 note: 55 velocity 0 event ('note', 4139, 5, 55, 0)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1633, ticks 4139, elapsed 0, voice: 0 note: 43 velocity 0 event ('note', 4139, 6, 43, 0)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1634, ticks 4140, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 4140, 4, 62, 64)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1635, ticks 4140, elapsed 0, voice: 1 note: 62 velocity 64 event ('note', 4140, 5, 62, 64)
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1636, ticks 4140, elapsed 0, voice: 2 note: 50 velocity 64 event ('note', 4140, 6, 50, 64)
	// Note off skipped, note 67 not found in channels, probably interrupted
	28,((( 3 &4)<<5)|( 55 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1638, ticks 4199, elapsed 28, voice: 3 note: 55 velocity 0 event ('note', 4199, 2, 55, 0)
	// Note off skipped, note 55 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1640, ticks 4199, elapsed 0, voice: 0 note: 62 velocity 0 event ('note', 4199, 4, 62, 0)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1641, ticks 4199, elapsed 0, voice: 1 note: 62 velocity 0 event ('note', 4199, 5, 62, 0)
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1642, ticks 4199, elapsed 0, voice: 2 note: 50 velocity 0 event ('note', 4199, 6, 50, 0)
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1647, ticks 4200, elapsed 0, voice: 0 note: 67 velocity 64 event ('note', 4200, 4, 67, 64)
	0,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1648, ticks 4200, elapsed 0, voice: 1 note: 67 velocity 64 event ('note', 4200, 5, 67, 64)
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1649, ticks 4200, elapsed 0, voice: 2 note: 55 velocity 64 event ('note', 4200, 6, 55, 64)
	28,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1650, ticks 4259, elapsed 28, voice: 0 note: 67 velocity 0 event ('note', 4259, 4, 67, 0)
	0,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1651, ticks 4259, elapsed 0, voice: 1 note: 67 velocity 0 event ('note', 4259, 5, 67, 0)
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1652, ticks 4259, elapsed 0, voice: 2 note: 55 velocity 0 event ('note', 4259, 6, 55, 0)
	0,((( 0 &4)<<5)|( 91 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1653, ticks 4260, elapsed 0, voice: 0 note: 91 velocity 64 event ('note', 4260, 1, 91, 64)
	0,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1654, ticks 4260, elapsed 0, voice: 1 note: 71 velocity 64 event ('note', 4260, 2, 71, 64)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1655, ticks 4260, elapsed 0, voice: 2 note: 74 velocity 64 event ('note', 4260, 3, 74, 64)
	0,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 1656, ticks 4260, elapsed 0, voice: 3 note: 50 velocity 64 event ('note', 4260, 7, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1657, ticks 4260, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 4260, 8, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1658, ticks 4260, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 4260, 9, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1659, ticks 4260, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 4260, 10, 50, 64)
	// Note off skipped, note 91 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1661, ticks 4289, elapsed 13, voice: 1 note: 71 velocity 0 event ('note', 4289, 2, 71, 0)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1662, ticks 4289, elapsed 0, voice: 2 note: 74 velocity 0 event ('note', 4289, 3, 74, 0)
	0,((( 1 &4)<<5)|( 90 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1663, ticks 4290, elapsed 0, voice: 1 note: 90 velocity 64 event ('note', 4290, 1, 90, 64)
	0,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1664, ticks 4290, elapsed 0, voice: 2 note: 71 velocity 64 event ('note', 4290, 2, 71, 64)
	0,((( 0 &4)<<5)|( 72 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1665, ticks 4290, elapsed 0, voice: 0 note: 72 velocity 64 event ('note', 4290, 3, 72, 64)
	13,((( 1 &4)<<5)|( 90 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1666, ticks 4319, elapsed 13, voice: 1 note: 90 velocity 0 event ('note', 4319, 1, 90, 0)
	0,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1667, ticks 4319, elapsed 0, voice: 2 note: 71 velocity 0 event ('note', 4319, 2, 71, 0)
	0,((( 0 &4)<<5)|( 72 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1668, ticks 4319, elapsed 0, voice: 0 note: 72 velocity 0 event ('note', 4319, 3, 72, 0)
	0,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1669, ticks 4319, elapsed 0, voice: 3 note: 50 velocity 0 event ('note', 4319, 7, 50, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 91 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1673, ticks 4320, elapsed 0, voice: 0 note: 91 velocity 64 event ('note', 4320, 1, 91, 64)
	0,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1674, ticks 4320, elapsed 0, voice: 1 note: 71 velocity 64 event ('note', 4320, 2, 71, 64)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1675, ticks 4320, elapsed 0, voice: 2 note: 74 velocity 64 event ('note', 4320, 3, 74, 64)
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 1676, ticks 4320, elapsed 0, voice: 3 note: 43 velocity 64 event ('note', 4320, 7, 43, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1677, ticks 4320, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 4320, 8, 43, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1678, ticks 4320, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 4320, 9, 43, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1679, ticks 4320, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 4320, 10, 43, 64)
	// Note off skipped, note 91 not found in channels, probably interrupted
	28,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1681, ticks 4379, elapsed 28, voice: 1 note: 71 velocity 0 event ('note', 4379, 2, 71, 0)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1682, ticks 4379, elapsed 0, voice: 2 note: 74 velocity 0 event ('note', 4379, 3, 74, 0)
	0,((( 1 &4)<<5)|( 86 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1683, ticks 4380, elapsed 0, voice: 1 note: 86 velocity 64 event ('note', 4380, 1, 86, 64)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1684, ticks 4380, elapsed 0, voice: 2 note: 67 velocity 64 event ('note', 4380, 2, 67, 64)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1685, ticks 4380, elapsed 0, voice: 0 note: 71 velocity 64 event ('note', 4380, 3, 71, 64)
	13,((( 1 &4)<<5)|( 86 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1686, ticks 4409, elapsed 13, voice: 1 note: 86 velocity 0 event ('note', 4409, 1, 86, 0)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1687, ticks 4409, elapsed 0, voice: 2 note: 67 velocity 0 event ('note', 4409, 2, 67, 0)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1688, ticks 4409, elapsed 0, voice: 0 note: 71 velocity 0 event ('note', 4409, 3, 71, 0)
	0,((( 0 &4)<<5)|( 84 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1689, ticks 4410, elapsed 0, voice: 0 note: 84 velocity 64 event ('note', 4410, 1, 84, 64)
	0,((( 1 &4)<<5)|( 66 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1690, ticks 4410, elapsed 0, voice: 1 note: 66 velocity 64 event ('note', 4410, 2, 66, 64)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1691, ticks 4410, elapsed 0, voice: 2 note: 69 velocity 64 event ('note', 4410, 3, 69, 64)
	13,((( 0 &4)<<5)|( 84 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1692, ticks 4439, elapsed 13, voice: 0 note: 84 velocity 0 event ('note', 4439, 1, 84, 0)
	0,((( 1 &4)<<5)|( 66 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1693, ticks 4439, elapsed 0, voice: 1 note: 66 velocity 0 event ('note', 4439, 2, 66, 0)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1694, ticks 4439, elapsed 0, voice: 2 note: 69 velocity 0 event ('note', 4439, 3, 69, 0)
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1695, ticks 4439, elapsed 0, voice: 3 note: 43 velocity 0 event ('note', 4439, 7, 43, 0)
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 86 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1699, ticks 4440, elapsed 0, voice: 0 note: 86 velocity 64 event ('note', 4440, 1, 86, 64)
	0,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1700, ticks 4440, elapsed 0, voice: 1 note: 67 velocity 64 event ('note', 4440, 2, 67, 64)
	0,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1701, ticks 4440, elapsed 0, voice: 2 note: 71 velocity 64 event ('note', 4440, 3, 71, 64)
	28,((( 0 &4)<<5)|( 86 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1702, ticks 4499, elapsed 28, voice: 0 note: 86 velocity 0 event ('note', 4499, 1, 86, 0)
	0,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1703, ticks 4499, elapsed 0, voice: 1 note: 67 velocity 0 event ('note', 4499, 2, 67, 0)
	0,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1704, ticks 4499, elapsed 0, voice: 2 note: 71 velocity 0 event ('note', 4499, 3, 71, 0)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1705, ticks 4500, elapsed 0, voice: 0 note: 71 velocity 64 event ('note', 4500, 4, 71, 64)
	0,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1706, ticks 4500, elapsed 0, voice: 1 note: 67 velocity 64 event ('note', 4500, 5, 67, 64)
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1707, ticks 4500, elapsed 0, voice: 2 note: 50 velocity 64 event ('note', 4500, 6, 50, 64)
	13,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1708, ticks 4529, elapsed 13, voice: 0 note: 71 velocity 0 event ('note', 4529, 4, 71, 0)
	0,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1709, ticks 4529, elapsed 0, voice: 1 note: 67 velocity 0 event ('note', 4529, 5, 67, 0)
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1710, ticks 4529, elapsed 0, voice: 2 note: 50 velocity 0 event ('note', 4529, 6, 50, 0)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1711, ticks 4530, elapsed 0, voice: 0 note: 69 velocity 64 event ('note', 4530, 4, 69, 64)
	0,((( 1 &4)<<5)|( 66 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1712, ticks 4530, elapsed 0, voice: 1 note: 66 velocity 64 event ('note', 4530, 5, 66, 64)
	0,((( 2 &4)<<5)|( 48 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1713, ticks 4530, elapsed 0, voice: 2 note: 48 velocity 64 event ('note', 4530, 6, 48, 64)
	13,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1714, ticks 4559, elapsed 13, voice: 0 note: 69 velocity 0 event ('note', 4559, 4, 69, 0)
	0,((( 1 &4)<<5)|( 66 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1715, ticks 4559, elapsed 0, voice: 1 note: 66 velocity 0 event ('note', 4559, 5, 66, 0)
	0,((( 2 &4)<<5)|( 48 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1716, ticks 4559, elapsed 0, voice: 2 note: 48 velocity 0 event ('note', 4559, 6, 48, 0)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1717, ticks 4560, elapsed 0, voice: 0 note: 71 velocity 64 event ('note', 4560, 4, 71, 64)
	0,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1718, ticks 4560, elapsed 0, voice: 1 note: 67 velocity 64 event ('note', 4560, 5, 67, 64)
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1719, ticks 4560, elapsed 0, voice: 2 note: 50 velocity 64 event ('note', 4560, 6, 50, 64)
	28,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1720, ticks 4619, elapsed 28, voice: 0 note: 71 velocity 0 event ('note', 4619, 4, 71, 0)
	0,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1721, ticks 4619, elapsed 0, voice: 1 note: 67 velocity 0 event ('note', 4619, 5, 67, 0)
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1722, ticks 4619, elapsed 0, voice: 2 note: 50 velocity 0 event ('note', 4619, 6, 50, 0)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1723, ticks 4620, elapsed 0, voice: 0 note: 67 velocity 64 event ('note', 4620, 4, 67, 64)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1724, ticks 4620, elapsed 0, voice: 1 note: 62 velocity 64 event ('note', 4620, 5, 62, 64)
	0,((( 2 &4)<<5)|( 47 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1725, ticks 4620, elapsed 0, voice: 2 note: 47 velocity 64 event ('note', 4620, 6, 47, 64)
	13,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1726, ticks 4649, elapsed 13, voice: 0 note: 67 velocity 0 event ('note', 4649, 4, 67, 0)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1727, ticks 4649, elapsed 0, voice: 1 note: 62 velocity 0 event ('note', 4649, 5, 62, 0)
	0,((( 2 &4)<<5)|( 47 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1728, ticks 4649, elapsed 0, voice: 2 note: 47 velocity 0 event ('note', 4649, 6, 47, 0)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1729, ticks 4650, elapsed 0, voice: 0 note: 66 velocity 64 event ('note', 4650, 4, 66, 64)
	0,((( 1 &4)<<5)|( 60 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1730, ticks 4650, elapsed 0, voice: 1 note: 60 velocity 64 event ('note', 4650, 5, 60, 64)
	0,((( 2 &4)<<5)|( 45 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1731, ticks 4650, elapsed 0, voice: 2 note: 45 velocity 64 event ('note', 4650, 6, 45, 64)
	13,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1732, ticks 4679, elapsed 13, voice: 0 note: 66 velocity 0 event ('note', 4679, 4, 66, 0)
	0,((( 1 &4)<<5)|( 60 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1733, ticks 4679, elapsed 0, voice: 1 note: 60 velocity 0 event ('note', 4679, 5, 60, 0)
	0,((( 2 &4)<<5)|( 45 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1734, ticks 4679, elapsed 0, voice: 2 note: 45 velocity 0 event ('note', 4679, 6, 45, 0)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1735, ticks 4680, elapsed 0, voice: 0 note: 67 velocity 64 event ('note', 4680, 4, 67, 64)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1736, ticks 4680, elapsed 0, voice: 1 note: 62 velocity 64 event ('note', 4680, 5, 62, 64)
	0,((( 2 &4)<<5)|( 47 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1737, ticks 4680, elapsed 0, voice: 2 note: 47 velocity 64 event ('note', 4680, 6, 47, 64)
	28,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1738, ticks 4739, elapsed 28, voice: 0 note: 67 velocity 0 event ('note', 4739, 4, 67, 0)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1739, ticks 4739, elapsed 0, voice: 1 note: 62 velocity 0 event ('note', 4739, 5, 62, 0)
	0,((( 2 &4)<<5)|( 47 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1740, ticks 4739, elapsed 0, voice: 2 note: 47 velocity 0 event ('note', 4739, 6, 47, 0)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1741, ticks 4740, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 4740, 7, 62, 64)
	0,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1742, ticks 4740, elapsed 0, voice: 1 note: 59 velocity 64 event ('note', 4740, 8, 59, 64)
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1743, ticks 4740, elapsed 0, voice: 2 note: 50 velocity 64 event ('note', 4740, 9, 50, 64)
	0,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 1744, ticks 4740, elapsed 0, voice: 3 note: 50 velocity 64 event ('note', 4740, 10, 50, 64)
	13,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1745, ticks 4769, elapsed 13, voice: 0 note: 62 velocity 0 event ('note', 4769, 7, 62, 0)
	0,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1746, ticks 4769, elapsed 0, voice: 1 note: 59 velocity 0 event ('note', 4769, 8, 59, 0)
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1747, ticks 4769, elapsed 0, voice: 2 note: 50 velocity 0 event ('note', 4769, 9, 50, 0)
	0,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1748, ticks 4769, elapsed 0, voice: 3 note: 50 velocity 0 event ('note', 4769, 10, 50, 0)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1749, ticks 4770, elapsed 0, voice: 0 note: 60 velocity 64 event ('note', 4770, 7, 60, 64)
	0,((( 1 &4)<<5)|( 57 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1750, ticks 4770, elapsed 0, voice: 1 note: 57 velocity 64 event ('note', 4770, 8, 57, 64)
	0,((( 2 &4)<<5)|( 48 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1751, ticks 4770, elapsed 0, voice: 2 note: 48 velocity 64 event ('note', 4770, 9, 48, 64)
	0,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 1752, ticks 4770, elapsed 0, voice: 3 note: 48 velocity 64 event ('note', 4770, 10, 48, 64)
	13,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1753, ticks 4799, elapsed 13, voice: 0 note: 60 velocity 0 event ('note', 4799, 7, 60, 0)
	0,((( 1 &4)<<5)|( 57 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1754, ticks 4799, elapsed 0, voice: 1 note: 57 velocity 0 event ('note', 4799, 8, 57, 0)
	0,((( 2 &4)<<5)|( 48 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1755, ticks 4799, elapsed 0, voice: 2 note: 48 velocity 0 event ('note', 4799, 9, 48, 0)
	0,((( 3 &4)<<5)|( 48 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1756, ticks 4799, elapsed 0, voice: 3 note: 48 velocity 0 event ('note', 4799, 10, 48, 0)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1757, ticks 4800, elapsed 0, voice: 0 note: 59 velocity 64 event ('note', 4800, 7, 59, 64)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1758, ticks 4800, elapsed 0, voice: 1 note: 55 velocity 64 event ('note', 4800, 8, 55, 64)
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1759, ticks 4800, elapsed 0, voice: 2 note: 55 velocity 64 event ('note', 4800, 9, 55, 64)
	13,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1760, ticks 4829, elapsed 13, voice: 0 note: 59 velocity 0 event ('note', 4829, 7, 59, 0)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1761, ticks 4830, elapsed 0, voice: 0 note: 60 velocity 64 event ('note', 4830, 7, 60, 64)
	13,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1762, ticks 4859, elapsed 13, voice: 0 note: 60 velocity 0 event ('note', 4859, 7, 60, 0)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1763, ticks 4859, elapsed 0, voice: 1 note: 55 velocity 0 event ('note', 4859, 8, 55, 0)
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1764, ticks 4859, elapsed 0, voice: 2 note: 55 velocity 0 event ('note', 4859, 9, 55, 0)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1765, ticks 4860, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 4860, 1, 74, 64)
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1766, ticks 4860, elapsed 0, voice: 1 note: 74 velocity 64 event ('note', 4860, 2, 74, 64)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1767, ticks 4860, elapsed 0, voice: 2 note: 74 velocity 64 event ('note', 4860, 3, 74, 64)
	0,((( 3 &4)<<5)|( 71 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 1768, ticks 4860, elapsed 0, voice: 3 note: 71 velocity 64 event ('note', 4860, 4, 71, 64)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1769, ticks 4860, elapsed 0, voice: 0 note: 71 velocity 64 event ('note', 4860, 5, 71, 64)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1770, ticks 4860, elapsed 0, voice: 0 note: 71 velocity 64 event ('note', 4860, 6, 71, 64)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1771, ticks 4860, elapsed 0, voice: 0 note: 59 velocity 64 event ('note', 4860, 7, 59, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1772, ticks 4860, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 4860, 8, 50, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1773, ticks 4860, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 4860, 9, 43, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1774, ticks 4860, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 4860, 10, 43, 64)
	13,((( 3 &4)<<5)|( 71 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1775, ticks 4889, elapsed 13, voice: 3 note: 71 velocity 0 event ('note', 4889, 4, 71, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1779, ticks 4889, elapsed 0, voice: 0 note: 43 velocity 0 event ('note', 4889, 9, 43, 0)
	// Note off skipped, note 43 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 72 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1781, ticks 4890, elapsed 0, voice: 0 note: 72 velocity 64 event ('note', 4890, 4, 72, 64)
	0,((( 3 &4)<<5)|( 72 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 1782, ticks 4890, elapsed 0, voice: 3 note: 72 velocity 64 event ('note', 4890, 5, 72, 64)
	0,((( 0 &4)<<5)|( 72 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1783, ticks 4890, elapsed 0, voice: 0 note: 72 velocity 64 event ('note', 4890, 6, 72, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1784, ticks 4890, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 4890, 7, 57, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1785, ticks 4890, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 4890, 9, 45, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1786, ticks 4890, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 4890, 10, 45, 64)
	13,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1787, ticks 4919, elapsed 13, voice: 1 note: 74 velocity 0 event ('note', 4919, 1, 74, 0)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1788, ticks 4919, elapsed 0, voice: 2 note: 74 velocity 0 event ('note', 4919, 2, 74, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 72 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1790, ticks 4919, elapsed 0, voice: 3 note: 72 velocity 0 event ('note', 4919, 4, 72, 0)
	// Note off skipped, note 72 not found in channels, probably interrupted
	// Note off skipped, note 72 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1795, ticks 4919, elapsed 0, voice: 0 note: 45 velocity 0 event ('note', 4919, 9, 45, 0)
	// Note off skipped, note 45 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 79 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1797, ticks 4920, elapsed 0, voice: 0 note: 79 velocity 64 event ('note', 4920, 1, 79, 64)
	0,((( 1 &4)<<5)|( 79 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1798, ticks 4920, elapsed 0, voice: 1 note: 79 velocity 64 event ('note', 4920, 2, 79, 64)
	0,((( 2 &4)<<5)|( 79 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1799, ticks 4920, elapsed 0, voice: 2 note: 79 velocity 64 event ('note', 4920, 3, 79, 64)
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 1800, ticks 4920, elapsed 0, voice: 3 note: 74 velocity 64 event ('note', 4920, 4, 74, 64)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1801, ticks 4920, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 4920, 5, 74, 64)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1802, ticks 4920, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 4920, 6, 74, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1803, ticks 4920, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 4920, 7, 55, 64)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1804, ticks 4920, elapsed 0, voice: 0 note: 47 velocity 64 event ('note', 4920, 8, 47, 64)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1805, ticks 4920, elapsed 0, voice: 0 note: 47 velocity 64 event ('note', 4920, 9, 47, 64)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1806, ticks 4920, elapsed 0, voice: 0 note: 47 velocity 64 event ('note', 4920, 10, 47, 64)
	13,((( 1 &4)<<5)|( 79 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1807, ticks 4949, elapsed 13, voice: 1 note: 79 velocity 0 event ('note', 4949, 1, 79, 0)
	0,((( 2 &4)<<5)|( 79 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1808, ticks 4949, elapsed 0, voice: 2 note: 79 velocity 0 event ('note', 4949, 2, 79, 0)
	// Note off skipped, note 79 not found in channels, probably interrupted
	0,((( 1 &4)<<5)|( 83 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1810, ticks 4950, elapsed 0, voice: 1 note: 83 velocity 64 event ('note', 4950, 1, 83, 64)
	0,((( 2 &4)<<5)|( 83 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1811, ticks 4950, elapsed 0, voice: 2 note: 83 velocity 64 event ('note', 4950, 2, 83, 64)
	0,((( 0 &4)<<5)|( 83 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1812, ticks 4950, elapsed 0, voice: 0 note: 83 velocity 64 event ('note', 4950, 3, 83, 64)
	13,((( 0 &4)<<5)|( 83 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1813, ticks 4979, elapsed 13, voice: 0 note: 83 velocity 0 event ('note', 4979, 1, 83, 0)
	0,((( 1 &4)<<5)|( 83 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1814, ticks 4979, elapsed 0, voice: 1 note: 83 velocity 0 event ('note', 4979, 2, 83, 0)
	0,((( 2 &4)<<5)|( 83 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1815, ticks 4979, elapsed 0, voice: 2 note: 83 velocity 0 event ('note', 4979, 3, 83, 0)
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1816, ticks 4979, elapsed 0, voice: 3 note: 74 velocity 0 event ('note', 4979, 4, 74, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 81 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1823, ticks 4980, elapsed 0, voice: 0 note: 81 velocity 64 event ('note', 4980, 1, 81, 64)
	0,((( 1 &4)<<5)|( 81 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1824, ticks 4980, elapsed 0, voice: 1 note: 81 velocity 64 event ('note', 4980, 2, 81, 64)
	0,((( 2 &4)<<5)|( 81 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1825, ticks 4980, elapsed 0, voice: 2 note: 81 velocity 64 event ('note', 4980, 3, 81, 64)
	0,((( 3 &4)<<5)|( 76 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 1826, ticks 4980, elapsed 0, voice: 3 note: 76 velocity 64 event ('note', 4980, 4, 76, 64)
	0,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1827, ticks 4980, elapsed 0, voice: 0 note: 76 velocity 64 event ('note', 4980, 5, 76, 64)
	0,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1828, ticks 4980, elapsed 0, voice: 0 note: 76 velocity 64 event ('note', 4980, 6, 76, 64)
	0,((( 0 &4)<<5)|( 49 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1829, ticks 4980, elapsed 0, voice: 0 note: 49 velocity 64 event ('note', 4980, 7, 49, 64)
	0,((( 0 &4)<<5)|( 49 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1830, ticks 4980, elapsed 0, voice: 0 note: 49 velocity 64 event ('note', 4980, 8, 49, 64)
	0,((( 0 &4)<<5)|( 49 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1831, ticks 4980, elapsed 0, voice: 0 note: 49 velocity 64 event ('note', 4980, 9, 49, 64)
	0,((( 0 &4)<<5)|( 49 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1832, ticks 4980, elapsed 0, voice: 0 note: 49 velocity 64 event ('note', 4980, 10, 49, 64)
	13,((( 1 &4)<<5)|( 81 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1833, ticks 5009, elapsed 13, voice: 1 note: 81 velocity 0 event ('note', 5009, 1, 81, 0)
	0,((( 2 &4)<<5)|( 81 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1834, ticks 5009, elapsed 0, voice: 2 note: 81 velocity 0 event ('note', 5009, 2, 81, 0)
	// Note off skipped, note 81 not found in channels, probably interrupted
	0,((( 1 &4)<<5)|( 79 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1836, ticks 5010, elapsed 0, voice: 1 note: 79 velocity 64 event ('note', 5010, 1, 79, 64)
	0,((( 2 &4)<<5)|( 79 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1837, ticks 5010, elapsed 0, voice: 2 note: 79 velocity 64 event ('note', 5010, 2, 79, 64)
	0,((( 0 &4)<<5)|( 79 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1838, ticks 5010, elapsed 0, voice: 0 note: 79 velocity 64 event ('note', 5010, 3, 79, 64)
	13,((( 0 &4)<<5)|( 79 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1839, ticks 5039, elapsed 13, voice: 0 note: 79 velocity 0 event ('note', 5039, 1, 79, 0)
	0,((( 1 &4)<<5)|( 79 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1840, ticks 5039, elapsed 0, voice: 1 note: 79 velocity 0 event ('note', 5039, 2, 79, 0)
	0,((( 2 &4)<<5)|( 79 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1841, ticks 5039, elapsed 0, voice: 2 note: 79 velocity 0 event ('note', 5039, 3, 79, 0)
	0,((( 3 &4)<<5)|( 76 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1842, ticks 5039, elapsed 0, voice: 3 note: 76 velocity 0 event ('note', 5039, 4, 76, 0)
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 49 not found in channels, probably interrupted
	// Note off skipped, note 49 not found in channels, probably interrupted
	// Note off skipped, note 49 not found in channels, probably interrupted
	// Note off skipped, note 49 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1849, ticks 5040, elapsed 0, voice: 0 note: 78 velocity 64 event ('note', 5040, 1, 78, 64)
	0,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1850, ticks 5040, elapsed 0, voice: 1 note: 78 velocity 64 event ('note', 5040, 2, 78, 64)
	0,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1851, ticks 5040, elapsed 0, voice: 2 note: 78 velocity 64 event ('note', 5040, 3, 78, 64)
	0,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 1852, ticks 5040, elapsed 0, voice: 3 note: 69 velocity 64 event ('note', 5040, 4, 69, 64)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1853, ticks 5040, elapsed 0, voice: 0 note: 69 velocity 64 event ('note', 5040, 5, 69, 64)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1854, ticks 5040, elapsed 0, voice: 0 note: 69 velocity 64 event ('note', 5040, 6, 69, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1855, ticks 5040, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 5040, 7, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1856, ticks 5040, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 5040, 8, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1857, ticks 5040, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 5040, 9, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1858, ticks 5040, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 5040, 10, 50, 64)
	13,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1859, ticks 5069, elapsed 13, voice: 1 note: 78 velocity 0 event ('note', 5069, 1, 78, 0)
	0,((( 1 &4)<<5)|( 81 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1860, ticks 5070, elapsed 0, voice: 1 note: 81 velocity 64 event ('note', 5070, 1, 81, 64)
	13,((( 1 &4)<<5)|( 81 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1861, ticks 5099, elapsed 13, voice: 1 note: 81 velocity 0 event ('note', 5099, 1, 81, 0)
	0,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1862, ticks 5099, elapsed 0, voice: 3 note: 69 velocity 0 event ('note', 5099, 4, 69, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1865, ticks 5100, elapsed 0, voice: 1 note: 74 velocity 64 event ('note', 5100, 1, 74, 64)
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 1866, ticks 5100, elapsed 0, voice: 3 note: 74 velocity 64 event ('note', 5100, 4, 74, 64)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1867, ticks 5100, elapsed 0, voice: 0 note: 69 velocity 64 event ('note', 5100, 5, 69, 64)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1868, ticks 5100, elapsed 0, voice: 0 note: 66 velocity 64 event ('note', 5100, 6, 66, 64)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1869, ticks 5100, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 5100, 6, 74, 64)
	13,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1870, ticks 5129, elapsed 13, voice: 0 note: 74 velocity 0 event ('note', 5129, 1, 74, 0)
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1871, ticks 5129, elapsed 0, voice: 1 note: 74 velocity 0 event ('note', 5129, 4, 74, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1873, ticks 5129, elapsed 0, voice: 3 note: 74 velocity 0 event ('note', 5129, 6, 74, 0)
	// Note off skipped, note 66 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1875, ticks 5130, elapsed 0, voice: 0 note: 76 velocity 64 event ('note', 5130, 1, 76, 64)
	0,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1876, ticks 5130, elapsed 0, voice: 1 note: 73 velocity 64 event ('note', 5130, 4, 73, 64)
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 1877, ticks 5130, elapsed 0, voice: 3 note: 67 velocity 64 event ('note', 5130, 5, 67, 64)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1878, ticks 5130, elapsed 0, voice: 0 note: 64 velocity 64 event ('note', 5130, 6, 64, 64)
	0,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1879, ticks 5130, elapsed 0, voice: 0 note: 73 velocity 64 event ('note', 5130, 6, 73, 64)
	// Note off skipped, note 76 not found in channels, probably interrupted
	13,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1881, ticks 5159, elapsed 13, voice: 2 note: 78 velocity 0 event ('note', 5159, 2, 78, 0)
	// Note off skipped, note 78 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1883, ticks 5159, elapsed 0, voice: 0 note: 73 velocity 0 event ('note', 5159, 4, 73, 0)
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1884, ticks 5159, elapsed 0, voice: 3 note: 67 velocity 0 event ('note', 5159, 5, 67, 0)
	0,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1885, ticks 5159, elapsed 0, voice: 1 note: 73 velocity 0 event ('note', 5159, 6, 73, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1891, ticks 5160, elapsed 0, voice: 0 note: 78 velocity 64 event ('note', 5160, 1, 78, 64)
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1892, ticks 5160, elapsed 0, voice: 1 note: 74 velocity 64 event ('note', 5160, 4, 74, 64)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1893, ticks 5160, elapsed 0, voice: 2 note: 69 velocity 64 event ('note', 5160, 5, 69, 64)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 1894, ticks 5160, elapsed 0, voice: 3 note: 62 velocity 64 event ('note', 5160, 6, 62, 64)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1895, ticks 5160, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 5160, 6, 74, 64)
	// Note off skipped, note 78 not found in channels, probably interrupted
	14,((( 0 &4)<<5)|( 79 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1897, ticks 5190, elapsed 14, voice: 0 note: 79 velocity 64 event ('note', 5190, 1, 79, 64)
	13,((( 0 &4)<<5)|( 79 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1898, ticks 5219, elapsed 13, voice: 0 note: 79 velocity 0 event ('note', 5219, 1, 79, 0)
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1899, ticks 5219, elapsed 0, voice: 1 note: 74 velocity 0 event ('note', 5219, 4, 74, 0)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1900, ticks 5219, elapsed 0, voice: 2 note: 69 velocity 0 event ('note', 5219, 5, 69, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1902, ticks 5219, elapsed 0, voice: 3 note: 62 velocity 0 event ('note', 5219, 6, 62, 0)
	0,((( 0 &4)<<5)|( 81 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1903, ticks 5220, elapsed 0, voice: 0 note: 81 velocity 64 event ('note', 5220, 1, 81, 64)
	0,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1904, ticks 5220, elapsed 0, voice: 1 note: 76 velocity 64 event ('note', 5220, 2, 76, 64)
	0,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1905, ticks 5220, elapsed 0, voice: 2 note: 73 velocity 64 event ('note', 5220, 3, 73, 64)
	0,((( 3 &4)<<5)|( 57 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 1906, ticks 5220, elapsed 0, voice: 3 note: 57 velocity 64 event ('note', 5220, 7, 57, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1907, ticks 5220, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 5220, 8, 57, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1908, ticks 5220, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 5220, 9, 57, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1909, ticks 5220, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 5220, 10, 57, 64)
	// Note off skipped, note 81 not found in channels, probably interrupted
	14,((( 0 &4)<<5)|( 79 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1911, ticks 5250, elapsed 14, voice: 0 note: 79 velocity 64 event ('note', 5250, 1, 79, 64)
	13,((( 0 &4)<<5)|( 79 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1912, ticks 5279, elapsed 13, voice: 0 note: 79 velocity 0 event ('note', 5279, 1, 79, 0)
	0,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1913, ticks 5279, elapsed 0, voice: 1 note: 76 velocity 0 event ('note', 5279, 2, 76, 0)
	0,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1914, ticks 5279, elapsed 0, voice: 2 note: 73 velocity 0 event ('note', 5279, 3, 73, 0)
	0,((( 3 &4)<<5)|( 57 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1915, ticks 5279, elapsed 0, voice: 3 note: 57 velocity 0 event ('note', 5279, 7, 57, 0)
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1919, ticks 5280, elapsed 0, voice: 0 note: 78 velocity 64 event ('note', 5280, 1, 78, 64)
	0,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1920, ticks 5280, elapsed 0, voice: 1 note: 78 velocity 64 event ('note', 5280, 2, 78, 64)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1921, ticks 5280, elapsed 0, voice: 2 note: 74 velocity 64 event ('note', 5280, 3, 74, 64)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 1922, ticks 5280, elapsed 0, voice: 3 note: 62 velocity 64 event ('note', 5280, 7, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1923, ticks 5280, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 5280, 8, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1924, ticks 5280, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 5280, 9, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1925, ticks 5280, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 5280, 10, 62, 64)
	13,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1926, ticks 5309, elapsed 13, voice: 1 note: 78 velocity 0 event ('note', 5309, 2, 78, 0)
	0,((( 1 &4)<<5)|( 81 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1927, ticks 5310, elapsed 0, voice: 1 note: 81 velocity 64 event ('note', 5310, 2, 81, 64)
	// Note off skipped, note 78 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 81 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1929, ticks 5339, elapsed 13, voice: 1 note: 81 velocity 0 event ('note', 5339, 2, 81, 0)
	0,((( 1 &4)<<5)|( 86 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1930, ticks 5340, elapsed 0, voice: 1 note: 86 velocity 64 event ('note', 5340, 1, 86, 64)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1931, ticks 5340, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 5340, 2, 74, 64)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1932, ticks 5340, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 5340, 4, 74, 64)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1933, ticks 5340, elapsed 0, voice: 0 note: 69 velocity 64 event ('note', 5340, 5, 69, 64)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1934, ticks 5340, elapsed 0, voice: 0 note: 66 velocity 64 event ('note', 5340, 6, 66, 64)
	13,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1935, ticks 5369, elapsed 13, voice: 2 note: 74 velocity 0 event ('note', 5369, 2, 74, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1938, ticks 5369, elapsed 0, voice: 0 note: 66 velocity 0 event ('note', 5369, 6, 66, 0)
	0,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1939, ticks 5370, elapsed 0, voice: 0 note: 76 velocity 64 event ('note', 5370, 2, 76, 64)
	0,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1940, ticks 5370, elapsed 0, voice: 2 note: 73 velocity 64 event ('note', 5370, 4, 73, 64)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1941, ticks 5370, elapsed 0, voice: 0 note: 67 velocity 64 event ('note', 5370, 5, 67, 64)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1942, ticks 5370, elapsed 0, voice: 0 note: 64 velocity 64 event ('note', 5370, 6, 64, 64)
	13,((( 1 &4)<<5)|( 86 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1943, ticks 5399, elapsed 13, voice: 1 note: 86 velocity 0 event ('note', 5399, 1, 86, 0)
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1946, ticks 5399, elapsed 0, voice: 2 note: 73 velocity 0 event ('note', 5399, 4, 73, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1948, ticks 5399, elapsed 0, voice: 0 note: 64 velocity 0 event ('note', 5399, 6, 64, 0)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1949, ticks 5399, elapsed 0, voice: 3 note: 62 velocity 0 event ('note', 5399, 7, 62, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1953, ticks 5400, elapsed 0, voice: 0 note: 78 velocity 64 event ('note', 5400, 2, 78, 64)
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1954, ticks 5400, elapsed 0, voice: 1 note: 74 velocity 64 event ('note', 5400, 4, 74, 64)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1955, ticks 5400, elapsed 0, voice: 2 note: 69 velocity 64 event ('note', 5400, 5, 69, 64)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 1956, ticks 5400, elapsed 0, voice: 3 note: 62 velocity 64 event ('note', 5400, 6, 62, 64)
	13,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1957, ticks 5429, elapsed 13, voice: 0 note: 78 velocity 0 event ('note', 5429, 2, 78, 0)
	0,((( 0 &4)<<5)|( 79 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1958, ticks 5430, elapsed 0, voice: 0 note: 79 velocity 64 event ('note', 5430, 2, 79, 64)
	13,((( 0 &4)<<5)|( 79 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1959, ticks 5459, elapsed 13, voice: 0 note: 79 velocity 0 event ('note', 5459, 2, 79, 0)
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1960, ticks 5459, elapsed 0, voice: 1 note: 74 velocity 0 event ('note', 5459, 4, 74, 0)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1961, ticks 5459, elapsed 0, voice: 2 note: 69 velocity 0 event ('note', 5459, 5, 69, 0)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1962, ticks 5459, elapsed 0, voice: 3 note: 62 velocity 0 event ('note', 5459, 6, 62, 0)
	0,((( 0 &4)<<5)|( 85 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1963, ticks 5460, elapsed 0, voice: 0 note: 85 velocity 64 event ('note', 5460, 1, 85, 64)
	0,((( 1 &4)<<5)|( 81 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1964, ticks 5460, elapsed 0, voice: 1 note: 81 velocity 64 event ('note', 5460, 2, 81, 64)
	0,((( 2 &4)<<5)|( 76 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1965, ticks 5460, elapsed 0, voice: 2 note: 76 velocity 64 event ('note', 5460, 3, 76, 64)
	0,((( 3 &4)<<5)|( 57 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 1966, ticks 5460, elapsed 0, voice: 3 note: 57 velocity 64 event ('note', 5460, 7, 57, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1967, ticks 5460, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 5460, 8, 57, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1968, ticks 5460, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 5460, 9, 57, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1969, ticks 5460, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 5460, 10, 57, 64)
	13,((( 1 &4)<<5)|( 81 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1970, ticks 5489, elapsed 13, voice: 1 note: 81 velocity 0 event ('note', 5489, 2, 81, 0)
	0,((( 1 &4)<<5)|( 79 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1971, ticks 5490, elapsed 0, voice: 1 note: 79 velocity 64 event ('note', 5490, 2, 79, 64)
	// Note off skipped, note 85 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 79 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1973, ticks 5519, elapsed 13, voice: 1 note: 79 velocity 0 event ('note', 5519, 2, 79, 0)
	0,((( 2 &4)<<5)|( 76 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1974, ticks 5519, elapsed 0, voice: 2 note: 76 velocity 0 event ('note', 5519, 3, 76, 0)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1975, ticks 5519, elapsed 0, voice: 0 note: 57 velocity 0 event ('note', 5519, 7, 57, 0)
	0,((( 3 &4)<<5)|( 57 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1976, ticks 5519, elapsed 0, voice: 3 note: 57 velocity 0 event ('note', 5519, 8, 57, 0)
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 86 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1979, ticks 5520, elapsed 0, voice: 0 note: 86 velocity 64 event ('note', 5520, 1, 86, 64)
	0,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1980, ticks 5520, elapsed 0, voice: 1 note: 78 velocity 64 event ('note', 5520, 2, 78, 64)
	0,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1981, ticks 5520, elapsed 0, voice: 2 note: 78 velocity 64 event ('note', 5520, 3, 78, 64)
	0,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 1982, ticks 5520, elapsed 0, voice: 3 note: 50 velocity 64 event ('note', 5520, 7, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1983, ticks 5520, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 5520, 8, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1984, ticks 5520, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 5520, 9, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1985, ticks 5520, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 5520, 10, 50, 64)
	13,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1986, ticks 5549, elapsed 13, voice: 1 note: 78 velocity 0 event ('note', 5549, 3, 78, 0)
	0,((( 1 &4)<<5)|( 81 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1987, ticks 5550, elapsed 0, voice: 1 note: 81 velocity 64 event ('note', 5550, 3, 81, 64)
	// Note off skipped, note 86 not found in channels, probably interrupted
	13,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1989, ticks 5579, elapsed 13, voice: 2 note: 78 velocity 0 event ('note', 5579, 2, 78, 0)
	0,((( 1 &4)<<5)|( 81 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1990, ticks 5579, elapsed 0, voice: 1 note: 81 velocity 0 event ('note', 5579, 3, 81, 0)
	0,((( 1 &4)<<5)|( 79 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1991, ticks 5580, elapsed 0, voice: 1 note: 79 velocity 64 event ('note', 5580, 1, 79, 64)
	0,((( 2 &4)<<5)|( 86 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1992, ticks 5580, elapsed 0, voice: 2 note: 86 velocity 64 event ('note', 5580, 2, 86, 64)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1993, ticks 5580, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 5580, 3, 74, 64)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1994, ticks 5580, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 5580, 4, 74, 64)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1995, ticks 5580, elapsed 0, voice: 0 note: 69 velocity 64 event ('note', 5580, 5, 69, 64)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1996, ticks 5580, elapsed 0, voice: 0 note: 66 velocity 64 event ('note', 5580, 6, 66, 64)
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	13,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2000, ticks 5609, elapsed 13, voice: 0 note: 66 velocity 0 event ('note', 5609, 6, 66, 0)
	0,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2001, ticks 5610, elapsed 0, voice: 0 note: 76 velocity 64 event ('note', 5610, 3, 76, 64)
	0,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2002, ticks 5610, elapsed 0, voice: 0 note: 73 velocity 64 event ('note', 5610, 4, 73, 64)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2003, ticks 5610, elapsed 0, voice: 0 note: 67 velocity 64 event ('note', 5610, 5, 67, 64)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2004, ticks 5610, elapsed 0, voice: 0 note: 64 velocity 64 event ('note', 5610, 6, 64, 64)
	13,((( 1 &4)<<5)|( 79 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2005, ticks 5639, elapsed 13, voice: 1 note: 79 velocity 0 event ('note', 5639, 1, 79, 0)
	0,((( 2 &4)<<5)|( 86 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2006, ticks 5639, elapsed 0, voice: 2 note: 86 velocity 0 event ('note', 5639, 2, 86, 0)
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 67 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2010, ticks 5639, elapsed 0, voice: 0 note: 64 velocity 0 event ('note', 5639, 6, 64, 0)
	0,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2011, ticks 5639, elapsed 0, voice: 3 note: 50 velocity 0 event ('note', 5639, 7, 50, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2015, ticks 5640, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 5640, 1, 74, 64)
	0,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2016, ticks 5640, elapsed 0, voice: 1 note: 78 velocity 64 event ('note', 5640, 3, 78, 64)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2017, ticks 5640, elapsed 0, voice: 2 note: 74 velocity 64 event ('note', 5640, 4, 74, 64)
	0,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 2018, ticks 5640, elapsed 0, voice: 3 note: 69 velocity 64 event ('note', 5640, 5, 69, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2019, ticks 5640, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 5640, 6, 62, 64)
	13,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2020, ticks 5669, elapsed 13, voice: 1 note: 78 velocity 0 event ('note', 5669, 3, 78, 0)
	0,((( 1 &4)<<5)|( 79 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2021, ticks 5670, elapsed 0, voice: 1 note: 79 velocity 64 event ('note', 5670, 3, 79, 64)
	13,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2022, ticks 5699, elapsed 13, voice: 2 note: 74 velocity 0 event ('note', 5699, 1, 74, 0)
	0,((( 1 &4)<<5)|( 79 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2023, ticks 5699, elapsed 0, voice: 1 note: 79 velocity 0 event ('note', 5699, 3, 79, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2025, ticks 5699, elapsed 0, voice: 3 note: 69 velocity 0 event ('note', 5699, 5, 69, 0)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2026, ticks 5699, elapsed 0, voice: 0 note: 62 velocity 0 event ('note', 5699, 6, 62, 0)
	0,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2027, ticks 5700, elapsed 0, voice: 0 note: 76 velocity 64 event ('note', 5700, 1, 76, 64)
	0,((( 1 &4)<<5)|( 85 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2028, ticks 5700, elapsed 0, voice: 1 note: 85 velocity 64 event ('note', 5700, 2, 85, 64)
	0,((( 2 &4)<<5)|( 81 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2029, ticks 5700, elapsed 0, voice: 2 note: 81 velocity 64 event ('note', 5700, 3, 81, 64)
	0,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 2030, ticks 5700, elapsed 0, voice: 3 note: 69 velocity 64 event ('note', 5700, 4, 69, 64)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2031, ticks 5700, elapsed 0, voice: 0 note: 69 velocity 64 event ('note', 5700, 5, 69, 64)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2032, ticks 5700, elapsed 0, voice: 0 note: 69 velocity 64 event ('note', 5700, 6, 69, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2033, ticks 5700, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 5700, 7, 45, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2034, ticks 5700, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 5700, 8, 45, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2035, ticks 5700, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 5700, 9, 45, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2036, ticks 5700, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 5700, 10, 45, 64)
	13,((( 2 &4)<<5)|( 81 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2037, ticks 5729, elapsed 13, voice: 2 note: 81 velocity 0 event ('note', 5729, 3, 81, 0)
	// Note off skipped, note 76 not found in channels, probably interrupted
	14,((( 1 &4)<<5)|( 85 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2039, ticks 5759, elapsed 14, voice: 1 note: 85 velocity 0 event ('note', 5759, 2, 85, 0)
	0,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2040, ticks 5759, elapsed 0, voice: 3 note: 69 velocity 0 event ('note', 5759, 4, 69, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2043, ticks 5759, elapsed 0, voice: 0 note: 45 velocity 0 event ('note', 5759, 7, 45, 0)
	// Note off skipped, note 45 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2047, ticks 5760, elapsed 0, voice: 0 note: 78 velocity 64 event ('note', 5760, 1, 78, 64)
	0,((( 1 &4)<<5)|( 86 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2048, ticks 5760, elapsed 0, voice: 1 note: 86 velocity 64 event ('note', 5760, 2, 86, 64)
	0,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2049, ticks 5760, elapsed 0, voice: 2 note: 78 velocity 64 event ('note', 5760, 3, 78, 64)
	0,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 2050, ticks 5760, elapsed 0, voice: 3 note: 69 velocity 64 event ('note', 5760, 4, 69, 64)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2051, ticks 5760, elapsed 0, voice: 0 note: 69 velocity 64 event ('note', 5760, 5, 69, 64)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2052, ticks 5760, elapsed 0, voice: 0 note: 69 velocity 64 event ('note', 5760, 6, 69, 64)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2053, ticks 5760, elapsed 0, voice: 0 note: 38 velocity 64 event ('note', 5760, 7, 38, 64)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2054, ticks 5760, elapsed 0, voice: 0 note: 38 velocity 64 event ('note', 5760, 8, 38, 64)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2055, ticks 5760, elapsed 0, voice: 0 note: 38 velocity 64 event ('note', 5760, 9, 38, 64)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2056, ticks 5760, elapsed 0, voice: 0 note: 38 velocity 64 event ('note', 5760, 10, 38, 64)
	28,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2057, ticks 5819, elapsed 28, voice: 2 note: 78 velocity 0 event ('note', 5819, 1, 78, 0)
	0,((( 1 &4)<<5)|( 86 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2058, ticks 5819, elapsed 0, voice: 1 note: 86 velocity 0 event ('note', 5819, 2, 86, 0)
	// Note off skipped, note 78 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2060, ticks 5819, elapsed 0, voice: 3 note: 69 velocity 0 event ('note', 5819, 4, 69, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2063, ticks 5819, elapsed 0, voice: 0 note: 38 velocity 0 event ('note', 5819, 7, 38, 0)
	// Note off skipped, note 38 not found in channels, probably interrupted
	// Note off skipped, note 38 not found in channels, probably interrupted
	// Note off skipped, note 38 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2067, ticks 5820, elapsed 0, voice: 0 note: 76 velocity 64 event ('note', 5820, 1, 76, 64)
	0,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2068, ticks 5820, elapsed 0, voice: 1 note: 76 velocity 64 event ('note', 5820, 2, 76, 64)
	0,((( 2 &4)<<5)|( 76 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2069, ticks 5820, elapsed 0, voice: 2 note: 76 velocity 64 event ('note', 5820, 3, 76, 64)
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 2070, ticks 5820, elapsed 0, voice: 3 note: 67 velocity 64 event ('note', 5820, 4, 67, 64)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2071, ticks 5820, elapsed 0, voice: 0 note: 67 velocity 64 event ('note', 5820, 5, 67, 64)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2072, ticks 5820, elapsed 0, voice: 0 note: 67 velocity 64 event ('note', 5820, 6, 67, 64)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2073, ticks 5820, elapsed 0, voice: 0 note: 47 velocity 64 event ('note', 5820, 7, 47, 64)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2074, ticks 5820, elapsed 0, voice: 0 note: 47 velocity 64 event ('note', 5820, 8, 47, 64)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2075, ticks 5820, elapsed 0, voice: 0 note: 47 velocity 64 event ('note', 5820, 9, 47, 64)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2076, ticks 5820, elapsed 0, voice: 0 note: 47 velocity 64 event ('note', 5820, 10, 47, 64)
	13,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2077, ticks 5849, elapsed 13, voice: 1 note: 76 velocity 0 event ('note', 5849, 1, 76, 0)
	0,((( 2 &4)<<5)|( 76 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2078, ticks 5849, elapsed 0, voice: 2 note: 76 velocity 0 event ('note', 5849, 2, 76, 0)
	// Note off skipped, note 76 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2080, ticks 5849, elapsed 0, voice: 3 note: 67 velocity 0 event ('note', 5849, 4, 67, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 67 not found in channels, probably interrupted
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2083, ticks 5850, elapsed 0, voice: 1 note: 74 velocity 64 event ('note', 5850, 1, 74, 64)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2084, ticks 5850, elapsed 0, voice: 2 note: 74 velocity 64 event ('note', 5850, 2, 74, 64)
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 2085, ticks 5850, elapsed 0, voice: 3 note: 74 velocity 64 event ('note', 5850, 3, 74, 64)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2086, ticks 5850, elapsed 0, voice: 0 note: 66 velocity 64 event ('note', 5850, 4, 66, 64)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2087, ticks 5850, elapsed 0, voice: 0 note: 66 velocity 64 event ('note', 5850, 5, 66, 64)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2088, ticks 5850, elapsed 0, voice: 0 note: 66 velocity 64 event ('note', 5850, 6, 66, 64)
	13,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2089, ticks 5879, elapsed 13, voice: 1 note: 74 velocity 0 event ('note', 5879, 1, 74, 0)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2090, ticks 5879, elapsed 0, voice: 2 note: 74 velocity 0 event ('note', 5879, 2, 74, 0)
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2091, ticks 5879, elapsed 0, voice: 3 note: 74 velocity 0 event ('note', 5879, 3, 74, 0)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2092, ticks 5879, elapsed 0, voice: 0 note: 66 velocity 0 event ('note', 5879, 4, 66, 0)
	// Note off skipped, note 66 not found in channels, probably interrupted
	// Note off skipped, note 66 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2099, ticks 5880, elapsed 0, voice: 0 note: 76 velocity 64 event ('note', 5880, 1, 76, 64)
	0,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2100, ticks 5880, elapsed 0, voice: 1 note: 76 velocity 64 event ('note', 5880, 2, 76, 64)
	0,((( 2 &4)<<5)|( 76 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2101, ticks 5880, elapsed 0, voice: 2 note: 76 velocity 64 event ('note', 5880, 3, 76, 64)
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 2102, ticks 5880, elapsed 0, voice: 3 note: 67 velocity 64 event ('note', 5880, 4, 67, 64)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2103, ticks 5880, elapsed 0, voice: 0 note: 67 velocity 64 event ('note', 5880, 5, 67, 64)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2104, ticks 5880, elapsed 0, voice: 0 note: 67 velocity 64 event ('note', 5880, 6, 67, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2105, ticks 5880, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 5880, 7, 43, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2106, ticks 5880, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 5880, 8, 43, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2107, ticks 5880, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 5880, 9, 43, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2108, ticks 5880, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 5880, 10, 43, 64)
	28,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2109, ticks 5939, elapsed 28, voice: 1 note: 76 velocity 0 event ('note', 5939, 1, 76, 0)
	0,((( 2 &4)<<5)|( 76 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2110, ticks 5939, elapsed 0, voice: 2 note: 76 velocity 0 event ('note', 5939, 2, 76, 0)
	// Note off skipped, note 76 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2112, ticks 5939, elapsed 0, voice: 3 note: 67 velocity 0 event ('note', 5939, 4, 67, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 67 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2115, ticks 5939, elapsed 0, voice: 0 note: 43 velocity 0 event ('note', 5939, 7, 43, 0)
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2119, ticks 5940, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 5940, 1, 74, 64)
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2120, ticks 5940, elapsed 0, voice: 1 note: 74 velocity 64 event ('note', 5940, 2, 74, 64)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2121, ticks 5940, elapsed 0, voice: 2 note: 74 velocity 64 event ('note', 5940, 3, 74, 64)
	0,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 2122, ticks 5940, elapsed 0, voice: 3 note: 66 velocity 64 event ('note', 5940, 4, 66, 64)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2123, ticks 5940, elapsed 0, voice: 0 note: 66 velocity 64 event ('note', 5940, 5, 66, 64)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2124, ticks 5940, elapsed 0, voice: 0 note: 66 velocity 64 event ('note', 5940, 6, 66, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2125, ticks 5940, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 5940, 7, 45, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2126, ticks 5940, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 5940, 8, 45, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2127, ticks 5940, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 5940, 9, 45, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2128, ticks 5940, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 5940, 10, 45, 64)
	13,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2129, ticks 5969, elapsed 13, voice: 1 note: 74 velocity 0 event ('note', 5969, 1, 74, 0)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2130, ticks 5969, elapsed 0, voice: 2 note: 74 velocity 0 event ('note', 5969, 2, 74, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2132, ticks 5969, elapsed 0, voice: 3 note: 66 velocity 0 event ('note', 5969, 4, 66, 0)
	// Note off skipped, note 66 not found in channels, probably interrupted
	// Note off skipped, note 66 not found in channels, probably interrupted
	0,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2135, ticks 5970, elapsed 0, voice: 1 note: 73 velocity 64 event ('note', 5970, 1, 73, 64)
	0,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2136, ticks 5970, elapsed 0, voice: 2 note: 73 velocity 64 event ('note', 5970, 2, 73, 64)
	0,((( 3 &4)<<5)|( 73 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 2137, ticks 5970, elapsed 0, voice: 3 note: 73 velocity 64 event ('note', 5970, 3, 73, 64)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2138, ticks 5970, elapsed 0, voice: 0 note: 64 velocity 64 event ('note', 5970, 4, 64, 64)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2139, ticks 5970, elapsed 0, voice: 0 note: 64 velocity 64 event ('note', 5970, 5, 64, 64)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2140, ticks 5970, elapsed 0, voice: 0 note: 64 velocity 64 event ('note', 5970, 6, 64, 64)
	13,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2141, ticks 5999, elapsed 13, voice: 1 note: 73 velocity 0 event ('note', 5999, 1, 73, 0)
	0,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2142, ticks 5999, elapsed 0, voice: 2 note: 73 velocity 0 event ('note', 5999, 2, 73, 0)
	0,((( 3 &4)<<5)|( 73 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2143, ticks 5999, elapsed 0, voice: 3 note: 73 velocity 0 event ('note', 5999, 3, 73, 0)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2144, ticks 5999, elapsed 0, voice: 0 note: 64 velocity 0 event ('note', 5999, 4, 64, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2151, ticks 6000, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 6000, 1, 74, 64)
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2152, ticks 6000, elapsed 0, voice: 1 note: 74 velocity 64 event ('note', 6000, 2, 74, 64)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2153, ticks 6000, elapsed 0, voice: 2 note: 74 velocity 64 event ('note', 6000, 3, 74, 64)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 2154, ticks 6000, elapsed 0, voice: 3 note: 62 velocity 64 event ('note', 6000, 4, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2155, ticks 6000, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 6000, 5, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2156, ticks 6000, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 6000, 6, 62, 64)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2157, ticks 6000, elapsed 0, voice: 0 note: 47 velocity 64 event ('note', 6000, 7, 47, 64)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2158, ticks 6000, elapsed 0, voice: 0 note: 47 velocity 64 event ('note', 6000, 8, 47, 64)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2159, ticks 6000, elapsed 0, voice: 0 note: 47 velocity 64 event ('note', 6000, 9, 47, 64)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2160, ticks 6000, elapsed 0, voice: 0 note: 47 velocity 64 event ('note', 6000, 10, 47, 64)
	28,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2161, ticks 6059, elapsed 28, voice: 1 note: 74 velocity 0 event ('note', 6059, 1, 74, 0)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2162, ticks 6059, elapsed 0, voice: 2 note: 74 velocity 0 event ('note', 6059, 2, 74, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2164, ticks 6059, elapsed 0, voice: 3 note: 62 velocity 0 event ('note', 6059, 4, 62, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2167, ticks 6059, elapsed 0, voice: 0 note: 47 velocity 0 event ('note', 6059, 7, 47, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2171, ticks 6060, elapsed 0, voice: 0 note: 73 velocity 64 event ('note', 6060, 1, 73, 64)
	0,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2172, ticks 6060, elapsed 0, voice: 1 note: 73 velocity 64 event ('note', 6060, 2, 73, 64)
	0,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2173, ticks 6060, elapsed 0, voice: 2 note: 73 velocity 64 event ('note', 6060, 3, 73, 64)
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 2174, ticks 6060, elapsed 0, voice: 3 note: 74 velocity 64 event ('note', 6060, 4, 74, 64)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2175, ticks 6060, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 6060, 5, 74, 64)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2176, ticks 6060, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 6060, 6, 74, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2177, ticks 6060, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 6060, 7, 45, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2178, ticks 6060, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 6060, 8, 45, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2179, ticks 6060, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 6060, 9, 45, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2180, ticks 6060, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 6060, 10, 45, 64)
	13,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2181, ticks 6089, elapsed 13, voice: 1 note: 73 velocity 0 event ('note', 6089, 1, 73, 0)
	0,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2182, ticks 6089, elapsed 0, voice: 2 note: 73 velocity 0 event ('note', 6089, 2, 73, 0)
	// Note off skipped, note 73 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2184, ticks 6089, elapsed 0, voice: 0 note: 45 velocity 0 event ('note', 6089, 7, 45, 0)
	// Note off skipped, note 45 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2188, ticks 6090, elapsed 0, voice: 0 note: 71 velocity 64 event ('note', 6090, 1, 71, 64)
	0,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2189, ticks 6090, elapsed 0, voice: 1 note: 71 velocity 64 event ('note', 6090, 2, 71, 64)
	0,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2190, ticks 6090, elapsed 0, voice: 2 note: 71 velocity 64 event ('note', 6090, 3, 71, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2191, ticks 6090, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 6090, 7, 43, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2192, ticks 6090, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 6090, 8, 43, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2193, ticks 6090, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 6090, 9, 43, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2194, ticks 6090, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 6090, 10, 43, 64)
	13,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2195, ticks 6119, elapsed 13, voice: 1 note: 71 velocity 0 event ('note', 6119, 1, 71, 0)
	0,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2196, ticks 6119, elapsed 0, voice: 2 note: 71 velocity 0 event ('note', 6119, 2, 71, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2198, ticks 6119, elapsed 0, voice: 3 note: 74 velocity 0 event ('note', 6119, 4, 74, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2201, ticks 6119, elapsed 0, voice: 0 note: 43 velocity 0 event ('note', 6119, 7, 43, 0)
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2205, ticks 6120, elapsed 0, voice: 0 note: 69 velocity 64 event ('note', 6120, 1, 69, 64)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2206, ticks 6120, elapsed 0, voice: 1 note: 69 velocity 64 event ('note', 6120, 2, 69, 64)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2207, ticks 6120, elapsed 0, voice: 2 note: 69 velocity 64 event ('note', 6120, 3, 69, 64)
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 2208, ticks 6120, elapsed 0, voice: 3 note: 74 velocity 64 event ('note', 6120, 4, 74, 64)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2209, ticks 6120, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 6120, 5, 74, 64)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2210, ticks 6120, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 6120, 6, 74, 64)
	0,((( 0 &4)<<5)|( 42 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2211, ticks 6120, elapsed 0, voice: 0 note: 42 velocity 64 event ('note', 6120, 7, 42, 64)
	0,((( 0 &4)<<5)|( 42 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2212, ticks 6120, elapsed 0, voice: 0 note: 42 velocity 64 event ('note', 6120, 8, 42, 64)
	0,((( 0 &4)<<5)|( 42 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2213, ticks 6120, elapsed 0, voice: 0 note: 42 velocity 64 event ('note', 6120, 9, 42, 64)
	0,((( 0 &4)<<5)|( 42 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2214, ticks 6120, elapsed 0, voice: 0 note: 42 velocity 64 event ('note', 6120, 10, 42, 64)
	13,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2215, ticks 6149, elapsed 13, voice: 1 note: 69 velocity 0 event ('note', 6149, 1, 69, 0)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2216, ticks 6149, elapsed 0, voice: 2 note: 69 velocity 0 event ('note', 6149, 2, 69, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2218, ticks 6150, elapsed 0, voice: 1 note: 74 velocity 64 event ('note', 6150, 1, 74, 64)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2219, ticks 6150, elapsed 0, voice: 2 note: 74 velocity 64 event ('note', 6150, 2, 74, 64)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2220, ticks 6150, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 6150, 3, 74, 64)
	13,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2221, ticks 6179, elapsed 13, voice: 0 note: 74 velocity 0 event ('note', 6179, 1, 74, 0)
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2222, ticks 6179, elapsed 0, voice: 1 note: 74 velocity 0 event ('note', 6179, 2, 74, 0)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2223, ticks 6179, elapsed 0, voice: 2 note: 74 velocity 0 event ('note', 6179, 3, 74, 0)
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2224, ticks 6179, elapsed 0, voice: 3 note: 74 velocity 0 event ('note', 6179, 4, 74, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 42 not found in channels, probably interrupted
	// Note off skipped, note 42 not found in channels, probably interrupted
	// Note off skipped, note 42 not found in channels, probably interrupted
	// Note off skipped, note 42 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2231, ticks 6180, elapsed 0, voice: 0 note: 69 velocity 64 event ('note', 6180, 1, 69, 64)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2232, ticks 6180, elapsed 0, voice: 1 note: 69 velocity 64 event ('note', 6180, 2, 69, 64)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2233, ticks 6180, elapsed 0, voice: 2 note: 69 velocity 64 event ('note', 6180, 3, 69, 64)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 2234, ticks 6180, elapsed 0, voice: 3 note: 62 velocity 64 event ('note', 6180, 4, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2235, ticks 6180, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 6180, 5, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2236, ticks 6180, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 6180, 6, 62, 64)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2237, ticks 6180, elapsed 0, voice: 0 note: 40 velocity 64 event ('note', 6180, 7, 40, 64)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2238, ticks 6180, elapsed 0, voice: 0 note: 40 velocity 64 event ('note', 6180, 8, 40, 64)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2239, ticks 6180, elapsed 0, voice: 0 note: 40 velocity 64 event ('note', 6180, 9, 40, 64)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2240, ticks 6180, elapsed 0, voice: 0 note: 40 velocity 64 event ('note', 6180, 10, 40, 64)
	13,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2241, ticks 6209, elapsed 13, voice: 1 note: 69 velocity 0 event ('note', 6209, 1, 69, 0)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2242, ticks 6209, elapsed 0, voice: 2 note: 69 velocity 0 event ('note', 6209, 2, 69, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2244, ticks 6209, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 6209, 7, 40, 0)
	// Note off skipped, note 40 not found in channels, probably interrupted
	// Note off skipped, note 40 not found in channels, probably interrupted
	// Note off skipped, note 40 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2248, ticks 6210, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 6210, 1, 74, 64)
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2249, ticks 6210, elapsed 0, voice: 1 note: 74 velocity 64 event ('note', 6210, 2, 74, 64)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2250, ticks 6210, elapsed 0, voice: 2 note: 74 velocity 64 event ('note', 6210, 3, 74, 64)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2251, ticks 6210, elapsed 0, voice: 0 note: 38 velocity 64 event ('note', 6210, 7, 38, 64)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2252, ticks 6210, elapsed 0, voice: 0 note: 38 velocity 64 event ('note', 6210, 8, 38, 64)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2253, ticks 6210, elapsed 0, voice: 0 note: 38 velocity 64 event ('note', 6210, 9, 38, 64)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2254, ticks 6210, elapsed 0, voice: 0 note: 38 velocity 64 event ('note', 6210, 10, 38, 64)
	13,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2255, ticks 6239, elapsed 13, voice: 1 note: 74 velocity 0 event ('note', 6239, 1, 74, 0)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2256, ticks 6239, elapsed 0, voice: 2 note: 74 velocity 0 event ('note', 6239, 2, 74, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2258, ticks 6239, elapsed 0, voice: 3 note: 62 velocity 0 event ('note', 6239, 4, 62, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2261, ticks 6239, elapsed 0, voice: 0 note: 38 velocity 0 event ('note', 6239, 7, 38, 0)
	// Note off skipped, note 38 not found in channels, probably interrupted
	// Note off skipped, note 38 not found in channels, probably interrupted
	// Note off skipped, note 38 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2265, ticks 6240, elapsed 0, voice: 0 note: 71 velocity 64 event ('note', 6240, 1, 71, 64)
	0,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2266, ticks 6240, elapsed 0, voice: 1 note: 71 velocity 64 event ('note', 6240, 2, 71, 64)
	0,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2267, ticks 6240, elapsed 0, voice: 2 note: 71 velocity 64 event ('note', 6240, 3, 71, 64)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 2268, ticks 6240, elapsed 0, voice: 3 note: 62 velocity 64 event ('note', 6240, 4, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2269, ticks 6240, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 6240, 5, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2270, ticks 6240, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 6240, 6, 62, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2271, ticks 6240, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 6240, 7, 43, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2272, ticks 6240, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 6240, 8, 43, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2273, ticks 6240, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 6240, 9, 43, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2274, ticks 6240, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 6240, 10, 43, 64)
	28,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2275, ticks 6299, elapsed 28, voice: 1 note: 71 velocity 0 event ('note', 6299, 1, 71, 0)
	0,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2276, ticks 6299, elapsed 0, voice: 2 note: 71 velocity 0 event ('note', 6299, 2, 71, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2278, ticks 6299, elapsed 0, voice: 3 note: 62 velocity 0 event ('note', 6299, 4, 62, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2281, ticks 6299, elapsed 0, voice: 0 note: 43 velocity 0 event ('note', 6299, 7, 43, 0)
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2285, ticks 6300, elapsed 0, voice: 0 note: 69 velocity 64 event ('note', 6300, 1, 69, 64)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2286, ticks 6300, elapsed 0, voice: 1 note: 69 velocity 64 event ('note', 6300, 2, 69, 64)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2287, ticks 6300, elapsed 0, voice: 2 note: 69 velocity 64 event ('note', 6300, 3, 69, 64)
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 2288, ticks 6300, elapsed 0, voice: 3 note: 74 velocity 64 event ('note', 6300, 4, 74, 64)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2289, ticks 6300, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 6300, 5, 74, 64)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2290, ticks 6300, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 6300, 6, 74, 64)
	0,((( 0 &4)<<5)|( 42 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2291, ticks 6300, elapsed 0, voice: 0 note: 42 velocity 64 event ('note', 6300, 7, 42, 64)
	0,((( 0 &4)<<5)|( 42 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2292, ticks 6300, elapsed 0, voice: 0 note: 42 velocity 64 event ('note', 6300, 8, 42, 64)
	0,((( 0 &4)<<5)|( 42 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2293, ticks 6300, elapsed 0, voice: 0 note: 42 velocity 64 event ('note', 6300, 9, 42, 64)
	0,((( 0 &4)<<5)|( 42 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2294, ticks 6300, elapsed 0, voice: 0 note: 42 velocity 64 event ('note', 6300, 10, 42, 64)
	13,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2295, ticks 6329, elapsed 13, voice: 1 note: 69 velocity 0 event ('note', 6329, 1, 69, 0)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2296, ticks 6329, elapsed 0, voice: 2 note: 69 velocity 0 event ('note', 6329, 2, 69, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 42 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2298, ticks 6329, elapsed 0, voice: 0 note: 42 velocity 0 event ('note', 6329, 7, 42, 0)
	// Note off skipped, note 42 not found in channels, probably interrupted
	// Note off skipped, note 42 not found in channels, probably interrupted
	// Note off skipped, note 42 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2302, ticks 6330, elapsed 0, voice: 0 note: 67 velocity 64 event ('note', 6330, 1, 67, 64)
	0,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2303, ticks 6330, elapsed 0, voice: 1 note: 67 velocity 64 event ('note', 6330, 2, 67, 64)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2304, ticks 6330, elapsed 0, voice: 2 note: 67 velocity 64 event ('note', 6330, 3, 67, 64)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2305, ticks 6330, elapsed 0, voice: 0 note: 40 velocity 64 event ('note', 6330, 7, 40, 64)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2306, ticks 6330, elapsed 0, voice: 0 note: 40 velocity 64 event ('note', 6330, 8, 40, 64)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2307, ticks 6330, elapsed 0, voice: 0 note: 40 velocity 64 event ('note', 6330, 9, 40, 64)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2308, ticks 6330, elapsed 0, voice: 0 note: 40 velocity 64 event ('note', 6330, 10, 40, 64)
	13,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2309, ticks 6359, elapsed 13, voice: 1 note: 67 velocity 0 event ('note', 6359, 1, 67, 0)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2310, ticks 6359, elapsed 0, voice: 2 note: 67 velocity 0 event ('note', 6359, 2, 67, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2312, ticks 6359, elapsed 0, voice: 3 note: 74 velocity 0 event ('note', 6359, 4, 74, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2315, ticks 6359, elapsed 0, voice: 0 note: 40 velocity 0 event ('note', 6359, 7, 40, 0)
	// Note off skipped, note 40 not found in channels, probably interrupted
	// Note off skipped, note 40 not found in channels, probably interrupted
	// Note off skipped, note 40 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2319, ticks 6360, elapsed 0, voice: 0 note: 66 velocity 64 event ('note', 6360, 1, 66, 64)
	0,((( 1 &4)<<5)|( 66 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2320, ticks 6360, elapsed 0, voice: 1 note: 66 velocity 64 event ('note', 6360, 2, 66, 64)
	0,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2321, ticks 6360, elapsed 0, voice: 2 note: 66 velocity 64 event ('note', 6360, 3, 66, 64)
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 2322, ticks 6360, elapsed 0, voice: 3 note: 74 velocity 64 event ('note', 6360, 4, 74, 64)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2323, ticks 6360, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 6360, 5, 74, 64)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2324, ticks 6360, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 6360, 6, 74, 64)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2325, ticks 6360, elapsed 0, voice: 0 note: 38 velocity 64 event ('note', 6360, 7, 38, 64)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2326, ticks 6360, elapsed 0, voice: 0 note: 38 velocity 64 event ('note', 6360, 8, 38, 64)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2327, ticks 6360, elapsed 0, voice: 0 note: 38 velocity 64 event ('note', 6360, 9, 38, 64)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2328, ticks 6360, elapsed 0, voice: 0 note: 38 velocity 64 event ('note', 6360, 10, 38, 64)
	13,((( 1 &4)<<5)|( 66 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2329, ticks 6389, elapsed 13, voice: 1 note: 66 velocity 0 event ('note', 6389, 1, 66, 0)
	0,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2330, ticks 6389, elapsed 0, voice: 2 note: 66 velocity 0 event ('note', 6389, 2, 66, 0)
	// Note off skipped, note 66 not found in channels, probably interrupted
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2332, ticks 6390, elapsed 0, voice: 1 note: 74 velocity 64 event ('note', 6390, 1, 74, 64)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2333, ticks 6390, elapsed 0, voice: 2 note: 74 velocity 64 event ('note', 6390, 2, 74, 64)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2334, ticks 6390, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 6390, 3, 74, 64)
	13,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2335, ticks 6419, elapsed 13, voice: 0 note: 74 velocity 0 event ('note', 6419, 1, 74, 0)
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2336, ticks 6419, elapsed 0, voice: 1 note: 74 velocity 0 event ('note', 6419, 2, 74, 0)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2337, ticks 6419, elapsed 0, voice: 2 note: 74 velocity 0 event ('note', 6419, 3, 74, 0)
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2338, ticks 6419, elapsed 0, voice: 3 note: 74 velocity 0 event ('note', 6419, 4, 74, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 38 not found in channels, probably interrupted
	// Note off skipped, note 38 not found in channels, probably interrupted
	// Note off skipped, note 38 not found in channels, probably interrupted
	// Note off skipped, note 38 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2345, ticks 6420, elapsed 0, voice: 0 note: 66 velocity 64 event ('note', 6420, 1, 66, 64)
	0,((( 1 &4)<<5)|( 66 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2346, ticks 6420, elapsed 0, voice: 1 note: 66 velocity 64 event ('note', 6420, 2, 66, 64)
	0,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2347, ticks 6420, elapsed 0, voice: 2 note: 66 velocity 64 event ('note', 6420, 3, 66, 64)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 2348, ticks 6420, elapsed 0, voice: 3 note: 62 velocity 64 event ('note', 6420, 4, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2349, ticks 6420, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 6420, 5, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2350, ticks 6420, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 6420, 6, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2351, ticks 6420, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 6420, 7, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2352, ticks 6420, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 6420, 8, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2353, ticks 6420, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 6420, 9, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2354, ticks 6420, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 6420, 10, 62, 64)
	13,((( 1 &4)<<5)|( 66 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2355, ticks 6449, elapsed 13, voice: 1 note: 66 velocity 0 event ('note', 6449, 1, 66, 0)
	0,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2356, ticks 6449, elapsed 0, voice: 2 note: 66 velocity 0 event ('note', 6449, 2, 66, 0)
	// Note off skipped, note 66 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2358, ticks 6449, elapsed 0, voice: 0 note: 62 velocity 0 event ('note', 6449, 7, 62, 0)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2359, ticks 6449, elapsed 0, voice: 3 note: 62 velocity 0 event ('note', 6449, 8, 62, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2362, ticks 6450, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 6450, 1, 74, 64)
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2363, ticks 6450, elapsed 0, voice: 1 note: 74 velocity 64 event ('note', 6450, 2, 74, 64)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2364, ticks 6450, elapsed 0, voice: 2 note: 74 velocity 64 event ('note', 6450, 3, 74, 64)
	0,((( 3 &4)<<5)|( 61 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 2365, ticks 6450, elapsed 0, voice: 3 note: 61 velocity 64 event ('note', 6450, 7, 61, 64)
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2366, ticks 6450, elapsed 0, voice: 0 note: 61 velocity 64 event ('note', 6450, 8, 61, 64)
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2367, ticks 6450, elapsed 0, voice: 0 note: 61 velocity 64 event ('note', 6450, 9, 61, 64)
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2368, ticks 6450, elapsed 0, voice: 0 note: 61 velocity 64 event ('note', 6450, 10, 61, 64)
	13,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2369, ticks 6479, elapsed 13, voice: 1 note: 74 velocity 0 event ('note', 6479, 1, 74, 0)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2370, ticks 6479, elapsed 0, voice: 2 note: 74 velocity 0 event ('note', 6479, 2, 74, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2375, ticks 6479, elapsed 0, voice: 0 note: 61 velocity 0 event ('note', 6479, 7, 61, 0)
	0,((( 3 &4)<<5)|( 61 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2376, ticks 6479, elapsed 0, voice: 3 note: 61 velocity 0 event ('note', 6479, 8, 61, 0)
	// Note off skipped, note 61 not found in channels, probably interrupted
	// Note off skipped, note 61 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2379, ticks 6480, elapsed 0, voice: 0 note: 67 velocity 64 event ('note', 6480, 1, 67, 64)
	0,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2380, ticks 6480, elapsed 0, voice: 1 note: 67 velocity 64 event ('note', 6480, 2, 67, 64)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2381, ticks 6480, elapsed 0, voice: 2 note: 67 velocity 64 event ('note', 6480, 3, 67, 64)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 2382, ticks 6480, elapsed 0, voice: 3 note: 62 velocity 64 event ('note', 6480, 4, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2383, ticks 6480, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 6480, 5, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2384, ticks 6480, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 6480, 6, 62, 64)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2385, ticks 6480, elapsed 0, voice: 0 note: 59 velocity 64 event ('note', 6480, 7, 59, 64)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2386, ticks 6480, elapsed 0, voice: 0 note: 59 velocity 64 event ('note', 6480, 8, 59, 64)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2387, ticks 6480, elapsed 0, voice: 0 note: 59 velocity 64 event ('note', 6480, 9, 59, 64)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2388, ticks 6480, elapsed 0, voice: 0 note: 59 velocity 64 event ('note', 6480, 10, 59, 64)
	28,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2389, ticks 6539, elapsed 28, voice: 1 note: 67 velocity 0 event ('note', 6539, 1, 67, 0)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2390, ticks 6539, elapsed 0, voice: 2 note: 67 velocity 0 event ('note', 6539, 2, 67, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2392, ticks 6539, elapsed 0, voice: 3 note: 62 velocity 0 event ('note', 6539, 4, 62, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2395, ticks 6539, elapsed 0, voice: 0 note: 59 velocity 0 event ('note', 6539, 7, 59, 0)
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2399, ticks 6540, elapsed 0, voice: 0 note: 66 velocity 64 event ('note', 6540, 1, 66, 64)
	0,((( 1 &4)<<5)|( 66 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2400, ticks 6540, elapsed 0, voice: 1 note: 66 velocity 64 event ('note', 6540, 2, 66, 64)
	0,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2401, ticks 6540, elapsed 0, voice: 2 note: 66 velocity 64 event ('note', 6540, 3, 66, 64)
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 2402, ticks 6540, elapsed 0, voice: 3 note: 74 velocity 64 event ('note', 6540, 4, 74, 64)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2403, ticks 6540, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 6540, 5, 74, 64)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2404, ticks 6540, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 6540, 6, 74, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2405, ticks 6540, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 6540, 7, 57, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2406, ticks 6540, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 6540, 8, 57, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2407, ticks 6540, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 6540, 9, 57, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2408, ticks 6540, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 6540, 10, 57, 64)
	13,((( 1 &4)<<5)|( 66 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2409, ticks 6569, elapsed 13, voice: 1 note: 66 velocity 0 event ('note', 6569, 1, 66, 0)
	0,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2410, ticks 6569, elapsed 0, voice: 2 note: 66 velocity 0 event ('note', 6569, 2, 66, 0)
	// Note off skipped, note 66 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2412, ticks 6569, elapsed 0, voice: 0 note: 57 velocity 0 event ('note', 6569, 7, 57, 0)
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2416, ticks 6570, elapsed 0, voice: 0 note: 64 velocity 64 event ('note', 6570, 1, 64, 64)
	0,((( 1 &4)<<5)|( 64 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2417, ticks 6570, elapsed 0, voice: 1 note: 64 velocity 64 event ('note', 6570, 2, 64, 64)
	0,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2418, ticks 6570, elapsed 0, voice: 2 note: 64 velocity 64 event ('note', 6570, 3, 64, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2419, ticks 6570, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 6570, 7, 55, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2420, ticks 6570, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 6570, 8, 55, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2421, ticks 6570, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 6570, 9, 55, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2422, ticks 6570, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 6570, 10, 55, 64)
	13,((( 1 &4)<<5)|( 64 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2423, ticks 6599, elapsed 13, voice: 1 note: 64 velocity 0 event ('note', 6599, 1, 64, 0)
	0,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2424, ticks 6599, elapsed 0, voice: 2 note: 64 velocity 0 event ('note', 6599, 2, 64, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2426, ticks 6599, elapsed 0, voice: 3 note: 74 velocity 0 event ('note', 6599, 4, 74, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2429, ticks 6599, elapsed 0, voice: 0 note: 55 velocity 0 event ('note', 6599, 7, 55, 0)
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2433, ticks 6600, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 6600, 1, 62, 64)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2434, ticks 6600, elapsed 0, voice: 1 note: 62 velocity 64 event ('note', 6600, 2, 62, 64)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2435, ticks 6600, elapsed 0, voice: 2 note: 62 velocity 64 event ('note', 6600, 3, 62, 64)
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 2436, ticks 6600, elapsed 0, voice: 3 note: 74 velocity 64 event ('note', 6600, 4, 74, 64)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2437, ticks 6600, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 6600, 5, 74, 64)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2438, ticks 6600, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 6600, 6, 74, 64)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2439, ticks 6600, elapsed 0, voice: 0 note: 54 velocity 64 event ('note', 6600, 7, 54, 64)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2440, ticks 6600, elapsed 0, voice: 0 note: 54 velocity 64 event ('note', 6600, 8, 54, 64)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2441, ticks 6600, elapsed 0, voice: 0 note: 54 velocity 64 event ('note', 6600, 9, 54, 64)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2442, ticks 6600, elapsed 0, voice: 0 note: 54 velocity 64 event ('note', 6600, 10, 54, 64)
	13,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2443, ticks 6629, elapsed 13, voice: 1 note: 62 velocity 0 event ('note', 6629, 1, 62, 0)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2444, ticks 6629, elapsed 0, voice: 2 note: 62 velocity 0 event ('note', 6629, 2, 62, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2446, ticks 6630, elapsed 0, voice: 1 note: 74 velocity 64 event ('note', 6630, 1, 74, 64)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2447, ticks 6630, elapsed 0, voice: 2 note: 74 velocity 64 event ('note', 6630, 2, 74, 64)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2448, ticks 6630, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 6630, 3, 74, 64)
	13,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2449, ticks 6659, elapsed 13, voice: 0 note: 74 velocity 0 event ('note', 6659, 1, 74, 0)
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2450, ticks 6659, elapsed 0, voice: 1 note: 74 velocity 0 event ('note', 6659, 2, 74, 0)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2451, ticks 6659, elapsed 0, voice: 2 note: 74 velocity 0 event ('note', 6659, 3, 74, 0)
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2452, ticks 6659, elapsed 0, voice: 3 note: 74 velocity 0 event ('note', 6659, 4, 74, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2459, ticks 6660, elapsed 0, voice: 0 note: 64 velocity 64 event ('note', 6660, 1, 64, 64)
	0,((( 1 &4)<<5)|( 64 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2460, ticks 6660, elapsed 0, voice: 1 note: 64 velocity 64 event ('note', 6660, 2, 64, 64)
	0,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2461, ticks 6660, elapsed 0, voice: 2 note: 64 velocity 64 event ('note', 6660, 3, 64, 64)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 2462, ticks 6660, elapsed 0, voice: 3 note: 62 velocity 64 event ('note', 6660, 4, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2463, ticks 6660, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 6660, 5, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2464, ticks 6660, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 6660, 6, 62, 64)
	0,((( 0 &4)<<5)|( 56 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2465, ticks 6660, elapsed 0, voice: 0 note: 56 velocity 64 event ('note', 6660, 7, 56, 64)
	0,((( 0 &4)<<5)|( 56 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2466, ticks 6660, elapsed 0, voice: 0 note: 56 velocity 64 event ('note', 6660, 8, 56, 64)
	0,((( 0 &4)<<5)|( 56 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2467, ticks 6660, elapsed 0, voice: 0 note: 56 velocity 64 event ('note', 6660, 9, 56, 64)
	0,((( 0 &4)<<5)|( 56 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2468, ticks 6660, elapsed 0, voice: 0 note: 56 velocity 64 event ('note', 6660, 10, 56, 64)
	13,((( 1 &4)<<5)|( 64 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2469, ticks 6689, elapsed 13, voice: 1 note: 64 velocity 0 event ('note', 6689, 1, 64, 0)
	0,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2470, ticks 6689, elapsed 0, voice: 2 note: 64 velocity 0 event ('note', 6689, 2, 64, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2472, ticks 6690, elapsed 0, voice: 1 note: 74 velocity 64 event ('note', 6690, 1, 74, 64)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2473, ticks 6690, elapsed 0, voice: 2 note: 74 velocity 64 event ('note', 6690, 2, 74, 64)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2474, ticks 6690, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 6690, 3, 74, 64)
	13,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2475, ticks 6719, elapsed 13, voice: 0 note: 74 velocity 0 event ('note', 6719, 1, 74, 0)
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2476, ticks 6719, elapsed 0, voice: 1 note: 74 velocity 0 event ('note', 6719, 2, 74, 0)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2477, ticks 6719, elapsed 0, voice: 2 note: 74 velocity 0 event ('note', 6719, 3, 74, 0)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2478, ticks 6719, elapsed 0, voice: 3 note: 62 velocity 0 event ('note', 6719, 4, 62, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 56 not found in channels, probably interrupted
	// Note off skipped, note 56 not found in channels, probably interrupted
	// Note off skipped, note 56 not found in channels, probably interrupted
	// Note off skipped, note 56 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2485, ticks 6720, elapsed 0, voice: 0 note: 66 velocity 64 event ('note', 6720, 1, 66, 64)
	0,((( 1 &4)<<5)|( 66 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2486, ticks 6720, elapsed 0, voice: 1 note: 66 velocity 64 event ('note', 6720, 2, 66, 64)
	0,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2487, ticks 6720, elapsed 0, voice: 2 note: 66 velocity 64 event ('note', 6720, 3, 66, 64)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 2488, ticks 6720, elapsed 0, voice: 3 note: 62 velocity 64 event ('note', 6720, 4, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2489, ticks 6720, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 6720, 5, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2490, ticks 6720, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 6720, 6, 62, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2491, ticks 6720, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 6720, 7, 57, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2492, ticks 6720, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 6720, 8, 57, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2493, ticks 6720, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 6720, 9, 57, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2494, ticks 6720, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 6720, 10, 57, 64)
	13,((( 1 &4)<<5)|( 66 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2495, ticks 6749, elapsed 13, voice: 1 note: 66 velocity 0 event ('note', 6749, 1, 66, 0)
	0,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2496, ticks 6749, elapsed 0, voice: 2 note: 66 velocity 0 event ('note', 6749, 2, 66, 0)
	// Note off skipped, note 66 not found in channels, probably interrupted
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2498, ticks 6750, elapsed 0, voice: 1 note: 74 velocity 64 event ('note', 6750, 1, 74, 64)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2499, ticks 6750, elapsed 0, voice: 2 note: 74 velocity 64 event ('note', 6750, 2, 74, 64)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2500, ticks 6750, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 6750, 3, 74, 64)
	13,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2501, ticks 6779, elapsed 13, voice: 0 note: 74 velocity 0 event ('note', 6779, 1, 74, 0)
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2502, ticks 6779, elapsed 0, voice: 1 note: 74 velocity 0 event ('note', 6779, 2, 74, 0)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2503, ticks 6779, elapsed 0, voice: 2 note: 74 velocity 0 event ('note', 6779, 3, 74, 0)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2504, ticks 6779, elapsed 0, voice: 3 note: 62 velocity 0 event ('note', 6779, 4, 62, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 68 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2511, ticks 6780, elapsed 0, voice: 0 note: 68 velocity 64 event ('note', 6780, 1, 68, 64)
	0,((( 1 &4)<<5)|( 68 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2512, ticks 6780, elapsed 0, voice: 1 note: 68 velocity 64 event ('note', 6780, 2, 68, 64)
	0,((( 2 &4)<<5)|( 68 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2513, ticks 6780, elapsed 0, voice: 2 note: 68 velocity 64 event ('note', 6780, 3, 68, 64)
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 2514, ticks 6780, elapsed 0, voice: 3 note: 74 velocity 64 event ('note', 6780, 4, 74, 64)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2515, ticks 6780, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 6780, 5, 74, 64)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2516, ticks 6780, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 6780, 6, 74, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2517, ticks 6780, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 6780, 7, 45, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2518, ticks 6780, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 6780, 8, 45, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2519, ticks 6780, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 6780, 9, 45, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2520, ticks 6780, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 6780, 10, 45, 64)
	13,((( 1 &4)<<5)|( 68 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2521, ticks 6809, elapsed 13, voice: 1 note: 68 velocity 0 event ('note', 6809, 1, 68, 0)
	0,((( 2 &4)<<5)|( 68 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2522, ticks 6809, elapsed 0, voice: 2 note: 68 velocity 0 event ('note', 6809, 2, 68, 0)
	// Note off skipped, note 68 not found in channels, probably interrupted
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2524, ticks 6810, elapsed 0, voice: 1 note: 74 velocity 64 event ('note', 6810, 1, 74, 64)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2525, ticks 6810, elapsed 0, voice: 2 note: 74 velocity 64 event ('note', 6810, 2, 74, 64)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2526, ticks 6810, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 6810, 3, 74, 64)
	13,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2527, ticks 6839, elapsed 13, voice: 0 note: 74 velocity 0 event ('note', 6839, 1, 74, 0)
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2528, ticks 6839, elapsed 0, voice: 1 note: 74 velocity 0 event ('note', 6839, 2, 74, 0)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2529, ticks 6839, elapsed 0, voice: 2 note: 74 velocity 0 event ('note', 6839, 3, 74, 0)
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2530, ticks 6839, elapsed 0, voice: 3 note: 74 velocity 0 event ('note', 6839, 4, 74, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2537, ticks 6840, elapsed 0, voice: 0 note: 69 velocity 64 event ('note', 6840, 1, 69, 64)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2538, ticks 6840, elapsed 0, voice: 1 note: 69 velocity 64 event ('note', 6840, 2, 69, 64)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2539, ticks 6840, elapsed 0, voice: 2 note: 69 velocity 64 event ('note', 6840, 3, 69, 64)
	0,((( 3 &4)<<5)|( 73 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 2540, ticks 6840, elapsed 0, voice: 3 note: 73 velocity 64 event ('note', 6840, 4, 73, 64)
	0,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2541, ticks 6840, elapsed 0, voice: 0 note: 73 velocity 64 event ('note', 6840, 5, 73, 64)
	0,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2542, ticks 6840, elapsed 0, voice: 0 note: 73 velocity 64 event ('note', 6840, 6, 73, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2543, ticks 6840, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 6840, 7, 45, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2544, ticks 6840, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 6840, 8, 45, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2545, ticks 6840, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 6840, 9, 45, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2546, ticks 6840, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 6840, 10, 45, 64)
	13,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2547, ticks 6869, elapsed 13, voice: 1 note: 69 velocity 0 event ('note', 6869, 1, 69, 0)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2548, ticks 6869, elapsed 0, voice: 2 note: 69 velocity 0 event ('note', 6869, 2, 69, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	0,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2550, ticks 6870, elapsed 0, voice: 1 note: 73 velocity 64 event ('note', 6870, 1, 73, 64)
	0,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2551, ticks 6870, elapsed 0, voice: 2 note: 73 velocity 64 event ('note', 6870, 2, 73, 64)
	0,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2552, ticks 6870, elapsed 0, voice: 0 note: 73 velocity 64 event ('note', 6870, 3, 73, 64)
	13,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2553, ticks 6899, elapsed 13, voice: 0 note: 73 velocity 0 event ('note', 6899, 1, 73, 0)
	0,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2554, ticks 6899, elapsed 0, voice: 1 note: 73 velocity 0 event ('note', 6899, 2, 73, 0)
	0,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2555, ticks 6899, elapsed 0, voice: 2 note: 73 velocity 0 event ('note', 6899, 3, 73, 0)
	0,((( 3 &4)<<5)|( 73 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2556, ticks 6899, elapsed 0, voice: 3 note: 73 velocity 0 event ('note', 6899, 4, 73, 0)
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2563, ticks 6900, elapsed 0, voice: 0 note: 69 velocity 64 event ('note', 6900, 1, 69, 64)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2564, ticks 6900, elapsed 0, voice: 1 note: 69 velocity 64 event ('note', 6900, 2, 69, 64)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2565, ticks 6900, elapsed 0, voice: 2 note: 69 velocity 64 event ('note', 6900, 3, 69, 64)
	0,((( 3 &4)<<5)|( 71 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 2566, ticks 6900, elapsed 0, voice: 3 note: 71 velocity 64 event ('note', 6900, 4, 71, 64)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2567, ticks 6900, elapsed 0, voice: 0 note: 71 velocity 64 event ('note', 6900, 5, 71, 64)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2568, ticks 6900, elapsed 0, voice: 0 note: 71 velocity 64 event ('note', 6900, 6, 71, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2569, ticks 6900, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 6900, 7, 57, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2570, ticks 6900, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 6900, 8, 57, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2571, ticks 6900, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 6900, 9, 57, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2572, ticks 6900, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 6900, 10, 57, 64)
	13,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2573, ticks 6929, elapsed 13, voice: 1 note: 69 velocity 0 event ('note', 6929, 1, 69, 0)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2574, ticks 6929, elapsed 0, voice: 2 note: 69 velocity 0 event ('note', 6929, 2, 69, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2576, ticks 6929, elapsed 0, voice: 0 note: 57 velocity 0 event ('note', 6929, 7, 57, 0)
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2580, ticks 6930, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 6930, 1, 74, 64)
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2581, ticks 6930, elapsed 0, voice: 1 note: 74 velocity 64 event ('note', 6930, 2, 74, 64)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2582, ticks 6930, elapsed 0, voice: 2 note: 74 velocity 64 event ('note', 6930, 3, 74, 64)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2583, ticks 6930, elapsed 0, voice: 0 note: 59 velocity 64 event ('note', 6930, 7, 59, 64)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2584, ticks 6930, elapsed 0, voice: 0 note: 59 velocity 64 event ('note', 6930, 8, 59, 64)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2585, ticks 6930, elapsed 0, voice: 0 note: 59 velocity 64 event ('note', 6930, 9, 59, 64)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2586, ticks 6930, elapsed 0, voice: 0 note: 59 velocity 64 event ('note', 6930, 10, 59, 64)
	13,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2587, ticks 6959, elapsed 13, voice: 1 note: 74 velocity 0 event ('note', 6959, 1, 74, 0)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2588, ticks 6959, elapsed 0, voice: 2 note: 74 velocity 0 event ('note', 6959, 2, 74, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 71 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2590, ticks 6959, elapsed 0, voice: 3 note: 71 velocity 0 event ('note', 6959, 4, 71, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 71 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2593, ticks 6959, elapsed 0, voice: 0 note: 59 velocity 0 event ('note', 6959, 7, 59, 0)
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2597, ticks 6960, elapsed 0, voice: 0 note: 69 velocity 64 event ('note', 6960, 1, 69, 64)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2598, ticks 6960, elapsed 0, voice: 1 note: 69 velocity 64 event ('note', 6960, 2, 69, 64)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2599, ticks 6960, elapsed 0, voice: 2 note: 69 velocity 64 event ('note', 6960, 3, 69, 64)
	0,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 2600, ticks 6960, elapsed 0, voice: 3 note: 69 velocity 64 event ('note', 6960, 4, 69, 64)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2601, ticks 6960, elapsed 0, voice: 0 note: 69 velocity 64 event ('note', 6960, 5, 69, 64)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2602, ticks 6960, elapsed 0, voice: 0 note: 69 velocity 64 event ('note', 6960, 6, 69, 64)
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2603, ticks 6960, elapsed 0, voice: 0 note: 61 velocity 64 event ('note', 6960, 7, 61, 64)
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2604, ticks 6960, elapsed 0, voice: 0 note: 61 velocity 64 event ('note', 6960, 8, 61, 64)
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2605, ticks 6960, elapsed 0, voice: 0 note: 61 velocity 64 event ('note', 6960, 9, 61, 64)
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2606, ticks 6960, elapsed 0, voice: 0 note: 61 velocity 64 event ('note', 6960, 10, 61, 64)
	13,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2607, ticks 6989, elapsed 13, voice: 1 note: 69 velocity 0 event ('note', 6989, 1, 69, 0)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2608, ticks 6989, elapsed 0, voice: 2 note: 69 velocity 0 event ('note', 6989, 2, 69, 0)
	0,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2609, ticks 6989, elapsed 0, voice: 3 note: 69 velocity 0 event ('note', 6989, 3, 69, 0)
	0,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2610, ticks 6990, elapsed 0, voice: 1 note: 76 velocity 64 event ('note', 6990, 1, 76, 64)
	0,((( 2 &4)<<5)|( 76 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2611, ticks 6990, elapsed 0, voice: 2 note: 76 velocity 64 event ('note', 6990, 2, 76, 64)
	0,((( 3 &4)<<5)|( 76 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 2612, ticks 6990, elapsed 0, voice: 3 note: 76 velocity 64 event ('note', 6990, 3, 76, 64)
	13,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2613, ticks 7019, elapsed 13, voice: 1 note: 76 velocity 0 event ('note', 7019, 1, 76, 0)
	0,((( 2 &4)<<5)|( 76 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2614, ticks 7019, elapsed 0, voice: 2 note: 76 velocity 0 event ('note', 7019, 2, 76, 0)
	0,((( 3 &4)<<5)|( 76 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2615, ticks 7019, elapsed 0, voice: 3 note: 76 velocity 0 event ('note', 7019, 3, 76, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2619, ticks 7019, elapsed 0, voice: 0 note: 61 velocity 0 event ('note', 7019, 7, 61, 0)
	// Note off skipped, note 61 not found in channels, probably interrupted
	// Note off skipped, note 61 not found in channels, probably interrupted
	// Note off skipped, note 61 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2623, ticks 7020, elapsed 0, voice: 0 note: 69 velocity 64 event ('note', 7020, 1, 69, 64)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2624, ticks 7020, elapsed 0, voice: 1 note: 69 velocity 64 event ('note', 7020, 2, 69, 64)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2625, ticks 7020, elapsed 0, voice: 2 note: 69 velocity 64 event ('note', 7020, 3, 69, 64)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 2626, ticks 7020, elapsed 0, voice: 3 note: 62 velocity 64 event ('note', 7020, 4, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2627, ticks 7020, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 7020, 5, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2628, ticks 7020, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 7020, 6, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2629, ticks 7020, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 7020, 7, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2630, ticks 7020, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 7020, 8, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2631, ticks 7020, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 7020, 9, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2632, ticks 7020, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 7020, 10, 62, 64)
	13,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2633, ticks 7049, elapsed 13, voice: 1 note: 69 velocity 0 event ('note', 7049, 1, 69, 0)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2634, ticks 7049, elapsed 0, voice: 2 note: 69 velocity 0 event ('note', 7049, 2, 69, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	0,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2636, ticks 7050, elapsed 0, voice: 1 note: 78 velocity 64 event ('note', 7050, 1, 78, 64)
	0,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2637, ticks 7050, elapsed 0, voice: 2 note: 78 velocity 64 event ('note', 7050, 2, 78, 64)
	0,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2638, ticks 7050, elapsed 0, voice: 0 note: 78 velocity 64 event ('note', 7050, 3, 78, 64)
	13,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2639, ticks 7079, elapsed 13, voice: 0 note: 78 velocity 0 event ('note', 7079, 1, 78, 0)
	0,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2640, ticks 7079, elapsed 0, voice: 1 note: 78 velocity 0 event ('note', 7079, 2, 78, 0)
	0,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2641, ticks 7079, elapsed 0, voice: 2 note: 78 velocity 0 event ('note', 7079, 3, 78, 0)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2642, ticks 7079, elapsed 0, voice: 3 note: 62 velocity 0 event ('note', 7079, 4, 62, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2649, ticks 7080, elapsed 0, voice: 0 note: 69 velocity 64 event ('note', 7080, 1, 69, 64)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2650, ticks 7080, elapsed 0, voice: 1 note: 69 velocity 64 event ('note', 7080, 2, 69, 64)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2651, ticks 7080, elapsed 0, voice: 2 note: 69 velocity 64 event ('note', 7080, 3, 69, 64)
	0,((( 3 &4)<<5)|( 61 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 2652, ticks 7080, elapsed 0, voice: 3 note: 61 velocity 64 event ('note', 7080, 4, 61, 64)
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2653, ticks 7080, elapsed 0, voice: 0 note: 61 velocity 64 event ('note', 7080, 5, 61, 64)
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2654, ticks 7080, elapsed 0, voice: 0 note: 61 velocity 64 event ('note', 7080, 6, 61, 64)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2655, ticks 7080, elapsed 0, voice: 0 note: 64 velocity 64 event ('note', 7080, 7, 64, 64)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2656, ticks 7080, elapsed 0, voice: 0 note: 64 velocity 64 event ('note', 7080, 8, 64, 64)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2657, ticks 7080, elapsed 0, voice: 0 note: 64 velocity 64 event ('note', 7080, 9, 64, 64)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2658, ticks 7080, elapsed 0, voice: 0 note: 64 velocity 64 event ('note', 7080, 10, 64, 64)
	13,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2659, ticks 7109, elapsed 13, voice: 1 note: 69 velocity 0 event ('note', 7109, 1, 69, 0)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2660, ticks 7109, elapsed 0, voice: 2 note: 69 velocity 0 event ('note', 7109, 2, 69, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	0,((( 1 &4)<<5)|( 79 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2662, ticks 7110, elapsed 0, voice: 1 note: 79 velocity 64 event ('note', 7110, 1, 79, 64)
	0,((( 2 &4)<<5)|( 79 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2663, ticks 7110, elapsed 0, voice: 2 note: 79 velocity 64 event ('note', 7110, 2, 79, 64)
	0,((( 0 &4)<<5)|( 79 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2664, ticks 7110, elapsed 0, voice: 0 note: 79 velocity 64 event ('note', 7110, 3, 79, 64)
	13,((( 0 &4)<<5)|( 79 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2665, ticks 7139, elapsed 13, voice: 0 note: 79 velocity 0 event ('note', 7139, 1, 79, 0)
	0,((( 1 &4)<<5)|( 79 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2666, ticks 7139, elapsed 0, voice: 1 note: 79 velocity 0 event ('note', 7139, 2, 79, 0)
	0,((( 2 &4)<<5)|( 79 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2667, ticks 7139, elapsed 0, voice: 2 note: 79 velocity 0 event ('note', 7139, 3, 79, 0)
	0,((( 3 &4)<<5)|( 61 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2668, ticks 7139, elapsed 0, voice: 3 note: 61 velocity 0 event ('note', 7139, 4, 61, 0)
	// Note off skipped, note 61 not found in channels, probably interrupted
	// Note off skipped, note 61 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2675, ticks 7140, elapsed 0, voice: 0 note: 69 velocity 64 event ('note', 7140, 1, 69, 64)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2676, ticks 7140, elapsed 0, voice: 1 note: 69 velocity 64 event ('note', 7140, 2, 69, 64)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2677, ticks 7140, elapsed 0, voice: 2 note: 69 velocity 64 event ('note', 7140, 3, 69, 64)
	0,((( 3 &4)<<5)|( 64 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 2678, ticks 7140, elapsed 0, voice: 3 note: 64 velocity 64 event ('note', 7140, 4, 64, 64)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2679, ticks 7140, elapsed 0, voice: 0 note: 64 velocity 64 event ('note', 7140, 5, 64, 64)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2680, ticks 7140, elapsed 0, voice: 0 note: 64 velocity 64 event ('note', 7140, 6, 64, 64)
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2681, ticks 7140, elapsed 0, voice: 0 note: 61 velocity 64 event ('note', 7140, 7, 61, 64)
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2682, ticks 7140, elapsed 0, voice: 0 note: 61 velocity 64 event ('note', 7140, 8, 61, 64)
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2683, ticks 7140, elapsed 0, voice: 0 note: 61 velocity 64 event ('note', 7140, 9, 61, 64)
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2684, ticks 7140, elapsed 0, voice: 0 note: 61 velocity 64 event ('note', 7140, 10, 61, 64)
	13,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2685, ticks 7169, elapsed 13, voice: 1 note: 69 velocity 0 event ('note', 7169, 1, 69, 0)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2686, ticks 7169, elapsed 0, voice: 2 note: 69 velocity 0 event ('note', 7169, 2, 69, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	0,((( 1 &4)<<5)|( 81 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2688, ticks 7170, elapsed 0, voice: 1 note: 81 velocity 64 event ('note', 7170, 1, 81, 64)
	0,((( 2 &4)<<5)|( 81 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2689, ticks 7170, elapsed 0, voice: 2 note: 81 velocity 64 event ('note', 7170, 2, 81, 64)
	0,((( 0 &4)<<5)|( 81 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2690, ticks 7170, elapsed 0, voice: 0 note: 81 velocity 64 event ('note', 7170, 3, 81, 64)
	13,((( 0 &4)<<5)|( 81 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2691, ticks 7199, elapsed 13, voice: 0 note: 81 velocity 0 event ('note', 7199, 1, 81, 0)
	0,((( 1 &4)<<5)|( 81 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2692, ticks 7199, elapsed 0, voice: 1 note: 81 velocity 0 event ('note', 7199, 2, 81, 0)
	0,((( 2 &4)<<5)|( 81 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2693, ticks 7199, elapsed 0, voice: 2 note: 81 velocity 0 event ('note', 7199, 3, 81, 0)
	0,((( 3 &4)<<5)|( 64 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2694, ticks 7199, elapsed 0, voice: 3 note: 64 velocity 0 event ('note', 7199, 4, 64, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 61 not found in channels, probably interrupted
	// Note off skipped, note 61 not found in channels, probably interrupted
	// Note off skipped, note 61 not found in channels, probably interrupted
	// Note off skipped, note 61 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2701, ticks 7200, elapsed 0, voice: 0 note: 78 velocity 64 event ('note', 7200, 1, 78, 64)
	0,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2702, ticks 7200, elapsed 0, voice: 1 note: 78 velocity 64 event ('note', 7200, 2, 78, 64)
	0,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2703, ticks 7200, elapsed 0, voice: 2 note: 78 velocity 64 event ('note', 7200, 3, 78, 64)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 2704, ticks 7200, elapsed 0, voice: 3 note: 62 velocity 64 event ('note', 7200, 4, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2705, ticks 7200, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 7200, 5, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2706, ticks 7200, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 7200, 6, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2707, ticks 7200, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 7200, 7, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2708, ticks 7200, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 7200, 8, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2709, ticks 7200, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 7200, 9, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2710, ticks 7200, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 7200, 10, 62, 64)
	28,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2711, ticks 7259, elapsed 28, voice: 1 note: 78 velocity 0 event ('note', 7259, 1, 78, 0)
	0,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2712, ticks 7259, elapsed 0, voice: 2 note: 78 velocity 0 event ('note', 7259, 2, 78, 0)
	// Note off skipped, note 78 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2714, ticks 7259, elapsed 0, voice: 0 note: 62 velocity 0 event ('note', 7259, 4, 62, 0)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2715, ticks 7259, elapsed 0, voice: 3 note: 62 velocity 0 event ('note', 7259, 5, 62, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2721, ticks 7260, elapsed 0, voice: 0 note: 76 velocity 64 event ('note', 7260, 1, 76, 64)
	0,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2722, ticks 7260, elapsed 0, voice: 1 note: 76 velocity 64 event ('note', 7260, 2, 76, 64)
	0,((( 2 &4)<<5)|( 76 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2723, ticks 7260, elapsed 0, voice: 2 note: 76 velocity 64 event ('note', 7260, 3, 76, 64)
	0,((( 3 &4)<<5)|( 64 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 2724, ticks 7260, elapsed 0, voice: 3 note: 64 velocity 64 event ('note', 7260, 4, 64, 64)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2725, ticks 7260, elapsed 0, voice: 0 note: 64 velocity 64 event ('note', 7260, 5, 64, 64)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2726, ticks 7260, elapsed 0, voice: 0 note: 64 velocity 64 event ('note', 7260, 6, 64, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2727, ticks 7260, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 7260, 7, 55, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2728, ticks 7260, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 7260, 8, 55, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2729, ticks 7260, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 7260, 9, 55, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2730, ticks 7260, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 7260, 10, 55, 64)
	13,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2731, ticks 7289, elapsed 13, voice: 1 note: 76 velocity 0 event ('note', 7289, 1, 76, 0)
	0,((( 2 &4)<<5)|( 76 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2732, ticks 7289, elapsed 0, voice: 2 note: 76 velocity 0 event ('note', 7289, 2, 76, 0)
	// Note off skipped, note 76 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 64 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2734, ticks 7289, elapsed 0, voice: 3 note: 64 velocity 0 event ('note', 7289, 4, 64, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2737, ticks 7290, elapsed 0, voice: 1 note: 74 velocity 64 event ('note', 7290, 1, 74, 64)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2738, ticks 7290, elapsed 0, voice: 2 note: 74 velocity 64 event ('note', 7290, 2, 74, 64)
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 2739, ticks 7290, elapsed 0, voice: 3 note: 74 velocity 64 event ('note', 7290, 3, 74, 64)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2740, ticks 7290, elapsed 0, voice: 0 note: 66 velocity 64 event ('note', 7290, 4, 66, 64)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2741, ticks 7290, elapsed 0, voice: 0 note: 66 velocity 64 event ('note', 7290, 5, 66, 64)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2742, ticks 7290, elapsed 0, voice: 0 note: 66 velocity 64 event ('note', 7290, 6, 66, 64)
	13,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2743, ticks 7319, elapsed 13, voice: 1 note: 74 velocity 0 event ('note', 7319, 1, 74, 0)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2744, ticks 7319, elapsed 0, voice: 2 note: 74 velocity 0 event ('note', 7319, 2, 74, 0)
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2745, ticks 7319, elapsed 0, voice: 3 note: 74 velocity 0 event ('note', 7319, 3, 74, 0)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2746, ticks 7319, elapsed 0, voice: 0 note: 66 velocity 0 event ('note', 7319, 4, 66, 0)
	// Note off skipped, note 66 not found in channels, probably interrupted
	// Note off skipped, note 66 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2753, ticks 7320, elapsed 0, voice: 0 note: 69 velocity 64 event ('note', 7320, 1, 69, 64)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2754, ticks 7320, elapsed 0, voice: 1 note: 69 velocity 64 event ('note', 7320, 2, 69, 64)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2755, ticks 7320, elapsed 0, voice: 2 note: 69 velocity 64 event ('note', 7320, 3, 69, 64)
	0,((( 3 &4)<<5)|( 64 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 2756, ticks 7320, elapsed 0, voice: 3 note: 64 velocity 64 event ('note', 7320, 4, 64, 64)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2757, ticks 7320, elapsed 0, voice: 0 note: 64 velocity 64 event ('note', 7320, 5, 64, 64)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2758, ticks 7320, elapsed 0, voice: 0 note: 64 velocity 64 event ('note', 7320, 6, 64, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2759, ticks 7320, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 7320, 7, 57, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2760, ticks 7320, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 7320, 8, 57, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2761, ticks 7320, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 7320, 9, 57, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2762, ticks 7320, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 7320, 10, 57, 64)
	28,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2763, ticks 7379, elapsed 28, voice: 1 note: 69 velocity 0 event ('note', 7379, 1, 69, 0)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2764, ticks 7379, elapsed 0, voice: 2 note: 69 velocity 0 event ('note', 7379, 2, 69, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 64 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2766, ticks 7379, elapsed 0, voice: 3 note: 64 velocity 0 event ('note', 7379, 4, 64, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2769, ticks 7379, elapsed 0, voice: 0 note: 57 velocity 0 event ('note', 7379, 7, 57, 0)
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2773, ticks 7380, elapsed 0, voice: 0 note: 73 velocity 64 event ('note', 7380, 1, 73, 64)
	0,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2774, ticks 7380, elapsed 0, voice: 1 note: 73 velocity 64 event ('note', 7380, 2, 73, 64)
	0,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2775, ticks 7380, elapsed 0, voice: 2 note: 73 velocity 64 event ('note', 7380, 3, 73, 64)
	0,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 2776, ticks 7380, elapsed 0, voice: 3 note: 69 velocity 64 event ('note', 7380, 4, 69, 64)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2777, ticks 7380, elapsed 0, voice: 0 note: 69 velocity 64 event ('note', 7380, 5, 69, 64)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2778, ticks 7380, elapsed 0, voice: 0 note: 69 velocity 64 event ('note', 7380, 6, 69, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2779, ticks 7380, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 7380, 7, 45, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2780, ticks 7380, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 7380, 8, 45, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2781, ticks 7380, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 7380, 9, 45, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2782, ticks 7380, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 7380, 10, 45, 64)
	28,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2783, ticks 7439, elapsed 28, voice: 1 note: 73 velocity 0 event ('note', 7439, 1, 73, 0)
	0,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2784, ticks 7439, elapsed 0, voice: 2 note: 73 velocity 0 event ('note', 7439, 2, 73, 0)
	// Note off skipped, note 73 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2786, ticks 7439, elapsed 0, voice: 3 note: 69 velocity 0 event ('note', 7439, 4, 69, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2789, ticks 7439, elapsed 0, voice: 0 note: 45 velocity 0 event ('note', 7439, 7, 45, 0)
	// Note off skipped, note 45 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2793, ticks 7440, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 7440, 1, 74, 64)
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2794, ticks 7440, elapsed 0, voice: 1 note: 74 velocity 64 event ('note', 7440, 2, 74, 64)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2795, ticks 7440, elapsed 0, voice: 2 note: 74 velocity 64 event ('note', 7440, 3, 74, 64)
	0,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 2796, ticks 7440, elapsed 0, voice: 3 note: 66 velocity 64 event ('note', 7440, 4, 66, 64)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2797, ticks 7440, elapsed 0, voice: 0 note: 66 velocity 64 event ('note', 7440, 5, 66, 64)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2798, ticks 7440, elapsed 0, voice: 0 note: 66 velocity 64 event ('note', 7440, 6, 66, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2799, ticks 7440, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 7440, 7, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2800, ticks 7440, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 7440, 8, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2801, ticks 7440, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 7440, 9, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2802, ticks 7440, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 7440, 10, 50, 64)
	28,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2803, ticks 7499, elapsed 28, voice: 0 note: 50 velocity 0 event ('note', 7499, 7, 50, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2807, ticks 7500, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 7500, 7, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2808, ticks 7500, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 7500, 8, 62, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2809, ticks 7500, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 7500, 9, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2810, ticks 7500, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 7500, 10, 50, 64)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	13,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2813, ticks 7529, elapsed 13, voice: 0 note: 50 velocity 0 event ('note', 7529, 9, 50, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2815, ticks 7530, elapsed 0, voice: 0 note: 61 velocity 64 event ('note', 7530, 7, 61, 64)
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2816, ticks 7530, elapsed 0, voice: 0 note: 61 velocity 64 event ('note', 7530, 8, 61, 64)
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2817, ticks 7530, elapsed 0, voice: 0 note: 61 velocity 64 event ('note', 7530, 9, 61, 64)
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2818, ticks 7530, elapsed 0, voice: 0 note: 61 velocity 64 event ('note', 7530, 10, 61, 64)
	13,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2819, ticks 7559, elapsed 13, voice: 1 note: 74 velocity 0 event ('note', 7559, 1, 74, 0)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2820, ticks 7559, elapsed 0, voice: 2 note: 74 velocity 0 event ('note', 7559, 2, 74, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2822, ticks 7559, elapsed 0, voice: 3 note: 66 velocity 0 event ('note', 7559, 4, 66, 0)
	// Note off skipped, note 66 not found in channels, probably interrupted
	// Note off skipped, note 66 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2825, ticks 7559, elapsed 0, voice: 0 note: 61 velocity 0 event ('note', 7559, 7, 61, 0)
	// Note off skipped, note 61 not found in channels, probably interrupted
	// Note off skipped, note 61 not found in channels, probably interrupted
	// Note off skipped, note 61 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2829, ticks 7560, elapsed 0, voice: 0 note: 59 velocity 64 event ('note', 7560, 7, 59, 64)
	0,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2830, ticks 7560, elapsed 0, voice: 1 note: 59 velocity 64 event ('note', 7560, 8, 59, 64)
	0,((( 2 &4)<<5)|( 59 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2831, ticks 7560, elapsed 0, voice: 2 note: 59 velocity 64 event ('note', 7560, 9, 59, 64)
	0,((( 3 &4)<<5)|( 59 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 2832, ticks 7560, elapsed 0, voice: 3 note: 59 velocity 64 event ('note', 7560, 10, 59, 64)
	13,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2833, ticks 7589, elapsed 13, voice: 0 note: 59 velocity 0 event ('note', 7589, 7, 59, 0)
	0,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2834, ticks 7589, elapsed 0, voice: 1 note: 59 velocity 0 event ('note', 7589, 8, 59, 0)
	0,((( 2 &4)<<5)|( 59 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2835, ticks 7589, elapsed 0, voice: 2 note: 59 velocity 0 event ('note', 7589, 9, 59, 0)
	0,((( 3 &4)<<5)|( 59 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2836, ticks 7589, elapsed 0, voice: 3 note: 59 velocity 0 event ('note', 7589, 10, 59, 0)
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2837, ticks 7590, elapsed 0, voice: 0 note: 61 velocity 64 event ('note', 7590, 7, 61, 64)
	0,((( 1 &4)<<5)|( 61 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2838, ticks 7590, elapsed 0, voice: 1 note: 61 velocity 64 event ('note', 7590, 8, 61, 64)
	0,((( 2 &4)<<5)|( 61 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2839, ticks 7590, elapsed 0, voice: 2 note: 61 velocity 64 event ('note', 7590, 9, 61, 64)
	0,((( 3 &4)<<5)|( 61 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 2840, ticks 7590, elapsed 0, voice: 3 note: 61 velocity 64 event ('note', 7590, 10, 61, 64)
	13,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2841, ticks 7619, elapsed 13, voice: 0 note: 61 velocity 0 event ('note', 7619, 7, 61, 0)
	0,((( 1 &4)<<5)|( 61 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2842, ticks 7619, elapsed 0, voice: 1 note: 61 velocity 0 event ('note', 7619, 8, 61, 0)
	0,((( 2 &4)<<5)|( 61 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2843, ticks 7619, elapsed 0, voice: 2 note: 61 velocity 0 event ('note', 7619, 9, 61, 0)
	0,((( 3 &4)<<5)|( 61 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2844, ticks 7619, elapsed 0, voice: 3 note: 61 velocity 0 event ('note', 7619, 10, 61, 0)
	0,((( 0 &4)<<5)|( 79 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2845, ticks 7620, elapsed 0, voice: 0 note: 79 velocity 64 event ('note', 7620, 1, 79, 64)
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2846, ticks 7620, elapsed 0, voice: 1 note: 74 velocity 64 event ('note', 7620, 2, 74, 64)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2847, ticks 7620, elapsed 0, voice: 2 note: 67 velocity 64 event ('note', 7620, 3, 67, 64)
	0,((( 3 &4)<<5)|( 59 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 2848, ticks 7620, elapsed 0, voice: 3 note: 59 velocity 64 event ('note', 7620, 7, 59, 64)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2849, ticks 7620, elapsed 0, voice: 0 note: 59 velocity 64 event ('note', 7620, 8, 59, 64)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2850, ticks 7620, elapsed 0, voice: 0 note: 59 velocity 64 event ('note', 7620, 9, 59, 64)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2851, ticks 7620, elapsed 0, voice: 0 note: 59 velocity 64 event ('note', 7620, 10, 59, 64)
	// Note off skipped, note 79 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2853, ticks 7649, elapsed 13, voice: 1 note: 74 velocity 0 event ('note', 7649, 2, 74, 0)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2854, ticks 7649, elapsed 0, voice: 2 note: 67 velocity 0 event ('note', 7649, 3, 67, 0)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2855, ticks 7649, elapsed 0, voice: 0 note: 59 velocity 0 event ('note', 7649, 7, 59, 0)
	0,((( 3 &4)<<5)|( 59 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2856, ticks 7649, elapsed 0, voice: 3 note: 59 velocity 0 event ('note', 7649, 8, 59, 0)
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2859, ticks 7650, elapsed 0, voice: 0 note: 78 velocity 64 event ('note', 7650, 1, 78, 64)
	0,((( 1 &4)<<5)|( 72 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2860, ticks 7650, elapsed 0, voice: 1 note: 72 velocity 64 event ('note', 7650, 2, 72, 64)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2861, ticks 7650, elapsed 0, voice: 2 note: 69 velocity 64 event ('note', 7650, 3, 69, 64)
	0,((( 3 &4)<<5)|( 57 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 2862, ticks 7650, elapsed 0, voice: 3 note: 57 velocity 64 event ('note', 7650, 7, 57, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2863, ticks 7650, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 7650, 8, 57, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2864, ticks 7650, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 7650, 9, 57, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2865, ticks 7650, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 7650, 10, 57, 64)
	// Note off skipped, note 78 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 72 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2867, ticks 7679, elapsed 13, voice: 1 note: 72 velocity 0 event ('note', 7679, 2, 72, 0)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2868, ticks 7679, elapsed 0, voice: 2 note: 69 velocity 0 event ('note', 7679, 3, 69, 0)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2869, ticks 7679, elapsed 0, voice: 0 note: 57 velocity 0 event ('note', 7679, 7, 57, 0)
	0,((( 3 &4)<<5)|( 57 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2870, ticks 7679, elapsed 0, voice: 3 note: 57 velocity 0 event ('note', 7679, 8, 57, 0)
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 79 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2873, ticks 7680, elapsed 0, voice: 0 note: 79 velocity 64 event ('note', 7680, 1, 79, 64)
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2874, ticks 7680, elapsed 0, voice: 1 note: 74 velocity 64 event ('note', 7680, 2, 74, 64)
	0,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2875, ticks 7680, elapsed 0, voice: 2 note: 71 velocity 64 event ('note', 7680, 3, 71, 64)
	0,((( 3 &4)<<5)|( 55 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 2876, ticks 7680, elapsed 0, voice: 3 note: 55 velocity 64 event ('note', 7680, 7, 55, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2877, ticks 7680, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 7680, 8, 55, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2878, ticks 7680, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 7680, 9, 55, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2879, ticks 7680, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 7680, 10, 55, 64)
	// Note off skipped, note 79 not found in channels, probably interrupted
	28,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2881, ticks 7739, elapsed 28, voice: 1 note: 74 velocity 0 event ('note', 7739, 2, 74, 0)
	0,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2882, ticks 7739, elapsed 0, voice: 2 note: 71 velocity 0 event ('note', 7739, 3, 71, 0)
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2883, ticks 7740, elapsed 0, voice: 1 note: 74 velocity 64 event ('note', 7740, 1, 74, 64)
	0,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2884, ticks 7740, elapsed 0, voice: 2 note: 71 velocity 64 event ('note', 7740, 2, 71, 64)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2885, ticks 7740, elapsed 0, voice: 0 note: 67 velocity 64 event ('note', 7740, 3, 67, 64)
	13,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2886, ticks 7769, elapsed 13, voice: 1 note: 74 velocity 0 event ('note', 7769, 1, 74, 0)
	0,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2887, ticks 7769, elapsed 0, voice: 2 note: 71 velocity 0 event ('note', 7769, 2, 71, 0)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2888, ticks 7769, elapsed 0, voice: 0 note: 67 velocity 0 event ('note', 7769, 3, 67, 0)
	0,((( 0 &4)<<5)|( 72 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2889, ticks 7770, elapsed 0, voice: 0 note: 72 velocity 64 event ('note', 7770, 1, 72, 64)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2890, ticks 7770, elapsed 0, voice: 1 note: 69 velocity 64 event ('note', 7770, 2, 69, 64)
	0,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2891, ticks 7770, elapsed 0, voice: 2 note: 66 velocity 64 event ('note', 7770, 3, 66, 64)
	13,((( 0 &4)<<5)|( 72 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2892, ticks 7799, elapsed 13, voice: 0 note: 72 velocity 0 event ('note', 7799, 1, 72, 0)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2893, ticks 7799, elapsed 0, voice: 1 note: 69 velocity 0 event ('note', 7799, 2, 69, 0)
	0,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2894, ticks 7799, elapsed 0, voice: 2 note: 66 velocity 0 event ('note', 7799, 3, 66, 0)
	0,((( 3 &4)<<5)|( 55 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2895, ticks 7799, elapsed 0, voice: 3 note: 55 velocity 0 event ('note', 7799, 7, 55, 0)
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2899, ticks 7800, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 7800, 1, 74, 64)
	0,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2900, ticks 7800, elapsed 0, voice: 1 note: 71 velocity 64 event ('note', 7800, 2, 71, 64)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2901, ticks 7800, elapsed 0, voice: 2 note: 67 velocity 64 event ('note', 7800, 3, 67, 64)
	28,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2902, ticks 7859, elapsed 28, voice: 0 note: 74 velocity 0 event ('note', 7859, 1, 74, 0)
	0,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2903, ticks 7859, elapsed 0, voice: 1 note: 71 velocity 0 event ('note', 7859, 2, 71, 0)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2904, ticks 7859, elapsed 0, voice: 2 note: 67 velocity 0 event ('note', 7859, 3, 67, 0)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2905, ticks 7860, elapsed 0, voice: 0 note: 71 velocity 64 event ('note', 7860, 4, 71, 64)
	0,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2906, ticks 7860, elapsed 0, voice: 1 note: 67 velocity 64 event ('note', 7860, 5, 67, 64)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2907, ticks 7860, elapsed 0, voice: 2 note: 62 velocity 64 event ('note', 7860, 6, 62, 64)
	13,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2908, ticks 7889, elapsed 13, voice: 0 note: 71 velocity 0 event ('note', 7889, 4, 71, 0)
	0,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2909, ticks 7889, elapsed 0, voice: 1 note: 67 velocity 0 event ('note', 7889, 5, 67, 0)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2910, ticks 7889, elapsed 0, voice: 2 note: 62 velocity 0 event ('note', 7889, 6, 62, 0)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2911, ticks 7890, elapsed 0, voice: 0 note: 69 velocity 64 event ('note', 7890, 4, 69, 64)
	0,((( 1 &4)<<5)|( 66 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2912, ticks 7890, elapsed 0, voice: 1 note: 66 velocity 64 event ('note', 7890, 5, 66, 64)
	0,((( 2 &4)<<5)|( 60 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2913, ticks 7890, elapsed 0, voice: 2 note: 60 velocity 64 event ('note', 7890, 6, 60, 64)
	13,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2914, ticks 7919, elapsed 13, voice: 0 note: 69 velocity 0 event ('note', 7919, 4, 69, 0)
	0,((( 1 &4)<<5)|( 66 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2915, ticks 7919, elapsed 0, voice: 1 note: 66 velocity 0 event ('note', 7919, 5, 66, 0)
	0,((( 2 &4)<<5)|( 60 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2916, ticks 7919, elapsed 0, voice: 2 note: 60 velocity 0 event ('note', 7919, 6, 60, 0)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2917, ticks 7920, elapsed 0, voice: 0 note: 71 velocity 64 event ('note', 7920, 4, 71, 64)
	0,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2918, ticks 7920, elapsed 0, voice: 1 note: 67 velocity 64 event ('note', 7920, 5, 67, 64)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2919, ticks 7920, elapsed 0, voice: 2 note: 62 velocity 64 event ('note', 7920, 6, 62, 64)
	28,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2920, ticks 7979, elapsed 28, voice: 0 note: 71 velocity 0 event ('note', 7979, 4, 71, 0)
	0,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2921, ticks 7979, elapsed 0, voice: 1 note: 67 velocity 0 event ('note', 7979, 5, 67, 0)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2922, ticks 7979, elapsed 0, voice: 2 note: 62 velocity 0 event ('note', 7979, 6, 62, 0)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2923, ticks 7980, elapsed 0, voice: 0 note: 67 velocity 64 event ('note', 7980, 4, 67, 64)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2924, ticks 7980, elapsed 0, voice: 1 note: 62 velocity 64 event ('note', 7980, 5, 62, 64)
	0,((( 2 &4)<<5)|( 59 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2925, ticks 7980, elapsed 0, voice: 2 note: 59 velocity 64 event ('note', 7980, 6, 59, 64)
	13,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2926, ticks 8009, elapsed 13, voice: 0 note: 67 velocity 0 event ('note', 8009, 4, 67, 0)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2927, ticks 8009, elapsed 0, voice: 1 note: 62 velocity 0 event ('note', 8009, 5, 62, 0)
	0,((( 2 &4)<<5)|( 59 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2928, ticks 8009, elapsed 0, voice: 2 note: 59 velocity 0 event ('note', 8009, 6, 59, 0)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2929, ticks 8010, elapsed 0, voice: 0 note: 66 velocity 64 event ('note', 8010, 4, 66, 64)
	0,((( 1 &4)<<5)|( 60 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2930, ticks 8010, elapsed 0, voice: 1 note: 60 velocity 64 event ('note', 8010, 5, 60, 64)
	0,((( 2 &4)<<5)|( 57 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2931, ticks 8010, elapsed 0, voice: 2 note: 57 velocity 64 event ('note', 8010, 6, 57, 64)
	13,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2932, ticks 8039, elapsed 13, voice: 0 note: 66 velocity 0 event ('note', 8039, 4, 66, 0)
	0,((( 1 &4)<<5)|( 60 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2933, ticks 8039, elapsed 0, voice: 1 note: 60 velocity 0 event ('note', 8039, 5, 60, 0)
	0,((( 2 &4)<<5)|( 57 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2934, ticks 8039, elapsed 0, voice: 2 note: 57 velocity 0 event ('note', 8039, 6, 57, 0)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2935, ticks 8040, elapsed 0, voice: 0 note: 67 velocity 64 event ('note', 8040, 4, 67, 64)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2936, ticks 8040, elapsed 0, voice: 1 note: 62 velocity 64 event ('note', 8040, 5, 62, 64)
	0,((( 2 &4)<<5)|( 59 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2937, ticks 8040, elapsed 0, voice: 2 note: 59 velocity 64 event ('note', 8040, 6, 59, 64)
	28,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2938, ticks 8099, elapsed 28, voice: 0 note: 67 velocity 0 event ('note', 8099, 4, 67, 0)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2939, ticks 8099, elapsed 0, voice: 1 note: 62 velocity 0 event ('note', 8099, 5, 62, 0)
	0,((( 2 &4)<<5)|( 59 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2940, ticks 8099, elapsed 0, voice: 2 note: 59 velocity 0 event ('note', 8099, 6, 59, 0)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2941, ticks 8100, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 8100, 7, 55, 64)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2942, ticks 8100, elapsed 0, voice: 1 note: 62 velocity 64 event ('note', 8100, 8, 62, 64)
	0,((( 2 &4)<<5)|( 59 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2943, ticks 8100, elapsed 0, voice: 2 note: 59 velocity 64 event ('note', 8100, 9, 59, 64)
	13,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2944, ticks 8129, elapsed 13, voice: 0 note: 55 velocity 0 event ('note', 8129, 7, 55, 0)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2945, ticks 8129, elapsed 0, voice: 1 note: 62 velocity 0 event ('note', 8129, 8, 62, 0)
	0,((( 2 &4)<<5)|( 59 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2946, ticks 8129, elapsed 0, voice: 2 note: 59 velocity 0 event ('note', 8129, 9, 59, 0)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2947, ticks 8130, elapsed 0, voice: 0 note: 54 velocity 64 event ('note', 8130, 7, 54, 64)
	0,((( 1 &4)<<5)|( 60 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2948, ticks 8130, elapsed 0, voice: 1 note: 60 velocity 64 event ('note', 8130, 8, 60, 64)
	0,((( 2 &4)<<5)|( 57 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2949, ticks 8130, elapsed 0, voice: 2 note: 57 velocity 64 event ('note', 8130, 9, 57, 64)
	13,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2950, ticks 8159, elapsed 13, voice: 0 note: 54 velocity 0 event ('note', 8159, 7, 54, 0)
	0,((( 1 &4)<<5)|( 60 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2951, ticks 8159, elapsed 0, voice: 1 note: 60 velocity 0 event ('note', 8159, 8, 60, 0)
	0,((( 2 &4)<<5)|( 57 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2952, ticks 8159, elapsed 0, voice: 2 note: 57 velocity 0 event ('note', 8159, 9, 57, 0)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2953, ticks 8160, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 8160, 7, 55, 64)
	0,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2954, ticks 8160, elapsed 0, voice: 1 note: 59 velocity 64 event ('note', 8160, 8, 59, 64)
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2955, ticks 8160, elapsed 0, voice: 2 note: 55 velocity 64 event ('note', 8160, 9, 55, 64)
	13,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2956, ticks 8189, elapsed 13, voice: 1 note: 59 velocity 0 event ('note', 8189, 8, 59, 0)
	0,((( 1 &4)<<5)|( 60 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2957, ticks 8190, elapsed 0, voice: 1 note: 60 velocity 64 event ('note', 8190, 8, 60, 64)
	13,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2958, ticks 8219, elapsed 13, voice: 0 note: 55 velocity 0 event ('note', 8219, 7, 55, 0)
	0,((( 1 &4)<<5)|( 60 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2959, ticks 8219, elapsed 0, voice: 1 note: 60 velocity 0 event ('note', 8219, 8, 60, 0)
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2960, ticks 8219, elapsed 0, voice: 2 note: 55 velocity 0 event ('note', 8219, 9, 55, 0)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2961, ticks 8220, elapsed 0, voice: 0 note: 71 velocity 64 event ('note', 8220, 1, 71, 64)
	0,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2962, ticks 8220, elapsed 0, voice: 1 note: 71 velocity 64 event ('note', 8220, 2, 71, 64)
	0,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2963, ticks 8220, elapsed 0, voice: 2 note: 71 velocity 64 event ('note', 8220, 3, 71, 64)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 2964, ticks 8220, elapsed 0, voice: 3 note: 62 velocity 64 event ('note', 8220, 4, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2965, ticks 8220, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 8220, 5, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2966, ticks 8220, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 8220, 6, 62, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2967, ticks 8220, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 8220, 7, 43, 64)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2968, ticks 8220, elapsed 0, voice: 0 note: 59 velocity 64 event ('note', 8220, 8, 59, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2969, ticks 8220, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 8220, 9, 50, 64)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2970, ticks 8220, elapsed 0, voice: 0 note: 43 velocity 64 event ('note', 8220, 10, 43, 64)
	13,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2971, ticks 8249, elapsed 13, voice: 1 note: 71 velocity 0 event ('note', 8249, 1, 71, 0)
	0,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2972, ticks 8249, elapsed 0, voice: 2 note: 71 velocity 0 event ('note', 8249, 2, 71, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2974, ticks 8249, elapsed 0, voice: 0 note: 43 velocity 0 event ('note', 8249, 7, 43, 0)
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 72 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2977, ticks 8250, elapsed 0, voice: 0 note: 72 velocity 64 event ('note', 8250, 1, 72, 64)
	0,((( 1 &4)<<5)|( 72 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2978, ticks 8250, elapsed 0, voice: 1 note: 72 velocity 64 event ('note', 8250, 2, 72, 64)
	0,((( 2 &4)<<5)|( 72 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2979, ticks 8250, elapsed 0, voice: 2 note: 72 velocity 64 event ('note', 8250, 3, 72, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2980, ticks 8250, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 8250, 7, 45, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2981, ticks 8250, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 8250, 8, 57, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2982, ticks 8250, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 8250, 10, 45, 64)
	13,((( 1 &4)<<5)|( 72 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2983, ticks 8279, elapsed 13, voice: 1 note: 72 velocity 0 event ('note', 8279, 1, 72, 0)
	0,((( 2 &4)<<5)|( 72 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2984, ticks 8279, elapsed 0, voice: 2 note: 72 velocity 0 event ('note', 8279, 2, 72, 0)
	// Note off skipped, note 72 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2986, ticks 8279, elapsed 0, voice: 3 note: 62 velocity 0 event ('note', 8279, 4, 62, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2989, ticks 8279, elapsed 0, voice: 0 note: 45 velocity 0 event ('note', 8279, 7, 45, 0)
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2993, ticks 8280, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 8280, 1, 74, 64)
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2994, ticks 8280, elapsed 0, voice: 1 note: 74 velocity 64 event ('note', 8280, 2, 74, 64)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2995, ticks 8280, elapsed 0, voice: 2 note: 74 velocity 64 event ('note', 8280, 3, 74, 64)
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 2996, ticks 8280, elapsed 0, voice: 3 note: 67 velocity 64 event ('note', 8280, 4, 67, 64)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2997, ticks 8280, elapsed 0, voice: 0 note: 67 velocity 64 event ('note', 8280, 5, 67, 64)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2998, ticks 8280, elapsed 0, voice: 0 note: 67 velocity 64 event ('note', 8280, 6, 67, 64)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2999, ticks 8280, elapsed 0, voice: 0 note: 47 velocity 64 event ('note', 8280, 7, 47, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3000, ticks 8280, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 8280, 8, 55, 64)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3001, ticks 8280, elapsed 0, voice: 0 note: 47 velocity 64 event ('note', 8280, 9, 47, 64)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3002, ticks 8280, elapsed 0, voice: 0 note: 47 velocity 64 event ('note', 8280, 10, 47, 64)
	13,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3003, ticks 8309, elapsed 13, voice: 3 note: 67 velocity 0 event ('note', 8309, 4, 67, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 67 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 71 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 3006, ticks 8310, elapsed 0, voice: 3 note: 71 velocity 64 event ('note', 8310, 4, 71, 64)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3007, ticks 8310, elapsed 0, voice: 0 note: 71 velocity 64 event ('note', 8310, 5, 71, 64)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3008, ticks 8310, elapsed 0, voice: 0 note: 71 velocity 64 event ('note', 8310, 6, 71, 64)
	13,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3009, ticks 8339, elapsed 13, voice: 1 note: 74 velocity 0 event ('note', 8339, 1, 74, 0)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3010, ticks 8339, elapsed 0, voice: 2 note: 74 velocity 0 event ('note', 8339, 2, 74, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3012, ticks 8339, elapsed 0, voice: 0 note: 71 velocity 0 event ('note', 8339, 4, 71, 0)
	0,((( 3 &4)<<5)|( 71 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3013, ticks 8339, elapsed 0, voice: 3 note: 71 velocity 0 event ('note', 8339, 5, 71, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3019, ticks 8340, elapsed 0, voice: 0 note: 78 velocity 64 event ('note', 8340, 1, 78, 64)
	0,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3020, ticks 8340, elapsed 0, voice: 1 note: 78 velocity 64 event ('note', 8340, 2, 78, 64)
	0,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3021, ticks 8340, elapsed 0, voice: 2 note: 78 velocity 64 event ('note', 8340, 3, 78, 64)
	0,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 3022, ticks 8340, elapsed 0, voice: 3 note: 69 velocity 64 event ('note', 8340, 4, 69, 64)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3023, ticks 8340, elapsed 0, voice: 0 note: 69 velocity 64 event ('note', 8340, 5, 69, 64)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3024, ticks 8340, elapsed 0, voice: 0 note: 69 velocity 64 event ('note', 8340, 6, 69, 64)
	0,((( 0 &4)<<5)|( 49 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3025, ticks 8340, elapsed 0, voice: 0 note: 49 velocity 64 event ('note', 8340, 7, 49, 64)
	0,((( 0 &4)<<5)|( 49 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3026, ticks 8340, elapsed 0, voice: 0 note: 49 velocity 64 event ('note', 8340, 8, 49, 64)
	0,((( 0 &4)<<5)|( 49 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3027, ticks 8340, elapsed 0, voice: 0 note: 49 velocity 64 event ('note', 8340, 9, 49, 64)
	0,((( 0 &4)<<5)|( 49 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3028, ticks 8340, elapsed 0, voice: 0 note: 49 velocity 64 event ('note', 8340, 10, 49, 64)
	13,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3029, ticks 8369, elapsed 13, voice: 3 note: 69 velocity 0 event ('note', 8369, 4, 69, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 3032, ticks 8370, elapsed 0, voice: 3 note: 67 velocity 64 event ('note', 8370, 4, 67, 64)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3033, ticks 8370, elapsed 0, voice: 0 note: 67 velocity 64 event ('note', 8370, 5, 67, 64)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3034, ticks 8370, elapsed 0, voice: 0 note: 67 velocity 64 event ('note', 8370, 6, 67, 64)
	13,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3035, ticks 8399, elapsed 13, voice: 1 note: 78 velocity 0 event ('note', 8399, 1, 78, 0)
	0,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3036, ticks 8399, elapsed 0, voice: 2 note: 78 velocity 0 event ('note', 8399, 2, 78, 0)
	// Note off skipped, note 78 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3038, ticks 8399, elapsed 0, voice: 0 note: 67 velocity 0 event ('note', 8399, 4, 67, 0)
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3039, ticks 8399, elapsed 0, voice: 3 note: 67 velocity 0 event ('note', 8399, 5, 67, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 49 not found in channels, probably interrupted
	// Note off skipped, note 49 not found in channels, probably interrupted
	// Note off skipped, note 49 not found in channels, probably interrupted
	// Note off skipped, note 49 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3045, ticks 8400, elapsed 0, voice: 0 note: 69 velocity 64 event ('note', 8400, 1, 69, 64)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3046, ticks 8400, elapsed 0, voice: 1 note: 69 velocity 64 event ('note', 8400, 2, 69, 64)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3047, ticks 8400, elapsed 0, voice: 2 note: 69 velocity 64 event ('note', 8400, 3, 69, 64)
	0,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 3048, ticks 8400, elapsed 0, voice: 3 note: 66 velocity 64 event ('note', 8400, 4, 66, 64)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3049, ticks 8400, elapsed 0, voice: 0 note: 66 velocity 64 event ('note', 8400, 5, 66, 64)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3050, ticks 8400, elapsed 0, voice: 0 note: 66 velocity 64 event ('note', 8400, 6, 66, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3051, ticks 8400, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 8400, 7, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3052, ticks 8400, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 8400, 8, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3053, ticks 8400, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 8400, 9, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3054, ticks 8400, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 8400, 10, 50, 64)
	13,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3055, ticks 8429, elapsed 13, voice: 3 note: 66 velocity 0 event ('note', 8429, 4, 66, 0)
	0,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 3056, ticks 8430, elapsed 0, voice: 3 note: 69 velocity 64 event ('note', 8430, 4, 69, 64)
	13,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3057, ticks 8459, elapsed 13, voice: 1 note: 69 velocity 0 event ('note', 8459, 1, 69, 0)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3058, ticks 8459, elapsed 0, voice: 2 note: 69 velocity 0 event ('note', 8459, 2, 69, 0)
	0,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3059, ticks 8459, elapsed 0, voice: 3 note: 69 velocity 0 event ('note', 8459, 3, 69, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	0,((( 1 &4)<<5)|( 86 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3061, ticks 8460, elapsed 0, voice: 1 note: 86 velocity 64 event ('note', 8460, 1, 86, 64)
	0,((( 2 &4)<<5)|( 81 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3062, ticks 8460, elapsed 0, voice: 2 note: 81 velocity 64 event ('note', 8460, 2, 81, 64)
	0,((( 3 &4)<<5)|( 78 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 3063, ticks 8460, elapsed 0, voice: 3 note: 78 velocity 64 event ('note', 8460, 3, 78, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3064, ticks 8460, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 8460, 4, 62, 64)
	13,((( 1 &4)<<5)|( 86 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3065, ticks 8489, elapsed 13, voice: 1 note: 86 velocity 0 event ('note', 8489, 1, 86, 0)
	0,((( 2 &4)<<5)|( 81 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3066, ticks 8489, elapsed 0, voice: 2 note: 81 velocity 0 event ('note', 8489, 2, 81, 0)
	0,((( 3 &4)<<5)|( 78 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3067, ticks 8489, elapsed 0, voice: 3 note: 78 velocity 0 event ('note', 8489, 3, 78, 0)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3068, ticks 8489, elapsed 0, voice: 0 note: 62 velocity 0 event ('note', 8489, 4, 62, 0)
	0,((( 0 &4)<<5)|( 85 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3069, ticks 8490, elapsed 0, voice: 0 note: 85 velocity 64 event ('note', 8490, 1, 85, 64)
	0,((( 1 &4)<<5)|( 79 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3070, ticks 8490, elapsed 0, voice: 1 note: 79 velocity 64 event ('note', 8490, 2, 79, 64)
	0,((( 2 &4)<<5)|( 76 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3071, ticks 8490, elapsed 0, voice: 2 note: 76 velocity 64 event ('note', 8490, 3, 76, 64)
	0,((( 3 &4)<<5)|( 64 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 3072, ticks 8490, elapsed 0, voice: 3 note: 64 velocity 64 event ('note', 8490, 4, 64, 64)
	13,((( 0 &4)<<5)|( 85 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3073, ticks 8519, elapsed 13, voice: 0 note: 85 velocity 0 event ('note', 8519, 1, 85, 0)
	0,((( 1 &4)<<5)|( 79 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3074, ticks 8519, elapsed 0, voice: 1 note: 79 velocity 0 event ('note', 8519, 2, 79, 0)
	0,((( 2 &4)<<5)|( 76 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3075, ticks 8519, elapsed 0, voice: 2 note: 76 velocity 0 event ('note', 8519, 3, 76, 0)
	0,((( 3 &4)<<5)|( 64 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3076, ticks 8519, elapsed 0, voice: 3 note: 64 velocity 0 event ('note', 8519, 4, 64, 0)
	// Note off skipped, note 66 not found in channels, probably interrupted
	// Note off skipped, note 66 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 86 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3083, ticks 8520, elapsed 0, voice: 0 note: 86 velocity 64 event ('note', 8520, 1, 86, 64)
	0,((( 1 &4)<<5)|( 81 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3084, ticks 8520, elapsed 0, voice: 1 note: 81 velocity 64 event ('note', 8520, 2, 81, 64)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3085, ticks 8520, elapsed 0, voice: 2 note: 74 velocity 64 event ('note', 8520, 3, 74, 64)
	0,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 3086, ticks 8520, elapsed 0, voice: 3 note: 66 velocity 64 event ('note', 8520, 4, 66, 64)
	13,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3087, ticks 8549, elapsed 13, voice: 3 note: 66 velocity 0 event ('note', 8549, 4, 66, 0)
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 3088, ticks 8550, elapsed 0, voice: 3 note: 67 velocity 64 event ('note', 8550, 4, 67, 64)
	13,((( 0 &4)<<5)|( 86 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3089, ticks 8579, elapsed 13, voice: 0 note: 86 velocity 0 event ('note', 8579, 1, 86, 0)
	0,((( 1 &4)<<5)|( 81 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3090, ticks 8579, elapsed 0, voice: 1 note: 81 velocity 0 event ('note', 8579, 2, 81, 0)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3091, ticks 8579, elapsed 0, voice: 2 note: 74 velocity 0 event ('note', 8579, 3, 74, 0)
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3092, ticks 8579, elapsed 0, voice: 3 note: 67 velocity 0 event ('note', 8579, 4, 67, 0)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3093, ticks 8580, elapsed 0, voice: 0 note: 69 velocity 64 event ('note', 8580, 4, 69, 64)
	0,((( 1 &4)<<5)|( 64 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3094, ticks 8580, elapsed 0, voice: 1 note: 64 velocity 64 event ('note', 8580, 5, 64, 64)
	0,((( 2 &4)<<5)|( 61 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3095, ticks 8580, elapsed 0, voice: 2 note: 61 velocity 64 event ('note', 8580, 6, 61, 64)
	0,((( 3 &4)<<5)|( 57 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 3096, ticks 8580, elapsed 0, voice: 3 note: 57 velocity 64 event ('note', 8580, 7, 57, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3097, ticks 8580, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 8580, 8, 57, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3098, ticks 8580, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 8580, 9, 57, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3099, ticks 8580, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 8580, 10, 57, 64)
	// Note off skipped, note 69 not found in channels, probably interrupted
	14,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3101, ticks 8610, elapsed 14, voice: 0 note: 67 velocity 64 event ('note', 8610, 4, 67, 64)
	13,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3102, ticks 8639, elapsed 13, voice: 0 note: 67 velocity 0 event ('note', 8639, 4, 67, 0)
	0,((( 1 &4)<<5)|( 64 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3103, ticks 8639, elapsed 0, voice: 1 note: 64 velocity 0 event ('note', 8639, 5, 64, 0)
	0,((( 2 &4)<<5)|( 61 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3104, ticks 8639, elapsed 0, voice: 2 note: 61 velocity 0 event ('note', 8639, 6, 61, 0)
	0,((( 3 &4)<<5)|( 57 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3105, ticks 8639, elapsed 0, voice: 3 note: 57 velocity 0 event ('note', 8639, 7, 57, 0)
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3109, ticks 8640, elapsed 0, voice: 0 note: 66 velocity 64 event ('note', 8640, 4, 66, 64)
	0,((( 1 &4)<<5)|( 66 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3110, ticks 8640, elapsed 0, voice: 1 note: 66 velocity 64 event ('note', 8640, 5, 66, 64)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3111, ticks 8640, elapsed 0, voice: 2 note: 62 velocity 64 event ('note', 8640, 6, 62, 64)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 3112, ticks 8640, elapsed 0, voice: 3 note: 62 velocity 64 event ('note', 8640, 7, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3113, ticks 8640, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 8640, 8, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3114, ticks 8640, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 8640, 9, 62, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3115, ticks 8640, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 8640, 10, 50, 64)
	13,((( 1 &4)<<5)|( 66 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3116, ticks 8669, elapsed 13, voice: 1 note: 66 velocity 0 event ('note', 8669, 5, 66, 0)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3117, ticks 8670, elapsed 0, voice: 1 note: 69 velocity 64 event ('note', 8670, 5, 69, 64)
	// Note off skipped, note 66 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3119, ticks 8699, elapsed 13, voice: 1 note: 69 velocity 0 event ('note', 8699, 5, 69, 0)
	0,((( 1 &4)<<5)|( 86 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3120, ticks 8700, elapsed 0, voice: 1 note: 86 velocity 64 event ('note', 8700, 1, 86, 64)
	0,((( 0 &4)<<5)|( 81 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3121, ticks 8700, elapsed 0, voice: 0 note: 81 velocity 64 event ('note', 8700, 2, 81, 64)
	0,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3122, ticks 8700, elapsed 0, voice: 0 note: 78 velocity 64 event ('note', 8700, 3, 78, 64)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3123, ticks 8700, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 8700, 4, 74, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3124, ticks 8700, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 8700, 5, 62, 64)
	13,((( 1 &4)<<5)|( 86 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3125, ticks 8729, elapsed 13, voice: 1 note: 86 velocity 0 event ('note', 8729, 1, 86, 0)
	// Note off skipped, note 81 not found in channels, probably interrupted
	// Note off skipped, note 78 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3128, ticks 8729, elapsed 0, voice: 0 note: 62 velocity 0 event ('note', 8729, 5, 62, 0)
	0,((( 0 &4)<<5)|( 85 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3129, ticks 8730, elapsed 0, voice: 0 note: 85 velocity 64 event ('note', 8730, 1, 85, 64)
	0,((( 1 &4)<<5)|( 79 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3130, ticks 8730, elapsed 0, voice: 1 note: 79 velocity 64 event ('note', 8730, 2, 79, 64)
	0,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3131, ticks 8730, elapsed 0, voice: 0 note: 76 velocity 64 event ('note', 8730, 3, 76, 64)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3132, ticks 8730, elapsed 0, voice: 0 note: 64 velocity 64 event ('note', 8730, 5, 64, 64)
	// Note off skipped, note 85 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 79 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3134, ticks 8759, elapsed 13, voice: 1 note: 79 velocity 0 event ('note', 8759, 2, 79, 0)
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3137, ticks 8759, elapsed 0, voice: 0 note: 64 velocity 0 event ('note', 8759, 5, 64, 0)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3138, ticks 8759, elapsed 0, voice: 2 note: 62 velocity 0 event ('note', 8759, 6, 62, 0)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3139, ticks 8759, elapsed 0, voice: 3 note: 62 velocity 0 event ('note', 8759, 7, 62, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 86 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3143, ticks 8760, elapsed 0, voice: 0 note: 86 velocity 64 event ('note', 8760, 1, 86, 64)
	0,((( 1 &4)<<5)|( 81 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3144, ticks 8760, elapsed 0, voice: 1 note: 81 velocity 64 event ('note', 8760, 2, 81, 64)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3145, ticks 8760, elapsed 0, voice: 2 note: 74 velocity 64 event ('note', 8760, 3, 74, 64)
	0,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 3146, ticks 8760, elapsed 0, voice: 3 note: 66 velocity 64 event ('note', 8760, 5, 66, 64)
	13,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3147, ticks 8789, elapsed 13, voice: 3 note: 66 velocity 0 event ('note', 8789, 5, 66, 0)
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 3148, ticks 8790, elapsed 0, voice: 3 note: 67 velocity 64 event ('note', 8790, 5, 67, 64)
	13,((( 0 &4)<<5)|( 86 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3149, ticks 8819, elapsed 13, voice: 0 note: 86 velocity 0 event ('note', 8819, 1, 86, 0)
	0,((( 1 &4)<<5)|( 81 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3150, ticks 8819, elapsed 0, voice: 1 note: 81 velocity 0 event ('note', 8819, 2, 81, 0)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3151, ticks 8819, elapsed 0, voice: 2 note: 74 velocity 0 event ('note', 8819, 3, 74, 0)
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3152, ticks 8819, elapsed 0, voice: 3 note: 67 velocity 0 event ('note', 8819, 5, 67, 0)
	0,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3153, ticks 8820, elapsed 0, voice: 0 note: 73 velocity 64 event ('note', 8820, 4, 73, 64)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3154, ticks 8820, elapsed 0, voice: 1 note: 69 velocity 64 event ('note', 8820, 5, 69, 64)
	0,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3155, ticks 8820, elapsed 0, voice: 2 note: 64 velocity 64 event ('note', 8820, 6, 64, 64)
	0,((( 3 &4)<<5)|( 57 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 3156, ticks 8820, elapsed 0, voice: 3 note: 57 velocity 64 event ('note', 8820, 7, 57, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3157, ticks 8820, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 8820, 8, 57, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3158, ticks 8820, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 8820, 9, 57, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3159, ticks 8820, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 8820, 10, 57, 64)
	13,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3160, ticks 8849, elapsed 13, voice: 1 note: 69 velocity 0 event ('note', 8849, 5, 69, 0)
	0,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3161, ticks 8850, elapsed 0, voice: 1 note: 67 velocity 64 event ('note', 8850, 5, 67, 64)
	// Note off skipped, note 73 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3163, ticks 8879, elapsed 13, voice: 1 note: 67 velocity 0 event ('note', 8879, 5, 67, 0)
	0,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3164, ticks 8879, elapsed 0, voice: 2 note: 64 velocity 0 event ('note', 8879, 6, 64, 0)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3165, ticks 8879, elapsed 0, voice: 0 note: 57 velocity 0 event ('note', 8879, 7, 57, 0)
	0,((( 3 &4)<<5)|( 57 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3166, ticks 8879, elapsed 0, voice: 3 note: 57 velocity 0 event ('note', 8879, 8, 57, 0)
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3169, ticks 8880, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 8880, 4, 74, 64)
	0,((( 1 &4)<<5)|( 66 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3170, ticks 8880, elapsed 0, voice: 1 note: 66 velocity 64 event ('note', 8880, 5, 66, 64)
	0,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3171, ticks 8880, elapsed 0, voice: 2 note: 66 velocity 64 event ('note', 8880, 6, 66, 64)
	0,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 3172, ticks 8880, elapsed 0, voice: 3 note: 50 velocity 64 event ('note', 8880, 7, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3173, ticks 8880, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 8880, 8, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3174, ticks 8880, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 8880, 9, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3175, ticks 8880, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 8880, 10, 50, 64)
	13,((( 1 &4)<<5)|( 66 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3176, ticks 8909, elapsed 13, voice: 1 note: 66 velocity 0 event ('note', 8909, 6, 66, 0)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3177, ticks 8910, elapsed 0, voice: 1 note: 69 velocity 64 event ('note', 8910, 6, 69, 64)
	// Note off skipped, note 74 not found in channels, probably interrupted
	13,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3179, ticks 8939, elapsed 13, voice: 2 note: 66 velocity 0 event ('note', 8939, 5, 66, 0)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3180, ticks 8939, elapsed 0, voice: 1 note: 69 velocity 0 event ('note', 8939, 6, 69, 0)
	0,((( 1 &4)<<5)|( 86 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3181, ticks 8940, elapsed 0, voice: 1 note: 86 velocity 64 event ('note', 8940, 1, 86, 64)
	0,((( 2 &4)<<5)|( 81 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3182, ticks 8940, elapsed 0, voice: 2 note: 81 velocity 64 event ('note', 8940, 2, 81, 64)
	0,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3183, ticks 8940, elapsed 0, voice: 0 note: 78 velocity 64 event ('note', 8940, 3, 78, 64)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3184, ticks 8940, elapsed 0, voice: 0 note: 69 velocity 64 event ('note', 8940, 4, 69, 64)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3185, ticks 8940, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 8940, 5, 74, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3186, ticks 8940, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 8940, 6, 62, 64)
	13,((( 1 &4)<<5)|( 86 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3187, ticks 8969, elapsed 13, voice: 1 note: 86 velocity 0 event ('note', 8969, 1, 86, 0)
	0,((( 2 &4)<<5)|( 81 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3188, ticks 8969, elapsed 0, voice: 2 note: 81 velocity 0 event ('note', 8969, 2, 81, 0)
	// Note off skipped, note 78 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3190, ticks 8969, elapsed 0, voice: 0 note: 62 velocity 0 event ('note', 8969, 6, 62, 0)
	0,((( 0 &4)<<5)|( 85 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3191, ticks 8970, elapsed 0, voice: 0 note: 85 velocity 64 event ('note', 8970, 1, 85, 64)
	0,((( 1 &4)<<5)|( 79 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3192, ticks 8970, elapsed 0, voice: 1 note: 79 velocity 64 event ('note', 8970, 2, 79, 64)
	0,((( 2 &4)<<5)|( 76 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3193, ticks 8970, elapsed 0, voice: 2 note: 76 velocity 64 event ('note', 8970, 3, 76, 64)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3194, ticks 8970, elapsed 0, voice: 0 note: 64 velocity 64 event ('note', 8970, 6, 64, 64)
	// Note off skipped, note 85 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 79 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3196, ticks 8999, elapsed 13, voice: 1 note: 79 velocity 0 event ('note', 8999, 2, 79, 0)
	0,((( 2 &4)<<5)|( 76 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3197, ticks 8999, elapsed 0, voice: 2 note: 76 velocity 0 event ('note', 8999, 3, 76, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3200, ticks 8999, elapsed 0, voice: 0 note: 64 velocity 0 event ('note', 8999, 6, 64, 0)
	0,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3201, ticks 8999, elapsed 0, voice: 3 note: 50 velocity 0 event ('note', 8999, 7, 50, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 86 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3205, ticks 9000, elapsed 0, voice: 0 note: 86 velocity 64 event ('note', 9000, 1, 86, 64)
	0,((( 1 &4)<<5)|( 81 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3206, ticks 9000, elapsed 0, voice: 1 note: 81 velocity 64 event ('note', 9000, 2, 81, 64)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3207, ticks 9000, elapsed 0, voice: 2 note: 74 velocity 64 event ('note', 9000, 3, 74, 64)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 3208, ticks 9000, elapsed 0, voice: 3 note: 62 velocity 64 event ('note', 9000, 4, 62, 64)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3209, ticks 9000, elapsed 0, voice: 0 note: 66 velocity 64 event ('note', 9000, 6, 66, 64)
	13,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3210, ticks 9029, elapsed 13, voice: 0 note: 66 velocity 0 event ('note', 9029, 6, 66, 0)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3211, ticks 9030, elapsed 0, voice: 0 note: 67 velocity 64 event ('note', 9030, 6, 67, 64)
	// Note off skipped, note 86 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 81 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3213, ticks 9059, elapsed 13, voice: 1 note: 81 velocity 0 event ('note', 9059, 2, 81, 0)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3214, ticks 9059, elapsed 0, voice: 2 note: 74 velocity 0 event ('note', 9059, 3, 74, 0)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3215, ticks 9059, elapsed 0, voice: 3 note: 62 velocity 0 event ('note', 9059, 4, 62, 0)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3216, ticks 9059, elapsed 0, voice: 0 note: 67 velocity 0 event ('note', 9059, 6, 67, 0)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3217, ticks 9060, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 9060, 4, 74, 64)
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3218, ticks 9060, elapsed 0, voice: 1 note: 74 velocity 64 event ('note', 9060, 5, 74, 64)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3219, ticks 9060, elapsed 0, voice: 2 note: 69 velocity 64 event ('note', 9060, 6, 69, 64)
	0,((( 3 &4)<<5)|( 45 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 3220, ticks 9060, elapsed 0, voice: 3 note: 45 velocity 64 event ('note', 9060, 7, 45, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3221, ticks 9060, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 9060, 8, 45, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3222, ticks 9060, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 9060, 9, 45, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3223, ticks 9060, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 9060, 10, 45, 64)
	13,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3224, ticks 9089, elapsed 13, voice: 1 note: 74 velocity 0 event ('note', 9089, 4, 74, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3226, ticks 9089, elapsed 0, voice: 2 note: 69 velocity 0 event ('note', 9089, 6, 69, 0)
	0,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3227, ticks 9090, elapsed 0, voice: 1 note: 73 velocity 64 event ('note', 9090, 4, 73, 64)
	0,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3228, ticks 9090, elapsed 0, voice: 2 note: 73 velocity 64 event ('note', 9090, 5, 73, 64)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3229, ticks 9090, elapsed 0, voice: 0 note: 67 velocity 64 event ('note', 9090, 6, 67, 64)
	13,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3230, ticks 9119, elapsed 13, voice: 1 note: 73 velocity 0 event ('note', 9119, 4, 73, 0)
	0,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3231, ticks 9119, elapsed 0, voice: 2 note: 73 velocity 0 event ('note', 9119, 5, 73, 0)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3232, ticks 9119, elapsed 0, voice: 0 note: 67 velocity 0 event ('note', 9119, 6, 67, 0)
	0,((( 3 &4)<<5)|( 45 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3233, ticks 9119, elapsed 0, voice: 3 note: 45 velocity 0 event ('note', 9119, 7, 45, 0)
	// Note off skipped, note 45 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3237, ticks 9120, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 9120, 4, 74, 64)
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3238, ticks 9120, elapsed 0, voice: 1 note: 74 velocity 64 event ('note', 9120, 5, 74, 64)
	0,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3239, ticks 9120, elapsed 0, voice: 2 note: 66 velocity 64 event ('note', 9120, 6, 66, 64)
	0,((( 3 &4)<<5)|( 38 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 3240, ticks 9120, elapsed 0, voice: 3 note: 38 velocity 64 event ('note', 9120, 7, 38, 64)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3241, ticks 9120, elapsed 0, voice: 0 note: 38 velocity 64 event ('note', 9120, 8, 38, 64)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3242, ticks 9120, elapsed 0, voice: 0 note: 38 velocity 64 event ('note', 9120, 9, 38, 64)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3243, ticks 9120, elapsed 0, voice: 0 note: 38 velocity 64 event ('note', 9120, 10, 38, 64)
	28,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3244, ticks 9179, elapsed 28, voice: 1 note: 74 velocity 0 event ('note', 9179, 4, 74, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3246, ticks 9179, elapsed 0, voice: 2 note: 66 velocity 0 event ('note', 9179, 6, 66, 0)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3247, ticks 9179, elapsed 0, voice: 0 note: 38 velocity 0 event ('note', 9179, 7, 38, 0)
	0,((( 3 &4)<<5)|( 38 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3248, ticks 9179, elapsed 0, voice: 3 note: 38 velocity 0 event ('note', 9179, 8, 38, 0)
	// Note off skipped, note 38 not found in channels, probably interrupted
	// Note off skipped, note 38 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3251, ticks 9180, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 9180, 1, 74, 64)
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3252, ticks 9180, elapsed 0, voice: 1 note: 74 velocity 64 event ('note', 9180, 2, 74, 64)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3253, ticks 9180, elapsed 0, voice: 2 note: 74 velocity 64 event ('note', 9180, 3, 74, 64)
	0,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 3254, ticks 9180, elapsed 0, voice: 3 note: 69 velocity 64 event ('note', 9180, 4, 69, 64)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3255, ticks 9180, elapsed 0, voice: 0 note: 69 velocity 64 event ('note', 9180, 5, 69, 64)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3256, ticks 9180, elapsed 0, voice: 0 note: 69 velocity 64 event ('note', 9180, 6, 69, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3257, ticks 9180, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 9180, 7, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3258, ticks 9180, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 9180, 8, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3259, ticks 9180, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 9180, 9, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3260, ticks 9180, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 9180, 10, 50, 64)
	13,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3261, ticks 9209, elapsed 13, voice: 3 note: 69 velocity 0 event ('note', 9209, 4, 69, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 3264, ticks 9210, elapsed 0, voice: 3 note: 67 velocity 64 event ('note', 9210, 4, 67, 64)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3265, ticks 9210, elapsed 0, voice: 0 note: 67 velocity 64 event ('note', 9210, 5, 67, 64)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3266, ticks 9210, elapsed 0, voice: 0 note: 67 velocity 64 event ('note', 9210, 6, 67, 64)
	13,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3267, ticks 9239, elapsed 13, voice: 1 note: 74 velocity 0 event ('note', 9239, 1, 74, 0)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3268, ticks 9239, elapsed 0, voice: 2 note: 74 velocity 0 event ('note', 9239, 2, 74, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3270, ticks 9239, elapsed 0, voice: 0 note: 67 velocity 0 event ('note', 9239, 4, 67, 0)
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3271, ticks 9239, elapsed 0, voice: 3 note: 67 velocity 0 event ('note', 9239, 5, 67, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3277, ticks 9240, elapsed 0, voice: 0 note: 78 velocity 64 event ('note', 9240, 1, 78, 64)
	0,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3278, ticks 9240, elapsed 0, voice: 1 note: 78 velocity 64 event ('note', 9240, 2, 78, 64)
	0,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3279, ticks 9240, elapsed 0, voice: 2 note: 78 velocity 64 event ('note', 9240, 3, 78, 64)
	0,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 3280, ticks 9240, elapsed 0, voice: 3 note: 69 velocity 64 event ('note', 9240, 4, 69, 64)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3281, ticks 9240, elapsed 0, voice: 0 note: 69 velocity 64 event ('note', 9240, 5, 69, 64)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3282, ticks 9240, elapsed 0, voice: 0 note: 69 velocity 64 event ('note', 9240, 6, 69, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3283, ticks 9240, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 9240, 7, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3284, ticks 9240, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 9240, 8, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3285, ticks 9240, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 9240, 9, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3286, ticks 9240, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 9240, 10, 50, 64)
	28,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3287, ticks 9299, elapsed 28, voice: 1 note: 78 velocity 0 event ('note', 9299, 1, 78, 0)
	0,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3288, ticks 9299, elapsed 0, voice: 2 note: 78 velocity 0 event ('note', 9299, 2, 78, 0)
	// Note off skipped, note 78 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3290, ticks 9299, elapsed 0, voice: 3 note: 69 velocity 0 event ('note', 9299, 4, 69, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3293, ticks 9299, elapsed 0, voice: 0 note: 50 velocity 0 event ('note', 9299, 7, 50, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 81 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3297, ticks 9300, elapsed 0, voice: 0 note: 81 velocity 64 event ('note', 9300, 1, 81, 64)
	0,((( 1 &4)<<5)|( 81 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3298, ticks 9300, elapsed 0, voice: 1 note: 81 velocity 64 event ('note', 9300, 2, 81, 64)
	0,((( 2 &4)<<5)|( 81 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3299, ticks 9300, elapsed 0, voice: 2 note: 81 velocity 64 event ('note', 9300, 3, 81, 64)
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 3300, ticks 9300, elapsed 0, voice: 3 note: 74 velocity 64 event ('note', 9300, 4, 74, 64)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3301, ticks 9300, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 9300, 5, 74, 64)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3302, ticks 9300, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 9300, 6, 74, 64)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3303, ticks 9300, elapsed 0, voice: 0 note: 38 velocity 64 event ('note', 9300, 7, 38, 64)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3304, ticks 9300, elapsed 0, voice: 0 note: 38 velocity 64 event ('note', 9300, 8, 38, 64)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3305, ticks 9300, elapsed 0, voice: 0 note: 38 velocity 64 event ('note', 9300, 9, 38, 64)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3306, ticks 9300, elapsed 0, voice: 0 note: 38 velocity 64 event ('note', 9300, 10, 38, 64)
	13,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3307, ticks 9329, elapsed 13, voice: 3 note: 74 velocity 0 event ('note', 9329, 4, 74, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 73 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 3310, ticks 9330, elapsed 0, voice: 3 note: 73 velocity 64 event ('note', 9330, 4, 73, 64)
	0,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3311, ticks 9330, elapsed 0, voice: 0 note: 73 velocity 64 event ('note', 9330, 5, 73, 64)
	0,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3312, ticks 9330, elapsed 0, voice: 0 note: 73 velocity 64 event ('note', 9330, 6, 73, 64)
	13,((( 1 &4)<<5)|( 81 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3313, ticks 9359, elapsed 13, voice: 1 note: 81 velocity 0 event ('note', 9359, 1, 81, 0)
	0,((( 2 &4)<<5)|( 81 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3314, ticks 9359, elapsed 0, voice: 2 note: 81 velocity 0 event ('note', 9359, 2, 81, 0)
	// Note off skipped, note 81 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3316, ticks 9359, elapsed 0, voice: 0 note: 73 velocity 0 event ('note', 9359, 4, 73, 0)
	0,((( 3 &4)<<5)|( 73 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3317, ticks 9359, elapsed 0, voice: 3 note: 73 velocity 0 event ('note', 9359, 5, 73, 0)
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 38 not found in channels, probably interrupted
	// Note off skipped, note 38 not found in channels, probably interrupted
	// Note off skipped, note 38 not found in channels, probably interrupted
	// Note off skipped, note 38 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3323, ticks 9360, elapsed 0, voice: 0 note: 78 velocity 64 event ('note', 9360, 1, 78, 64)
	0,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3324, ticks 9360, elapsed 0, voice: 1 note: 78 velocity 64 event ('note', 9360, 2, 78, 64)
	0,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3325, ticks 9360, elapsed 0, voice: 2 note: 78 velocity 64 event ('note', 9360, 3, 78, 64)
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 3326, ticks 9360, elapsed 0, voice: 3 note: 74 velocity 64 event ('note', 9360, 4, 74, 64)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3327, ticks 9360, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 9360, 5, 74, 64)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3328, ticks 9360, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 9360, 6, 74, 64)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3329, ticks 9360, elapsed 0, voice: 0 note: 38 velocity 64 event ('note', 9360, 7, 38, 64)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3330, ticks 9360, elapsed 0, voice: 0 note: 38 velocity 64 event ('note', 9360, 8, 38, 64)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3331, ticks 9360, elapsed 0, voice: 0 note: 38 velocity 64 event ('note', 9360, 9, 38, 64)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3332, ticks 9360, elapsed 0, voice: 0 note: 38 velocity 64 event ('note', 9360, 10, 38, 64)
	28,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3333, ticks 9419, elapsed 28, voice: 1 note: 78 velocity 0 event ('note', 9419, 1, 78, 0)
	0,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3334, ticks 9419, elapsed 0, voice: 2 note: 78 velocity 0 event ('note', 9419, 2, 78, 0)
	// Note off skipped, note 78 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3336, ticks 9419, elapsed 0, voice: 3 note: 74 velocity 0 event ('note', 9419, 4, 74, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3339, ticks 9419, elapsed 0, voice: 0 note: 38 velocity 0 event ('note', 9419, 7, 38, 0)
	// Note off skipped, note 38 not found in channels, probably interrupted
	// Note off skipped, note 38 not found in channels, probably interrupted
	// Note off skipped, note 38 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3343, ticks 9420, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 9420, 1, 74, 64)
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3344, ticks 9420, elapsed 0, voice: 1 note: 74 velocity 64 event ('note', 9420, 2, 74, 64)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3345, ticks 9420, elapsed 0, voice: 2 note: 74 velocity 64 event ('note', 9420, 3, 74, 64)
	0,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 3346, ticks 9420, elapsed 0, voice: 3 note: 66 velocity 64 event ('note', 9420, 4, 66, 64)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3347, ticks 9420, elapsed 0, voice: 0 note: 66 velocity 64 event ('note', 9420, 5, 66, 64)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3348, ticks 9420, elapsed 0, voice: 0 note: 66 velocity 64 event ('note', 9420, 6, 66, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3349, ticks 9420, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 9420, 7, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3350, ticks 9420, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 9420, 8, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3351, ticks 9420, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 9420, 9, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3352, ticks 9420, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 9420, 10, 50, 64)
	13,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3353, ticks 9449, elapsed 13, voice: 3 note: 66 velocity 0 event ('note', 9449, 4, 66, 0)
	// Note off skipped, note 66 not found in channels, probably interrupted
	// Note off skipped, note 66 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 64 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 3356, ticks 9450, elapsed 0, voice: 3 note: 64 velocity 64 event ('note', 9450, 4, 64, 64)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3357, ticks 9450, elapsed 0, voice: 0 note: 64 velocity 64 event ('note', 9450, 5, 64, 64)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3358, ticks 9450, elapsed 0, voice: 0 note: 64 velocity 64 event ('note', 9450, 6, 64, 64)
	13,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3359, ticks 9479, elapsed 13, voice: 1 note: 74 velocity 0 event ('note', 9479, 1, 74, 0)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3360, ticks 9479, elapsed 0, voice: 2 note: 74 velocity 0 event ('note', 9479, 2, 74, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3362, ticks 9479, elapsed 0, voice: 0 note: 64 velocity 0 event ('note', 9479, 4, 64, 0)
	0,((( 3 &4)<<5)|( 64 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3363, ticks 9479, elapsed 0, voice: 3 note: 64 velocity 0 event ('note', 9479, 5, 64, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3369, ticks 9480, elapsed 0, voice: 0 note: 78 velocity 64 event ('note', 9480, 1, 78, 64)
	0,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3370, ticks 9480, elapsed 0, voice: 1 note: 78 velocity 64 event ('note', 9480, 2, 78, 64)
	0,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3371, ticks 9480, elapsed 0, voice: 2 note: 78 velocity 64 event ('note', 9480, 3, 78, 64)
	0,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 3372, ticks 9480, elapsed 0, voice: 3 note: 66 velocity 64 event ('note', 9480, 4, 66, 64)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3373, ticks 9480, elapsed 0, voice: 0 note: 66 velocity 64 event ('note', 9480, 5, 66, 64)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3374, ticks 9480, elapsed 0, voice: 0 note: 66 velocity 64 event ('note', 9480, 6, 66, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3375, ticks 9480, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 9480, 7, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3376, ticks 9480, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 9480, 8, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3377, ticks 9480, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 9480, 9, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3378, ticks 9480, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 9480, 10, 50, 64)
	28,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3379, ticks 9539, elapsed 28, voice: 1 note: 78 velocity 0 event ('note', 9539, 1, 78, 0)
	0,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3380, ticks 9539, elapsed 0, voice: 2 note: 78 velocity 0 event ('note', 9539, 2, 78, 0)
	// Note off skipped, note 78 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3382, ticks 9539, elapsed 0, voice: 3 note: 66 velocity 0 event ('note', 9539, 4, 66, 0)
	// Note off skipped, note 66 not found in channels, probably interrupted
	// Note off skipped, note 66 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3385, ticks 9539, elapsed 0, voice: 0 note: 50 velocity 0 event ('note', 9539, 7, 50, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 81 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3389, ticks 9540, elapsed 0, voice: 0 note: 81 velocity 64 event ('note', 9540, 1, 81, 64)
	0,((( 1 &4)<<5)|( 81 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3390, ticks 9540, elapsed 0, voice: 1 note: 81 velocity 64 event ('note', 9540, 2, 81, 64)
	0,((( 2 &4)<<5)|( 81 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3391, ticks 9540, elapsed 0, voice: 2 note: 81 velocity 64 event ('note', 9540, 3, 81, 64)
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 3392, ticks 9540, elapsed 0, voice: 3 note: 74 velocity 64 event ('note', 9540, 4, 74, 64)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3393, ticks 9540, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 9540, 5, 74, 64)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3394, ticks 9540, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 9540, 6, 74, 64)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3395, ticks 9540, elapsed 0, voice: 0 note: 38 velocity 64 event ('note', 9540, 7, 38, 64)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3396, ticks 9540, elapsed 0, voice: 0 note: 38 velocity 64 event ('note', 9540, 8, 38, 64)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3397, ticks 9540, elapsed 0, voice: 0 note: 38 velocity 64 event ('note', 9540, 9, 38, 64)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3398, ticks 9540, elapsed 0, voice: 0 note: 38 velocity 64 event ('note', 9540, 10, 38, 64)
	13,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3399, ticks 9569, elapsed 13, voice: 3 note: 74 velocity 0 event ('note', 9569, 4, 74, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 73 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 3402, ticks 9570, elapsed 0, voice: 3 note: 73 velocity 64 event ('note', 9570, 4, 73, 64)
	0,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3403, ticks 9570, elapsed 0, voice: 0 note: 73 velocity 64 event ('note', 9570, 5, 73, 64)
	0,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3404, ticks 9570, elapsed 0, voice: 0 note: 73 velocity 64 event ('note', 9570, 6, 73, 64)
	13,((( 1 &4)<<5)|( 81 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3405, ticks 9599, elapsed 13, voice: 1 note: 81 velocity 0 event ('note', 9599, 1, 81, 0)
	0,((( 2 &4)<<5)|( 81 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3406, ticks 9599, elapsed 0, voice: 2 note: 81 velocity 0 event ('note', 9599, 2, 81, 0)
	// Note off skipped, note 81 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3408, ticks 9599, elapsed 0, voice: 0 note: 73 velocity 0 event ('note', 9599, 4, 73, 0)
	0,((( 3 &4)<<5)|( 73 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3409, ticks 9599, elapsed 0, voice: 3 note: 73 velocity 0 event ('note', 9599, 5, 73, 0)
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 38 not found in channels, probably interrupted
	// Note off skipped, note 38 not found in channels, probably interrupted
	// Note off skipped, note 38 not found in channels, probably interrupted
	// Note off skipped, note 38 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3415, ticks 9600, elapsed 0, voice: 0 note: 78 velocity 64 event ('note', 9600, 1, 78, 64)
	0,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3416, ticks 9600, elapsed 0, voice: 1 note: 78 velocity 64 event ('note', 9600, 2, 78, 64)
	0,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3417, ticks 9600, elapsed 0, voice: 2 note: 78 velocity 64 event ('note', 9600, 3, 78, 64)
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 3418, ticks 9600, elapsed 0, voice: 3 note: 74 velocity 64 event ('note', 9600, 4, 74, 64)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3419, ticks 9600, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 9600, 5, 74, 64)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3420, ticks 9600, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 9600, 6, 74, 64)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3421, ticks 9600, elapsed 0, voice: 0 note: 38 velocity 64 event ('note', 9600, 7, 38, 64)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3422, ticks 9600, elapsed 0, voice: 0 note: 38 velocity 64 event ('note', 9600, 8, 38, 64)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3423, ticks 9600, elapsed 0, voice: 0 note: 38 velocity 64 event ('note', 9600, 9, 38, 64)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3424, ticks 9600, elapsed 0, voice: 0 note: 38 velocity 64 event ('note', 9600, 10, 38, 64)
	28,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3425, ticks 9659, elapsed 28, voice: 1 note: 78 velocity 0 event ('note', 9659, 1, 78, 0)
	0,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3426, ticks 9659, elapsed 0, voice: 2 note: 78 velocity 0 event ('note', 9659, 2, 78, 0)
	// Note off skipped, note 78 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3428, ticks 9659, elapsed 0, voice: 3 note: 74 velocity 0 event ('note', 9659, 4, 74, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3431, ticks 9659, elapsed 0, voice: 0 note: 38 velocity 0 event ('note', 9659, 7, 38, 0)
	// Note off skipped, note 38 not found in channels, probably interrupted
	// Note off skipped, note 38 not found in channels, probably interrupted
	// Note off skipped, note 38 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3435, ticks 9660, elapsed 0, voice: 0 note: 69 velocity 64 event ('note', 9660, 1, 69, 64)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3436, ticks 9660, elapsed 0, voice: 1 note: 69 velocity 64 event ('note', 9660, 2, 69, 64)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3437, ticks 9660, elapsed 0, voice: 2 note: 69 velocity 64 event ('note', 9660, 3, 69, 64)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 3438, ticks 9660, elapsed 0, voice: 3 note: 62 velocity 64 event ('note', 9660, 4, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3439, ticks 9660, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 9660, 5, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3440, ticks 9660, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 9660, 6, 62, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3441, ticks 9660, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 9660, 7, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3442, ticks 9660, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 9660, 8, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3443, ticks 9660, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 9660, 9, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3444, ticks 9660, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 9660, 10, 50, 64)
	13,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3445, ticks 9689, elapsed 13, voice: 3 note: 62 velocity 0 event ('note', 9689, 4, 62, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3448, ticks 9689, elapsed 0, voice: 0 note: 50 velocity 0 event ('note', 9689, 7, 50, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3452, ticks 9690, elapsed 0, voice: 0 note: 64 velocity 64 event ('note', 9690, 4, 64, 64)
	0,((( 3 &4)<<5)|( 64 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 3453, ticks 9690, elapsed 0, voice: 3 note: 64 velocity 64 event ('note', 9690, 5, 64, 64)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3454, ticks 9690, elapsed 0, voice: 0 note: 64 velocity 64 event ('note', 9690, 6, 64, 64)
	0,((( 0 &4)<<5)|( 49 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3455, ticks 9690, elapsed 0, voice: 0 note: 49 velocity 64 event ('note', 9690, 7, 49, 64)
	0,((( 0 &4)<<5)|( 49 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3456, ticks 9690, elapsed 0, voice: 0 note: 49 velocity 64 event ('note', 9690, 8, 49, 64)
	0,((( 0 &4)<<5)|( 49 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3457, ticks 9690, elapsed 0, voice: 0 note: 49 velocity 64 event ('note', 9690, 9, 49, 64)
	0,((( 0 &4)<<5)|( 49 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3458, ticks 9690, elapsed 0, voice: 0 note: 49 velocity 64 event ('note', 9690, 10, 49, 64)
	13,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3459, ticks 9719, elapsed 13, voice: 1 note: 69 velocity 0 event ('note', 9719, 1, 69, 0)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3460, ticks 9719, elapsed 0, voice: 2 note: 69 velocity 0 event ('note', 9719, 2, 69, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 64 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3462, ticks 9719, elapsed 0, voice: 3 note: 64 velocity 0 event ('note', 9719, 4, 64, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 49 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3465, ticks 9719, elapsed 0, voice: 0 note: 49 velocity 0 event ('note', 9719, 7, 49, 0)
	// Note off skipped, note 49 not found in channels, probably interrupted
	// Note off skipped, note 49 not found in channels, probably interrupted
	// Note off skipped, note 49 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3469, ticks 9720, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 9720, 1, 74, 64)
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3470, ticks 9720, elapsed 0, voice: 1 note: 74 velocity 64 event ('note', 9720, 2, 74, 64)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3471, ticks 9720, elapsed 0, voice: 2 note: 74 velocity 64 event ('note', 9720, 3, 74, 64)
	0,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 3472, ticks 9720, elapsed 0, voice: 3 note: 66 velocity 64 event ('note', 9720, 4, 66, 64)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3473, ticks 9720, elapsed 0, voice: 0 note: 66 velocity 64 event ('note', 9720, 5, 66, 64)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3474, ticks 9720, elapsed 0, voice: 0 note: 66 velocity 64 event ('note', 9720, 6, 66, 64)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3475, ticks 9720, elapsed 0, voice: 0 note: 47 velocity 64 event ('note', 9720, 7, 47, 64)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3476, ticks 9720, elapsed 0, voice: 0 note: 47 velocity 64 event ('note', 9720, 8, 47, 64)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3477, ticks 9720, elapsed 0, voice: 0 note: 47 velocity 64 event ('note', 9720, 9, 47, 64)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3478, ticks 9720, elapsed 0, voice: 0 note: 47 velocity 64 event ('note', 9720, 10, 47, 64)
	13,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3479, ticks 9749, elapsed 13, voice: 1 note: 74 velocity 0 event ('note', 9749, 1, 74, 0)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3480, ticks 9749, elapsed 0, voice: 2 note: 74 velocity 0 event ('note', 9749, 2, 74, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	0,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3482, ticks 9750, elapsed 0, voice: 1 note: 78 velocity 64 event ('note', 9750, 1, 78, 64)
	0,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3483, ticks 9750, elapsed 0, voice: 2 note: 78 velocity 64 event ('note', 9750, 2, 78, 64)
	0,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3484, ticks 9750, elapsed 0, voice: 0 note: 78 velocity 64 event ('note', 9750, 3, 78, 64)
	13,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3485, ticks 9779, elapsed 13, voice: 0 note: 78 velocity 0 event ('note', 9779, 1, 78, 0)
	0,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3486, ticks 9779, elapsed 0, voice: 1 note: 78 velocity 0 event ('note', 9779, 2, 78, 0)
	0,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3487, ticks 9779, elapsed 0, voice: 2 note: 78 velocity 0 event ('note', 9779, 3, 78, 0)
	0,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3488, ticks 9779, elapsed 0, voice: 3 note: 66 velocity 0 event ('note', 9779, 4, 66, 0)
	// Note off skipped, note 66 not found in channels, probably interrupted
	// Note off skipped, note 66 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3495, ticks 9780, elapsed 0, voice: 0 note: 76 velocity 64 event ('note', 9780, 1, 76, 64)
	0,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3496, ticks 9780, elapsed 0, voice: 1 note: 76 velocity 64 event ('note', 9780, 2, 76, 64)
	0,((( 2 &4)<<5)|( 76 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3497, ticks 9780, elapsed 0, voice: 2 note: 76 velocity 64 event ('note', 9780, 3, 76, 64)
	0,((( 3 &4)<<5)|( 68 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 3498, ticks 9780, elapsed 0, voice: 3 note: 68 velocity 64 event ('note', 9780, 4, 68, 64)
	0,((( 0 &4)<<5)|( 68 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3499, ticks 9780, elapsed 0, voice: 0 note: 68 velocity 64 event ('note', 9780, 5, 68, 64)
	0,((( 0 &4)<<5)|( 68 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3500, ticks 9780, elapsed 0, voice: 0 note: 68 velocity 64 event ('note', 9780, 6, 68, 64)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3501, ticks 9780, elapsed 0, voice: 0 note: 52 velocity 64 event ('note', 9780, 7, 52, 64)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3502, ticks 9780, elapsed 0, voice: 0 note: 52 velocity 64 event ('note', 9780, 8, 52, 64)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3503, ticks 9780, elapsed 0, voice: 0 note: 52 velocity 64 event ('note', 9780, 9, 52, 64)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3504, ticks 9780, elapsed 0, voice: 0 note: 52 velocity 64 event ('note', 9780, 10, 52, 64)
	13,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3505, ticks 9809, elapsed 13, voice: 1 note: 76 velocity 0 event ('note', 9809, 1, 76, 0)
	0,((( 2 &4)<<5)|( 76 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3506, ticks 9809, elapsed 0, voice: 2 note: 76 velocity 0 event ('note', 9809, 2, 76, 0)
	// Note off skipped, note 76 not found in channels, probably interrupted
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3508, ticks 9810, elapsed 0, voice: 1 note: 74 velocity 64 event ('note', 9810, 1, 74, 64)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3509, ticks 9810, elapsed 0, voice: 2 note: 74 velocity 64 event ('note', 9810, 2, 74, 64)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3510, ticks 9810, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 9810, 3, 74, 64)
	13,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3511, ticks 9839, elapsed 13, voice: 0 note: 74 velocity 0 event ('note', 9839, 1, 74, 0)
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3512, ticks 9839, elapsed 0, voice: 1 note: 74 velocity 0 event ('note', 9839, 2, 74, 0)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3513, ticks 9839, elapsed 0, voice: 2 note: 74 velocity 0 event ('note', 9839, 3, 74, 0)
	0,((( 3 &4)<<5)|( 68 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3514, ticks 9839, elapsed 0, voice: 3 note: 68 velocity 0 event ('note', 9839, 4, 68, 0)
	// Note off skipped, note 68 not found in channels, probably interrupted
	// Note off skipped, note 68 not found in channels, probably interrupted
	// Note off skipped, note 52 not found in channels, probably interrupted
	// Note off skipped, note 52 not found in channels, probably interrupted
	// Note off skipped, note 52 not found in channels, probably interrupted
	// Note off skipped, note 52 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3521, ticks 9840, elapsed 0, voice: 0 note: 73 velocity 64 event ('note', 9840, 1, 73, 64)
	0,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3522, ticks 9840, elapsed 0, voice: 1 note: 73 velocity 64 event ('note', 9840, 2, 73, 64)
	0,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3523, ticks 9840, elapsed 0, voice: 2 note: 73 velocity 64 event ('note', 9840, 3, 73, 64)
	0,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 3524, ticks 9840, elapsed 0, voice: 3 note: 69 velocity 64 event ('note', 9840, 4, 69, 64)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3525, ticks 9840, elapsed 0, voice: 0 note: 69 velocity 64 event ('note', 9840, 5, 69, 64)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3526, ticks 9840, elapsed 0, voice: 0 note: 69 velocity 64 event ('note', 9840, 6, 69, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3527, ticks 9840, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 9840, 7, 45, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3528, ticks 9840, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 9840, 8, 45, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3529, ticks 9840, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 9840, 9, 45, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3530, ticks 9840, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 9840, 10, 45, 64)
	13,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3531, ticks 9869, elapsed 13, voice: 1 note: 73 velocity 0 event ('note', 9869, 2, 73, 0)
	0,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3532, ticks 9870, elapsed 0, voice: 1 note: 76 velocity 64 event ('note', 9870, 2, 76, 64)
	13,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3533, ticks 9899, elapsed 13, voice: 1 note: 76 velocity 0 event ('note', 9899, 2, 76, 0)
	0,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3534, ticks 9899, elapsed 0, voice: 3 note: 69 velocity 0 event ('note', 9899, 4, 69, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3537, ticks 9900, elapsed 0, voice: 1 note: 69 velocity 64 event ('note', 9900, 2, 69, 64)
	0,((( 3 &4)<<5)|( 73 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 3538, ticks 9900, elapsed 0, voice: 3 note: 73 velocity 64 event ('note', 9900, 4, 73, 64)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3539, ticks 9900, elapsed 0, voice: 0 note: 69 velocity 64 event ('note', 9900, 5, 69, 64)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3540, ticks 9900, elapsed 0, voice: 0 note: 64 velocity 64 event ('note', 9900, 6, 64, 64)
	13,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3541, ticks 9929, elapsed 13, voice: 1 note: 69 velocity 0 event ('note', 9929, 2, 69, 0)
	0,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3542, ticks 9929, elapsed 0, voice: 2 note: 73 velocity 0 event ('note', 9929, 4, 73, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3544, ticks 9929, elapsed 0, voice: 0 note: 64 velocity 0 event ('note', 9929, 6, 64, 0)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3545, ticks 9930, elapsed 0, voice: 0 note: 71 velocity 64 event ('note', 9930, 2, 71, 64)
	0,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3546, ticks 9930, elapsed 0, voice: 1 note: 71 velocity 64 event ('note', 9930, 4, 71, 64)
	0,((( 2 &4)<<5)|( 68 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3547, ticks 9930, elapsed 0, voice: 2 note: 68 velocity 64 event ('note', 9930, 5, 68, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3548, ticks 9930, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 9930, 6, 62, 64)
	13,((( 3 &4)<<5)|( 73 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3549, ticks 9959, elapsed 13, voice: 3 note: 73 velocity 0 event ('note', 9959, 1, 73, 0)
	0,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3550, ticks 9959, elapsed 0, voice: 1 note: 71 velocity 0 event ('note', 9959, 2, 71, 0)
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 71 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 68 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3553, ticks 9959, elapsed 0, voice: 2 note: 68 velocity 0 event ('note', 9959, 5, 68, 0)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3554, ticks 9959, elapsed 0, voice: 0 note: 62 velocity 0 event ('note', 9959, 6, 62, 0)
	// Note off skipped, note 45 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3559, ticks 9960, elapsed 0, voice: 0 note: 73 velocity 64 event ('note', 9960, 2, 73, 64)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3560, ticks 9960, elapsed 0, voice: 1 note: 69 velocity 64 event ('note', 9960, 4, 69, 64)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3561, ticks 9960, elapsed 0, voice: 2 note: 69 velocity 64 event ('note', 9960, 5, 69, 64)
	0,((( 3 &4)<<5)|( 64 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 3562, ticks 9960, elapsed 0, voice: 3 note: 64 velocity 64 event ('note', 9960, 6, 64, 64)
	13,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3563, ticks 9989, elapsed 13, voice: 0 note: 73 velocity 0 event ('note', 9989, 2, 73, 0)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3564, ticks 9990, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 9990, 2, 74, 64)
	13,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3565, ticks 10019, elapsed 13, voice: 0 note: 74 velocity 0 event ('note', 10019, 2, 74, 0)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3566, ticks 10019, elapsed 0, voice: 1 note: 69 velocity 0 event ('note', 10019, 4, 69, 0)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3567, ticks 10019, elapsed 0, voice: 2 note: 69 velocity 0 event ('note', 10019, 5, 69, 0)
	0,((( 3 &4)<<5)|( 64 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3568, ticks 10019, elapsed 0, voice: 3 note: 64 velocity 0 event ('note', 10019, 6, 64, 0)
	0,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3569, ticks 10020, elapsed 0, voice: 0 note: 73 velocity 64 event ('note', 10020, 1, 73, 64)
	0,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3570, ticks 10020, elapsed 0, voice: 1 note: 76 velocity 64 event ('note', 10020, 2, 76, 64)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3571, ticks 10020, elapsed 0, voice: 2 note: 69 velocity 64 event ('note', 10020, 3, 69, 64)
	0,((( 3 &4)<<5)|( 45 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 3572, ticks 10020, elapsed 0, voice: 3 note: 45 velocity 64 event ('note', 10020, 7, 45, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3573, ticks 10020, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 10020, 8, 45, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3574, ticks 10020, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 10020, 9, 45, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3575, ticks 10020, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 10020, 10, 45, 64)
	13,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3576, ticks 10049, elapsed 13, voice: 1 note: 76 velocity 0 event ('note', 10049, 2, 76, 0)
	0,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3577, ticks 10050, elapsed 0, voice: 1 note: 78 velocity 64 event ('note', 10050, 2, 78, 64)
	// Note off skipped, note 73 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3579, ticks 10079, elapsed 13, voice: 1 note: 78 velocity 0 event ('note', 10079, 2, 78, 0)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3580, ticks 10079, elapsed 0, voice: 2 note: 69 velocity 0 event ('note', 10079, 3, 69, 0)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3581, ticks 10079, elapsed 0, voice: 0 note: 45 velocity 0 event ('note', 10079, 7, 45, 0)
	0,((( 3 &4)<<5)|( 45 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3582, ticks 10079, elapsed 0, voice: 3 note: 45 velocity 0 event ('note', 10079, 8, 45, 0)
	// Note off skipped, note 45 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3585, ticks 10080, elapsed 0, voice: 0 note: 71 velocity 64 event ('note', 10080, 1, 71, 64)
	0,((( 1 &4)<<5)|( 79 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3586, ticks 10080, elapsed 0, voice: 1 note: 79 velocity 64 event ('note', 10080, 2, 79, 64)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3587, ticks 10080, elapsed 0, voice: 2 note: 67 velocity 64 event ('note', 10080, 3, 67, 64)
	0,((( 3 &4)<<5)|( 52 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 3588, ticks 10080, elapsed 0, voice: 3 note: 52 velocity 64 event ('note', 10080, 7, 52, 64)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3589, ticks 10080, elapsed 0, voice: 0 note: 52 velocity 64 event ('note', 10080, 8, 52, 64)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3590, ticks 10080, elapsed 0, voice: 0 note: 52 velocity 64 event ('note', 10080, 9, 52, 64)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3591, ticks 10080, elapsed 0, voice: 0 note: 52 velocity 64 event ('note', 10080, 10, 52, 64)
	13,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3592, ticks 10109, elapsed 13, voice: 2 note: 67 velocity 0 event ('note', 10109, 3, 67, 0)
	0,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3593, ticks 10110, elapsed 0, voice: 2 note: 71 velocity 64 event ('note', 10110, 3, 71, 64)
	13,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3594, ticks 10139, elapsed 13, voice: 2 note: 71 velocity 0 event ('note', 10139, 3, 71, 0)
	0,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3595, ticks 10140, elapsed 0, voice: 2 note: 64 velocity 64 event ('note', 10140, 3, 64, 64)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3596, ticks 10140, elapsed 0, voice: 0 note: 71 velocity 64 event ('note', 10140, 4, 71, 64)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3597, ticks 10140, elapsed 0, voice: 0 note: 67 velocity 64 event ('note', 10140, 5, 67, 64)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3598, ticks 10140, elapsed 0, voice: 0 note: 64 velocity 64 event ('note', 10140, 6, 64, 64)
	13,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3599, ticks 10169, elapsed 13, voice: 0 note: 64 velocity 0 event ('note', 10169, 3, 64, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 67 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3602, ticks 10169, elapsed 0, voice: 2 note: 64 velocity 0 event ('note', 10169, 6, 64, 0)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3603, ticks 10170, elapsed 0, voice: 0 note: 66 velocity 64 event ('note', 10170, 3, 66, 64)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3604, ticks 10170, elapsed 0, voice: 2 note: 69 velocity 64 event ('note', 10170, 4, 69, 64)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3605, ticks 10170, elapsed 0, voice: 0 note: 66 velocity 64 event ('note', 10170, 5, 66, 64)
	0,((( 0 &4)<<5)|( 63 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3606, ticks 10170, elapsed 0, voice: 0 note: 63 velocity 64 event ('note', 10170, 6, 63, 64)
	// Note off skipped, note 71 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 79 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3608, ticks 10199, elapsed 13, voice: 1 note: 79 velocity 0 event ('note', 10199, 2, 79, 0)
	// Note off skipped, note 66 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3610, ticks 10199, elapsed 0, voice: 2 note: 69 velocity 0 event ('note', 10199, 4, 69, 0)
	// Note off skipped, note 66 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 63 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3612, ticks 10199, elapsed 0, voice: 0 note: 63 velocity 0 event ('note', 10199, 6, 63, 0)
	0,((( 3 &4)<<5)|( 52 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3613, ticks 10199, elapsed 0, voice: 3 note: 52 velocity 0 event ('note', 10199, 7, 52, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	// Note off skipped, note 52 not found in channels, probably interrupted
	// Note off skipped, note 52 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3617, ticks 10200, elapsed 0, voice: 0 note: 67 velocity 64 event ('note', 10200, 3, 67, 64)
	0,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3618, ticks 10200, elapsed 0, voice: 1 note: 71 velocity 64 event ('note', 10200, 4, 71, 64)
	0,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3619, ticks 10200, elapsed 0, voice: 2 note: 64 velocity 64 event ('note', 10200, 5, 64, 64)
	0,((( 3 &4)<<5)|( 64 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 3620, ticks 10200, elapsed 0, voice: 3 note: 64 velocity 64 event ('note', 10200, 6, 64, 64)
	13,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3621, ticks 10229, elapsed 13, voice: 0 note: 67 velocity 0 event ('note', 10229, 3, 67, 0)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3622, ticks 10230, elapsed 0, voice: 0 note: 69 velocity 64 event ('note', 10230, 3, 69, 64)
	13,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3623, ticks 10259, elapsed 13, voice: 0 note: 69 velocity 0 event ('note', 10259, 3, 69, 0)
	0,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3624, ticks 10259, elapsed 0, voice: 1 note: 71 velocity 0 event ('note', 10259, 4, 71, 0)
	0,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3625, ticks 10259, elapsed 0, voice: 2 note: 64 velocity 0 event ('note', 10259, 5, 64, 0)
	0,((( 3 &4)<<5)|( 64 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3626, ticks 10259, elapsed 0, voice: 3 note: 64 velocity 0 event ('note', 10259, 6, 64, 0)
	0,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3627, ticks 10260, elapsed 0, voice: 0 note: 76 velocity 64 event ('note', 10260, 1, 76, 64)
	0,((( 1 &4)<<5)|( 79 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3628, ticks 10260, elapsed 0, voice: 1 note: 79 velocity 64 event ('note', 10260, 2, 79, 64)
	0,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3629, ticks 10260, elapsed 0, voice: 2 note: 71 velocity 64 event ('note', 10260, 3, 71, 64)
	0,((( 3 &4)<<5)|( 52 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 3630, ticks 10260, elapsed 0, voice: 3 note: 52 velocity 64 event ('note', 10260, 7, 52, 64)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3631, ticks 10260, elapsed 0, voice: 0 note: 52 velocity 64 event ('note', 10260, 8, 52, 64)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3632, ticks 10260, elapsed 0, voice: 0 note: 52 velocity 64 event ('note', 10260, 9, 52, 64)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3633, ticks 10260, elapsed 0, voice: 0 note: 52 velocity 64 event ('note', 10260, 10, 52, 64)
	13,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3634, ticks 10289, elapsed 13, voice: 2 note: 71 velocity 0 event ('note', 10289, 3, 71, 0)
	0,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3635, ticks 10290, elapsed 0, voice: 2 note: 73 velocity 64 event ('note', 10290, 3, 73, 64)
	// Note off skipped, note 76 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 79 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3637, ticks 10319, elapsed 13, voice: 1 note: 79 velocity 0 event ('note', 10319, 2, 79, 0)
	0,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3638, ticks 10319, elapsed 0, voice: 2 note: 73 velocity 0 event ('note', 10319, 3, 73, 0)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3639, ticks 10319, elapsed 0, voice: 0 note: 52 velocity 0 event ('note', 10319, 7, 52, 0)
	0,((( 3 &4)<<5)|( 52 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3640, ticks 10319, elapsed 0, voice: 3 note: 52 velocity 0 event ('note', 10319, 8, 52, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	// Note off skipped, note 52 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3643, ticks 10320, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 10320, 1, 74, 64)
	0,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3644, ticks 10320, elapsed 0, voice: 1 note: 78 velocity 64 event ('note', 10320, 2, 78, 64)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3645, ticks 10320, elapsed 0, voice: 2 note: 74 velocity 64 event ('note', 10320, 3, 74, 64)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 3646, ticks 10320, elapsed 0, voice: 3 note: 47 velocity 64 event ('note', 10320, 7, 47, 64)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3647, ticks 10320, elapsed 0, voice: 0 note: 47 velocity 64 event ('note', 10320, 8, 47, 64)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3648, ticks 10320, elapsed 0, voice: 0 note: 47 velocity 64 event ('note', 10320, 9, 47, 64)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3649, ticks 10320, elapsed 0, voice: 0 note: 47 velocity 64 event ('note', 10320, 10, 47, 64)
	13,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3650, ticks 10349, elapsed 13, voice: 2 note: 74 velocity 0 event ('note', 10349, 1, 74, 0)
	0,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3651, ticks 10350, elapsed 0, voice: 2 note: 78 velocity 64 event ('note', 10350, 1, 78, 64)
	13,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3652, ticks 10379, elapsed 13, voice: 1 note: 78 velocity 0 event ('note', 10379, 1, 78, 0)
	0,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3653, ticks 10380, elapsed 0, voice: 1 note: 71 velocity 64 event ('note', 10380, 1, 71, 64)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3654, ticks 10380, elapsed 0, voice: 0 note: 71 velocity 64 event ('note', 10380, 4, 71, 64)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3655, ticks 10380, elapsed 0, voice: 0 note: 66 velocity 64 event ('note', 10380, 5, 66, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3656, ticks 10380, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 10380, 6, 62, 64)
	13,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3657, ticks 10409, elapsed 13, voice: 1 note: 71 velocity 0 event ('note', 10409, 1, 71, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 66 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3660, ticks 10409, elapsed 0, voice: 0 note: 62 velocity 0 event ('note', 10409, 6, 62, 0)
	0,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3661, ticks 10410, elapsed 0, voice: 0 note: 73 velocity 64 event ('note', 10410, 1, 73, 64)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3662, ticks 10410, elapsed 0, voice: 1 note: 69 velocity 64 event ('note', 10410, 4, 69, 64)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3663, ticks 10410, elapsed 0, voice: 0 note: 64 velocity 64 event ('note', 10410, 5, 64, 64)
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3664, ticks 10410, elapsed 0, voice: 0 note: 61 velocity 64 event ('note', 10410, 6, 61, 64)
	// Note off skipped, note 73 not found in channels, probably interrupted
	13,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3666, ticks 10439, elapsed 13, voice: 2 note: 78 velocity 0 event ('note', 10439, 2, 78, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3668, ticks 10439, elapsed 0, voice: 1 note: 69 velocity 0 event ('note', 10439, 4, 69, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3670, ticks 10439, elapsed 0, voice: 0 note: 61 velocity 0 event ('note', 10439, 6, 61, 0)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3671, ticks 10439, elapsed 0, voice: 3 note: 47 velocity 0 event ('note', 10439, 7, 47, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3675, ticks 10440, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 10440, 1, 74, 64)
	0,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3676, ticks 10440, elapsed 0, voice: 1 note: 71 velocity 64 event ('note', 10440, 4, 71, 64)
	0,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3677, ticks 10440, elapsed 0, voice: 2 note: 66 velocity 64 event ('note', 10440, 5, 66, 64)
	0,((( 3 &4)<<5)|( 59 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 3678, ticks 10440, elapsed 0, voice: 3 note: 59 velocity 64 event ('note', 10440, 6, 59, 64)
	13,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3679, ticks 10469, elapsed 13, voice: 0 note: 74 velocity 0 event ('note', 10469, 1, 74, 0)
	0,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3680, ticks 10470, elapsed 0, voice: 0 note: 76 velocity 64 event ('note', 10470, 1, 76, 64)
	13,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3681, ticks 10499, elapsed 13, voice: 0 note: 76 velocity 0 event ('note', 10499, 1, 76, 0)
	0,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3682, ticks 10499, elapsed 0, voice: 1 note: 71 velocity 0 event ('note', 10499, 4, 71, 0)
	0,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3683, ticks 10499, elapsed 0, voice: 2 note: 66 velocity 0 event ('note', 10499, 5, 66, 0)
	0,((( 3 &4)<<5)|( 59 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3684, ticks 10499, elapsed 0, voice: 3 note: 59 velocity 0 event ('note', 10499, 6, 59, 0)
	0,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3685, ticks 10500, elapsed 0, voice: 0 note: 78 velocity 64 event ('note', 10500, 1, 78, 64)
	0,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3686, ticks 10500, elapsed 0, voice: 1 note: 78 velocity 64 event ('note', 10500, 2, 78, 64)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3687, ticks 10500, elapsed 0, voice: 2 note: 74 velocity 64 event ('note', 10500, 3, 74, 64)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 3688, ticks 10500, elapsed 0, voice: 3 note: 47 velocity 64 event ('note', 10500, 7, 47, 64)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3689, ticks 10500, elapsed 0, voice: 0 note: 47 velocity 64 event ('note', 10500, 8, 47, 64)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3690, ticks 10500, elapsed 0, voice: 0 note: 47 velocity 64 event ('note', 10500, 9, 47, 64)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3691, ticks 10500, elapsed 0, voice: 0 note: 47 velocity 64 event ('note', 10500, 10, 47, 64)
	13,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3692, ticks 10529, elapsed 13, voice: 1 note: 78 velocity 0 event ('note', 10529, 1, 78, 0)
	0,((( 1 &4)<<5)|( 79 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3693, ticks 10530, elapsed 0, voice: 1 note: 79 velocity 64 event ('note', 10530, 1, 79, 64)
	13,((( 1 &4)<<5)|( 79 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3694, ticks 10559, elapsed 13, voice: 1 note: 79 velocity 0 event ('note', 10559, 1, 79, 0)
	// Note off skipped, note 78 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3696, ticks 10559, elapsed 0, voice: 2 note: 74 velocity 0 event ('note', 10559, 3, 74, 0)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3697, ticks 10559, elapsed 0, voice: 0 note: 47 velocity 0 event ('note', 10559, 7, 47, 0)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3698, ticks 10559, elapsed 0, voice: 3 note: 47 velocity 0 event ('note', 10559, 8, 47, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 81 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3701, ticks 10560, elapsed 0, voice: 0 note: 81 velocity 64 event ('note', 10560, 1, 81, 64)
	0,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3702, ticks 10560, elapsed 0, voice: 1 note: 78 velocity 64 event ('note', 10560, 2, 78, 64)
	0,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3703, ticks 10560, elapsed 0, voice: 2 note: 73 velocity 64 event ('note', 10560, 3, 73, 64)
	0,((( 3 &4)<<5)|( 54 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 3704, ticks 10560, elapsed 0, voice: 3 note: 54 velocity 64 event ('note', 10560, 7, 54, 64)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3705, ticks 10560, elapsed 0, voice: 0 note: 54 velocity 64 event ('note', 10560, 8, 54, 64)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3706, ticks 10560, elapsed 0, voice: 0 note: 54 velocity 64 event ('note', 10560, 9, 54, 64)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3707, ticks 10560, elapsed 0, voice: 0 note: 54 velocity 64 event ('note', 10560, 10, 54, 64)
	// Note off skipped, note 81 not found in channels, probably interrupted
	28,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3709, ticks 10619, elapsed 28, voice: 1 note: 78 velocity 0 event ('note', 10619, 2, 78, 0)
	0,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3710, ticks 10619, elapsed 0, voice: 2 note: 73 velocity 0 event ('note', 10619, 3, 73, 0)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3711, ticks 10619, elapsed 0, voice: 0 note: 54 velocity 0 event ('note', 10619, 7, 54, 0)
	0,((( 3 &4)<<5)|( 54 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3712, ticks 10619, elapsed 0, voice: 3 note: 54 velocity 0 event ('note', 10619, 8, 54, 0)
	// Note off skipped, note 54 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 81 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3715, ticks 10620, elapsed 0, voice: 0 note: 81 velocity 64 event ('note', 10620, 1, 81, 64)
	0,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3716, ticks 10620, elapsed 0, voice: 1 note: 78 velocity 64 event ('note', 10620, 2, 78, 64)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3717, ticks 10620, elapsed 0, voice: 2 note: 74 velocity 64 event ('note', 10620, 3, 74, 64)
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 3718, ticks 10620, elapsed 0, voice: 3 note: 74 velocity 64 event ('note', 10620, 4, 74, 64)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3719, ticks 10620, elapsed 0, voice: 0 note: 71 velocity 64 event ('note', 10620, 5, 71, 64)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3720, ticks 10620, elapsed 0, voice: 0 note: 66 velocity 64 event ('note', 10620, 6, 66, 64)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3721, ticks 10620, elapsed 0, voice: 0 note: 59 velocity 64 event ('note', 10620, 7, 59, 64)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3722, ticks 10620, elapsed 0, voice: 0 note: 59 velocity 64 event ('note', 10620, 8, 59, 64)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3723, ticks 10620, elapsed 0, voice: 0 note: 59 velocity 64 event ('note', 10620, 9, 59, 64)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3724, ticks 10620, elapsed 0, voice: 0 note: 59 velocity 64 event ('note', 10620, 10, 59, 64)
	13,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3725, ticks 10649, elapsed 13, voice: 2 note: 74 velocity 0 event ('note', 10649, 4, 74, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 66 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3728, ticks 10649, elapsed 0, voice: 0 note: 59 velocity 0 event ('note', 10649, 7, 59, 0)
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3732, ticks 10650, elapsed 0, voice: 0 note: 73 velocity 64 event ('note', 10650, 4, 73, 64)
	0,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3733, ticks 10650, elapsed 0, voice: 2 note: 73 velocity 64 event ('note', 10650, 5, 73, 64)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3734, ticks 10650, elapsed 0, voice: 0 note: 67 velocity 64 event ('note', 10650, 6, 67, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3735, ticks 10650, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 10650, 7, 57, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3736, ticks 10650, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 10650, 8, 57, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3737, ticks 10650, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 10650, 9, 57, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3738, ticks 10650, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 10650, 10, 57, 64)
	// Note off skipped, note 81 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3740, ticks 10679, elapsed 13, voice: 1 note: 78 velocity 0 event ('note', 10679, 2, 78, 0)
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3741, ticks 10679, elapsed 0, voice: 3 note: 74 velocity 0 event ('note', 10679, 3, 74, 0)
	0,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3742, ticks 10679, elapsed 0, voice: 2 note: 73 velocity 0 event ('note', 10679, 4, 73, 0)
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 67 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3745, ticks 10679, elapsed 0, voice: 0 note: 57 velocity 0 event ('note', 10679, 7, 57, 0)
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 81 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3749, ticks 10680, elapsed 0, voice: 0 note: 81 velocity 64 event ('note', 10680, 1, 81, 64)
	0,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3750, ticks 10680, elapsed 0, voice: 1 note: 78 velocity 64 event ('note', 10680, 2, 78, 64)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3751, ticks 10680, elapsed 0, voice: 2 note: 74 velocity 64 event ('note', 10680, 3, 74, 64)
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 3752, ticks 10680, elapsed 0, voice: 3 note: 74 velocity 64 event ('note', 10680, 4, 74, 64)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3753, ticks 10680, elapsed 0, voice: 0 note: 71 velocity 64 event ('note', 10680, 5, 71, 64)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3754, ticks 10680, elapsed 0, voice: 0 note: 66 velocity 64 event ('note', 10680, 6, 66, 64)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3755, ticks 10680, elapsed 0, voice: 0 note: 59 velocity 64 event ('note', 10680, 7, 59, 64)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3756, ticks 10680, elapsed 0, voice: 0 note: 59 velocity 64 event ('note', 10680, 8, 59, 64)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3757, ticks 10680, elapsed 0, voice: 0 note: 59 velocity 64 event ('note', 10680, 9, 59, 64)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3758, ticks 10680, elapsed 0, voice: 0 note: 59 velocity 64 event ('note', 10680, 10, 59, 64)
	// Note off skipped, note 81 not found in channels, probably interrupted
	28,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3760, ticks 10739, elapsed 28, voice: 1 note: 78 velocity 0 event ('note', 10739, 2, 78, 0)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3761, ticks 10739, elapsed 0, voice: 2 note: 74 velocity 0 event ('note', 10739, 3, 74, 0)
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3762, ticks 10739, elapsed 0, voice: 3 note: 74 velocity 0 event ('note', 10739, 4, 74, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 66 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3765, ticks 10739, elapsed 0, voice: 0 note: 59 velocity 0 event ('note', 10739, 7, 59, 0)
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 79 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3769, ticks 10740, elapsed 0, voice: 0 note: 79 velocity 64 event ('note', 10740, 1, 79, 64)
	0,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3770, ticks 10740, elapsed 0, voice: 1 note: 76 velocity 64 event ('note', 10740, 2, 76, 64)
	0,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3771, ticks 10740, elapsed 0, voice: 2 note: 71 velocity 64 event ('note', 10740, 3, 71, 64)
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 3772, ticks 10740, elapsed 0, voice: 3 note: 74 velocity 64 event ('note', 10740, 4, 74, 64)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3773, ticks 10740, elapsed 0, voice: 0 note: 71 velocity 64 event ('note', 10740, 5, 71, 64)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3774, ticks 10740, elapsed 0, voice: 0 note: 67 velocity 64 event ('note', 10740, 6, 67, 64)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3775, ticks 10740, elapsed 0, voice: 0 note: 52 velocity 64 event ('note', 10740, 7, 52, 64)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3776, ticks 10740, elapsed 0, voice: 0 note: 52 velocity 64 event ('note', 10740, 8, 52, 64)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3777, ticks 10740, elapsed 0, voice: 0 note: 52 velocity 64 event ('note', 10740, 9, 52, 64)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3778, ticks 10740, elapsed 0, voice: 0 note: 52 velocity 64 event ('note', 10740, 10, 52, 64)
	// Note off skipped, note 79 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3780, ticks 10769, elapsed 13, voice: 1 note: 76 velocity 0 event ('note', 10769, 2, 76, 0)
	0,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3781, ticks 10769, elapsed 0, voice: 2 note: 71 velocity 0 event ('note', 10769, 3, 71, 0)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3782, ticks 10769, elapsed 0, voice: 0 note: 52 velocity 0 event ('note', 10769, 7, 52, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	// Note off skipped, note 52 not found in channels, probably interrupted
	// Note off skipped, note 52 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3786, ticks 10770, elapsed 0, voice: 0 note: 78 velocity 64 event ('note', 10770, 1, 78, 64)
	0,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3787, ticks 10770, elapsed 0, voice: 1 note: 78 velocity 64 event ('note', 10770, 2, 78, 64)
	0,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3788, ticks 10770, elapsed 0, voice: 2 note: 73 velocity 64 event ('note', 10770, 3, 73, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3789, ticks 10770, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 10770, 7, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3790, ticks 10770, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 10770, 8, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3791, ticks 10770, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 10770, 9, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3792, ticks 10770, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 10770, 10, 50, 64)
	13,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3793, ticks 10799, elapsed 13, voice: 1 note: 78 velocity 0 event ('note', 10799, 1, 78, 0)
	// Note off skipped, note 78 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3795, ticks 10799, elapsed 0, voice: 2 note: 73 velocity 0 event ('note', 10799, 3, 73, 0)
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3796, ticks 10799, elapsed 0, voice: 3 note: 74 velocity 0 event ('note', 10799, 4, 74, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 67 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3799, ticks 10799, elapsed 0, voice: 0 note: 50 velocity 0 event ('note', 10799, 7, 50, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 79 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3803, ticks 10800, elapsed 0, voice: 0 note: 79 velocity 64 event ('note', 10800, 1, 79, 64)
	0,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3804, ticks 10800, elapsed 0, voice: 1 note: 76 velocity 64 event ('note', 10800, 2, 76, 64)
	0,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3805, ticks 10800, elapsed 0, voice: 2 note: 71 velocity 64 event ('note', 10800, 3, 71, 64)
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 3806, ticks 10800, elapsed 0, voice: 3 note: 74 velocity 64 event ('note', 10800, 4, 74, 64)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3807, ticks 10800, elapsed 0, voice: 0 note: 71 velocity 64 event ('note', 10800, 5, 71, 64)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3808, ticks 10800, elapsed 0, voice: 0 note: 67 velocity 64 event ('note', 10800, 6, 67, 64)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3809, ticks 10800, elapsed 0, voice: 0 note: 52 velocity 64 event ('note', 10800, 7, 52, 64)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3810, ticks 10800, elapsed 0, voice: 0 note: 52 velocity 64 event ('note', 10800, 8, 52, 64)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3811, ticks 10800, elapsed 0, voice: 0 note: 52 velocity 64 event ('note', 10800, 9, 52, 64)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3812, ticks 10800, elapsed 0, voice: 0 note: 52 velocity 64 event ('note', 10800, 10, 52, 64)
	// Note off skipped, note 79 not found in channels, probably interrupted
	28,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3814, ticks 10859, elapsed 28, voice: 1 note: 76 velocity 0 event ('note', 10859, 2, 76, 0)
	0,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3815, ticks 10859, elapsed 0, voice: 2 note: 71 velocity 0 event ('note', 10859, 3, 71, 0)
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3816, ticks 10859, elapsed 0, voice: 3 note: 74 velocity 0 event ('note', 10859, 4, 74, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 67 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3819, ticks 10859, elapsed 0, voice: 0 note: 52 velocity 0 event ('note', 10859, 7, 52, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	// Note off skipped, note 52 not found in channels, probably interrupted
	// Note off skipped, note 52 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 79 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3823, ticks 10860, elapsed 0, voice: 0 note: 79 velocity 64 event ('note', 10860, 1, 79, 64)
	0,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3824, ticks 10860, elapsed 0, voice: 1 note: 76 velocity 64 event ('note', 10860, 2, 76, 64)
	0,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3825, ticks 10860, elapsed 0, voice: 2 note: 73 velocity 64 event ('note', 10860, 3, 73, 64)
	0,((( 3 &4)<<5)|( 73 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 3826, ticks 10860, elapsed 0, voice: 3 note: 73 velocity 64 event ('note', 10860, 4, 73, 64)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3827, ticks 10860, elapsed 0, voice: 0 note: 69 velocity 64 event ('note', 10860, 5, 69, 64)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3828, ticks 10860, elapsed 0, voice: 0 note: 64 velocity 64 event ('note', 10860, 6, 64, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3829, ticks 10860, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 10860, 7, 57, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3830, ticks 10860, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 10860, 8, 57, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3831, ticks 10860, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 10860, 9, 57, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3832, ticks 10860, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 10860, 10, 57, 64)
	13,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3833, ticks 10889, elapsed 13, voice: 2 note: 73 velocity 0 event ('note', 10889, 4, 73, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3836, ticks 10889, elapsed 0, voice: 0 note: 57 velocity 0 event ('note', 10889, 7, 57, 0)
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3840, ticks 10890, elapsed 0, voice: 0 note: 71 velocity 64 event ('note', 10890, 4, 71, 64)
	0,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3841, ticks 10890, elapsed 0, voice: 2 note: 71 velocity 64 event ('note', 10890, 5, 71, 64)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3842, ticks 10890, elapsed 0, voice: 0 note: 66 velocity 64 event ('note', 10890, 6, 66, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3843, ticks 10890, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 10890, 7, 55, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3844, ticks 10890, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 10890, 8, 55, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3845, ticks 10890, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 10890, 9, 55, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3846, ticks 10890, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 10890, 10, 55, 64)
	// Note off skipped, note 79 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3848, ticks 10919, elapsed 13, voice: 1 note: 76 velocity 0 event ('note', 10919, 2, 76, 0)
	0,((( 3 &4)<<5)|( 73 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3849, ticks 10919, elapsed 0, voice: 3 note: 73 velocity 0 event ('note', 10919, 3, 73, 0)
	0,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3850, ticks 10919, elapsed 0, voice: 2 note: 71 velocity 0 event ('note', 10919, 4, 71, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 66 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3853, ticks 10919, elapsed 0, voice: 0 note: 55 velocity 0 event ('note', 10919, 7, 55, 0)
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 79 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3857, ticks 10920, elapsed 0, voice: 0 note: 79 velocity 64 event ('note', 10920, 1, 79, 64)
	0,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3858, ticks 10920, elapsed 0, voice: 1 note: 76 velocity 64 event ('note', 10920, 2, 76, 64)
	0,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3859, ticks 10920, elapsed 0, voice: 2 note: 73 velocity 64 event ('note', 10920, 3, 73, 64)
	0,((( 3 &4)<<5)|( 73 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 3860, ticks 10920, elapsed 0, voice: 3 note: 73 velocity 64 event ('note', 10920, 4, 73, 64)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3861, ticks 10920, elapsed 0, voice: 0 note: 69 velocity 64 event ('note', 10920, 5, 69, 64)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3862, ticks 10920, elapsed 0, voice: 0 note: 64 velocity 64 event ('note', 10920, 6, 64, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3863, ticks 10920, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 10920, 7, 57, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3864, ticks 10920, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 10920, 8, 57, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3865, ticks 10920, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 10920, 9, 57, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3866, ticks 10920, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 10920, 10, 57, 64)
	// Note off skipped, note 79 not found in channels, probably interrupted
	28,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3868, ticks 10979, elapsed 28, voice: 1 note: 76 velocity 0 event ('note', 10979, 2, 76, 0)
	0,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3869, ticks 10979, elapsed 0, voice: 2 note: 73 velocity 0 event ('note', 10979, 3, 73, 0)
	0,((( 3 &4)<<5)|( 73 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3870, ticks 10979, elapsed 0, voice: 3 note: 73 velocity 0 event ('note', 10979, 4, 73, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3873, ticks 10979, elapsed 0, voice: 0 note: 57 velocity 0 event ('note', 10979, 7, 57, 0)
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3877, ticks 10980, elapsed 0, voice: 0 note: 78 velocity 64 event ('note', 10980, 1, 78, 64)
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3878, ticks 10980, elapsed 0, voice: 1 note: 74 velocity 64 event ('note', 10980, 2, 74, 64)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3879, ticks 10980, elapsed 0, voice: 2 note: 69 velocity 64 event ('note', 10980, 3, 69, 64)
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 3880, ticks 10980, elapsed 0, voice: 3 note: 74 velocity 64 event ('note', 10980, 4, 74, 64)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3881, ticks 10980, elapsed 0, voice: 0 note: 69 velocity 64 event ('note', 10980, 5, 69, 64)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3882, ticks 10980, elapsed 0, voice: 0 note: 66 velocity 64 event ('note', 10980, 6, 66, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3883, ticks 10980, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 10980, 7, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3884, ticks 10980, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 10980, 8, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3885, ticks 10980, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 10980, 9, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3886, ticks 10980, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 10980, 10, 50, 64)
	// Note off skipped, note 78 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3888, ticks 11009, elapsed 13, voice: 1 note: 74 velocity 0 event ('note', 11009, 2, 74, 0)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3889, ticks 11009, elapsed 0, voice: 2 note: 69 velocity 0 event ('note', 11009, 3, 69, 0)
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3890, ticks 11009, elapsed 0, voice: 3 note: 74 velocity 0 event ('note', 11009, 4, 74, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 66 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3893, ticks 11009, elapsed 0, voice: 0 note: 50 velocity 0 event ('note', 11009, 7, 50, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3897, ticks 11010, elapsed 0, voice: 0 note: 76 velocity 64 event ('note', 11010, 1, 76, 64)
	0,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3898, ticks 11010, elapsed 0, voice: 1 note: 76 velocity 64 event ('note', 11010, 2, 76, 64)
	0,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3899, ticks 11010, elapsed 0, voice: 2 note: 71 velocity 64 event ('note', 11010, 3, 71, 64)
	0,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 3900, ticks 11010, elapsed 0, voice: 3 note: 69 velocity 64 event ('note', 11010, 4, 69, 64)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3901, ticks 11010, elapsed 0, voice: 0 note: 67 velocity 64 event ('note', 11010, 5, 67, 64)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3902, ticks 11010, elapsed 0, voice: 0 note: 67 velocity 64 event ('note', 11010, 6, 67, 64)
	0,((( 0 &4)<<5)|( 49 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3903, ticks 11010, elapsed 0, voice: 0 note: 49 velocity 64 event ('note', 11010, 7, 49, 64)
	0,((( 0 &4)<<5)|( 49 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3904, ticks 11010, elapsed 0, voice: 0 note: 49 velocity 64 event ('note', 11010, 8, 49, 64)
	0,((( 0 &4)<<5)|( 49 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3905, ticks 11010, elapsed 0, voice: 0 note: 49 velocity 64 event ('note', 11010, 9, 49, 64)
	0,((( 0 &4)<<5)|( 49 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3906, ticks 11010, elapsed 0, voice: 0 note: 49 velocity 64 event ('note', 11010, 10, 49, 64)
	13,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3907, ticks 11039, elapsed 13, voice: 1 note: 76 velocity 0 event ('note', 11039, 1, 76, 0)
	// Note off skipped, note 76 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3909, ticks 11039, elapsed 0, voice: 2 note: 71 velocity 0 event ('note', 11039, 3, 71, 0)
	0,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3910, ticks 11039, elapsed 0, voice: 3 note: 69 velocity 0 event ('note', 11039, 4, 69, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 67 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 49 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3913, ticks 11039, elapsed 0, voice: 0 note: 49 velocity 0 event ('note', 11039, 7, 49, 0)
	// Note off skipped, note 49 not found in channels, probably interrupted
	// Note off skipped, note 49 not found in channels, probably interrupted
	// Note off skipped, note 49 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3917, ticks 11040, elapsed 0, voice: 0 note: 78 velocity 64 event ('note', 11040, 1, 78, 64)
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3918, ticks 11040, elapsed 0, voice: 1 note: 74 velocity 64 event ('note', 11040, 2, 74, 64)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3919, ticks 11040, elapsed 0, voice: 2 note: 69 velocity 64 event ('note', 11040, 3, 69, 64)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 3920, ticks 11040, elapsed 0, voice: 3 note: 62 velocity 64 event ('note', 11040, 4, 62, 64)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3921, ticks 11040, elapsed 0, voice: 0 note: 69 velocity 64 event ('note', 11040, 5, 69, 64)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3922, ticks 11040, elapsed 0, voice: 0 note: 66 velocity 64 event ('note', 11040, 6, 66, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3923, ticks 11040, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 11040, 7, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3924, ticks 11040, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 11040, 8, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3925, ticks 11040, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 11040, 9, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3926, ticks 11040, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 11040, 10, 50, 64)
	// Note off skipped, note 78 not found in channels, probably interrupted
	28,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3928, ticks 11099, elapsed 28, voice: 1 note: 74 velocity 0 event ('note', 11099, 2, 74, 0)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3929, ticks 11099, elapsed 0, voice: 2 note: 69 velocity 0 event ('note', 11099, 3, 69, 0)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3930, ticks 11099, elapsed 0, voice: 3 note: 62 velocity 0 event ('note', 11099, 4, 62, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 66 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3933, ticks 11099, elapsed 0, voice: 0 note: 50 velocity 0 event ('note', 11099, 7, 50, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3937, ticks 11100, elapsed 0, voice: 0 note: 76 velocity 64 event ('note', 11100, 1, 76, 64)
	0,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3938, ticks 11100, elapsed 0, voice: 1 note: 71 velocity 64 event ('note', 11100, 2, 71, 64)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3939, ticks 11100, elapsed 0, voice: 2 note: 67 velocity 64 event ('note', 11100, 3, 67, 64)
	0,((( 3 &4)<<5)|( 64 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 3940, ticks 11100, elapsed 0, voice: 3 note: 64 velocity 64 event ('note', 11100, 4, 64, 64)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3941, ticks 11100, elapsed 0, voice: 0 note: 64 velocity 64 event ('note', 11100, 5, 64, 64)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3942, ticks 11100, elapsed 0, voice: 0 note: 59 velocity 64 event ('note', 11100, 6, 59, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3943, ticks 11100, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 11100, 7, 55, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3944, ticks 11100, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 11100, 8, 55, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3945, ticks 11100, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 11100, 9, 55, 64)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3946, ticks 11100, elapsed 0, voice: 0 note: 55 velocity 64 event ('note', 11100, 10, 55, 64)
	// Note off skipped, note 76 not found in channels, probably interrupted
	13,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3948, ticks 11129, elapsed 13, voice: 2 note: 67 velocity 0 event ('note', 11129, 3, 67, 0)
	0,((( 3 &4)<<5)|( 64 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3949, ticks 11129, elapsed 0, voice: 3 note: 64 velocity 0 event ('note', 11129, 4, 64, 0)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3950, ticks 11130, elapsed 0, voice: 2 note: 74 velocity 64 event ('note', 11130, 1, 74, 64)
	0,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 3951, ticks 11130, elapsed 0, voice: 3 note: 66 velocity 64 event ('note', 11130, 3, 66, 64)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3952, ticks 11130, elapsed 0, voice: 0 note: 66 velocity 64 event ('note', 11130, 4, 66, 64)
	13,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3953, ticks 11159, elapsed 13, voice: 2 note: 74 velocity 0 event ('note', 11159, 1, 74, 0)
	0,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3954, ticks 11159, elapsed 0, voice: 1 note: 71 velocity 0 event ('note', 11159, 2, 71, 0)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3955, ticks 11159, elapsed 0, voice: 0 note: 66 velocity 0 event ('note', 11159, 3, 66, 0)
	0,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3956, ticks 11159, elapsed 0, voice: 3 note: 66 velocity 0 event ('note', 11159, 4, 66, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3963, ticks 11160, elapsed 0, voice: 0 note: 69 velocity 64 event ('note', 11160, 1, 69, 64)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3964, ticks 11160, elapsed 0, voice: 1 note: 69 velocity 64 event ('note', 11160, 2, 69, 64)
	0,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3965, ticks 11160, elapsed 0, voice: 2 note: 64 velocity 64 event ('note', 11160, 3, 64, 64)
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 3966, ticks 11160, elapsed 0, voice: 3 note: 67 velocity 64 event ('note', 11160, 4, 67, 64)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3967, ticks 11160, elapsed 0, voice: 0 note: 64 velocity 64 event ('note', 11160, 5, 64, 64)
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3968, ticks 11160, elapsed 0, voice: 0 note: 61 velocity 64 event ('note', 11160, 6, 61, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3969, ticks 11160, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 11160, 7, 57, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3970, ticks 11160, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 11160, 8, 57, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3971, ticks 11160, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 11160, 9, 57, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3972, ticks 11160, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 11160, 10, 57, 64)
	28,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3973, ticks 11219, elapsed 28, voice: 1 note: 69 velocity 0 event ('note', 11219, 1, 69, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3975, ticks 11219, elapsed 0, voice: 2 note: 64 velocity 0 event ('note', 11219, 3, 64, 0)
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3976, ticks 11219, elapsed 0, voice: 3 note: 67 velocity 0 event ('note', 11219, 4, 67, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 61 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3979, ticks 11219, elapsed 0, voice: 0 note: 57 velocity 0 event ('note', 11219, 7, 57, 0)
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3983, ticks 11220, elapsed 0, voice: 0 note: 73 velocity 64 event ('note', 11220, 1, 73, 64)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 3984, ticks 11220, elapsed 0, voice: 1 note: 69 velocity 64 event ('note', 11220, 2, 69, 64)
	0,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3985, ticks 11220, elapsed 0, voice: 2 note: 64 velocity 64 event ('note', 11220, 3, 64, 64)
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 3986, ticks 11220, elapsed 0, voice: 3 note: 67 velocity 64 event ('note', 11220, 4, 67, 64)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3987, ticks 11220, elapsed 0, voice: 0 note: 64 velocity 64 event ('note', 11220, 5, 64, 64)
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3988, ticks 11220, elapsed 0, voice: 0 note: 61 velocity 64 event ('note', 11220, 6, 61, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3989, ticks 11220, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 11220, 7, 45, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3990, ticks 11220, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 11220, 8, 45, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3991, ticks 11220, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 11220, 9, 45, 64)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 3992, ticks 11220, elapsed 0, voice: 0 note: 45 velocity 64 event ('note', 11220, 10, 45, 64)
	// Note off skipped, note 73 not found in channels, probably interrupted
	28,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3994, ticks 11279, elapsed 28, voice: 1 note: 69 velocity 0 event ('note', 11279, 2, 69, 0)
	0,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3995, ticks 11279, elapsed 0, voice: 2 note: 64 velocity 0 event ('note', 11279, 3, 64, 0)
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3996, ticks 11279, elapsed 0, voice: 3 note: 67 velocity 0 event ('note', 11279, 4, 67, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 61 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3999, ticks 11279, elapsed 0, voice: 0 note: 45 velocity 0 event ('note', 11279, 7, 45, 0)
	// Note off skipped, note 45 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 4003, ticks 11280, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 11280, 1, 74, 64)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 4004, ticks 11280, elapsed 0, voice: 1 note: 69 velocity 64 event ('note', 11280, 2, 69, 64)
	0,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 4005, ticks 11280, elapsed 0, voice: 2 note: 66 velocity 64 event ('note', 11280, 3, 66, 64)
	0,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 4006, ticks 11280, elapsed 0, voice: 3 note: 66 velocity 64 event ('note', 11280, 4, 66, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 4007, ticks 11280, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 11280, 5, 62, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 4008, ticks 11280, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 11280, 6, 57, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 4009, ticks 11280, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 11280, 7, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 4010, ticks 11280, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 11280, 8, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 4011, ticks 11280, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 11280, 9, 50, 64)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 4012, ticks 11280, elapsed 0, voice: 0 note: 50 velocity 64 event ('note', 11280, 10, 50, 64)
	// Note off skipped, note 74 not found in channels, probably interrupted
	14,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 4014, ticks 11310, elapsed 14, voice: 0 note: 73 velocity 64 event ('note', 11310, 1, 73, 64)
	13,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 4015, ticks 11339, elapsed 13, voice: 0 note: 73 velocity 0 event ('note', 11339, 1, 73, 0)
	0,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 4016, ticks 11339, elapsed 0, voice: 2 note: 66 velocity 0 event ('note', 11339, 4, 66, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 4023, ticks 11340, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 11340, 1, 74, 64)
	0,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 4024, ticks 11340, elapsed 0, voice: 2 note: 66 velocity 64 event ('note', 11340, 4, 66, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 4025, ticks 11340, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 11340, 5, 62, 64)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 4026, ticks 11340, elapsed 0, voice: 0 note: 57 velocity 64 event ('note', 11340, 6, 57, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 4027, ticks 11340, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 11340, 7, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 4028, ticks 11340, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 11340, 8, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 4029, ticks 11340, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 11340, 9, 62, 64)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 4030, ticks 11340, elapsed 0, voice: 0 note: 62 velocity 64 event ('note', 11340, 10, 62, 64)
	// Note off skipped, note 74 not found in channels, probably interrupted
	13,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 4032, ticks 11369, elapsed 13, voice: 0 note: 62 velocity 0 event ('note', 11369, 7, 62, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 4036, ticks 11370, elapsed 0, voice: 0 note: 76 velocity 64 event ('note', 11370, 1, 76, 64)
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 4037, ticks 11370, elapsed 0, voice: 0 note: 61 velocity 64 event ('note', 11370, 7, 61, 64)
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 4038, ticks 11370, elapsed 0, voice: 0 note: 61 velocity 64 event ('note', 11370, 8, 61, 64)
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 4039, ticks 11370, elapsed 0, voice: 0 note: 61 velocity 64 event ('note', 11370, 9, 61, 64)
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 4040, ticks 11370, elapsed 0, voice: 0 note: 61 velocity 64 event ('note', 11370, 10, 61, 64)
	// Note off skipped, note 76 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 4042, ticks 11399, elapsed 13, voice: 1 note: 69 velocity 0 event ('note', 11399, 2, 69, 0)
	0,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 4043, ticks 11399, elapsed 0, voice: 2 note: 66 velocity 0 event ('note', 11399, 3, 66, 0)
	0,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 4044, ticks 11399, elapsed 0, voice: 3 note: 66 velocity 0 event ('note', 11399, 4, 66, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 4047, ticks 11399, elapsed 0, voice: 0 note: 61 velocity 0 event ('note', 11399, 7, 61, 0)
	// Note off skipped, note 61 not found in channels, probably interrupted
	// Note off skipped, note 61 not found in channels, probably interrupted
	// Note off skipped, note 61 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 4051, ticks 11400, elapsed 0, voice: 0 note: 74 velocity 64 event ('note', 11400, 1, 74, 64)
	0,((( 1 &4)<<5)|( 66 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 4052, ticks 11400, elapsed 0, voice: 1 note: 66 velocity 64 event ('note', 11400, 4, 66, 64)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 4053, ticks 11400, elapsed 0, voice: 2 note: 62 velocity 64 event ('note', 11400, 5, 62, 64)
0xff };

