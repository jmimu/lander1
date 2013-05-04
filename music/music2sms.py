#! /usr/bin/python

#todo: add attack and end (remove their duration), declare instrument [0.2, 0.7, 1] [0.5]
#vibrato: ~3/2 (freq 3, amplitude 2)
#link: >5 (continuous freq in 5 frames)
#fast notation : abcd (same octave, same len)

tempo=100
fps=60
durations={"q":3,"t":4,"h":6,"1":12,"p":18,"2":24,"3":36,"4":48}

frames_for_1_beat=fps/(tempo/60.0)
frame_beat_factor=frames_for_1_beat/12.0 #multiply duration with beat_factor to get a number of frames
print frames_for_1_beat
print frame_beat_factor

SMS_NTSC={
"ppp":"$00,$00","end":"$ff,$ff","a3_":"$03,$f9","a3#":"$03,$c0","b3_":"$03,$8a","c3_":"$03,$57","c3#":"$03,$27","d3_":"$02,$fa","d3#":"$02,$cf","e3_":"$02,$a7","f3_":"$02,$81","f3#":"$02,$5d","g3_":"$02,$3b","g3#":"$02,$1b","a4_":"$01,$fc","a4#":"$01,$e0","b4_":"$01,$c5","c4_":"$01,$ac","c4#":"$01,$94","d4_":"$01,$7d","d4#":"$01,$68","e4_":"$01,$53","f4_":"$01,$40","f4#":"$01,$2e","g4_":"$01,$1d","g4#":"$01,$0d","a5_":"$00,$fe","a5#":"$00,$f0","b5_":"$00,$e2","c5_":"$00,$d6","c5#":"$00,$ca","d5_":"$00,$be","d5#":"$00,$b4","e5_":"$00,$aa","f5_":"$00,$a0","f5#":"$00,$97","g5_":"$00,$8f","g5#":"$00,$87","a6_":"$00,$7f","a6#":"$00,$78","b6_":"$00,$71","c6_":"$00,$6b","c6#":"$00,$65","d6_":"$00,$5f","d6#":"$00,$5a","e6_":"$00,$55","f6_":"$00,$50","f6#":"$00,$4c","g6_":"$00,$47","g6#":"$00,$43","a7_":"$00,$40","a7#":"$00,$3c","b7_":"$00,$39","c7_":"$00,$35","c7#":"$00,$32","d7_":"$00,$30","d7#":"$00,$2d","e7_":"$00,$2a","f7_":"$00,$28","f7#":"$00,$26","g7_":"$00,$24","g7#":"$00,$22","a8_":"$00,$20","a8#":"$00,$1e","b8_":"$00,$1c","c8_":"$00,$1b","c8#":"$00,$19","d8_":"$00,$18","d8#":"$00,$16","e8_":"$00,$15","f8_":"$00,$14","f8#":"$00,$13","g8_":"$00,$12","g8#":"$00,$11"}


SMS_PAL ={
"ppp":"$00,$00","end":"$ff,$ff","a3_":"$03,$f0","a3#":"$03,$b7","b3_":"$03,$82","c3_":"$03,$4f","c3#":"$03,$20","d3_":"$02,$f3","d3#":"$02,$c9","e3_":"$02,$a1","f3_":"$02,$7b","f3#":"$02,$57","g3_":"$02,$36","g3#":"$02,$16","a4_":"$01,$f8","a4#":"$01,$dc","b4_":"$01,$c1","c4_":"$01,$a8","c4#":"$01,$90","d4_":"$01,$79","d4#":"$01,$64","e4_":"$01,$50","f4_":"$01,$3d","f4#":"$01,$2c","g4_":"$01,$1b","g4#":"$01,$0b","a5_":"$00,$fc","a5#":"$00,$ee","b5_":"$00,$e0","c5_":"$00,$d4","c5#":"$00,$c8","d5_":"$00,$bd","d5#":"$00,$b2","e5_":"$00,$a8","f5_":"$00,$9f","f5#":"$00,$96","g5_":"$00,$8d","g5#":"$00,$85","a6_":"$00,$7e","a6#":"$00,$77","b6_":"$00,$70","c6_":"$00,$6a","c6#":"$00,$64","d6_":"$00,$5e","d6#":"$00,$59","e6_":"$00,$54","f6_":"$00,$4f","f6#":"$00,$4b","g6_":"$00,$47","g6#":"$00,$43","a7_":"$00,$3f","a7#":"$00,$3b","b7_":"$00,$38","c7_":"$00,$35","c7#":"$00,$32","d7_":"$00,$2f","d7#":"$00,$2d","e7_":"$00,$2a","f7_":"$00,$28","f7#":"$00,$25","g7_":"$00,$23","g7#":"$00,$21","a8_":"$00,$1f","a8#":"$00,$1e","b8_":"$00,$1c","c8_":"$00,$1a","c8#":"$00,$19","d8_":"$00,$18","d8#":"$00,$16","e8_":"$00,$15","f8_":"$00,$14","f8#":"$00,$13","g8_":"$00,$12","g8#":"$00,$11"}

melody1=\
 "b5_p g4_h g4_h b5_h  b5_p g4_h g4_h b5_h  c5_h d5_q c5_q b5_1 a5_1  b5_p g4_h g4_h d5_h "\
+"e5_p b5_h b5_h d5_h  e5_p b5_h b5_h d5_h  f5#h e5_h d5_1 c5#1       d5_p f4#h f4#h b5_h  "\
+" end1"
#+"b5_p g4_h g4_h b5_h  b5_p g4_h g4_h b5_h  c5_h d5_q c5_q b5_1 a5_1   "\
melody2=\
 "g3_1 d4_1 d4_1       g3_1 d4_1 d4_1       g3_1 d4_1 d4_1            g3_1 d4_1 d4_1 "\
+"e3_1 b4_1 b4_1       e3_1 b4_1 b4_1       d3_1 b4_1 c4#1            b3_1 b4_1 b4_1      "\
+" end1"
#+" g3_1 d4_1 d4_1  g3_1 d4_1 d4_1       g3_1 d4_1 d4_1   "\


def interpret_melody(melody,SMS_norm,name):
  output=name+"_start:\n  .db "
  total_duration=0
  total_duration_float=0
  for item in melody.split():
    item=item.strip()
    tone=item[0:3]
    duration=item[-1]
    nb_frames=int(round(frame_beat_factor*durations[duration]))
    nb_frames_float=frame_beat_factor*durations[duration]
    #print "item : ",item,tone,SMS_norm[tone],duration,nb_frames_float
    total_duration+=nb_frames
    total_duration_float+=nb_frames_float
    output+="{},{}, ".format(SMS_norm[tone],nb_frames)
  output+="\n  ;total {} ({}) frames\n{}_end:\n".format(total_duration,total_duration_float,name)
  return output



print interpret_melody(melody1,SMS_NTSC,"brahms1")
print interpret_melody(melody2,SMS_NTSC,"brahms2")


