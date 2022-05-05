/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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

#pragma once

/* Select hand configuration */

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

#define PERMISSIVE_HOLD
#define TAPPING_FORCE_HOLD
#define TAPPING_TERM 200
#define IGNORE_MOD_TAP_INTERRUPT
// #define EXTRAKEY_ENABLE

#define MK_3_SPEED
#define MK_MOMENTARY_ACCEL
/* #define MK_C_OFFSET_UNMOD   16 */
/* #define MK_C_INTERVAL_UNMOD 16 */
/* #define MK_C_OFFSET_0       1 */
/* #define MK_C_INTERVAL_0     32 */
/* #define MK_C_OFFSET_1       4 */
/* #define MK_C_INTERVAL_1     16 */
/* #define MK_C_OFFSET_2       32 */
/* #define MK_C_INTERVAL_2     16 */
#define MK_C_OFFSET_UNMOD   4
#define MK_C_INTERVAL_UNMOD 16
// #define MOUSE_ENABLE

#undef RGBLED_NUM
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 27
#define RGBLIGHT_LIMIT_VAL 120
#define RGBLIGHT_HUE_STEP 10
#define RGBLIGHT_SAT_STEP 17
#define RGBLIGHT_VAL_STEP 17

// Underglow
/*
#undef RGBLED_NUM
#define RGBLED_NUM 14    // Number of LEDs
#define RGBLIGHT_ANIMATIONS
#define RGBLIGHT_SLEEP
*/
