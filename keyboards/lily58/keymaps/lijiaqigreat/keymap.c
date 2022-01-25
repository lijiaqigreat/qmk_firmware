#include QMK_KEYBOARD_H

enum layer_number {
  _34_COLEMAK_DH,
  _34_QWERTY,
  _34_LEFT_NUM,
  _34_LEFT_MEDIA, // one hand
  _34_LEFT_FUN,
  _34_RIGHT_NAV, // one hand
  _34_RIGHT_MOUSE,
  _34_RIGHT_UNCOMMON,
  _LILY_QWERTY = 0,
  _LILY_COLEMAK_DH,
  _LILY_RAISE,
};

#define _34_1 _34_COLEMAK_DH
#define _34_2 _34_QWERTY
#define _L1(A) LT(_34_RIGHT_NAV, A)
#define _L2(A) LT(_34_LEFT_MEDIA, A)
#define _L3(A) LT(_34_RIGHT_UNCOMMON, A)
#define _R1(A) LT(_34_LEFT_NUM, A)
#define _R2(A) LT(_34_RIGHT_NAV, A)
#define _R3(A) LT(_34_LEFT_FUN, A)
#define _LGA_T(A) MT(MOD_LALT | MOD_LGUI, A)
#define _RGA_T(A) MT(MOD_LALT | MOD_RGUI, A)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ~    |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  -   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Esc  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  =   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
 * |   \  |   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |BackSP|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LCTL | LGUI | /Space  /       \Enter \  | LSFT |RAISE |Colemak|
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

 [_LILY_QWERTY] = LAYOUT(
  KC_GRV,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
  KC_ESC,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_EQL,
  KC_TAB,   KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                     KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  KC_BSLS,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B, KC_LBRC,  KC_RBRC,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_BSPC,
  KC_LALT, KC_LCTL, KC_LGUI, KC_SPC,                          KC_ENT, KC_LSFT, MO(_LILY_RAISE), DF(_LILY_COLEMAK_DH)
),
 [_LILY_COLEMAK_DH] = LAYOUT(
  KC_GRV,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
  KC_ESC,   KC_Q,   KC_W,    KC_F,    KC_P,    KC_B,                     KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_EQL,
  KC_TAB,   KC_A,   KC_R,    KC_S,    KC_T,    KC_G,                     KC_M,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT,
  KC_BSLS,  KC_Z,   KC_X,    KC_C,    KC_D,    KC_V, KC_LBRC,  KC_RBRC,  KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH, KC_BSPC,
  KC_LALT, KC_LCTL, KC_LGUI, KC_SPC,                          KC_ENT, KC_LSFT, MO(_LILY_RAISE), DF(_34_COLEMAK_DH)
),
/* RAISE
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |                    |  F7  |  F8  |  F9  | F10  | F11  | F12  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Bl-  | Bl+  | BTN2 | MS_U | BTN1 | WH_U |                    | Home | Pg_D |  Up  | Pg_U | Inc  |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Br-  | Br+  | MS_L | MS_D | MS_R | WH_D |-------.    ,-------| End  | Left | Down | Right| Del  |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * | Vol- | Vol+ | Play |  <-  |  ->  | Rfrsh|-------|    |-------|      |      |      |      |      | PtScr|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LCTL | LGUI | /Space  /       \Enter \  | LSFT |RAISE |  34  |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
[_LILY_RAISE] = LAYOUT(
		KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                 KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11, KC_F12,
		BL_DEC,  BL_INC,  KC_BTN2, KC_MS_U, KC_BTN1, KC_WH_U,               KC_HOME, KC_PGDN, KC_UP,   KC_PGUP, KC_INS, KC_NO,
		KC_BRID, KC_BRIU, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D,               KC_END,  KC_LEFT, KC_DOWN, KC_RGHT, KC_DEL, KC_NO,
		KC_VOLD, KC_VOLU, KC_MPLY, KC_WBAK, KC_WFWD, KC_WREF, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_PSCR,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
),
[_34_COLEMAK_DH] = LAYOUT(
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO,RALT_T(KC_Q),LCTL_T(KC_W),       KC_F ,    KC_P ,KC_B,            KC_J,    KC_L ,       KC_U    ,RCTL_T(KC_Y  ),RALT_T(KC_SCLN), KC_NO,
		KC_NO,LALT_T(KC_A),LCMD_T(KC_R),LSFT_T(KC_S),_L1(KC_T),KC_G,            KC_M,_R1(KC_N),RSFT_T(KC_E   ),RGUI_T(KC_I  ),LALT_T(KC_O   ), KC_NO,
		KC_NO,       KC_Z ,       KC_X ,       KC_C ,_L2(KC_D),KC_V,KC_NO,KC_NO,KC_K,_R3(KC_H),       KC_COMM ,       KC_DOT ,       KC_SLSH , KC_NO,
		KC_NO, KC_NO, KC_ESC, _L2(KC_SPC),              _R2(KC_ENT), KC_BSPC, KC_NO, DF(_LILY_QWERTY)
),
[_34_QWERTY] = LAYOUT(
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO,RALT_T(KC_Q),LCTL_T(KC_W),       KC_E ,    KC_R ,KC_T,            KC_Y,    KC_U ,       KC_I    ,RCTL_T(KC_O  ),RALT_T(KC_P.  ), KC_NO,
		KC_NO,LALT_T(KC_A),LCMD_T(KC_S),LSFT_T(KC_D),_L1(KC_F),KC_G,            KC_H,_R1(KC_J),RSFT_T(KC_K   ),RGUI_T(KC_L  ),LALT_T(KC_SCLN), KC_NO,
		KC_NO,       KC_Z ,       KC_X ,       KC_C ,_L2(KC_V),KC_B,KC_NO,KC_NO,KC_N,_R3(KC_M),       KC_COMM ,       KC_DOT ,       KC_SLSH , KC_NO,
		KC_NO, KC_NO, KC_ESC, _L2(KC_SPC),              _R2(KC_ENT), KC_BSPC, KC_NO, DF(_LILY_QWERTY)
),
/* TEMPLATE
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |      |      |      |      |      |      |-------.    ,-------|      |      |      |      |      |      |
 * |      |      |      |      |      |      |       |    |       |      |      |      |      |      |      |
 *                   |      |      |      |  /       /    \       \  |      |      |      |
 *                   `------------------------------'      '------------------------------'
 */
