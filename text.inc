Multby32:
    ;mult l by 32, result in hl
    push af
        ld h,$00
        ld a,5 ; 32=2^5
     -: sla h ;//left shift for MSB
        sla l ;//left shift for LSB
        jr nc,+ ;if carry on sla l
        inc h
     +:
        dec a
        jr nz,-
    pop af
    ret


PrintInt: ;print an int in octal...
    ;col (tiles) in c
    ;line (tiles) in l
    ;value (8bit) in e
    ; the constant "digits_tile_number" must represent the number of the "0" tile in VRAM
    
    push af
    push bc    
    
    ;compute the tile index in tilemap
    ;sms screen is 32*28 tiles large
    call Multby32 ;multipy l by 32, result in hl
    ld b,0
    add hl,bc
    ;hl*2 is the number of the tile
    ld bc,2
    add hl,bc ;begin to write the least siginificant digit
    
    
    ;write digits
    ld c,3
  -:
        ;==============================================================
        ; Write text to name table
        ;==============================================================
        ; 1. Set VRAM write address to name table index 0
        ; by outputting $4000 ORed with $3800+hl*2
        ld a,$00
        add a,l ;number of tile: hl*2
        add a,l ;number of tile: hl*2
        out ($bf),a
        ld a,$38|$40
        add a,h ;number of tile: hl*2
        add a,h ;number of tile: hl*2
        out ($bf),a
        
        ; 2. Output tilemap data   
        ld a,e
        and %00000111 ;get only the last significant digit
        ld b,a
        ld a,digits_tile_number ;tile to write : digits_tile_number+value
        add a,b
        out ($be),a
        
        ;ld a,e
        srl e ;divide by 8
        srl e
        srl e
        ;ld e,a
        
        dec hl ; wel'll draw next tile (go left)
        dec c
        jr nz,-
        
    pop bc
    pop af
        
    ret

PrintText:
    ;col (tiles) in c
    ;line (tiles) in l
    ;text pointer in de
    ;text length in b
    ;the constant "diff_tile_ascii"  must represent difference between index in tiles and in ascii
    
    ;push bc
    ;  ld b,e
    ;  call PrintInt
    ;pop bc
    
    push af
    push bc
    
    ;compute the tile index in tilemap
    ;sms screen is 32*28 tiles large
    call Multby32 ;multipy l by 32, result in hl
    ld b,0
    add hl,bc
    ;hl*2 is the number of the tile
    ld bc,2
    add hl,bc ;begin to write the least siginificant digit
    
    pop bc
    ;write chars
    -:
        ;==============================================================
      ; Write text to name table
      ;==============================================================
      ; 1. Set VRAM write address to name table index 0
      ; by outputting $4000 ORed with $3800+hl*2
      ld a,$00
      add a,l ;number of tile: hl*2
      add a,l ;number of tile: hl*2
      out ($bf),a
      ld a,$38|$40
      add a,h ;number of tile: hl*2
      add a,h ;number of tile: hl*2
      out ($bf),a
      
      ; 2. Output tilemap data   
      ld a,(de);the char
      add a,diff_tile_ascii
      out ($be),a
      ld a,0 ;one zero
      out ($be),a
      inc de;move pointer in data
      inc hl;move pointer on screen
            
      dec b
      jr nz,-
    pop af
        
    ret
    
    
    
  
