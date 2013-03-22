;==============================================================
; WLA-DX banking setup
; Note that this is a frame 2-only setup, allowing large data
; chunks in the first 32KB.
;==============================================================
.memorymap
   defaultslot 0
   ; ROM area
   slotsize        $8000
   slot            0       $0000
   slotsize        $4000
   slot            1       $8000
   ; RAM area
   slotsize        $2000
   slot            2       $C000
   slot            3       $E000
.endme

.rombankmap
   bankstotal 1
   banksize $8000
   banks 1
.endro




;==============================================================
; constants
;==============================================================
;tiles
.define number_of_empty_tiles 13;tile 13 and more make collisions
.define last_full_tile 34;tile 35 and more make no collisions
.define digits_tile_number $49
.define fire_tile_number $23
.define explosion_tile_number $28
.define fuel_tile_number $26
.define rocket_tile_number $2E
.define landing_tile_number $27
.define guy_tile_number $34
.define diff_tile_ascii $19 ;difference between index in tiles and in ascii
;game
.define fuel_use $-70 ;$-80
.define speedX_tolerance $40 ;must be < $80 !
.define speedY_tolerance $40
.define level_mem_size 1824 ;size of 1 palette + 1 tilemap
.define number_of_levels 5 ;



;==============================================================
; RAM section
;==============================================================
.ramsection "variables" slot 2
new_frame                     db ; 0: no; 1: yes
speedX                     dw ; multiplied by 2^8
speedY                     dw ; multiplied by 2^8
posX                     dw ; multiplied by 2^8
posY                     dw ; multiplied by 2^8
number_of_sprites     db ; number of sprites to draw this frame
rocket_fuel         dw 
current_level db
already_lost db ;0 if not, 1 if lost at least 1 time
goto_level db ;0 if no need to change level, n to enter level n
star_color dw ;color used: bright and yellow
;music
music1_start_ptr         dw ;pointer
music1_current_ptr         dw ;pointer
music1_tone_duration         db ;when 0 got to next tone
music1_current_tone         dw ;value (for debug)
music2_start_ptr         dw ;pointer
music2_current_ptr         dw ;pointer
music2_tone_duration         db ;when 0 got to next tone
music2_current_tone         dw ;value (for debug)
.ends


;==============================================================
; SDSC tag and SMS rom header
;==============================================================
.sdsctag 1.2,"Lander","SMS programming tutorial program","jmimu"

.bank 0 slot 0
.org $0000
;==============================================================
; Boot section
;==============================================================
    di              ; disable interrupts
    im 1            ; Interrupt mode 1
    jp main         ; jump to main program


.org $0038
;==============================================================
; Vertical Blank interrupt
;==============================================================
    push af
      in a,($bf);clears the interrupt request line from the VDP chip and provides VDP information
      ;do something only if vblank (we have only vblank interrupt, so nothing to do)     
      ld a,1
      ld (new_frame),a
    pop af
    ei ;re-enable interrupt
    reti


.org $0066
;==============================================================
; Pause button handler
;==============================================================
    ; Do nothing
    retn


;inclusions
.include "init.inc"
.include "sprites.inc"
.include "text.inc"
.include "sound.inc"


;==============================================================
; Main program
;==============================================================
main:
    ld sp, $dff0 ;where stack ends ;$dff0

    ;==============================================================
    ; Set up VDP registers
    ;==============================================================
    call initVDP

    ;music init
    ld hl,Title_Music1_start;data1 start in hl
    call InitMusic1
    ld hl,Title_Music2_start;data2 start in hl
    call InitMusic2


