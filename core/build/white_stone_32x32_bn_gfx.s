
@{{BLOCK(white_stone_32x32_bn_gfx)

@=======================================================================
@
@	white_stone_32x32_bn_gfx, 32x32@4, 
@	+ palette 16 entries, not compressed
@	+ 16 tiles not compressed
@	Total size: 32 + 512 = 544
@
@	Time-stamp: 2024-07-06, 16:57:59
@	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
@	( http://www.coranac.com/projects/#grit )
@
@=======================================================================

	.section .rodata
	.align	2
	.global white_stone_32x32_bn_gfxTiles		@ 512 unsigned chars
	.hidden white_stone_32x32_bn_gfxTiles
white_stone_32x32_bn_gfxTiles:
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x44400000,0x33344000,0x33333440
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000444,0x00044333,0x04433333
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x40000000,0x40000000,0x34000000,0x34000000,0x33400000,0x33400000,0x33400000
	.word 0x33333334,0x33333333,0x33333333,0x33333333,0x33333333,0x33333333,0x33333333,0x33333333
	.word 0x43333333,0x43333333,0x33333333,0x33333333,0x33333333,0x33333333,0x33333333,0x33333333
	.word 0x00000000,0x00000000,0x00000004,0x00000043,0x00000043,0x00000433,0x00000433,0x00000433

	.word 0x33400000,0x33400000,0x33400000,0x34000000,0x34000000,0x40000000,0x40000000,0x00000000
	.word 0x33333333,0x33333333,0x33333333,0x33333333,0x33333333,0x33333333,0x33333333,0x13333344
	.word 0x33333333,0x33333333,0x33333333,0x31133333,0x31133333,0x33333333,0x33311113,0x43331111
	.word 0x00000433,0x00000433,0x00000433,0x00000043,0x00000043,0x00000004,0x00000004,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x33333400,0x33344000,0x44400000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x04433333,0x00044333,0x00000444,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000

	.section .rodata
	.align	2
	.global white_stone_32x32_bn_gfxPal		@ 32 unsigned chars
	.hidden white_stone_32x32_bn_gfxPal
white_stone_32x32_bn_gfxPal:
	.hword 0x03E0,0x6318,0x03E0,0x7FFF,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(white_stone_32x32_bn_gfx)