/* NAV
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |      | AltGr| Ctrl |      |      |      |                    | Home | PgDn |  ^   | PgUp | Ins  |      |
 * |      | Alt  | Cmd  | Shft |      |      |-------.    ,-------| End  |  <   |  v   |   >  | Del  |      |
 * |      |      |      |      |      |      |       |    |       |      |  -_  |  =+  |  '"  | Caps |      |
 *                   |      |      | Esc  |  / Space /    \ Enter \  |BSpace|      |      |
 *                   `------------------------------'      '------------------------------'
 */
[_34_RIGHT_NAV] = LAYOUT(
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_RALT, KC_LCTL, KC_NO,   KC_NO, KC_NO,               KC_HOME,KC_PGDN, KC_UP,   KC_PGUP, KC_INS,  KC_NO,
		KC_NO, KC_LALT, KC_LGUI, KC_LSFT, KC_NO, KC_NO,               KC_END, KC_LEFT, KC_DOWN, KC_RGHT, KC_DEL,  KC_NO,
		KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  KC_MINS, KC_EQL,  KC_QUOT, KC_CAPS, KC_NO,
		KC_NO, KC_NO, KC_ESC, KC_SPC,                KC_ENT, KC_BSPC, KC_NO, KC_NO
),
/* MOUSE
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |      | AltGr| Ctrl |      |      |      |                    | Wh ^ | Mh < | Ms ^ | Mh > | Acc3 |      |
 * |      | Alt  | Cmd  | Shft |      |      |-------.    ,-------| Wh v | Ms < | Ms v | Ms > | Acc2 |      |
 * |      |      |      |      |      |      |       |    |       |      | Ws 1 | Ms 3 | Ws 2 | Acc1 |      |
 *                   |      |      | Esc  |  / Space /    \ Enter \  |BSpace|      |      |
 *                   `------------------------------'      '------------------------------'
 */
[_34_RIGHT_MOUSE] = LAYOUT(
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_RALT, KC_LCTL, KC_NO,   KC_NO, KC_NO,               KC_WH_U, KC_WH_L, KC_MS_U, KC_WH_R, KC_ACL2, KC_NO,
		KC_NO, KC_LALT, KC_LGUI, KC_LSFT, KC_NO, KC_NO,               KC_WH_D, KC_MS_L, KC_MS_D, KC_MS_R, KC_ACL1, KC_NO,
		KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_BTN1, KC_BTN3, KC_BTN2, KC_ACL0, KC_NO,
		KC_NO, KC_NO, KC_ESC, KC_SPC,                KC_ENT, KC_BSPC, KC_NO, KC_NO
),
/* NUM
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |      |  1!  |  2@  |  3#  |  4$  |  5%  |                    |      |      |      | Ctrl | AltGr|      |
 * |      |  6^  |  7*  |  8*  |  9(  |  0)  |-------.    ,-------|      |      | Shft | Cmd  | Alt  |      |
 * |      |  Tab |  `~  |  \|  |  [{  |  ]}  |-------|    |-------|      |      |      |      |      |      |
 *                   |      |      | Esc  |  / Space /    \ Enter \  |BSpace|      |      |
 *                   `------------------------------'      '------------------------------'
 */