;========================== TITLE ==============================
    ;==============================================================
    ; Clear VRAM
    ;==============================================================
    ; 1. Set VRAM write address to 0 by outputting $4000 ORed with $0000
    ld a,$00
    out ($bf),a
    ld a,$40
    out ($bf),a
    ; 2. Output 16KB of zeroes
    ld bc, $4000    ; Counter for 16KB of VRAM
    -:
        ld a,$00    ; Value to write
        out ($be),a ; Output to VRAM address, which is auto-incremented after each write
        dec bc
        ld a,b
        or c
        jp nz,-

    ;load palette of title
    ;==============================================================
    ; Load palette
    ;==============================================================
    ; 1. Set VRAM write address to CRAM (palette) address 0 (for palette index 0)
    ; by outputting $c000 ORed with $0000
    ld a,$00
    out ($bf),a
    ld a,$c0
    out ($bf),a
    ; 2. Output colour data
    ld hl,Title_PaletteStart
    ld b,(Title_PaletteEnd-Title_PaletteStart)
    ld c,$be
    otir

    ;==============================================================
    ; Load tiles
    ;==============================================================
    ; 1. Set VRAM write address to tile index 0
    ; by outputting $4000 ORed with $0000
    ld a,$00
    out ($bf),a
    ld a,$40
    out ($bf),a
    ; 2. Output tile data
    ld hl,Title_TilesStart              ; Location of tile data
    ld bc,Title_TilesEnd-Title_TilesStart  ; Counter for number of bytes to write
    -:
        ; Output data byte then three zeroes, because our tile data is 1 bit
        ; and must be increased to 4 bit
        ld a,(hl)        ; Get data byte
        out ($be),a
        inc hl           ; Add one to hl so it points to the next data byte
        dec bc
        ld a,b
        or c
        jp nz,-

    ; Turn screen on
    ld a,%11100000
;          |||| |`- Zoomed sprites -> 16x16 pixels
;          |||| `-- Doubled sprites -> 2 tiles per sprite, 8x16
;          |||`---- 30 row/240 line mode
;          ||`----- 28 row/224 line mode
;          |`------ VBlank interrupts
;          `------- Enable display
    out ($bf),a
    ld a,$81
    out ($bf),a
    
    ;==============================================================
    ; Write tilemap data
    ;==============================================================
    ; 1. Set VRAM write address to name table index 0
    ; by outputting $4000 ORed with $3800+0
    ld a,$00
    out ($bf),a
    ld a,$38|$40
    out ($bf),a
    ; 2. Output tilemap data
    ld hl,Title_TilemapStart
    ld bc,Title_TilemapEnd-Title_TilemapStart  ; Counter for number of bytes to write
    -:
        ld a,(hl)    ; Get data byte
        out ($be),a
        inc hl       ; Point to next tile
        dec bc
        ld a,b
        or c
        jr nz,-  

    ei;enable interruption (for vblank)
TitleLoop:
    call WaitForVBlank
    call PSGMOD_Play
    
    ;check if button pressed
    in a,($dc)
    and %00010000
    cp  %00000000
    jr z,+

    ;check if end of music
    ld hl,(music1_current_ptr)
    ld b,h
    ld c,l;(music1_current_ptr) is in bc
    ld hl,Title_Music1_end
    dec hl
    dec hl
    dec hl
    dec hl
    dec hl
    dec hl

    ld a,h
    cp b
    jp nz,TitleLoop
    ld a,l
    cp c
    jp nz,TitleLoop
                 
+:    
    
    ; Turn screen off
    ld a,%10100000
;          |||| |`- Zoomed sprites -> 16x16 pixels
;          |||| `-- Doubled sprites -> 2 tiles per sprite, 8x16
;          |||`---- 30 row/240 line mode
;          ||`----- 28 row/224 line mode
;          |`------ VBlank interrupts
;          `------- Disable display
    out ($bf),a
    ld a,$81
    out ($bf),a
;======================== END TITLE ============================


    ;music init
    ld hl,Music1_start;data1 start in hl
    call InitMusic1
    ld hl,Music2_start;data2 start in hl
    call InitMusic2

    ;game init
    ld a,1
    ld (current_level),a
    


    ld hl,$FF0F
    ld (rocket_fuel),hl
    
    ld hl,$0000
    ld (star_color),hl

