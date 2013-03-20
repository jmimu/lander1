Title_Music1_start:
  ;do** do** p do** sol* p
  .db $00,$6B,32 ,$00 ,$6B ,32  ,$00 ,$00 ,32  ,$00 ,$6B ,32  ,$00 ,$8F ,32  ,$00 ,$00 ,32  
  ;si* si* p si* mi* p
  .db $00,$71,32 ,$00 ,$71 ,32  ,$00 ,$00 ,32  ,$00 ,$71 ,32  ,$00 ,$AA ,32  ,$00 ,$00 ,32 
  ;re* sol* si re* re* do* dooo*
  .db $00,$BE,32 ,$00 ,$8F ,32  ,$00 ,$E2 ,32  ,$00 ,$BE ,32  ,$00 ,$BE ,32  ,$00 ,$D6 ,32  ,$00 ,$D6 ,96, $00,$00,64,$FF,$FF,00
Title_Music1_end:

Title_Music2_start:
  ;laa_ dooo siii_ dooo reee siiii_ dooo
  ;.db $01,$FC,64 ,$01,$AC,96 ,$01,$C5,96 ,$01,$AC,96 ,$01,$7D,96 ,$01,$C5,128 ,$01,$AC,96 ,$00,$00,64,$FF,$FF,00
  ;.db $00,$FE,64 ,$00,$D6,96 ,$00,$E2,96 ,$00,$D6,96 ,$00,$BE,96 ,$00,$E2,128 ,$00,$D6,96 ,$00,$00,64,$FF,$FF,00
  ;.db $00,$7F,64 ,$00,$6B,96 ,$00,$71,96 ,$00,$6B,96 ,$00,$5F,96 ,$00,$71,128 ,$00,$6B,96 ,$00,$00,64,$FF,$FF,00
  .db $00,$6B,96 ,$00,$00,64,$FF,$FF,00
Title_Music2_end:




