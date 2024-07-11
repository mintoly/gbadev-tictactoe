#ifndef BN_SPRITE_ITEMS_WHITE_STONE_32X32_H
#define BN_SPRITE_ITEMS_WHITE_STONE_32X32_H

#include "bn_sprite_item.h"

//{{BLOCK(white_stone_32x32_bn_gfx)

//======================================================================
//
//	white_stone_32x32_bn_gfx, 32x32@4, 
//	+ palette 16 entries, not compressed
//	+ 16 tiles not compressed
//	Total size: 32 + 512 = 544
//
//	Time-stamp: 2024-07-06, 16:57:59
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_WHITE_STONE_32X32_BN_GFX_H
#define GRIT_WHITE_STONE_32X32_BN_GFX_H

#define white_stone_32x32_bn_gfxTilesLen 512
extern const bn::tile white_stone_32x32_bn_gfxTiles[16];

#define white_stone_32x32_bn_gfxPalLen 32
extern const bn::color white_stone_32x32_bn_gfxPal[16];

#endif // GRIT_WHITE_STONE_32X32_BN_GFX_H

//}}BLOCK(white_stone_32x32_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item white_stone_32x32(sprite_shape_size(sprite_shape::SQUARE, sprite_size::BIG), 
            sprite_tiles_item(span<const tile>(white_stone_32x32_bn_gfxTiles, 16), bpp_mode::BPP_4, compression_type::NONE, 1), 
            sprite_palette_item(span<const color>(white_stone_32x32_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

