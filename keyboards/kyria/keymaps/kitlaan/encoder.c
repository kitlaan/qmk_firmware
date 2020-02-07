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
#ifdef ENCODER_ENABLE
#include QMK_KEYBOARD_H
#include "kitlaan.h"

// LEFT=0; RIGHT=1
void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        switch (get_highest_layer(layer_state)) {
            default:
                // Volume control
                tap_code(clockwise ? KC_VOLU : KC_VOLD);
                break;
            case _LOWER:
            case _RAISE:
            case _ADJUST:
                // TODO:
                break;
        }
    }
    else if (index == 1) {
        switch (get_highest_layer(layer_state)) {
            default:
                // Page up/Page down
                tap_code(clockwise ? KC_PGDN : KC_PGUP);
                break;
            case _LOWER:
            case _RAISE:
            case _ADJUST:
                // TODO:
                break;
        }
    }
}

#endif
