#include "bn_core.h"
#include "bn_keypad.h"
#include "bn_bg_palettes.h"
#include "bn_sprite_text_generator.h"

#include "bn_sprite_items_black_stone_32x32.h"
#include "bn_sprite_items_white_stone_32x32.h"

#include "common_info.h"
#include "common_variable_8x16_sprite_font.h"

int main()
{
    bn::core::init();

    bn::sprite_text_generator text_generator(common::variable_8x16_sprite_font);
    bn::bg_palettes::set_transparent_color(bn::color(16, 16, 16));

    bn::sprite_ptr black_stone_sprite = bn::sprite_items::black_stone_32x32.create_sprite(0, 0);
    bn::sprite_ptr white_stone_sprite = bn::sprite_items::white_stone_32x32.create_sprite(0, 0);

    constexpr bn::string_view string_line1[] = {"Press A to next"};
    constexpr bn::string_view string_line2[] = {"Press B to next"};

    white_stone_sprite.set_visible(false);

    while(true)
    {
        while(!bn::keypad::a_pressed()) {

            common::info info1("title", string_line1, text_generator);
            if (white_stone_sprite.visible() ==true) {
                white_stone_sprite.set_visible(! white_stone_sprite.visible());
            }
            if ( black_stone_sprite.visible() == false) {
                black_stone_sprite.set_visible(! black_stone_sprite.visible());
            }

            info1.update();
            bn::core::update();
        }
        while(!bn::keypad::b_pressed()) {

            common::info info2("title2", string_line2, text_generator);
            if (white_stone_sprite.visible() ==false) {
                white_stone_sprite.set_visible(! white_stone_sprite.visible());
            }
            if ( black_stone_sprite.visible() == true) {
                black_stone_sprite.set_visible(! black_stone_sprite.visible());
            }
            info2.update();
            bn::core::update();
        }
        //info.update();
        bn::core::update();
    }
}