[_34_LEFT_NUM] = LAYOUT(
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                  KC_NO, KC_NO, KC_NO,   KC_RCTL, KC_RALT, KC_NO,
		KC_NO, KC_6,   KC_7,    KC_8,    KC_9,    KC_0,                  KC_NO, KC_NO, KC_RSFT, KC_RGUI, KC_LALT, KC_NO,
		KC_NO, KC_TAB, KC_GRV,  KC_BSLS, KC_LBRC, KC_RBRC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,
		KC_NO, KC_NO, KC_ESC, KC_SPC,                KC_ENT, KC_BSPC, KC_NO, KC_NO
),
/* MEDIA
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |      |Track-|Track+| Vol- | Vol+ | Mute |                    |      |      |      | Ctrl | AltGr|      |
 * |      |Search| Home | Back |Foward|Rfrsh |-------.    ,-------|      |      | Shft | Cmd  | Alt  |      |
 * |      |BkLt- |BkLt+ |Brght-|Brght+|      |-------|    |-------|      |      |      |      |      |      |
 *                   |      |      | Esc  |  / Space /    \ Enter \  |BSpace|      |      |
 *                   `------------------------------'      '------------------------------'
 */
[_34_LEFT_MEDIA] = LAYOUT(
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_MPRV, KC_MNXT, KC_VOLD, KC_VOLU, KC_MUTE,               KC_NO, KC_NO, KC_NO,   KC_RCTL, KC_RALT, KC_NO,
		KC_NO, KC_WSCH, KC_WHOM, KC_WBAK, KC_WFWD, KC_WREF,               KC_NO, KC_NO, KC_RSFT, KC_RGUI, KC_LALT, KC_NO,
		KC_NO, BL_DEC,  BL_INC,  KC_BRID, KC_BRIU, KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,
		KC_NO, KC_NO, KC_ESC, KC_SPC,                KC_ENT, KC_BSPC, KC_NO, KC_NO
),
/* FUN
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |      |  F1  |  F2  |  F3  |  F4  | PtScr|                    |      |      |      | Ctrl | AltGr|      |
 * |      |  F5  |  F6  |  F7  |  F8  | ScrLk|-------.    ,-------|      |      | Shft | Cmd  | Alt  |      |
 * |      |  F9  |  F10 |  F11 |  F12 | Pause|-------|    |-------|      |      |      |      |      |      |
 *                   |      |      | Esc  |  / Space /    \ Enter \  |BSpace|      |      |
 *                   `------------------------------'      '------------------------------'
 */
[_34_LEFT_FUN] = LAYOUT(
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_F1, KC_F2,  KC_F3,  KC_F4,  KC_PSCR,               KC_NO, KC_NO, KC_NO,   KC_RCTL, KC_RALT, KC_NO,
		KC_NO, KC_F5, KC_F6,  KC_F7,  KC_F8,  KC_SLCK,               KC_NO, KC_NO, KC_RSFT, KC_RGUI, KC_LALT, KC_NO,
		KC_NO, KC_F9, KC_F10, KC_F11, KC_F12, KC_PAUS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,
		KC_NO, KC_NO, KC_ESC, KC_SPC,                KC_ENT, KC_BSPC, KC_NO, KC_NO
),
/* UNCOMMON
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |      | AltGr| Ctrl |      |      |      |                    | Wh ^ | Ms 1 | Ms ^ | Ms 2 | Acc3 |      |
 * |      | Alt  | Cmd  | Shft |      |      |-------.    ,-------| Wh v | Ms < | Ms v | Ms > | Acc2 |      |
 * |      |      |      |      |      |      |       |    |       |      | Wh < | Ms 3 | Wh > | Acc1 |      |
 *                   |      |      | Esc  |  / Space /    \ Enter \  |BSpace|      |      |
 *                   `------------------------------'      '------------------------------'
 */
[_34_RIGHT_UNCOMMON] = LAYOUT(
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_RALT, KC_LCTL, KC_NO,   KC_NO, KC_NO,               KC_NO, CG_SWAP,   CG_NORM,   RESET, DEBUG, KC_NO,
		KC_NO, KC_LALT, KC_LGUI, KC_LSFT, KC_NO, KC_NO,               KC_NO, DF(_34_1), DF(_34_2), KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,     KC_NO,     KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_ESC, KC_SPC,                KC_ENT, KC_BSPC, KC_NO, KC_NO
)
};
		

// layer_state_t layer_state_set_user(layer_state_t state) {
//   return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
// }

//SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mk
#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master())
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  return rotation;
}

// When you add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);

bool oled_task_user(void) {
  if (is_keyboard_master()) {
    // If you want to change the display of OLED, you need to change here
    oled_write_ln(read_layer_state(), false);
    oled_write_ln(read_keylog(), false);
    oled_write_ln(read_keylogs(), false);
    //oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
    //oled_write_ln(read_host_led_state(), false);
    //oled_write_ln(read_timelog(), false);
  } else {
    oled_write(read_logo(), false);
  }
    return false;
}
#endif // OLED_ENABLE

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
#ifdef OLED_ENABLE
    set_keylog(keycode, record);
#endif
    // set_timelog();
  }
  return true;
}
