/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

#define _BASE 0
#define _LOWER 1
#define _RAISE 2
#define _FN 3
#define _ADJUST 4

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                                ,-----------------------------------------------------.
      KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                      KC_Y,   KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                                |--------+--------+--------+--------+--------+--------|
      KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                                      KC_H,   KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------|                                |--------+--------+--------+--------+--------+--------|
      KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                                      KC_N,   KC_M,    KC_COMM, KC_DOT,  KC_SLSH, SFT_T(KC_ENT),
  //|--------+--------+--------+--------+--------+--------+--------------|  |--------------+--------+--------+--------+--------+--------+--------|
                                          KC_LCTL, KC_LGUI, LT(1,KC_SPC),     LT(2,KC_SPC),   MO(3),  KC_RALT
                                      //`--------------------------------'  `--------------------------------'

  ),

    [_LOWER] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_LEFT, KC_4,    KC_5,    KC_6,    KC_PLUS, KC_EQL,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, KC_1,    KC_2,    KC_3,    KC_MINS, KC_MINS,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, XXXXXXX, _______,     MO(4),  KC_DOT,  KC_0
                                      //`--------------------------'  `--------------------------'
  ),    

    [_RAISE] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_GRV,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_TILD, KC_NUHS, KC_SLSH, KC_LCBR, KC_LBRC,                      KC_RBRC, KC_RCBR, KC_BSLS, KC_MINS, KC_EQL,  KC_PIPE,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, KC_UNDS, KC_PLUS, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX, XXXXXXX,  MO(4),     _______, _______, KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),

    [_FN] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, KC_F1,   KC_F2,   KC_F3,   KC_F4,   XXXXXXX,                      XXXXXXX, KC_PGUP, XXXXXXX, XXXXXXX, KC_HOME, KC_DEL,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_F5,   KC_F6,   KC_F7,   KC_F8,   XXXXXXX,                      XXXXXXX, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_F9,   KC_F10,  KC_F11,  KC_F12,  XXXXXXX,                      XXXXXXX, KC_PGDN, XXXXXXX, XXXXXXX, KC_END,  XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX, XXXXXXX, _______,    _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

    [_ADJUST] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      QK_BOOT, KC_F1,   KC_F2,   KC_F3,   KC_F4,   XXXXXXX,                      XXXXXXX, XXXXXXX, KC_MRWD, KC_MFFD, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_MOD, RGB_TOG, RGB_VAD, RGB_VAI, XXXXXXX, XXXXXXX,                      XXXXXXX, KC_MUTE, KC_VOLD, KC_VOLU, KC_MPLY, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      BL_STEP, BL_OFF,  BL_DOWN, BL_UP,   BL_ON,   BL_BRTG,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX, XXXXXXX, _______,    _______, XXXXXXX, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  )
};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
  [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [2] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [3] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [4] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
};
#endif



