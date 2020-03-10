/* Copyright 2020 kitlaan
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
#include "kitlaan.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * Base Layer: QWERTY
 *
 * ,-------------------------------------------.                              ,-------------------------------------------.
 * | ESC `~ |   Q  |   W  |   E  |   R  |   T  |                              |   Y  |   U  |   I  |   O  |   P  |  | \   |
 * |--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
 * | LSFT   |   A  |   S  |   D  |   F  |   G  |                              |   H  |   J  |   K  |   L  | ;  : |  ' "   |
 * |--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
 * | LCTL   |   Z  |   X  |   C  |   V  |   B  | LSFT |      |  |      | Del  |   N  |   M  | ,  < | . >  | /  ? |  - _   |
 * `----------------------+------+------+------+------+      |  |      +------+------+------+------+----------------------'
 *                        | GUI  | Alt  |      | Space| Enter|  |Space | Bspc |      | Tab  | AltGr|
 *                        |      |      | Lower| Shift| Alt  |  |      |      | Raise|      |      |
 *                        `----------------------------------'  `----------------------------------'
 */
    [_QWERTY] = LAYOUT(
      KC_GESC,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                           KC_Y,     KC_U,    KC_I,    KC_O,    KC_P, KC_PIPE,
      KC_LSFT,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                                           KC_H,     KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
      KC_LCTL,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B, KC_LSFT, XXXXXXX,    XXXXXXX,  KC_DEL,    KC_N,     KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_MINS,
       KC_LGUI, KC_LALT, MO(_LOWER), MT(MOD_LSFT,KC_SPC), MT(MOD_LALT,KC_ENT),    KC_SPC, KC_BSPC, MO(_RAISE), KC_TAB, KC_RALT
    ),
/*
 * Lower Layer: Numbers, Function Keys
 *
 * ,-------------------------------------------.                              ,-------------------------------------------.
 * |        | 1 !  | 2 @  | 3 #  | 4 $  | 5 %  |                              | 6 ^  | 7 &  | 8 *  | 9 (  | 0 )  |        |
 * |--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
 * |   F11  |  F1  |  F2  |  F3  |  F4  |  F5  |                              | *    | 4 $  | 5 %  | 6 ^  | = +  |        |
 * |--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
 * |   F12  |  F6  |  F7  |  F8  |  F9  |  F10 |      |      |  |      |      | +    | 1 !  | 2 @  | 3 #  | [ {  | ] }    |
 * `----------------------+------+------+------+------+      |  |      +------+------+------+------+----------------------'
 *                        |      |      |      |      |      |  |      |      |      |      |      |
 *                        |      |      | Lower|      |      |  |      |      | Raise|      |      |
 *                        `----------------------------------'  `----------------------------------'
 */
    [_LOWER] = LAYOUT(
      _______,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                                        KC_6,    KC_7,    KC_8,    KC_9,    KC_0, _______,
       KC_F11,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                                     KC_ASTR,    KC_4,    KC_5,    KC_6,  KC_EQL, _______,
       KC_F12,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10, _______, _______, _______, _______, KC_PLUS,    KC_1,    KC_2,    KC_3, KC_LBRC, KC_RBRC,
                                 _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),
/*
 * Raise Layer: Navigation
 *
 * ,-------------------------------------------.                              ,-------------------------------------------.
 * |        |      |      |      |      |      |                              | PgUp | Home | Up   | End  |      | ScrlLk |
 * |--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
 * |        |      | Prev | Play | Next | VolUp|                              | PgDn | Left | Down | Right|      | CapsLk |
 * |--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
 * |        |      |      |      | Mute | VolDn|      |      |  |      |      |Leader| Ins  |      |      |      |        |
 * `----------------------+------+------+------+------+      |  |      +------+------+------+------+----------------------'
 *                        |      |      |      |      |      |  |      |      |      |      |      |
 *                        |      |      |      |      |      |  |      |      |      |      |      |
 *                        `----------------------------------'  `----------------------------------'
 */
    [_RAISE] = LAYOUT(
      _______, _______, _______, _______, _______, _______,                                     KC_PGUP, KC_HOME,   KC_UP,  KC_END, _______, KC_SLCK,
      _______, _______, KC_MPRV, KC_MPLY, KC_MNXT, KC_VOLU,                                     KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, _______, KC_CAPS,
      _______, _______, _______, _______, KC_MUTE, KC_VOLD, _______, _______, _______, _______, KC_LEAD,  KC_INS, _______, _______, _______, _______,
                                 _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),
/*
 * Adjust Layer: RGB
 *
 * ,-------------------------------------------.                              ,-------------------------------------------.
 * |        |      |      |      |      |      |                              |      |      |      |      |      |        |
 * |--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
 * |        | TOG  | SAI  | HUI  | VAI  | MOD  |                              |      |      |      |      |      |        |
 * |--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
 * |        |      | SAD  | HUD  | VAD  | RMOD |      |      |  |      |      |      |      |      |      |      |        |
 * `----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
 *                        |      |      |      |      |      |  |      |      |      |      |      |
 *                        |      |      |      |      |      |  |      |      |      |      |      |
 *                        `----------------------------------'  `----------------------------------'
 */
    [_ADJUST] = LAYOUT(
      _______, _______, _______, _______, _______, _______,                                     _______, _______, _______, _______, _______, _______,
      _______, RGB_TOG, RGB_SAI, RGB_HUI, RGB_VAI, RGB_MOD,                                     _______, _______, _______, _______, _______, _______,
      _______, _______, RGB_SAD, RGB_HUD, RGB_VAD,RGB_RMOD, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                                 _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),
// /*
//  * Layer template
//  *
//  * ,-------------------------------------------.                              ,-------------------------------------------.
//  * |        |      |      |      |      |      |                              |      |      |      |      |      |        |
//  * |--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
//  * |        |      |      |      |      |      |                              |      |      |      |      |      |        |
//  * |--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
//  * |        |      |      |      |      |      |      |      |  |      |      |      |      |      |      |      |        |
//  * `----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
//  *                        |      |      |      |      |      |  |      |      |      |      |      |
//  *                        |      |      |      |      |      |  |      |      |      |      |      |
//  *                        `----------------------------------'  `----------------------------------'
//  */
//     [_LAYERINDEX] = LAYOUT(
//       _______, _______, _______, _______, _______, _______,                                     _______, _______, _______, _______, _______, _______,
//       _______, _______, _______, _______, _______, _______,                                     _______, _______, _______, _______, _______, _______,
//       _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
//                                  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
//     ),
};

layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}
