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

#pragma once

#ifdef OLED_DRIVER_ENABLE
  #define OLED_DISPLAY_128X64
#endif

#ifdef RGBLIGHT_ENABLE
  // turn on all animations, or just the ones you want (to reduce flash usage)
  #define RGBLIGHT_ANIMATIONS
  // See: quantum/rgblight_reconfig.h
  //#define RGBLIGHT_EFFECT_ALTERNATING
  //#define RGBLIGHT_EFFECT_BREATHING
  //#define RGBLIGHT_EFFECT_CHRISTMAS
  //#define RGBLIGHT_EFFECT_KNIGHT
  //#define RGBLIGHT_EFFECT_RAINBOW_MOOD
  //#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
  //#define RGBLIGHT_EFFECT_RGB_TEST
  //#define RGBLIGHT_EFFECT_SNAKE
  //#define RGBLIGHT_EFFECT_STATIC_GRADIENT

  #define RGBLIGHT_HUE_STEP 8
  #define RGBLIGHT_SAT_STEP 8
  #define RGBLIGHT_VAL_STEP 8
#endif

// If you are using an Elite C rev3 on the slave side, uncomment the lines below:
// #define SPLIT_USB_DETECT
// #define NO_USB_STARTUP_CHECK

// Determine which is the LEFT/RIGHT device, using USB connection:
//#define MASTER_LEFT
//#define MASTER_RIGHT
// Or by EEPROM (flash :dfu-split-left or :dfu-split-right)
#define EE_HANDS

// Disable. We're not using KC_LCAP, KC_LNUM or KC_LSCR.
#undef LOCKING_SUPPORT_ENABLE

// Disable. Not currently using these features
#define NO_ACTION_ONESHOT
#define NO_ACTION_TAPPING
