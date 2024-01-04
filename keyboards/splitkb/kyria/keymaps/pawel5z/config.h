/* Copyright 2022 Thomas Baart <thomas@splitkb.com>
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

#ifdef RGBLIGHT_ENABLE
#    define RGBLIGHT_EFFECT_BREATHING
#    define RGBLIGHT_EFFECT_RAINBOW_MOOD
#    define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#    define RGBLIGHT_EFFECT_SNAKE
#    define RGBLIGHT_EFFECT_KNIGHT
#    define RGBLIGHT_EFFECT_CHRISTMAS
#    define RGBLIGHT_EFFECT_STATIC_GRADIENT
#    define RGBLIGHT_EFFECT_RGB_TEST
#    define RGBLIGHT_EFFECT_ALTERNATING
#    define RGBLIGHT_EFFECT_TWINKLE
#    define RGBLIGHT_HUE_STEP 8
#    define RGBLIGHT_SAT_STEP 8
#    define RGBLIGHT_VAL_STEP 8
#    ifndef RGBLIGHT_LIMIT_VAL
#        define RGBLIGHT_LIMIT_VAL 150
#    endif
#endif

// Enable proper main half detection because of J1 on my Pro Micro.
#define SPLIT_USB_DETECT

// Lower encoder resolution to prevent skipping every other tick.
#define ENCODER_RESOLUTION 2

// https://docs.qmk.fm/#/feature_oled_driver?id=basic-configuration
#define OLED_TIMEOUT 5000
#define OLED_FADE_OUT
#define OLED_FADE_OUT_INTERVAL 1

// Not owning lock switch, therefore disable feature supporting it.
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE

// Save memory by limiting number of layers.
#define LAYER_STATE_8BIT

// Disable one shot keys to save memory.
#define NO_ACTION_ONESHOT

// https://docs.qmk.fm/#/feature_caps_word?id=how-do-i-enable-caps-word
#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD
