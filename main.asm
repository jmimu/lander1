;==============================================================
; WLA-DX banking setup
;==============================================================
.memorymap
   defaultslot 0
   ; ROM area
   slotsize        $4000
   slot            0       $0000
   slot            1       $4000
   slot            2       $8000
   ; RAM area
   slotsize        $2000
   slot            3       $C000
   slot            4       $E000
.endme


.rombankmap
bankstotal 1
banksize $4000
banks 1
.endro

;==============================================================
; RAM section
;==============================================================
.ramsection "variables" slot 3
speedX                     dw ; multiplied by 2^8
speedY                     dw ; multiplied by 2^8
posX                     dw ; multiplied by 2^8
posY                     dw ; multiplied by 2^8
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

.org $0066
;==============================================================
; Pause button handler
;==============================================================
    ; Do nothing
    retn


;inclusions
.include "init.inc"
.include "sprites.inc"

;==============================================================
; Main program
;==============================================================
main:
    ld sp, $dff0 ;where stack ends

    ;==============================================================
    ; Set up VDP registers
    ;==============================================================
    call initVDP



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
    ClearVRAMLoop:
        ld a,$00    ; Value to write
        out ($be),a ; Output to VRAM address, which is auto-incremented after each write
        dec bc
        ld a,b
        or c
        jp nz,ClearVRAMLoop

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
    ld hl,PaletteStart
    ld b,(PaletteEnd-PaletteStart)
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
    WriteTilesLoop:
        ; Output data byte then three zeroes, because our tile data is 1 bit
        ; and must be increased to 4 bit
        ld a,(hl)        ; Get data byte
        out ($be),a
        inc hl           ; Add one to hl so it points to the next data byte
        dec bc
        ;soit on fait ca:
        ld a,b
        or c
        jp nz,WriteTilesLoop
        ;soit on fait ca
        ;ld a,b
        ;cp $00
        ;jr nz,WriteTilesLoop
        ;ld a,c
        ;cp $00
        ;jr nz,WriteTilesLoop
        ;le premier va plus vite!
        

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
    ld hl,TilemapStart
    ld bc,TilemapEnd-TilemapStart  ; Counter for number of bytes to write
    -:
        ld a,(hl)    ; Get data byte
        out ($be),a
        inc hl       ; Point to next tile
        dec bc
        ld a,b
        or c
        jp nz,-


    ; Turn screen on
    ld a,%11000000
;          |||| |`- Zoomed sprites -> 16x16 pixels
;          |||| `-- Doubled sprites -> 2 tiles per sprite, 8x16
;          |||`---- 30 row/240 line mode
;          ||`----- 28 row/224 line mode
;          |`------ VBlank interrupts
;          `------- Enable display
    out ($bf),a
    ld a,$81
    out ($bf),a




    ;variables initialization
    ld hl,$5
    ld (speedX),hl
    ld hl,$0000
    ld (speedY),hl
    ld hl,$200
    ld (posX),hl
    ld hl,$100
    ld (posY),hl


    call WaitForButton

MainLoop:
    
    ;mechanics
    ;increment Y-speed (gravity)
    ld hl,(speedY)
    inc hl
    ;if y speed>255, make it 0
    ld h,0    
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
    
    
    ;draw sprite
    ld bc,(posX)    
    ld h,b;x in h
    ld bc,(posY)    
    ld l,b;y in l

    ;ld h,50;x in h
    ;ld l,30;y in l
    ld d,$1d;number of the tile in VRAM in d
    ld e,$0;sprite index in e, must be 0?
    call SpriteSet16x24


    jp MainLoop

WaitForButton:
    push af
      -:in a,($dc)
        and %00010000
        cp  %00000000
        jp nz,-
        ; Button down, wait for it to go up
      -:in a,($dc)
        and %00010000
        cp  %00010000
        jp nz,-
    pop af
    ret




;==============================================================
; Data
;==============================================================

.include "data.inc"