Title_TilesStart:
; Tile index $000
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00
; Tile index $001
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $C3 $FF $00 $CF $30 $F3 $0C
; Tile index $002
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $C7 $FF $00 $C7 $AB $F7 $18 $F7 $B3 $DF $38 $DB $15 $FF $38
; Tile index $003
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $FB $FF $00 $FF $E1 $FB $04 $F9 $EE $F5 $0E $EF $D6 $FD $0E $EF $8E $FD $1E $CD $BC $DF $3E
; Tile index $004
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $FC $FF $00 $FE $E1 $FF $00 $FF $C4 $F3 $0F $E2 $0D $DE $3F $EF $10 $BB $7C $67 $A8 $FF $70
; Tile index $005
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $1F $FF $00 $FF $0F $1F $E0 $5F $E7 $EF $F0 $6F $77 $EF $F0 $6F $F7 $9F $60 $FF $0F $FF $00
; Tile index $006
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FE $FF $00 $FF $FE $FF $00 $FE $FF $FF $00 $FF $FE $FF $00
; Tile index $007
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $F0 $FF $00 $FF $80 $F9 $06 $8B $66 $DF $3F $F0 $BF $7F $FF $B9 $66 $F6 $F9 $7E $F1 $AE $71
; Tile index $008
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $1F $FF $00 $7F $4E $9F $E0 $DE $C5 $FF $E0 $FF $40 $FD $E3 $7E $E1 $DB $E7
; Tile index $009
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $81 $FF $00 $C7 $24 $99 $7E $BC $FF $7E $FF $86 $03 $FF $FF $7F $81 $7B $87
; Tile index $00A
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $87 $FF $00 $BF $57 $EF $30 $DF $23 $BF $70 $87 $7B $FF $30 $FF $13 $77 $B8 $77 $3B $D7 $B8
; Tile index $00B
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $C7 $FF $00 $FF $92 $C7 $38
; Tile index $00C
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $F7 $CB $EF $10 $CF $B8 $D7 $38 $DF $18 $F6 $39 $C8 $35 $B7 $7B $AF $21 $FB $77
; Tile index $00D
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $F8 $FF $00 $FD $82 $FE $01 $E5 $13 $CF $3F $5C $BF $7F $FF $CA $ED $F1 $FE $FF $80 $DF $E0
; Tile index $00E
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $7F $FF $00 $7F $B8 $FF $00 $BB $45 $FC $83 $BD $4B $F7 $8F $F6 $0F $EF $1F $F9 $42 $F6 $0F
; Tile index $00F
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $03 $FF $00 $0B $14 $E7 $F8 $F7 $FA $FC $FF $86 $0F $FF $FF $F3 $0D $FB $07
; Tile index $010
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FE $FF $00 $FF $FE $FF $00 $FE $7D $FF $00 $7F $BC $7E $81 $FE $BD $7E $81
; Tile index $011
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $1F $BF $40 $BF $CF $5F $E0 $9F $6F $FF $C0 $3F $9F $FF $C0 $3F $DF $BF $C0
; Tile index $012
.db $FF $FE $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00
; Tile index $013
.db $FF $FC $FF $00 $FC $FA $FF $01 $FF $FB $FD $03 $FB $FD $FF $03 $FF $FB $FD $03 $FF $F9 $FE $01 $FF $FC $FF $00 $FF $FC $FF $00
; Tile index $014
.db $AB $1E $7D $FE $65 $FA $FD $FE $A7 $98 $DF $E0 $BF $40 $FF $80 $C2 $85 $F9 $FE $FC $7E $FF $FF $4E $BB $87 $7F $F3 $0A $FF $07
; Tile index $015
.db $DB $1C $FB $3C $FB $1C $FD $3E $8D $7C $FF $3E $FE $0E $A7 $7F $A7 $5B $BF $67 $2F $97 $FB $67 $2D $D3 $7B $E7 $EB $D5 $7F $E3
; Tile index $016
.db $BF $5C $FF $3E $B6 $25 $FF $7E $4C $F7 $67 $FE $58 $C7 $F7 $EE $B9 $C6 $DE $E7 $B9 $86 $FE $C7 $71 $8E $BE $C7 $7B $07 $F6 $8F
; Tile index $017
.db $AF $71 $6F $F0 $B3 $6C $77 $F8 $7F $BA $FC $7F $CF $1F $BF $7F $E5 $1C $F3 $0F $FE $61 $FF $00 $FF $70 $FF $00 $FE $61 $FF $00
; Tile index $018
.db $FF $FF $FF $00 $FF $3F $FF $00 $7F $87 $FF $00 $07 $DB $EF $F0 $73 $F5 $FF $F8 $FB $5D $3B $FC $CB $3D $DB $3C $37 $D9 $BB $7C
; Tile index $019
.db $FF $FE $FF $00 $FF $FF $FF $00 $FF $FE $FF $00 $FF $FE $FF $00 $FF $FE $FF $00 $FF $FE $FF $00 $FF $FE $FF $00 $FF $FE $FF $00
; Tile index $01A
.db $DA $67 $AD $73 $96 $2B $E7 $7F $D7 $2C $FE $7F $35 $FE $FB $7C $0F $E1 $F7 $78 $9F $67 $5F $E0 $3F $CF $5F $E0 $9F $EF $7F $C0
; Tile index $01B
.db $14 $AB $FE $C7 $FF $8E $75 $8E $ED $12 $FF $0C $F3 $4D $EB $1C $F7 $C9 $EB $1C $FF $CD $EB $1C $F5 $CA $EF $1C $EE $D7 $FD $0E
; Tile index $01C
.db $FD $31 $FF $03 $FF $7B $FD $03 $FD $FB $FD $03 $FD $FB $FD $03 $FD $F3 $FD $03 $F9 $E5 $FF $03 $FF $0A $F7 $0F $C7 $3C $EE $1F
; Tile index $01D
.db $AF $5B $D7 $B8 $0F $F0 $FF $98 $E3 $0C $FF $98 $B6 $59 $EB $9C $B3 $4D $EA $9D $68 $13 $FD $8F $F1 $07 $7F $8F $F6 $6F $F7 $0F
; Tile index $01E
.db $B7 $50 $FF $38 $BB $34 $FF $78 $36 $F9 $7B $FC $EE $5D $FA $FD $FB $9C $CD $FF $B7 $CD $AF $DF $B7 $47 $FF $8F $77 $8E $77 $8F
; Tile index $01F
.db $8D $72 $6F $F1 $FE $C0 $7F $E1 $DF $68 $DF $E1 $DC $AB $FF $C1 $BD $DB $BD $C3 $3E $D9 $FD $83 $7E $39 $FD $83 $FD $3B $7D $83
; Tile index $020
.db $BF $C0 $BF $C0 $6F $90 $B0 $CF $24 $9E $FF $FF $C6 $F5 $F9 $FE $0F $F0 $BF $C0 $79 $06 $FE $81 $46 $21 $9F $FF $FC $FF $FF $FF
; Tile index $021
.db $FC $E7 $FB $06 $FD $76 $FA $07 $FB $62 $FF $07 $FB $27 $F7 $0F $FB $07 $F7 $0F $9A $63 $1F $E7 $E8 $D3 $FE $E7 $FC $47 $9B $E6
; Tile index $022
.db $F5 $0E $FB $07 $3F $D4 $CE $3F $8D $76 $FB $FC $17 $A9 $CF $F0 $CF $B1 $DF $E0 $D3 $EC $F7 $F8 $18 $BD $7E $FF $C3 $37 $EF $1F
; Tile index $023
.db $FF $38 $7F $81 $FE $79 $FD $03 $FC $F9 $FF $03 $FA $F5 $FF $03 $F8 $F6 $FB $07 $FA $63 $FE $07 $73 $8E $FE $07 $3E $81 $F7 $CE
; Tile index $024
.db $BF $5F $FF $80 $7F $3F $FF $80 $7F $BF $7F $80 $7F $BF $FF $00 $FF $7F $FF $00 $FF $7F $FF $00 $FF $7F $FF $00 $FF $7F $FF $00
; Tile index $025
.db $FE $FD $FE $01 $FF $FC $FD $03 $FF $FC $FE $01 $FF $FE $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00
; Tile index $026
.db $0C $07 $FE $FF $FD $FA $FD $FE $13 $1C $E7 $F8 $FF $03 $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $60 $FF $FF $FF $A0
; Tile index $027
.db $5D $43 $FC $E3 $7F $8C $5F $E0 $FF $1F $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $3C $FF $FF $FF $62
; Tile index $028
.db $FB $26 $77 $8F $FE $62 $FF $07 $FC $F3 $F9 $06 $FF $F8 $FF $00 $FF $FF $FF $00 $FF $FF $FF $02 $FF $FF $FF $42 $FF $FF $FF $42
; Tile index $029
.db $71 $80 $EF $1F $EF $0F $FF $1F $F1 $41 $EE $1F $FF $E0 $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00
; Tile index $02A
.db $7F $E3 $F7 $F8 $5F $A7 $DF $E0 $BF $4F $7F $80 $FF $3F $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $02 $FF $FF $FF $05
; Tile index $02B
.db $FF $FE $FF $00 $FF $FE $FF $00 $FF $FE $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $06 $FF $FF $FF $06
; Tile index $02C
.db $1F $6F $FF $C0 $1F $6F $FF $C0 $FF $5F $3F $C0 $FF $1F $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $09 $FF $FF $FF $09
; Tile index $02D
.db $F9 $E6 $F7 $0F $FF $F1 $FB $07 $FC $FB $FE $01 $FF $FC $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $82 $FF $FF $FF $82
; Tile index $02E
.db $23 $18 $FD $FE $BF $D1 $E7 $F8 $DF $A7 $3F $C0 $FF $1F $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $48 $FF $FF $FF $44
; Tile index $02F
.db $F2 $EE $FF $07 $FF $E0 $FE $07 $FB $F4 $F9 $06 $FF $F9 $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $09 $FF $FF $FF $11
; Tile index $030
.db $F4 $2B $FE $07 $FB $74 $FD $02 $FF $F9 $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $FC $FF $FF $FF $00
; Tile index $031
.db $FD $79 $FF $03 $FD $79 $FF $03 $FF $F9 $FC $03 $FF $FC $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $FC $FF $FF $FF $86
; Tile index $032
.db $F3 $E4 $F9 $FE $AF $50 $9F $E0 $FF $0F $7F $80 $FF $7F $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $1F $FF $FF $FF $30
; Tile index $033
.db $FB $02 $FE $07 $FF $62 $FE $07 $FB $F6 $F9 $06 $FF $F8 $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $02 $FF $FF $FF $85
; Tile index $034
.db $F9 $06 $FD $03 $FF $78 $FE $01 $FF $7C $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $07 $FF $FF $FF $04
; Tile index $035
.db $99 $E6 $FF $C0 $E5 $52 $BD $CE $F1 $06 $FD $0E $F7 $E9 $FB $04 $FF $F3 $FF $00 $FF $FF $FF $00 $FF $FF $FF $E6 $FF $FF $FF $32
; Tile index $036
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $0C $FF $FF $FF $08
; Tile index $037
.db $FF $FF $FF $20 $FF $FF $FF $20 $FF $FF $FF $20 $FF $FF $FF $20 $FF $FF $FF $20 $FF $FF $FF $20 $FF $FF $FF $20 $FF $FF $FF $F8
; Tile index $038
.db $FF $FF $FF $C0 $FF $FF $FF $80 $FF $FF $FF $BC $FF $FF $FF $C6 $FF $FF $FF $82 $FF $FF $FF $82 $FF $FF $FF $46 $FF $FF $FF $3C
; Tile index $039
.db $FF $FF $FF $FA $FF $FF $FF $43 $FF $FF $FF $42 $FF $FF $FF $42 $FF $FF $FF $42 $FF $FF $FF $42 $FF $FF $FF $42 $FF $FF $FF $3A
; Tile index $03A
.db $FF $FF $FF $F0 $FF $FF $FF $18 $FF $FF $FF $08 $FF $FF $FF $08 $FF $FF $FF $08 $FF $FF $FF $08 $FF $FF $FF $08 $FF $FF $FF $08
; Tile index $03B
.db $FF $FF $FF $05 $FF $FF $FF $08 $FF $FF $FF $08 $FF $FF $FF $08 $FF $FF $FF $1F $FF $FF $FF $10 $FF $FF $FF $10 $FF $FF $FF $20
; Tile index $03C
.db $FF $FF $FF $05 $FF $FF $FF $84 $FF $FF $FF $84 $FF $FF $FF $84 $FF $FF $FF $C4 $FF $FF $FF $44 $FF $FF $FF $44 $FF $FF $FF $24
; Tile index $03D
.db $FF $FF $FF $09 $FF $FF $FF $89 $FF $FF $FF $89 $FF $FF $FF $49 $FF $FF $FF $49 $FF $FF $FF $29 $FF $FF $FF $19 $FF $FF $FF $19
; Tile index $03E
.db $FF $FF $FF $42 $FF $FF $FF $22 $FF $FF $FF $22 $FF $FF $FF $12 $FF $FF $FF $12 $FF $FF $FF $0A $FF $FF $FF $06 $FF $FF $FF $06
; Tile index $03F
.db $FF $FF $FF $44 $FF $FF $FF $44 $FF $FF $FF $42 $FF $FF $FF $42 $FF $FF $FF $41 $FF $FF $FF $41 $FF $FF $FF $41 $FF $FF $FF $40
; Tile index $040
.db $FF $FF $FF $11 $FF $FF $FF $11 $FF $FF $FF $21 $FF $FF $FF $21 $FF $FF $FF $41 $FF $FF $FF $41 $FF $FF $FF $41 $FF $FF $FF $81
; Tile index $041
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $FC $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $FC
; Tile index $042
.db $FF $FF $FF $82 $FF $FF $FF $82 $FF $FF $FF $86 $FF $FF $FF $FC $FF $FF $FF $86 $FF $FF $FF $82 $FF $FF $FF $82 $FF $FF $FF $81
; Tile index $043
.db $FF $FF $FF $20 $FF $FF $FF $20 $FF $FF $FF $18 $FF $FF $FF $07 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $21 $FF $FF $FF $1F
; Tile index $044
.db $FF $FF $FF $05 $FF $FF $FF $08 $FF $FF $FF $08 $FF $FF $FF $08 $FF $FF $FF $9F $FF $FF $FF $90 $FF $FF $FF $90 $FF $FF $FF $20
; Tile index $045
.db $FF $FF $FF $04 $FF $FF $FF $84 $FF $FF $FF $84 $FF $FF $FF $87 $FF $FF $FF $C4 $FF $FF $FF $44 $FF $FF $FF $44 $FF $FF $FF $24
; Tile index $046
.db $FF $FF $FF $11 $FF $FF $FF $11 $FF $FF $FF $30 $FF $FF $FF $E0 $FF $FF $FF $30 $FF $FF $FF $10 $FF $FF $FF $10 $FF $FF $FF $08
; Tile index $047
.db $FF $FF $FF $10 $FF $FF $FF $10 $FF $FF $FF $A0 $FF $FF $FF $40 $FF $FF $FF $40 $FF $FF $FF $40 $FF $FF $FF $40 $FF $FF $FF $40
; Tile index $048
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $07
; Tile index $049
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $C1
; Tile index $04A
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $F0
; Tile index $04B
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $FC
; Tile index $04C
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $11
; Tile index $04D
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $82
; Tile index $04E
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $80
; Tile index $04F
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $3E
; Tile index $050
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $86
; Tile index $051
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $06
; Tile index $052
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $7E
; Tile index $053
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $7F
; Tile index $054
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $D3
; Tile index $055
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $E1
; Tile index $056
.db $FF $FF $FF $0C $FF $FF $FF $18 $FF $FF $FF $10 $FF $FF $FF $10 $FF $FF $FF $10 $FF $FF $FF $10 $FF $FF $FF $18 $FF $FF $FF $0C
; Tile index $057
.db $FF $FF $FF $23 $FF $FF $FF $06 $FF $FF $FF $04 $FF $FF $FF $04 $FF $FF $FF $04 $FF $FF $FF $04 $FF $FF $FF $06 $FF $FF $FF $23
; Tile index $058
.db $FF $FF $FF $18 $FF $FF $FF $0C $FF $FF $FF $04 $FF $FF $FF $04 $FF $FF $FF $04 $FF $FF $FF $04 $FF $FF $FF $0C $FF $FF $FF $18
; Tile index $059
.db $FF $FF $FF $83 $FF $FF $FF $81 $FF $FF $FF $80 $FF $FF $FF $80 $FF $FF $FF $80 $FF $FF $FF $80 $FF $FF $FF $81 $FF $FF $FF $83
; Tile index $05A
.db $FF $FF $FF $11 $FF $FF $FF $91 $FF $FF $FF $91 $FF $FF $FF $91 $FF $FF $FF $91 $FF $FF $FF $91 $FF $FF $FF $91 $FF $FF $FF $11
; Tile index $05B
.db $FF $FF $FF $82 $FF $FF $FF $42 $FF $FF $FF $22 $FF $FF $FF $22 $FF $FF $FF $12 $FF $FF $FF $12 $FF $FF $FF $0A $FF $FF $FF $06
; Tile index $05C
.db $FF $FF $FF $30 $FF $FF $FF $20 $FF $FF $FF $40 $FF $FF $FF $40 $FF $FF $FF $41 $FF $FF $FF $40 $FF $FF $FF $20 $FF $FF $FF $30
; Tile index $05D
.db $FF $FF $FF $40 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $C0 $FF $FF $FF $40 $FF $FF $FF $40 $FF $FF $FF $40
; Tile index $05E
.db $FF $FF $FF $61 $FF $FF $FF $C0 $FF $FF $FF $80 $FF $FF $FF $80 $FF $FF $FF $80 $FF $FF $FF $80 $FF $FF $FF $C0 $FF $FF $FF $61
; Tile index $05F
.db $FF $FF $FF $C6 $FF $FF $FF $65 $FF $FF $FF $25 $FF $FF $FF $24 $FF $FF $FF $24 $FF $FF $FF $24 $FF $FF $FF $64 $FF $FF $FF $C4
; Tile index $060
.db $FF $FF $FF $06 $FF $FF $FF $0A $FF $FF $FF $0A $FF $FF $FF $92 $FF $FF $FF $92 $FF $FF $FF $62 $FF $FF $FF $62 $FF $FF $FF $02
; Tile index $061
.db $FF $FF $FF $43 $FF $FF $FF $41 $FF $FF $FF $41 $FF $FF $FF $43 $FF $FF $FF $7E $FF $FF $FF $40 $FF $FF $FF $40 $FF $FF $FF $40
; Tile index $062
.db $FF $FF $FF $40 $FF $FF $FF $40 $FF $FF $FF $40 $FF $FF $FF $7F $FF $FF $FF $40 $FF $FF $FF $40 $FF $FF $FF $40 $FF $FF $FF $40
; Tile index $063
.db $FF $FF $FF $04 $FF $FF $FF $04 $FF $FF $FF $04 $FF $FF $FF $04 $FF $FF $FF $04 $FF $FF $FF $04 $FF $FF $FF $04 $FF $FF $FF $04
; Tile index $064
.db $FF $FF $FF $10 $FF $FF $FF $10 $FF $FF $FF $10 $FF $FF $FF $10 $FF $FF $FF $10 $FF $FF $FF $10 $FF $FF $FF $10 $FF $FF $FF $10
; Tile index $065
.db $FF $FF $FF $86 $FF $FF $FF $8C $FF $FF $FF $88 $FF $FF $FF $88 $FF $FF $FF $88 $FF $FF $FF $88 $FF $FF $FF $8C $FF $FF $FF $86
; Tile index $066
.db $FF $FF $FF $31 $FF $FF $FF $19 $FF $FF $FF $09 $FF $FF $FF $09 $FF $FF $FF $09 $FF $FF $FF $09 $FF $FF $FF $19 $FF $FF $FF $31
; Tile index $067
.db $FF $FF $FF $84 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00
; Tile index $068
.db $FF $FF $FF $02 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00
; Tile index $069
.db $FF $FF $FF $04 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00
; Tile index $06A
.db $FF $FF $FF $10 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00
; Tile index $06B
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $E4 $E7 $E7 $18 $F7 $F8 $E0 $00 $C0 $D0 $C0 $20 $C0 $D0 $C0 $20
; Tile index $06C
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $07 $07 $07 $F8 $13 $13 $EB $04 $C3 $0B $03 $04 $03 $0B $03 $04 $03 $0B $03 $04
; Tile index $06D
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $83 $83 $83 $7C $29 $B1 $C1 $02
; Tile index $06E
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $E3 $E3 $E3 $1C
; Tile index $06F
.db $C0 $D0 $C0 $20 $C0 $D0 $C0 $20 $C0 $D0 $C0 $20 $C0 $D0 $C0 $20 $C0 $D0 $C0 $20 $C0 $D0 $C0 $20 $D0 $D0 $C0 $20 $D0 $D0 $C0 $20
; Tile index $070
.db $0F $07 $07 $00 $0F $07 $07 $00 $0F $07 $07 $00 $07 $07 $07 $00 $05 $05 $05 $02 $05 $05 $05 $02 $01 $05 $05 $02 $01 $05 $05 $02
; Tile index $071
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $8F $8F $8F $70 $A5 $ED $DD $02
; Tile index $072
.db $F8 $F8 $FA $04 $F8 $FA $F8 $04 $FA $F8 $F8 $04 $F8 $F8 $F8 $04 $FC $FC $FC $00 $FC $FC $FC $00 $F8 $FC $FC $00 $F0 $F0 $F4 $08
; Tile index $073
.db $05 $01 $01 $02 $01 $05 $01 $02 $05 $05 $01 $02 $01 $01 $05 $02 $01 $01 $05 $02 $03 $07 $07 $00 $07 $07 $07 $00 $03 $03 $03 $04
; Tile index $074
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FE $FE $FE $01 $F0 $F2 $F3 $0C $F5 $F6 $F8 $00 $F8 $F0 $F0 $00 $F0 $F8 $F0 $00
; Tile index $075
.db $FF $FF $FF $00 $FF $FF $FF $00 $F0 $F0 $F0 $0F $60 $78 $7F $80 $20 $40 $80 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00
; Tile index $076
.db $FF $FF $FF $00 $FF $FF $FF $00 $1F $1F $1F $E0 $07 $17 $F7 $08 $6B $1F $07 $00 $05 $01 $03 $00 $03 $01 $00 $00 $01 $00 $00 $00
; Tile index $077
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $7F $7F $7F $80 $3F $3F $BF $40
; Tile index $078
.db $FF $FF $FF $00 $FF $FF $FF $00 $F6 $F6 $F7 $08 $C8 $DC $D0 $20 $D0 $D0 $C0 $20 $C0 $D0 $C0 $20 $C0 $D0 $C0 $20 $C0 $D0 $C0 $20
; Tile index $079
.db $C0 $C0 $C0 $3F $C0 $B0 $FF $00 $50 $60 $80 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00
; Tile index $07A
.db $01 $01 $01 $FE $F9 $F8 $07 $00 $06 $01 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00
; Tile index $07B
.db $FF $FF $FF $00 $7F $7F $7F $80 $AF $EF $6F $10 $07 $57 $37 $08 $23 $0B $1B $04 $17 $07 $0F $00 $03 $0B $07 $00 $07 $07 $03 $00
; Tile index $07C
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FE $FE $FE $01 $FF $FF $FF $00
; Tile index $07D
.db $FF $FF $FF $00 $FE $FF $FF $00 $FA $F8 $FC $00 $C8 $D8 $D0 $20 $80 $90 $A0 $40 $80 $E0 $C0 $00 $C0 $C0 $80 $00 $00 $00 $80 $00
; Tile index $07E
.db $C1 $BF $FF $00 $21 $40 $80 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $07 $0F $00 $00
; Tile index $07F
.db $D0 $D0 $C0 $20 $B0 $B0 $60 $00 $20 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $C0 $00 $00
; Tile index $080
.db $01 $05 $05 $02 $01 $05 $05 $02 $01 $05 $05 $02 $01 $05 $05 $02 $01 $05 $05 $02 $01 $01 $05 $02 $01 $01 $05 $02 $01 $01 $05 $02
; Tile index $081
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FE $FE $FE $01 $FE $FF $FF $00
; Tile index $082
.db $FF $FF $FF $00 $FF $FF $FF $00 $FC $FE $FF $00 $F4 $FC $F8 $00 $D0 $F0 $E0 $00 $00 $20 $40 $80 $00 $40 $80 $00 $00 $80 $00 $00
; Tile index $083
.db $FF $FF $FF $00 $C0 $C0 $C0 $3F $84 $FC $03 $00 $01 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00
; Tile index $084
.db $FF $FF $FF $00 $7F $7F $7F $80 $7F $FF $FF $00 $1F $BF $7F $00 $17 $1F $0F $00 $02 $02 $06 $01 $02 $03 $01 $00 $01 $01 $00 $00
; Tile index $085
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FC $FC $FC $03 $F4 $F7 $F7 $08 $C8 $EF $F0 $00 $00 $00 $40 $80 $00 $00 $40 $80
; Tile index $086
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $1F $1F $1F $E0 $0C $3C $FC $03 $42 $81 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00
; Tile index $087
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $1F $1F $1F $E0 $1E $3E $FE $01 $4E $2E $1E $01 $03 $03 $0B $04
; Tile index $088
.db $FE $FE $FE $01 $F6 $F6 $F7 $08 $EA $EE $EC $10 $A4 $A0 $B8 $40 $30 $A0 $C0 $00 $40 $80 $00 $00 $00 $00 $80 $00 $40 $80 $80 $00
; Tile index $089
.db $00 $C0 $81 $00 $81 $01 $00 $00 $00 $01 $00 $00 $01 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00
; Tile index $08A
.db $FF $FF $FF $00 $7F $7F $7F $80 $7F $7F $7F $80 $7F $7F $7F $80 $7F $7F $7F $80 $FF $FF $FF $00 $7F $FF $FF $00 $7F $FF $FF $00
; Tile index $08B
.db $F4 $F4 $F0 $08 $F0 $F4 $F0 $08 $F4 $F0 $F0 $08 $F0 $F0 $F0 $08 $F0 $F0 $F0 $08 $F8 $F8 $F8 $00 $F0 $F8 $F8 $00 $F0 $F0 $F8 $00
; Tile index $08C
.db $0B $03 $03 $04 $03 $0B $03 $04 $0B $0B $03 $04 $03 $03 $0B $04 $03 $03 $0B $04 $07 $0F $0F $00 $07 $0F $0F $00 $0F $0F $0F $00
; Tile index $08D
.db $F8 $F8 $F0 $00 $F8 $F8 $F0 $00 $F1 $F0 $F8 $00 $F4 $F1 $FB $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FE $FE $FE $01
; Tile index $08E
.db $00 $00 $00 $00 $00 $00 $00 $00 $40 $C2 $3C $00 $CD $CF $CE $30 $FC $FD $FD $02 $FF $FF $FF $00 $E0 $E0 $E0 $1F $E0 $FD $FF $00
; Tile index $08F
.db $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $80 $00 $00 $80 $80 $00 $00 $80 $80 $00 $00 $00 $80 $00 $00
; Tile index $090
.db $BF $BF $3F $40 $3F $FF $7F $00 $9F $1F $5F $20 $9F $1F $5F $20 $1F $1F $5F $20 $1F $1F $5F $20 $1F $1F $5F $20 $1F $1F $5F $20
; Tile index $091
.db $D0 $C0 $C0 $20 $F0 $E0 $E0 $00 $F0 $E0 $E0 $00 $E0 $E0 $E0 $00 $A0 $80 $A0 $40 $80 $A0 $A0 $40 $80 $A0 $A0 $40 $80 $A0 $A0 $40
; Tile index $092
.db $08 $03 $07 $00 $0A $0A $02 $05 $0B $0B $03 $04 $0B $0B $03 $04 $03 $03 $0B $04 $03 $03 $0B $04 $03 $03 $0B $04 $03 $03 $0B $04
; Tile index $093
.db $10 $C0 $E0 $00 $E0 $E0 $F0 $00 $D8 $D8 $D0 $20 $F0 $F0 $F8 $00 $F0 $F8 $F8 $00 $F0 $F8 $F8 $00 $F0 $F8 $F8 $00 $E0 $E8 $E8 $10
; Tile index $094
.db $01 $07 $03 $00 $05 $01 $03 $00 $07 $03 $01 $00 $01 $03 $01 $00 $01 $03 $01 $00 $01 $03 $01 $00 $01 $03 $01 $00 $03 $01 $01 $00
; Tile index $095
.db $FC $FD $FD $02 $FC $FC $FD $02 $FE $FE $FF $00 $F9 $FB $FA $04 $F8 $F9 $FA $04 $F9 $F8 $FA $04 $FA $FA $F8 $04 $FA $FA $F8 $04
; Tile index $096
.db $80 $80 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00
; Tile index $097
.db $34 $1C $0C $03 $4F $0F $2F $10 $7F $7F $3F $00 $9F $1F $5F $20 $BF $FF $7F $00 $BF $FF $7F $00 $7F $7F $FF $00 $3F $3F $BF $40
; Tile index $098
.db $90 $C0 $E0 $00 $C0 $C0 $D0 $20 $C0 $C0 $D0 $20 $C0 $C0 $D0 $20 $C0 $C0 $D0 $20 $C0 $C0 $D0 $20 $C0 $C0 $D0 $20 $C0 $C0 $D0 $20
; Tile index $099
.db $01 $01 $05 $02 $01 $01 $05 $02 $01 $01 $05 $02 $01 $01 $05 $02 $01 $01 $05 $02 $05 $05 $01 $02 $05 $05 $01 $02 $05 $05 $01 $02
; Tile index $09A
.db $FF $FF $FE $00 $FD $FC $FE $00 $FC $FE $FC $00 $F8 $FC $FC $00 $F8 $F8 $FC $00 $EC $EC $E8 $10 $F8 $FC $F8 $00 $EC $E8 $E8 $10
; Tile index $09B
.db $00 $00 $00 $00 $00 $00 $00 $00 $01 $00 $00 $00 $01 $01 $00 $00 $02 $00 $01 $00 $00 $03 $01 $00 $03 $03 $01 $00 $03 $01 $00 $00
; Tile index $09C
.db $38 $00 $00 $00 $D9 $7C $3E $00 $3E $3F $BF $40 $FF $FF $FF $00 $7F $7F $7F $80 $FF $FF $FF $00 $00 $00 $00 $FF $80 $83 $7F $00
; Tile index $09D
.db $00 $00 $00 $00 $00 $00 $00 $00 $00 $80 $00 $00 $40 $80 $80 $00 $C0 $C0 $80 $00 $A0 $C0 $C0 $00 $40 $60 $40 $80 $60 $E0 $C0 $00
; Tile index $09E
.db $7F $7F $FF $00 $BF $7F $7F $00 $7F $7F $3F $00 $1F $3F $3F $00 $1F $1F $3F $00 $27 $37 $17 $08 $07 $27 $17 $08 $07 $07 $17 $08
; Tile index $09F
.db $00 $00 $40 $80 $00 $40 $40 $80 $00 $40 $40 $80 $C0 $C0 $C0 $00 $C0 $C0 $C0 $00 $C0 $C0 $C0 $00 $A0 $80 $80 $40 $80 $A0 $80 $40
; Tile index $0A0
.db $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $03 $23 $1C $00 $29 $29 $09 $16 $0F $2F $0F $10 $0F $2F $0F $10 $2F $0F $0F $10
; Tile index $0A1
.db $13 $03 $0B $04 $03 $1B $0B $04 $07 $1F $0F $00 $47 $97 $07 $08 $3F $BF $CF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00
; Tile index $0A2
.db $40 $40 $00 $80 $20 $00 $40 $80 $E6 $E3 $C1 $00 $D7 $F7 $EF $00 $EF $EF $EF $10 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00
; Tile index $0A3
.db $00 $00 $00 $00 $80 $80 $00 $00 $80 $C0 $80 $00 $40 $40 $00 $80 $00 $00 $40 $80 $00 $00 $40 $80 $80 $C0 $C0 $00 $C0 $C0 $C0 $00
; Tile index $0A4
.db $3F $3F $BF $40 $BF $BF $3F $40 $3F $BF $3F $40 $BF $3F $3F $40 $3F $3F $3F $40 $7F $7F $7F $00 $7F $7F $7F $00 $3F $7F $7F $00
; Tile index $0A5
.db $E0 $E0 $E8 $10 $E8 $E8 $E0 $10 $E0 $E8 $E0 $10 $E8 $E0 $E0 $10 $E0 $E0 $E0 $10 $E0 $E0 $E0 $10 $F0 $F0 $F0 $00 $F0 $F0 $F0 $00
; Tile index $0A6
.db $0F $0F $0F $00 $07 $07 $07 $08 $17 $07 $07 $08 $07 $17 $07 $08 $17 $17 $07 $08 $07 $07 $17 $08 $07 $07 $17 $08 $07 $17 $17 $08
; Tile index $0A7
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FE $FE $FE $01 $FF $FF $FF $00 $FC $FC $FD $02
; Tile index $0A8
.db $F4 $F6 $F7 $08 $F5 $F6 $F8 $00 $E8 $E0 $F0 $00 $C0 $C0 $E0 $00 $80 $80 $C0 $00 $00 $00 $80 $00 $80 $80 $00 $00 $80 $00 $00 $00
; Tile index $0A9
.db $42 $81 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $10 $30 $0F $00 $50 $71 $31 $0E $DC $DD $5D $22
; Tile index $0AA
.db $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00
; Tile index $0AB
.db $1F $1F $5F $20 $1F $1F $5F $20 $1F $5F $5F $20 $1F $5F $5F $20 $1F $5F $5F $20 $7F $7F $7F $00 $7F $7F $7F $00 $7F $7F $7F $00
; Tile index $0AC
.db $80 $A0 $A0 $40 $80 $80 $A0 $40 $80 $80 $A0 $40 $80 $80 $A0 $40 $80 $80 $A0 $40 $80 $80 $A0 $40 $A0 $A0 $80 $40 $A0 $A0 $80 $40
; Tile index $0AD
.db $03 $03 $0B $04 $03 $03 $0B $04 $03 $03 $0B $04 $03 $0B $0B $04 $03 $0B $0B $04 $03 $0B $0B $04 $03 $0B $0B $04 $03 $0B $0B $04
; Tile index $0AE
.db $E0 $E8 $E8 $10 $E0 $E8 $E8 $10 $E0 $E8 $E8 $10 $E0 $E8 $E8 $10 $E0 $E8 $E8 $10 $E0 $E8 $E8 $10 $E0 $E8 $E8 $10 $E0 $E0 $E8 $10
; Tile index $0AF
.db $01 $03 $01 $00 $01 $03 $01 $00 $00 $02 $00 $01 $00 $02 $00 $01 $00 $02 $00 $01 $00 $02 $00 $01 $00 $02 $00 $01 $00 $02 $00 $01
; Tile index $0B0
.db $FA $FA $F8 $04 $FA $FA $F8 $04 $FA $FA $F8 $04 $FA $FA $F8 $04 $FA $FA $F8 $04 $F9 $F8 $FA $04 $F8 $F9 $FA $04 $FD $FF $FE $00
; Tile index $0B1
.db $3F $3F $BF $40 $3F $3F $BF $40 $3F $3F $BF $40 $7F $7F $FF $00 $BF $FF $7F $00 $1F $DF $5F $20 $9F $1F $5F $20 $7F $7F $3F $00
; Tile index $0B2
.db $C0 $C0 $D0 $20 $C0 $C0 $D0 $20 $C0 $C0 $D0 $20 $C0 $C0 $D0 $20 $C0 $C0 $D0 $20 $C0 $D0 $D0 $20 $C0 $D0 $D0 $20 $C0 $D0 $D0 $20
; Tile index $0B3
.db $05 $05 $01 $02 $05 $05 $01 $02 $05 $05 $01 $02 $01 $05 $01 $02 $01 $05 $01 $02 $01 $05 $01 $02 $01 $05 $01 $02 $01 $05 $01 $02
; Tile index $0B4
.db $FC $F8 $F8 $00 $EC $E8 $E8 $10 $FC $F8 $F8 $00 $F8 $FC $F8 $00 $F8 $FC $F8 $00 $FC $FC $F8 $00 $FA $F8 $FC $00 $F8 $FA $FC $00
; Tile index $0B5
.db $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $02 $00 $01 $00 $00 $01 $01 $00 $01 $01 $00 $00
; Tile index $0B6
.db $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $03 $83 $FC $00 $00 $00 $00 $FF $BF $BF $BF $40
; Tile index $0B7
.db $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $8C $F0 $00 $00 $07 $07 $07 $F8 $FF $FF $FF $00
; Tile index $0B8
.db $17 $17 $07 $08 $17 $17 $07 $08 $07 $17 $07 $08 $07 $17 $07 $08 $1F $0F $0F $00 $1F $0F $0F $00 $0F $FF $FF $00 $0F $0F $0F $F0
; Tile index $0B9
.db $80 $A0 $80 $40 $A0 $A0 $80 $40 $A0 $A0 $80 $40 $80 $80 $A0 $40 $80 $80 $A0 $40 $80 $80 $A0 $40 $80 $A0 $A0 $40 $80 $A0 $A0 $40
; Tile index $0BA
.db $1F $1F $1F $00 $1F $1F $1F $00 $1F $1F $1F $00 $07 $17 $17 $08 $07 $17 $17 $08 $07 $07 $17 $08 $07 $07 $17 $08 $07 $07 $17 $08
; Tile index $0BB
.db $C0 $C0 $C0 $00 $80 $80 $80 $40 $A0 $80 $80 $40 $80 $A0 $80 $40 $80 $A0 $80 $40 $A0 $A0 $80 $40 $80 $80 $A0 $40 $80 $80 $A0 $40
; Tile index $0BC
.db $3F $3F $7F $00 $1F $1F $5F $20 $5F $5F $1F $20 $1F $5F $1F $20 $5F $1F $1F $20 $1F $1F $1F $20 $1F $1F $1F $20 $3F $3F $3F $00
; Tile index $0BD
.db $E0 $F0 $F0 $00 $E0 $E0 $F0 $00 $C0 $C0 $D0 $20 $D0 $D0 $C0 $20 $D0 $D0 $C0 $20 $C0 $D0 $C0 $20 $D0 $C0 $C0 $20 $C0 $C0 $C0 $20
; Tile index $0BE
.db $0F $1F $1F $00 $1F $1F $1F $00 $1F $1F $1F $00 $0F $0F $0F $10 $00 $00 $00 $1F $23 $13 $1C $00 $00 $00 $00 $00 $00 $00 $00 $00
; Tile index $0BF
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $F8 $F8 $F8 $07 $18 $1E $1F $E0 $20 $C0 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00
; Tile index $0C0
.db $FD $FD $FC $02 $FC $FD $FC $02 $FD $FC $FC $02 $1D $1C $1C $E2 $0F $0E $EE $10 $2E $0F $0E $10 $0F $2F $0E $10 $2E $2E $0F $10
; Tile index $0C1
.db $00 $00 $00 $00 $01 $00 $00 $00 $01 $00 $00 $00 $01 $00 $00 $00 $01 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00
; Tile index $0C2
.db $7C $FD $FD $02 $FC $FC $FD $02 $FC $FC $FD $02 $3C $BC $BD $42 $A1 $E1 $60 $1E $47 $46 $38 $00 $00 $00 $00 $00 $00 $00 $00 $00
; Tile index $0C3
.db $FF $7F $7F $00 $BF $3F $3F $40 $3F $BF $3F $40 $3F $BF $3F $40 $3F $BF $3F $40 $BF $BF $3F $40 $BF $BF $3F $40 $BF $BF $3F $40
; Tile index $0C4
.db $A0 $A0 $80 $40 $80 $A0 $80 $40 $80 $A0 $80 $40 $80 $A0 $80 $40 $80 $A0 $80 $40 $E0 $C0 $C0 $00 $E0 $C0 $C0 $00 $E0 $C0 $C0 $00
; Tile index $0C5
.db $03 $0B $0B $04 $0B $0B $0B $04 $0B $0B $0B $04 $1F $0F $0F $00 $1F $0F $0F $00 $1F $0F $0F $00 $1F $0F $0F $00 $0F $1F $0F $00
; Tile index $0C6
.db $E0 $E0 $E8 $10 $E0 $E0 $E8 $10 $E0 $E0 $E8 $10 $E0 $E0 $E8 $10 $E0 $E0 $E8 $10 $E0 $E0 $E8 $10 $E0 $E0 $E8 $10 $E0 $E0 $E8 $10
; Tile index $0C7
.db $00 $02 $00 $01 $00 $02 $00 $01 $02 $02 $00 $01 $02 $02 $00 $01 $02 $02 $00 $01 $02 $02 $00 $01 $02 $02 $00 $01 $02 $02 $00 $01
; Tile index $0C8
.db $FE $FE $FF $00 $FC $FC $FD $02 $FE $FF $FF $00 $FF $FF $FF $00 $FE $FE $FE $01 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00
; Tile index $0C9
.db $00 $00 $00 $00 $80 $00 $00 $00 $00 $00 $80 $00 $40 $80 $80 $00 $A0 $80 $C0 $00 $E0 $E0 $C0 $00 $D0 $F0 $E0 $00 $E4 $F0 $F8 $00
; Tile index $0CA
.db $5F $1F $3F $00 $0B $3B $1B $04 $02 $16 $0E $01 $0C $04 $03 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00
; Tile index $0CB
.db $C0 $D0 $D0 $20 $C0 $D0 $D0 $20 $00 $10 $10 $E0 $10 $10 $E0 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00
; Tile index $0CC
.db $03 $07 $03 $00 $07 $03 $03 $00 $07 $03 $03 $00 $07 $03 $03 $00 $07 $03 $03 $00 $06 $02 $02 $01 $06 $02 $02 $01 $02 $02 $02 $01
; Tile index $0CD
.db $FE $FA $FC $00 $F8 $F8 $FA $04 $F8 $FB $FA $04 $FE $FE $FF $00 $FE $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00
; Tile index $0CE
.db $01 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $80 $80 $00 $00 $00 $C0 $80 $00 $00 $20 $40 $80 $80 $90 $A0 $40
; Tile index $0CF
.db $3F $BF $BF $40 $9F $DF $5F $20 $07 $67 $27 $18 $16 $3A $0E $01 $04 $0C $03 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00
; Tile index $0D0
.db $FF $FF $FF $00 $FF $FF $FF $00 $F9 $F9 $F9 $06 $38 $3F $3F $C0 $04 $06 $F8 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00
; Tile index $0D1
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $7F $7F $FF $00 $3F $7F $7F $00 $3F $3F $7F $00 $3F $3F $7F $00 $4F $6F $2F $10
; Tile index $0D2
.db $80 $A0 $A0 $40 $E0 $E0 $E0 $00 $E0 $E0 $E0 $00 $E0 $E0 $E0 $00 $D0 $C0 $C0 $20 $D0 $C0 $C0 $20 $C0 $D0 $C0 $20 $C0 $D0 $C0 $20
; Tile index $0D3
.db $17 $17 $07 $08 $17 $17 $07 $08 $07 $17 $07 $08 $07 $17 $07 $08 $17 $07 $07 $08 $17 $07 $07 $08 $0F $0F $0F $00 $0F $0F $0F $00
; Tile index $0D4
.db $C0 $E0 $E0 $00 $C0 $E0 $E0 $00 $E0 $E0 $E0 $00 $E0 $E0 $E0 $00 $C0 $C0 $C0 $20 $D0 $C0 $C0 $20 $D0 $C0 $C0 $20 $C0 $D0 $C0 $20
; Tile index $0D5
.db $3F $3F $3F $00 $1F $3F $3F $00 $1F $1F $3F $00 $0F $0F $2F $10 $2F $2F $0F $10 $2F $2F $0F $10 $0F $2F $0F $10 $2F $0F $0F $10
; Tile index $0D6
.db $C0 $C0 $C0 $20 $E0 $E0 $E0 $00 $E0 $E0 $E0 $00 $C0 $E0 $E0 $00 $C0 $E0 $E0 $00 $C1 $C0 $E0 $00 $E6 $FE $FE $01 $EF $EF $EF $10
; Tile index $0D7
.db $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $30 $F1 $0F $00 $00 $00 $00 $FF $FF $FF $FF $00
; Tile index $0D8
.db $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $0C $03 $00 $00 $38 $F8 $F8 $07 $3F $3F $3F $C0 $FF $FF $FF $00
; Tile index $0D9
.db $2E $2F $0F $10 $0F $0F $2F $10 $0F $0F $2F $10 $0F $0F $2F $10 $DF $FF $3F $00 $3F $3F $3F $C0 $FF $FF $FF $00 $FF $FF $FF $00
; Tile index $0DA
.db $00 $80 $00 $00 $40 $00 $80 $00 $A0 $80 $C0 $00 $DC $F0 $E0 $00 $F3 $FB $FC $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00
; Tile index $0DB
.db $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $1C $FC $03 $00 $80 $80 $80 $7F $FF $FF $FF $00 $FF $FF $FF $00
; Tile index $0DC
.db $00 $00 $00 $00 $00 $00 $00 $00 $02 $01 $00 $00 $A3 $67 $1F $00 $0F $7F $FF $00 $1F $1F $1F $E0 $FF $FF $FF $00 $FF $FF $FF $00
; Tile index $0DD
.db $BF $BF $3F $40 $3F $3F $BF $40 $3F $BF $BF $40 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00
; Tile index $0DE
.db $C0 $C0 $C0 $00 $C0 $C0 $C0 $00 $C0 $C0 $FF $00 $C0 $C0 $C0 $3F $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00
; Tile index $0DF
.db $07 $17 $07 $08 $07 $17 $07 $08 $0F $FF $FF $00 $0F $0F $0F $F0 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00
; Tile index $0E0
.db $E0 $E0 $E8 $10 $E3 $E0 $E8 $10 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00
; Tile index $0E1
.db $02 $02 $00 $01 $E4 $18 $02 $01 $F3 $F3 $F3 $0C $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00
; Tile index $0E2
.db $EB $EA $EC $10 $F2 $F0 $F3 $0C $FE $FE $FE $01 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00
; Tile index $0E3
.db $00 $00 $00 $00 $B0 $C0 $00 $00 $91 $DE $E0 $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00
; Tile index $0E4
.db $00 $00 $00 $00 $01 $00 $00 $00 $E2 $1E $01 $00 $FF $FF $FF $00 $BF $BF $BF $40 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00
; Tile index $0E5
.db $06 $02 $02 $01 $EB $1B $07 $00 $1F $7F $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00
; Tile index $0E6
.db $C8 $D8 $D0 $20 $FA $FE $FC $00 $FC $FE $FF $00 $FC $FC $FC $03 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00
; Tile index $0E7
.db $00 $00 $00 $00 $00 $00 $00 $00 $A0 $C0 $00 $00 $99 $DE $E0 $00 $81 $81 $81 $7E $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00
; Tile index $0E8
.db $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $00 $08 $F9 $07 $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00
; Tile index $0E9
.db $4F $2F $2F $10 $4F $0F $2F $10 $CF $6F $2F $10 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00
; Tile index $0EA
.db $D0 $D0 $C0 $20 $D0 $D0 $C0 $20 $D0 $D0 $C0 $20 $C0 $CF $D0 $20 $E0 $E0 $E0 $1F $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00
; Tile index $0EB
.db $0F $0F $0F $00 $07 $0F $0F $00 $03 $0B $0B $04 $C3 $0B $0B $04 $FF $FF $FF $00 $EF $EF $EF $10 $FF $FF $FF $00 $FF $FF $FF $00
; Tile index $0EC
.db $D0 $D0 $C0 $20 $D0 $D0 $C0 $20 $C0 $C0 $D0 $20 $C0 $C0 $D0 $20 $C0 $C0 $D0 $20 $EC $F0 $F0 $00 $F3 $F3 $F3 $0C $FF $FF $FF $00
; Tile index $0ED
.db $0F $0F $0F $10 $0F $0F $0F $10 $1F $1F $1F $00 $1F $1F $1F $00 $1F $1F $1F $00 $0F $1F $1F $00 $1F $DF $FF $00 $9F $9F $9F $60
; Tile index $0EE
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FA $FF $F7 $0F $F3 $F7 $FA $0D $FF $FE $FE $01 $FE $FF $FF $01
; Tile index $0EF
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $7F $F5 $7F $8E $6E $E4 $FF $9B $EE $F5 $F5 $9B $7F $FF $7F $91
; Tile index $0F0
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $EF $EF $18 $FF $FF $DF $38 $DF $FF $EF $38 $FF $FF $FF $08
; Tile index $0F1
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $F3 $BF $FB $7C $B7 $DF $97 $6C $E7 $E3 $EF $1C $FF $F7 $FF $38
; Tile index $0F2
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $DF $FF $FF $20 $DF $FF $FF $20 $FF $FF $FF $00 $FB $FF $FF $27 $FF $FF $FF $24
; Tile index $0F3
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FE $FF $FF $01 $FE $FF $FF $01 $FF $FF $FF $00 $13 $BF $FB $FD $73 $57 $DF $ED
; Tile index $0F4
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $D8 $FD $FF $3F $FB $FA $FE $27
; Tile index $0F5
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $9F $FF $DF $E8 $9F $BF $FF $68
; Tile index $0F6
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FD $F3 $F7 $0F $F7 $E9 $ED $1E $F1 $E7 $FB $9F $E9 $FF $FD $96
; Tile index $0F7
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FC $FF $FD $03 $FD $9F $DE $E3 $FF $2F $6F $F2 $5F $CF $FF $B3 $FF $DF $DF $B2
; Tile index $0F8
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $BF $FF $FF $C0 $FF $BF $BF $40 $FF $FF $FF $00 $F5 $EF $FF $DE $FF $F5 $F5 $1A
; Tile index $0F9
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $E6 $3E $76 $F9 $E7 $7E $AF $D9
; Tile index $0FA
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $CF $7F $EF $F0 $CF $FF $5F $B0
; Tile index $0FB
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $97 $FF $BF $78 $BF $F7 $D7 $68 $FF $FF $FF $40 $FE $FD $FF $7B $FF $FE $FE $43
; Tile index $0FC
.db $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $BF $FF $FF $C0 $FF $BF $BF $40
; Tile index $0FD
.db $FC $FF $FE $03 $FD $FB $FD $06 $F7 $F7 $FB $0C $FF $FF $FF $0F $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00
; Tile index $0FE
.db $FF $FF $FF $11 $EE $F5 $F5 $1B $EE $E0 $FB $1F $F5 $FF $FF $8E $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00
; Tile index $0FF
.db $FF $FF $FF $08 $FF $FF $FF $08 $FF $FF $FF $08 $FF $FF $FF $08 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00
; Tile index $100
.db $F7 $E3 $EF $1C $FB $FF $FF $04 $B3 $DF $97 $6C $FF $B3 $FB $7C $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00
; Tile index $101
.db $FF $FF $FF $1C $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00
; Tile index $102
.db $FF $FF $FF $24 $FF $FF $FF $24 $FF $FF $FF $24 $FF $FF $FF $24 $9F $FF $BF $60 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00
; Tile index $103
.db $FF $FF $FF $45 $FF $FF $FF $45 $FF $FF $FF $45 $FF $FF $FF $45 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00
; Tile index $104
.db $FF $FF $FF $22 $FF $FF $FF $22 $FF $FF $FF $22 $FF $FF $FF $22 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00
; Tile index $105
.db $FF $FF $FF $28 $FF $FF $FF $28 $F3 $FB $FF $2C $F3 $FF $F7 $2F $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00
; Tile index $106
.db $EF $F7 $F7 $9C $ED $FF $FD $96 $F0 $E7 $FB $9F $7B $E9 $ED $9E $FF $F3 $F7 $0F $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00
; Tile index $107
.db $FF $FF $FF $92 $DF $8F $BF $F2 $DF $6F $EF $F2 $FF $7F $7F $82 $7F $FF $FF $80 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00
; Tile index $108
.db $FF $FF $FF $F9 $FF $BF $BF $C1 $FF $16 $D7 $E9 $76 $3E $7E $F9 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00
; Tile index $109
.db $FF $FF $FF $F0 $FF $7F $7F $80 $FD $2F $AF $D2 $ED $7F $FF $F2 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00
; Tile index $10A
.db $FF $FF $FF $42 $FF $FF $FF $42 $FF $FF $FF $42 $FF $FF $FF $42 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00 $FF $FF $FF $00
Title_TilesEnd:


