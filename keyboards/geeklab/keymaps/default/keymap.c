#include QMK_KEYBOARD_H

enum layers{
	BASE=0,
    ONE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT(
            KC_ESC   , KC_F1  , KC_F2  , KC_F3 , KC_F4  , KC_F5 , KC_NO , KC_NO,    KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11  , KC_F12 , KC_NO    ,
			KC_GRAVE , KC_1   , KC_2   , KC_3  , KC_4   , KC_5  , KC_NO , KC_NO,    KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_MINUS, KC_EQL , KC_BSPC  ,
			KC_TAB   , KC_Q   , KC_W   , KC_E  , KC_R   , KC_T  , KC_NO , KC_NO,    KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_LBRC , KC_RBRC, KC_BSLS  ,
			KC_CAPS  , KC_A   , KC_S   , KC_D  , KC_F   , KC_G  , KC_NO , KC_NO,    KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT , KC_NO  , KC_ENT   ,
			KC_LSHIFT, KC_Z   , KC_X   , KC_C  , KC_V   , KC_B  , KC_NO , KC_NO,    MO(ONE), KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLASH, KC_NO  , KC_RSHIFT,
			KC_LCTRL , KC_LGUI, KC_LALT, KC_SPC, KC_NO  , KC_NO , KC_NO , KC_NO,    KC_NO  , KC_SPC , KC_NO  , KC_NO  , KC_RALT, KC_APP  , KC_MENU, KC_RCTRL
  ),
  [ONE] = LAYOUT(
            KC_NO    , KC_F13 , KC_F14 , KC_F15 , KC_F16, KC_F17, KC_NO , KC_NO,    KC_F18 , KC_F19 , KC_F20 , KC_F21 , KC_F22 , KC_F23  , KC_F24 , KC_NO    ,
			KC_NO    , KC_NO  , KC_NO  , KC_NO  , KC_NO , KC_NO , KC_NO , KC_NO,    KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO   , KC_NO  , KC_NO    ,
			KC_NO    , KC_NO  , KC_UP  , KC_NO  , KC_NO , KC_NO , KC_NO , KC_NO,    KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_PSCR, KC_NO   , KC_NO  , KC_NO    ,
			KC_NO    , KC_LEFT, KC_DOWN, KC_RGHT, KC_NO , KC_NO , KC_NO , KC_NO,    KC_NO  , KC_PGDN, KC_PGUP, KC_NO  , KC_NO  , KC_NO   , KC_NO  , KC_NO    ,
			KC_NO    , KC_NO  , KC_NO  , KC_NO  , KC_NO , KC_NO , KC_NO , KC_NO,    KC_TRNS, KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO   , KC_NO  , KC_NO    ,
			KC_NO    , KC_NO  , KC_NO  , KC_NO  , KC_NO , KC_NO , KC_NO , KC_NO,    KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO   , KC_NO  , KC_NO
  )
};

/**
void led_set_user(uint8_t usb_led) {

}
**/
