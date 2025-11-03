// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layer_names {
    _BASE, //FPS
    _FN,
    _LAYERS,
    _FACTORIO
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │ / │
     * ├───┼───┼───┼───┤
     * │ 4 │ 5 │ 6 │ * │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │ - │
     * ├───┼───┼───┼───┤
     * │ 0 │ . │Ent│ + │
     * └───┴───┴───┴───┘
     */
    [_BASE] = LAYOUT_dactyl_gaming_pad( //FPS
        KC_ESC    ,   KC_O,   KC_P,   KC_6,  KC_7,  KC_8,  KC_9,  KC_0,
        KC_TAB  , KC_J,   KC_I,   KC_1,  KC_2,  KC_3,  KC_4,  KC_5,
        KC_LSFT    ,  KC_K,    KC_LSFT,     KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,
        KC_ENTER   ,  KC_L,    KC_LCTL,    KC_A,  KC_S,  KC_D,  KC_F,  KC_G,
        KC_BSPC   ,  KC_U,    KC_B,    KC_Z,  KC_X,  KC_C,  KC_V,
        KC_GRV,       KC_N,     KC_M,   KC_Y,   KC_H,
        KC_LSFT,  KC_SPACE,  KC_LCTL, KC_ENTER, KC_LALT, MO(_FN)
    ),
    [_FN] = LAYOUT_dactyl_gaming_pad(
        QK_BOOT,  KC_TRNS,  KC_TRNS,   KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,
        KC_PAUSE, KC_TRNS,  KC_TRNS,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,
        KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
        KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
        KC_DEL,  KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
        KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,
        KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS
    ),
    [_LAYERS] = LAYOUT_dactyl_gaming_pad(
        KC_TRNS, KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
        KC_TRNS, KC_TRNS,  KC_TRNS,   KC_TRNS,  TG(_FACTORIO),  KC_TRNS,  KC_TRNS,  KC_TRNS,
        KC_TRNS, KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
        KC_TRNS, KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
        KC_TRNS, KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
        KC_TRNS, KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,
        KC_TRNS, KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS
    ),
    [_FACTORIO] = LAYOUT_dactyl_gaming_pad(
        KC_ESC    ,   KC_J,   KC_K,   KC_6,  KC_7,  KC_8,  KC_9,  KC_0,
        KC_ENTER  , KC_GRV,   KC_L,   KC_1,  KC_2,  KC_3,  KC_4,  KC_5,
        KC_TAB    , KC_TAB,   KC_P,   KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,
        KC_LSFT   , KC_LSFT,  KC_M,   KC_A,  KC_S,  KC_D,  KC_F,  KC_G,
        KC_LCTL   , KC_LCTL,  KC_B,   KC_Z,  KC_X,  KC_C,  KC_V,
        KC_U,       KC_I,     KC_O,   KC_Y,   KC_H,
        KC_SPACE,  KC_LSFT,  KC_LCTL, KC_LALT, MO(_LAYERS), MO(_FN)
    ),
};