game_start:
    call CutAllSound

    ;check if end of game
    ld a,(current_level)
    dec a
    cp number_of_levels
    jr nz,end_endgame_message

    
    ;draw congratulations text
    ld bc,TextCongratEnd-TextCongratStart
    ld b,c;text length in b
    ld c,0;col (tiles) in c
    ld l,6;line (tiles) in l
    ld de,TextCongratStart;text pointer in de
    call PrintText    
    
    ;draw final fuel
    ld hl,(rocket_fuel)
    ld c,24;col (tiles) in c
    ld l,7;line (tiles) in l
    ld e,h;value (8bit) in e
    call PrintInt
    
    ld a,1
    ld (current_level),a
    
    ld a,(already_lost)
    cp 0
    jr z,+
    ;game finished, but not perfect
    ld bc,TextNotPerfectEnd-TextNotPerfectStart
    ld b,c;text length in b
    ld c,0;col (tiles) in c
    ld l,12;line (tiles) in l
    ld de,TextNotPerfectStart;text pointer in de
    call PrintText 
  +:
    
    call WaitForButton
   end_endgame_message:

    ;if first level, fill fuel
    ld a,(current_level)
    cp 1
    jr nz,+
    ld hl,$FF0F
    ld (rocket_fuel),hl
    ld a,0
    ld (already_lost),a
  +:
  
  

    ;==============================================================
    ; Clear VRAM
    ;==============================================================
    ; 1. Set VRAM write address to 0 by outputting $4000 ORed with $0000
    ld a,$00
    out ($bf),a
    ld a,$40
    out ($bf),a
    ; 2. Output 16KB of zeroes
    ld bc, $4000    ; Counter for 16KB of VRAM
    -:
        ld a,$00    ; Value to write
        out ($be),a ; Output to VRAM address, which is auto-incremented after each write
        dec bc
        ld a,b
        or c
        jp nz,-


    ;load palette of current level
    ld hl,Palette1Start
    ld a,(current_level)
    ld bc,level_mem_size
  -:
    dec a
    cp 0
    jr z,+
    add hl,bc
    jr -
  +:;hl is where the palette of the level starts
    ;==============================================================
    ; Load palette
    ;==============================================================
    ; 1. Set VRAM write address to CRAM (palette) address 0 (for palette index 0)
    ; by outputting $c000 ORed with $0000
    ld a,$00
    out ($bf),a
    ld a,$c0
    out ($bf),a
    ; 2. Output colour data
    ;ld hl,Palette1Start
    ld b,(Palette1End-Palette1Start)
    ld c,$be
    otir

    ;==============================================================
    ; Load tiles
    ;==============================================================
    ; 1. Set VRAM write address to tile index 0
    ; by outputting $4000 ORed with $0000
    ld a,$00
    out ($bf),a
    ld a,$40
    out ($bf),a
    ; 2. Output tile data
    ld hl,TilesStart              ; Location of tile data
    ld bc,TilesEnd-TilesStart  ; Counter for number of bytes to write
    -:
        ; Output data byte then three zeroes, because our tile data is 1 bit
        ; and must be increased to 4 bit
        ld a,(hl)        ; Get data byte
        out ($be),a
        inc hl           ; Add one to hl so it points to the next data byte
        dec bc
        ld a,b
        or c
        jp nz,-

    
    ; Turn screen on
    ld a,%11100000
;          |||| |`- Zoomed sprites -> 16x16 pixels
;          |||| `-- Doubled sprites -> 2 tiles per sprite, 8x16
;          |||`---- 30 row/240 line mode
;          ||`----- 28 row/224 line mode
;          |`------ VBlank interrupts
;          `------- Enable display
    out ($bf),a
    ld a,$81
    out ($bf),a


    ;draw hello text
    ld bc,TextHelloEnd-TextHelloStart
    ld b,c;text length in b
    ld c,0;col (tiles) in c
    ld l,3;line (tiles) in l
    ld de,TextHelloStart;text pointer in de
    call PrintText
    
    ;draw level text
    ld bc,TextLevelEnd-TextLevelStart
    ld b,c;text length in b
    ld c,0;col (tiles) in c
    ld l,8;line (tiles) in l
    ld de,TextLevelStart;text pointer in de
    call PrintText
    
    ;draw level number text
    ld c,18;col (tiles) in c
    ld l,8;line (tiles) in l
    ld a,(current_level)
    ld e,a;value (8bit) in e
    call PrintInt
    
    
    call WaitForButton

    
    
    ;load tilemap of current level
    ld hl,Tilemap1Start
    ld a,(current_level)
    ld bc,level_mem_size
  -:
    dec a
    cp 0
    jr z,+
    add hl,bc
    jr -
  +:;hl is where the tilemap of the level starts
    ;==============================================================
    ; Write tilemap data
    ;==============================================================
    ; 1. Set VRAM write address to name table index 0
    ; by outputting $4000 ORed with $3800+0
    ld a,$00
    out ($bf),a
    ld a,$38|$40
    out ($bf),a
    ; 2. Output tilemap data
    ;ld hl,Tilemap1Start
    ld bc,Tilemap1End-Tilemap1Start  ; Counter for number of bytes to write
    -:
        ld a,(hl)    ; Get data byte
        out ($be),a
        inc hl       ; Point to next tile
        dec bc
        ld a,b
        or c
        jr nz,-


    
    
    ;variables initialization
    ld hl,$0
    ld (speedX),hl
    ld hl,$0
    ld (speedY),hl
    ld hl,$8000
    ld (posX),hl
    ld hl,$1400
    ld (posY),hl

    ld a,0
    ld (goto_level),a
    
    ld a,1
    ld (new_frame),a

    ei;enable interruption (for vblank)


    ;~ ;test sound
    ;~ ld c,0;channel in c*%100000(max 3*%100000)
    ;~ call EnableChannel
    ;~ 
    ;~ ld c,%01100000;channel in c*%100000(max 3*%100000)
    ;~ call EnableChannel
    

