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
    
