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
#ifdef OLED_DRIVER_ENABLE
#include QMK_KEYBOARD_H
#include "kitlaan.h"

#include "raw_hid.h"

// main entry point for RAW HID bytes from the PC
// use raw_hid_send() to transmit to PC
// max payload is RAW_EPSIZE (32-bytes)
void raw_hid_receive(uint8_t *data, uint8_t length)
{
    // TODO: read
    // https://github.com/BlankSourceCode/qmk_firmware/commit/3ae097783d65e71062606906f7b4be639d9d321d
    // https://github.com/BlankSourceCode/qmk-hid-display
}

#endif