MainLoop:
    ;cut noise channel sound
    ld c,%01100000;channel in c*%100000(max 3*%100000)
    call CutOneChannel

    call DoGameLogic
    call WaitForVBlank
    call UpdatePalette
    call UpdateScreen
    call PSGMOD_Play
    
    ;check if level finished
    ld a,(goto_level)
    or a
    jp z,MainLoop
      ;we have to change the level
      ld c,a
      call WaitForButton
      ;if just lost and pushed button 2, restart game
      ld a,b;get pushed button
      cp 2 ;if not button 2, replay level
      jr nz,+
      ;also check if fuel max (=you just lost)
      ld hl,(rocket_fuel)
      ld a,h
      cp $FF
      jr nz,+
      ld c,1;restart game to level 1
     +:
      ld a,c
      ld (current_level),a
      jp game_start
    
    
    jp MainLoop
    

WaitForButton:
    ;out: b for button (1 or 2)
    call CutAllSound
    push af
      -:in a,($dc)
        and %00110000 ;is button 1?
        ld b,1
        cp  %00100000
        jr z,+
        in a,($dc)
        ld b,2
        and %00110000 ;is button 2?
        cp  %00010000
        jr z,+
        jr -
      +:
        ; Button down, wait for it to go up
      -:in a,($dc)
        and %00110000
        cp  %00110000
        jr nz,-
    pop af
    ret

ReadButtons:
    push af
        in a,($dc)
        and %00010000
        cp  %00000000
        jr nz,+
        call OnButton1
    +:  
        in a,($dc)
        and %00100000
        cp  %00000000
        jr nz,+
        call OnButton2
    +:  
        in a,($dc)
        and %00000001
        cp  %00000000
        jr nz,+
        call OnButtonUp
    +:  
        in a,($dc)
        and %00000010
        cp  %00000000
        jr nz,+
        call OnButtonDown
    +:  
        in a,($dc)
        and %00000100
        cp  %00000000
        jr nz,+
        call OnButtonLeft
    +:  
        in a,($dc)
        and %00001000
        cp  %00000000
        jr nz,+
        call OnButtonRight
    +:
    pop af
ret
 
OnButton1:
    ret
OnButton2:
    ret
OnButtonUp:
    ret
OnButtonDown:
    push af
    push bc
    push de
    push hl
        ld hl,(rocket_fuel) ;compare rocket_fuel to 0...
        ld a,h
        cp 0
        jp z,+
        ;if not, decrease rocket_fuel
        ld bc,fuel_use
        add hl,bc
        ld (rocket_fuel),hl
        
        
        ld a,(number_of_sprites)
        ld e,a;sprite index in e
        inc a
        ld (number_of_sprites),a

        ld bc,$-4 ;//remove 4pix/256frame to y speed
        ld hl,(speedY)
        add hl,bc
        ld (speedY),hl
        ;draw fire sprite
        ld bc,(posX)
        ld a,b
        add a,$4;x+4
        ld h,a;x in h
        ld bc,(posY)
        ld a,b
        add a,$18;y+24
        ld l,a;y in l
        ld d,fire_tile_number+1;number of the tile in VRAM in d
        call SpriteSet8x8
        
        ;noise!
        ld c,%01100000;channel in c*%100000(max 3*%100000)
        call EnableChannel
        ld a,%00001000
        call PlayNoise
        
    +:
    pop hl
    pop de
    pop bc
    pop af