#ifdef OLED_ENABLE

    oled_rotation_t oled_init_user(oled_rotation_t rotation) {
        return OLED_ROTATION_270;  
        return rotation;
    }


    bool oled_task_user(){
        // This stores the image content
        static const char coffee_img [] PROGMEM = {
            // 'coffee', 32x128px
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
            0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
            0x00, 0x00, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
            0x00, 0x00, 0x3f, 0x3f, 0xfc, 0xfc, 0xf3, 0xfb, 0xcf, 0xdf, 0x3f, 0x3f, 0xfc, 0xfc, 0x00, 0x00, 
            0x3f, 0x3f, 0xfc, 0xfc, 0xf3, 0xf3, 0xcf, 0xcf, 0x3f, 0x3f, 0xfc, 0xfc, 0x00, 0x00, 0x00, 0x00, 
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0xc0, 0xc0, 0x70, 0x70, 
            0xf0, 0xf0, 0xf0, 0xf0, 0xc3, 0xc3, 0x03, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x1f, 0x7f, 0x7f, 
            0xfc, 0xfd, 0xf7, 0xf3, 0xdf, 0xcf, 0x7f, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
            0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
            0xc0, 0xe0, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7c, 0xfe, 0xce, 0xc0, 0x00, 
            0x0f, 0x9f, 0xbd, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
            0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xcc, 0xce, 0xc7, 0xc0, 
            0xc0, 0xc0, 0xc3, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x80, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
            0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
            0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xc7, 0xc3, 0xe7, 0xff, 0x00, 0x00, 0x00, 
            0x00, 0x00, 0x00, 0x20, 0x30, 0x20, 0x20, 0x20, 0x23, 0x23, 0x27, 0x27, 0x27, 0x37, 0x27, 0x27, 
            0x27, 0x27, 0x27, 0x27, 0x27, 0x27, 0x33, 0x21, 0x31, 0x21, 0x21, 0x20, 0x30, 0x00, 0x00, 0x00, 
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
        };

        // static const char hello_world_img [] PROGMEM = {
        //     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xe0, 0xe0, 0xe0, 0x00, 0x00, 
        //     0xc0, 0xf0, 0xf8, 0xfc, 0xfc, 0xfe, 0xfe, 0xfe, 0xfe, 0xfc, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 
        //     0x00, 0xc0, 0xf0, 0xf8, 0xfc, 0xe8, 0x00, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0xc0, 0xff, 
        //     0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x1f, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 
        //     0x00, 0x01, 0x0f, 0x1f, 0x3f, 0x7f, 0x7e, 0x7f, 0x3f, 0x3f, 0x7f, 0x7f, 0xff, 0xff, 0x7f, 0x7f, 
        //     0x3f, 0x3f, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xf8, 0xf0, 0xf0, 0x70, 0x78, 0x1c, 0x00, 0x00, 0x00, 
        //     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xf0, 0x00, 0x00, 0xf0, 0xf0, 0x00, 0x00, 0x00, 0x00, 
        //     0x00, 0x00, 0x00, 0xf0, 0xf0, 0x00, 0x00, 0xf0, 0xf0, 0x00, 0x80, 0xf0, 0x70, 0x00, 0x00, 0x00, 
        //     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x06, 0x06, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
        //     0x00, 0x00, 0x00, 0x00, 0x3f, 0xfe, 0xff, 0x0f, 0x3f, 0xfc, 0xff, 0x1f, 0x00, 0x00, 0x00, 0x00, 
        //     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        //     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        //     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x63, 0x63, 0x63, 0x00, 0x00, 0x00, 0x00, 0x00, 
        //     0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0x03, 0x03, 0xfe, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 
        //     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x0c, 0x0c, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 
        //     0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x0f, 0x0c, 0x0c, 0x0f, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 
        //     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        //     0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xe0, 0x60, 0x60, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 
        //     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
        //     0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x0c, 0x0c, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 
        //     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 
        //     0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 
        //     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        //     0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        //     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x1f, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 
        //     0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x1f, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 
        //     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xc0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
        //     0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0xc0, 0xc0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
        //     0x00, 0x00, 0x00, 0x00, 0x00, 0x74, 0xff, 0xdf, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
        //     0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 
        //     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x03, 0x03, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 
        //     0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00
        // };

        static const char raihan_img [] PROGMEM = {
            // 'Raihan oled(1)', 32x128px
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x40, 0x00, 0x30, 0x10, 0x18, 0x08, 0x28, 0x38, 0x38, 0x18, 
0x18, 0x1c, 0x0c, 0x08, 0x08, 0x08, 0x10, 0x10, 0x08, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x80, 0x60, 0x10, 0xc0, 0xc0, 0x40, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x80, 0x80, 0x00, 0x00, 0x00, 0x61, 0xe0, 0xf0, 0xf8, 0xf0, 0xfc, 0xc0, 0x80, 0x00, 0x00, 0x00, 
0x00, 0x3c, 0x0f, 0x07, 0x01, 0x00, 0x80, 0x80, 0x80, 0xc0, 0xc0, 0xc0, 0xc0, 0x80, 0x80, 0x80, 
0xb7, 0xa7, 0xaf, 0xfe, 0xe0, 0xe0, 0xe0, 0xe1, 0xe1, 0xe1, 0xe7, 0xf7, 0xff, 0xfe, 0xf8, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x03, 0x07, 0x0f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7e, 0x7e, 0x7e, 
0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x6f, 0x67, 0x47, 0x63, 0x00
        };
        
        if (is_keyboard_left()) {
            // oled_write_raw_P(hello_world_img, sizeof(hello_world_img));
            oled_write_raw_P(raihan_img, sizeof(raihan_img));
        } else {
            oled_write_raw_P(coffee_img, sizeof(coffee_img));
        }


        
        return false;
    }
#endif