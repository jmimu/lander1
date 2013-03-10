;For music you need these variables:
;music_start_ptr         dw ;pointer
;music_current_ptr         dw ;pointer
;music_tone_duration         db ;when 0 got to next tone
;music_current_tone         dw ;value (for debug)

;music format:
;only 1 channel, no pause, no volume change...
;3 bytes/tone : tone (16b, 10 used), duration (8b, in frames)
; tone $00 $00 for pause
; tone $FF $FF for end !
;Music1_start:
;.db $00,$FE,60,$00,$E2,60,$00,$D5,240,$00,$00,60,$FF,$FF,00  ;A 1s,B 1s,C 4s, pause 1s, end
;Music1_end:
Music1_start:
.db $01,$53,29,$00,$00,1,$01,$53,30,$01,$40,30,$01,$1D,29,$00,$00,1,$01,$1D,30,$01,$40,30,$01,$53,30,$01,$7C,30,$01,$AB,29,$00,$00,1,$01,$AB,30,$01,$7C,30,$01,$53,29,$00,$00,1,$01,$53,45,$01,$7C,14,$00,$00,1,$01,$7C,30,$00,$00,30
.db $01,$53,29,$00,$00,1,$01,$53,30,$01,$40,30,$01,$1D,29,$00,$00,1,$01,$1D,30,$01,$40,30,$01,$53,30,$01,$7C,30,$01,$AB,29,$00,$00,1,$01,$AB,30,$01,$7C,30,$01,$53,30,$01,$7C,45,$01,$AB,14,$00,$00,1,$01,$AB,30,$00,$00,60,$FF,$FF,00
Music1_end:



CutAllSound:
  push af
    ld a,%10011111 ;volume 0 on channel 0
    out ($7f),a
    ld a,%10111111 ;volume 0 on channel 1
    out ($7f),a
    ld a,%11011111 ;volume 0 on channel 2
    out ($7f),a
    ld a,%11111111 ;volume 0 on channel 3
    out ($7f),a
  pop af
  ret

CutOneChannel:
  ;channel in c*%10000(max 3*%10000)
  push af
    ld a,%10011111 ;volume 0 on channel 0
    or c
    out ($7f),a
  pop af
  ret


EnableChannel: ;max volume...
  ;channel in c*%10000(max 3*%10000)
  push af
    ;ld a,%10010000 ;volume max
    ld a,%10011100 ;volume average
    or c
    out ($7f),a
  pop af
  ret

PlayTone:
  ;Tone in hl (max 1024)
  ;channel in c*%10000(max 3*%10000)
  push af
  push bc
  push de
    ;change hl into 4 LSB in d, and 6 MSB in e
    ld a,l
    and %00001111
    ld d,a ;4 LSB in d
    
    ld a,l
    srl a ;right shift
    srl a
    srl a
    srl a
    ld e,a ; 4 bytes for e
    ld a,h ;the 2 bytes of h must be moved left 4 times
    and %00000011
    sla a ;left shift
    sla a
    sla a
    sla a
    or e
    ld e,a ;6 MSB in e
    
    ld a,%10000000 ;tune
    or c ; on channel...
    or d
    out ($7f),a
    ld a,%00000000 ;tune data
    or c ; on channel...
    or e
    out ($7f),a
  pop de
  pop bc
  pop af
  ret
    

PlayNoise:
  ;noise in a
  push af
  push bc
  push de
    and %00001111
    or %1110000
    out ($7f),a
  pop de
  pop bc
  pop af
  ret


InitMusic:
  ;data start in hl
  ld (music_start_ptr),hl
  dec hl
  dec hl
  dec hl
  ld (music_current_ptr),hl ;current pointer is to a fake previous tone because music_tone_duration is 0
  ld a,1
  ld (music_tone_duration),a
  ret 

PlayMusic:
  ;check is current tone is still played
  ld a,(music_tone_duration)
  dec a
  ld (music_tone_duration),a
  cp 0
  jr z,+
    ret
  +:
  ;have to change tone...
  ld hl,(music_current_ptr)
  inc hl
  inc hl
  inc hl;go 3 bytes later
  ld (music_current_ptr),hl
  
  ;check if end of partition
  ld bc,(music_current_ptr)
  ld a,(bc)
  cp $FF
  jr nz,+ ;(music_current_ptr) != $ff, not end of track
  
  inc bc
  ld a,(bc)
  cp $FF
  jr nz,+;(music_current_ptr+1) != $ff, not end of track
  
  ;have to loop music
  ld hl,(music_start_ptr)
  ld (music_current_ptr),hl ;return to begin of track
  
  +:
  
  ;play tone:
  ld bc,(music_current_ptr)
  ld a,(bc)
  ld h,a
  inc bc
  ld a,(bc)
  ld l,a;tone in hl
  
  ld (music_current_tone),hl
  
  ;get duration
  inc bc
  ld a,(bc)
  ld (music_tone_duration),a
  
  ld c,0;channel in c*%10000(max 3*%10000)
  
  ;test if tone==0
  ld a,h
  cp $00
  jr nz,+

  ld a,l
  cp $00
  jr nz,+;(music_current_ptr+1) != $ff, not end of track
  ;this is a pause, so cut sound
  call CutOneChannel
  ret
 +:
  call EnableChannel
  call PlayTone
  

  ret