ret
OnButtonLeft:
    push af
    push bc
    push de
    push hl 
        ld hl,(rocket_fuel) ;compare rocket_fuel to 0...
        ld a,h
        cp 0
        jp z,+
        ;if not, decrease rocket_fuel
        ld bc,fuel_use
        add hl,bc
        ld (rocket_fuel),hl
        
        ld a,(number_of_sprites)
        ld e,a;sprite index in e
        inc a
        ld (number_of_sprites),a

        ld bc,$0004 ;//add 4pix/256frame to x speed
        ld hl,(speedX)
        add hl,bc
        ld (speedX),hl
        ;draw fire sprite
        ld bc,(posX)
        ld a,b
        sub $04;x-4
        ld h,a;x in h
        ld bc,(posY)
        ld a,b
        add a,$08;y+8
        ld l,a;y in l
        ld d,fire_tile_number;number of the tile in VRAM in d
        call SpriteSet8x8
        
        ;noise!
        ld c,%01100000;channel in c*%100000(max 3*%100000)
        call EnableChannel
        ld a,%00001000
        call PlayNoise
        
    +:
    pop hl
    pop de
    pop bc
    pop af
ret
OnButtonRight:
    push af
    push bc
    push de
    push hl
        ld hl,(rocket_fuel) ;compare rocket_fuel to 0...
        ld a,h
        cp 0
        jp z,+
        ;if not, decrease rocket_fuel
        ld bc,fuel_use
        add hl,bc
        ld (rocket_fuel),hl
        
        ld a,(number_of_sprites)
        ld e,a;sprite index in e
        inc a
        ld (number_of_sprites),a

        ld bc,$-4 ;//remove 4pix/256frame to x speed
        ld hl,(speedX)
        add hl,bc
        ld (speedX),hl
        ;draw fire sprite
        ld bc,(posX)
        ld a,b
        add a,$0C;x+12
        ld h,a;x in h
        ld bc,(posY)
        ld a,b
        add a,$08;y+8
        ld l,a;y in l
        ld d,fire_tile_number+2;number of the tile in VRAM in d
        call SpriteSet8x8
        
        ;noise!
        ld c,%01100000;channel in c*%100000(max 3*%100000)
        call EnableChannel
        ld a,%00001000
        call PlayNoise
        
    +:
    pop hl
    pop de
    pop bc
    pop af
ret


WaitForVBlank:
    push af
    -:
      ld a,(new_frame)
      cp 0
      jr z,-

      ld a,0
      ld (new_frame),a      
    pop af    
    ret   

PSGMOD_Play:
    ;~ ld c,0;channel in c*%100000(max 3*%100000)
    ;~ ld hl,(posY) ;Tone in hl (max 1024)
    ;~ ;ld l,h
    ;~ ;ld h,%00000011
    ;~ 
    ;~ ld a,h
    ;~ ;neg
    ;~ ld l,a
    ;~ ld h,%00000010
    ;~ 
    ;~ 
    ;~ call PlayTone
    ;~ 
    
    ;play harmonics or not depending on level number
    ;ld a,(current_level)
    ;and %00000001
    ;jr z,+
    ;call PlayMusicH
    ;ret
    ;+:
    call PlayMusic1
    call PlayMusic2

    ret
    