Title_PaletteStart:
.db $04 $04 $04 $14 $14 $24 $24 $24 $24 $24 $29 $29 $3A $3E $3F $3F
.db $04 $04 $04 $14 $14 $24 $24 $24 $24 $24 $29 $29 $3A $3E $3F $3F
Title_PaletteEnd:


Title_TilemapStart:
.dw $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0001 $0002 $0003 $0004 $0005 $0006 $0007 $0008 $0009 $000A $000B $000C $000D $000E $000F $0010 $0011 $0000 $0000 $0000 $0000 $0000 $0000 $0012
.dw $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0013 $0014 $0015 $0016 $0017 $0018 $0019 $001A $001B $001C $001D $001E $001F $0020 $0021 $0022 $0023 $0024 $0000 $0000 $0000 $0000 $0000 $0000 $0000
.dw $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0025 $0026 $0027 $0028 $0029 $002A $002B $002C $002D $002E $002F $0030 $0031 $0032 $0033 $0034 $0035 $0036 $0000 $0000 $0000 $0000 $0000 $0000 $0000
.dw $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0037 $0038 $0039 $003A $003B $003C $003D $003E $003F $0040 $0041 $0042 $0043 $0044 $0045 $0046 $0047 $0000 $0000 $0000 $0000 $0000 $0000 $0000
.dw $0000 $0000 $0000 $0000 $0000 $0000 $0048 $0049 $004A $004B $004C $004D $024A $004E $004F $024A $0050 $0051 $0052 $0053 $0053 $0054 $0253 $0249 $0055 $004D $0000 $0000 $0000 $0000 $0000 $0000
.dw $0000 $0000 $0000 $0000 $0000 $0000 $0056 $0057 $0058 $0059 $005A $005B $005C $005D $005E $0258 $005F $0060 $0061 $0062 $0063 $0064 $0263 $0065 $0066 $005B $0000 $0000 $0000 $0000 $0000 $0000
.dw $0000 $0000 $0000 $0000 $0000 $0000 $0448 $0449 $044A $044B $044C $0451 $064A $044E $044F $064A $0067 $0068 $0268 $0453 $0069 $006A $0269 $0649 $0455 $0451 $0000 $0000 $0000 $0000 $0000 $0000
.dw $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000
.dw $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $006B $006C $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000
.dw $0000 $0000 $0000 $006D $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $006E $006F $0070 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0071 $0000 $0000 $0000
.dw $0000 $0000 $0072 $0073 $0000 $0000 $0074 $0075 $0076 $0077 $0078 $0079 $007A $007B $007C $007D $007E $007F $0080 $0081 $0082 $0083 $0084 $027C $0085 $0086 $0087 $0088 $0089 $008A $0000 $0000
.dw $0000 $0000 $008B $008C $0000 $0000 $008D $008E $008F $0090 $0091 $0092 $0093 $0094 $0095 $0096 $0097 $0098 $0099 $009A $009B $009C $009D $009E $009F $00A0 $00A1 $00A2 $00A3 $00A4 $0000 $0000
.dw $0000 $0000 $00A5 $00A6 $0000 $00A7 $00A8 $00A9 $00AA $00AB $00AC $00AD $00AE $00AF $00B0 $00AA $00B1 $00B2 $00B3 $00B4 $00B5 $00B6 $00B7 $00B8 $00B9 $00BA $0000 $0000 $00BB $00BC $0000 $0000
.dw $0000 $0000 $00BD $00BE $00BF $00C0 $00C1 $00C2 $00AA $00C3 $00C4 $00C5 $00C6 $00C7 $00C8 $00C9 $00CA $00CB $00CC $00CD $00CE $00CF $00D0 $00D1 $00D2 $00D3 $0000 $0000 $00D4 $00D5 $0000 $0000
.dw $0000 $0000 $00D6 $00D7 $00D8 $00D9 $00DA $00DB $00DC $00DD $00DE $00DF $00E0 $00E1 $0000 $00E2 $00E3 $00E4 $00E5 $0000 $00E6 $00E7 $00E8 $00E9 $00EA $00EB $0000 $0000 $00EC $00ED $0000 $0000
.dw $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000
.dw $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000
.dw $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000
.dw $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000
.dw $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $00EE $00EF $00F0 $00F1 $0000 $00F2 $00F3 $00F4 $00F5 $00F6 $00F7 $00F8 $00F9 $00FA $00FB $00FC $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000
.dw $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $00FD $00FE $00FF $0100 $0101 $0102 $0103 $0104 $0105 $0106 $0107 $02FF $0108 $0109 $010A $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000
.dw $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000
.dw $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000
.dw $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000 $0000
Title_TilemapEnd:

