;
;		(TOS) /= HL
;
		.export __remequ
		.code

__remequ:
		ex	de,hl
		pop	hl
		ex	(sp),hl
		; Now we are doing (HL) * DE
		push	d
		ld	e,(hl)
		inc	hl
		ld	d,(hl)
		ex	(sp),hl	; swap address with stacked value
		ex	de,hl	; swap them back as we divide by DE
		; We are now doing HL / DE and the address we want is TOS
		call	__remdeu
		; Return is in HL
		ex	de,hl
		pop	hl
		ld	m,d
		dec	hl
		ld	m,e
		ex	de,hl
		ret