UpdatePalette:
   push af
   push bc
   push hl
    ;update star color
    ld hl,(star_color)
    ld bc,$100 ;color change speed
    add hl,bc
    ld (star_color),hl
    ;==============================================================
    ; Update palette
    ;==============================================================
    ; 1. Set VRAM write address to CRAM (palette) address 0 (for palette index 0)
    ; by outputting $c000 ORed with $000F (number of the color to change)
    ld a,$0F
    out ($bf),a
    ld a,$c0
    out ($bf),a
    ; 2. Output colour data
    ld hl,(star_color)
    ld a,h
    and %00110000 ;use only bright colors (let only blue byte change)
    or  %00001111 ; R and G are at max
    out ($be),a
    
    ;update fire color 2
    ld a,$1C
    out ($bf),a
    ld a,$c0
    out ($bf),a
    ; 2. Output colour data
    ld hl,(star_color)
    ld a,h
    and %00110101 ;use only bright colors (let only blue byte change)
    or  %00001010 ; R and G are at max
    out ($be),a
    
    
   pop hl
   pop bc
   pop af    
   ret 

UpdateScreen:
    ret


DoGameLogic:
    push af
  
    push bc
    push de
    push hl
  
    ld a,$06 ; at least 6 sprites to show (rocket)
    ld (number_of_sprites),a
    ld c,$03 ; 3 may have to be hided
    call HideSprites
    
    ;mechanics
    ;increment Y-speed (gravity)
    ld hl,(speedY)
    inc hl
    inc hl
    ld (speedY),hl    
    
    ;update x pos
    ld bc,(posX)
    ld hl, (speedX)
    add hl,bc
    ld (posX),hl
    ;update y pos
    ld bc,(posY)
    ld hl, (speedY)
    add hl,bc
    ld (posY),hl
    
    call ReadButtons ;updates number_of_sprites
    
    ;draw rocket sprites
    ld bc,(posX)    
    ld h,b;x in h
    ld bc,(posY)    
    ld l,b;y in l
    ld d,rocket_tile_number;number of the tile in VRAM in d
    ld e,$0;sprite index in e, here these are the first sprites used
    call SpriteSet16x24

    ;draw texts
    ld hl,(rocket_fuel)
    ld e,h;value (8bit) in e
    ld c,1 ;col (tiles) in c
    ld l,0 ;line (tiles) in l
    call PrintInt
    
    ;;draw texts
    ;ld a,(music2_tone_duration)
    ;ld e,a;value (8bit) in e
    ;ld c,1 ;col (tiles) in c
    ;ld l,1 ;line (tiles) in l
    ;call PrintInt
    ;ld hl,(music2_current_tone)
    ;ld e,h;value (8bit) in e
    ;ld c,1 ;col (tiles) in c
    ;ld l,2 ;line (tiles) in l
    ;call PrintInt
    ;ld hl,(music2_current_tone)
    ;ld e,l;value (8bit) in e
    ;ld c,5 ;col (tiles) in c
    ;ld l,2 ;line (tiles) in l
    ;call PrintInt
    
    call drawWarning
    call TestAllCollisions
        
    pop hl
    pop de
    pop bc
    pop af

    ret

;check if speed is too big, write a warning
drawWarning:
    push af
    push bc
    push hl

        ;clear text
        ld bc,TextNoWarnEnd-TextNoWarnStart
        ld b,c;text length in b
        ld c,4;col (tiles) in c
        ld l,1;line (tiles) in l
        ld de,TextNoWarnStart;text pointer in de
        call PrintText

      ld hl,(speedX)  
      ;ld bc,speedX_tolerance
      ;add hl,bc ;hl must be < speedX_tolerance*2
      ld bc,$80
      add hl,bc ;h must be < 1
      ld a,0
      cp h
      jr z,+
        ;draw text
        ld bc,TextWarnXEnd-TextWarnXStart
        ld b,c;text length in b
        ld c,4;col (tiles) in c
        ld l,1;line (tiles) in l
        ld de,TextWarnXStart;text pointer in de
        call PrintText
     +:
      ;in y: TODO : use speedY_tolerance
      ld hl,(speedY)  
      ld bc,$80
      add hl,bc ;h must be < 1
      ld a,0
      cp h
      jr z,+
        ;draw text
        ld bc,TextWarnYEnd-TextWarnYStart
        ld b,c;text length in b
        ld c,4;col (tiles) in c
        ld l,1;line (tiles) in l
        ld de,TextWarnYStart;text pointer in de
        call PrintText
     +:
    pop hl
    pop bc
    pop af
    ret


