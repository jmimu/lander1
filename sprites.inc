;--------------------------------------------------------------------
SpriteSet8x8:
  ;x in h
  ;y in l
  ;n in d
  ;sprite index in e
  ;vdp set addr
  ld a, e
  out ($bf), a
  ld a, $7f
  out ($bf), a
  ;y
  ld a, l
  out ($be), a
  ;vdp set addr
  ld a, e
  add a, a
  or $80
  out ($bf), a
  ld a, $7f
  out ($bf), a
  ;x n
  ld a, h
  out ($be), a
  ld a, d
  out ($be), a
ret


;--------------------------------------------------------------------
SpriteSet16x16:
  ;x in h
  ;y in l
  ;n in d
  ;sprite index in e

  ;vdp set addr
  ld a, e
  out ($bf), a
  ld a, $7f
  out ($bf), a

  ;y+0 y+0
  ;y+8 y+8
  ld a, l
  out ($be), a
  out ($be), a
  add a, $08
  out ($be), a
  out ($be), a

  ;vdp set addr
  ld a, e
  add a, a
  or $80
  out ($bf), a
  ld a, $7f
  out ($bf), a

  ;x+0 n+0 x+8 n+1
  ;x+0 n+2 x+8 n+3
  ld a, h
  out ($be), a
  ld a, d
  out ($be), a

  ld a, h
  add a, $08
  out ($be), a
  inc d
  ld a, d
  out ($be), a

  ld a, h
  out ($be), a
  inc d
  ld a, d
  out ($be), a

  ld a, h
  add a, $08
  out ($be), a
  inc d
  ld a, d
  out ($be), a
ret

;--------------------------------------------------------------------
