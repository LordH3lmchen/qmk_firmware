/*
 * Copyright 2021 Quentin LEBASTARD <qlebastard@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_split_4x6_5(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS,
                             //-------------------------------------------------//-----------------------------------------------------------//
                             KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS,
                             //-------------------------------------------------//-----------------------------------------------------------//
                             MT(MOD_LCTL,KC_ESC), MT(MOD_LSFT,KC_A), MT(MOD_LALT,KC_S), KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, MT(MOD_RSFT,KC_SCLN), MT(MOD_RCTL,KC_QUOT),
                             //-------------------------------------------------//-----------------------------------------------------------//
                             KC_LSFT, LT(2, KC_Z), KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, LT(2,KC_SLSH), KC_APP,
                             //-------------------------------------------------//-----------------------------------------------------------//
                             KC_BSPC, KC_SPC, MO(1), MO(1), KC_SPC, KC_ENTER, MO(2), KC_LGUI, KC_RGUI, MO(2)),

    [1] = LAYOUT_split_4x6_5(KC_F12, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11,
                             //---------------------------------------------------------//--------------------------------------------------------------//
                             _______, MS_BTN3, MS_BTN2,  MS_UP, MS_BTN1, MS_WHLU, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_PSCR, KC_PAUSE,
                             //---------------------------------------------------------//--------------------------------------------------------------//
                             _______, MS_BTN4, MS_LEFT, MS_DOWN, MS_RGHT, MS_WHLD, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, _______, KC_APP,
                             //---------------------------------------------------------//--------------------------------------------------------------//
                             _______, _______, _______, _______, _______, _______, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPRV, _______, _______,
                             //---------------------------------------------------------//--------------------------------------------------------------//
                             KC_DEL, _______, _______, _______, _______, _______, _______, _______, _______, _______),

    [2] = LAYOUT_split_4x6_5(_______, _______, _______, _______, _______, S(KC_COMM), S(KC_DOT), _______, _______, _______, _______, _______,
                             //---------------------------------------------------------//-----------------------------------------------------------//
                             QK_BOOT, _______, _______, _______, _______, S(KC_LBRC), S(KC_RBRC), _______, _______, _______, _______, _______,
                             //---------------------------------------------------------//-----------------------------------------------------------//
                             _______, _______, _______, _______, S(KC_EQL), KC_LBRC, KC_RBRC, KC_EQL, _______, _______, _______, _______,
                             //---------------------------------------------------------//-----------------------------------------------------------//
                             _______, _______, _______, _______, KC_MINS, S(KC_9), S(KC_0), S(KC_MINS), _______, _______, _______, _______,
                             //---------------------------------------------------------//-----------------------------------------------------------//
                             _______, _______, _______, _______, _______, _______, _______, _______, _______, _______),
};