TestAllCollisions:
      ;tests if point posX+8,posY is on a full tile
      ld bc,(posX)    
      ld h,b
      srl h
      srl h
      srl h
      inc h ;add 8 pix!
      ;x in h (in tiles)
      ld bc,(posY)    
      ld l,b
      srl l
      srl l
      srl l
      ;y in l (in tiles)
      call TestCollision
      
      ;tests if point posX+8,posY+24 is on a full tile
      ;optimization: update only l
      inc l;add 24 pix!
      inc l
      inc l
      call TestCollision
    ret

;x in h (in tiles)
;y in l (in tiles)
TestCollision:;TODO: using only level1 data!
    push af
    push bc
    push hl
    
      ;compute tile number
      ld b,0
      ld c,h;x in bc
      call Multby32
      add hl,bc
      ld b,h
      ld c,l
      ;tile number in bc
      push bc
      
      ;load tilemap of current level
      ld hl,Tilemap1Start
      ld a,(current_level)
      ld bc,level_mem_size
    -:
      dec a
      cp 0
      jr z,+
      add hl,bc
      jr -
    +:;hl is where the tilemap of the level starts
    
      pop bc
      ;ld hl,Tilemap1Start
      add hl,bc
      add hl,bc ;hl is the pointer to the tile number
      
      
      ;if (hl)>number_of_empty_tiles
      ld a, number_of_empty_tiles
      ld b,a
      ld a,(hl)
      cp b
      jp c,end_TestCollision
      ;it's not and emprty tile... check if it is a landing zone
      ld b,landing_tile_number
      cp b
      jr z,try_to_land
      ;check if it is a full tile
      ld a,(hl)
      ld b,a
      ld a, last_full_tile
      cp b
      jp c,end_TestCollision
      jr destroy
      
   try_to_land:   
      ;good place, now check speeds
      ;in x: TODO : use speedX_tolerance
      ld hl,(speedX)  
      ;ld bc,speedX_tolerance
      ;add hl,bc ;hl must be < speedX_tolerance*2
      ld bc,$80
      add hl,bc ;h must be < 1
      ld a,0
      cp h
      jr nz,destroy
      ;in y: TODO : use speedY_tolerance
      ld hl,(speedY)  
      ld bc,$80
      add hl,bc ;h must be < 1
      ld a,0
      cp h
      jr nz,destroy
      
      
      ;draw lander ; maybe draw it as a background ?
      ld bc,(posX)    
      ld h,b;x in h
      ld bc,(posY)    
      ld l,b;y in l
      ld bc,$0808
      add hl,bc ;draw the guy a little further
      ld d,guy_tile_number;number of the tile in VRAM in d
      ld e,$6;sprite index in e, 6 because we draw the rocket too
      call SpriteSet16x16
      ;next level
      ld a,(current_level)
      inc a
      ld (goto_level),a
      ;draw text
      ld bc,TextWonEnd-TextWonStart
      ld b,c;text length in b
      ld c,0;col (tiles) in c
      ld l,12;line (tiles) in l
      ld de,TextWonStart;text pointer in de
      call PrintText
      
      jp end_TestCollision
      
    destroy:
        ;return to correct yellow
        ld a,$1C
        out ($bf),a
        ld a,$c0
        out ($bf),a
        ; 2. Output colour data
        ld a,$0f
        out ($be),a
    
        ;show explosion
        ld bc,(posX)    
        ld h,b;x in h
        ld bc,(posY)    
        ld l,b;y in l
        ld d,explosion_tile_number;number of the tile in VRAM in d
        ld e,$0;sprite index in e, 0 because we replace the rocket
        call SpriteSet16x24
      
        ld a,(current_level)
        ;ld a,1 ;return to first level
        ld (goto_level),a
        
        ;refill!
        ld hl,$FF0F
        ld (rocket_fuel),hl
        ld a,1
        ld (already_lost),a
        
        ;draw text
        ld bc,TextLostEnd-TextLostStart
        ld b,c;text length in b
        ld c,0;col (tiles) in c
        ld l,12;line (tiles) in l
        ld de,TextLostStart;text pointer in de
        call PrintText
        
    end_TestCollision:
    pop hl
    pop bc
    pop af
    ret


;==============================================================
; Data
;==============================================================

.include "data.inc"
.include "title.inc"



