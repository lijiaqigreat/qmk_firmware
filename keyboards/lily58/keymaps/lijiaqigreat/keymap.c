#include QMK_KEYBOARD_H

enum layer_number {
  _34_W_QWE = 0,
  _34_W_COL,
  _34_W_1_NAV,
  _34_W_2_NUM,
  _34_W_3_FUN,
  _34_W_4_MSC,
  _34_M_QWE,
  _34_M_COL,
  _34_M_1_NAV,
  _34_M_2_NUM,
  _34_M_3_FUN,
  _34_M_4_MSC,
  _ST,
//   _LILY_QWERTY,
//   _LILY_COLEMAK_DH,
//   _LILY_RAISE,
};

// #define XXXXXXX KC_NO
#define XX12 KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO
#define XXXX KC_NO
#define XX KC_NO
// #define _______ KC_TRNS
#define ____ KC_TRNS
#define __ KC_TRNS

// #define _34_1 _34_COLEMAK_DH
// #define _34_2 _34_QWERTY
#define _W_M1 KC_LCTL
#define _W_M2 KC_LGUI
#define _M_M1 KC_LGUI
#define _M_M2 KC_LCTL

#define _W_M1T(K) LCTL_T(K)
#define _W_M2T(K) LGUI_T(K)
#define _M_M1T(K) LGUI_T(K)
#define _M_M2T(K) LCTL_T(K)

#define _W_WBAK KC_WBAK
#define _W_WFWD KC_WFWD
#define _W_WPRV RCS (KC_TAB)
#define _W_WNXT RCTL(KC_TAB)
#define _M_WBAK LGUI(KC_LEFT)
#define _M_WFWD LGUI(KC_RGHT)
#define _M_WPRV RAG (KC_LEFT)
#define _M_WNXT RAG (KC_RGHT)

#define _C_Q    KC_Q
#define _C_W    KC_W
#define _C_E    KC_F
#define _C_R    KC_P
#define _C_T    KC_B
#define _C_Y    KC_J
#define _C_U    KC_L
#define _C_I    KC_U
#define _C_O    KC_Y
#define _C_P    KC_SCLN
#define _C_A    KC_A
#define _C_S    KC_R
#define _C_D    KC_S
#define _C_F    KC_T
#define _C_G    KC_G
#define _C_H    KC_M
#define _C_J    KC_N
#define _C_K    KC_E
#define _C_L    KC_I
#define _C_SCLN KC_O
#define _C_Z    KC_Z
#define _C_X    KC_X
#define _C_C    KC_C
#define _C_V    KC_D
#define _C_B    KC_V
#define _C_N    KC_K
#define _C_M    KC_H
#define _C_COMM KC_COMM
#define _C_DOT  KC_DOT
#define _C_SLSH KC_SLSH
#define _LAYOUT_34( \
	K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, \
	K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, \
	K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, \
	K30, K31, K32, K33) \
	LAYOUT( \
	KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
	KC_NO, K00, K01, K02, K03, K04,               K05, K06, K07, K08, K09, KC_NO, \
	KC_NO, K10, K11, K12, K13, K14,               K15, K16, K17, K18, K19, KC_NO, \
	KC_NO, K20, K21, K22, K23, K24, KC_NO, KC_NO, K25, K26, K27, K28, K29, KC_NO, \
	KC_NO, KC_NO, K30, K31, K32, K33, KC_NO, KC_NO)

// #define _LS1 LGUI_T(KC_SPC)
// #define _LS2 LCTL_T(KC_ESC)
// #define _RS1 LGUI_T(KC_ENT)
// #define _RS2 LCTL_T(KC_BSPC)
// #define _L1(A) LT(_34_RIGHT_MOUSE, A)
// #define _L2(A) LT(_34_LEFT_MEDIA, A)
// #define _L3(A) LT(_34_RIGHT_UNCOMMON, A)
#define _W_L1(A) LT(_34_W_1_NAV, A)
#define _W_L2(A) LT(_34_W_2_NUM, A)
#define _W_L3(A) LT(_34_W_3_FUN, A)
#define _W_L4(A) LT(_34_W_4_MSC, A)
// #define _W_L5(A) LT(_MOUSE, A)
#define _M_L1(A) LT(_34_M_1_NAV, A)
#define _M_L2(A) LT(_34_M_2_NUM, A)
#define _M_L3(A) LT(_34_M_3_FUN, A)
#define _M_L4(A) LT(_34_M_4_MSC, A)
// #define _M_L5(A) LT(_MOUSE, A)

// #define _R1(A) LT(_34_LEFT_NUM, A)
// #define _R2(A) LT(_34_RIGHT_NAV, A)
// #define _R3(A) LT(_34_LEFT_FUN, A)
// #define _LGA_T(A) MT(MOD_LALT | MOD_LGUI, A)
// #define _RGA_T(A) MT(MOD_LALT | MOD_RGUI, A)

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

//  [_LILY_QWERTY] = LAYOUT(
//   KC_GRV,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
//   KC_ESC,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_EQL,
//   KC_TAB,   KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                     KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
//   KC_BSLS,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B, KC_LBRC,  KC_RBRC,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_BSPC,
//   KC_LALT, KC_LCTL, KC_LGUI, KC_SPC,                          KC_ENT, KC_LSFT, MO(_LILY_RAISE), DF(_LILY_COLEMAK_DH)
// ),
//  [_LILY_COLEMAK_DH] = LAYOUT(
//   KC_GRV,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
//   KC_ESC,   KC_Q,   KC_W,    KC_F,    KC_P,    KC_B,                     KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_EQL,
//   KC_TAB,   KC_A,   KC_R,    KC_S,    KC_T,    KC_G,                     KC_M,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT,
//   KC_BSLS,  KC_Z,   KC_X,    KC_C,    KC_D,    KC_V, KC_LBRC,  KC_RBRC,  KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH, KC_BSPC,
//   KC_LALT, KC_LCTL, KC_LGUI, KC_SPC,                          KC_ENT, KC_LSFT, MO(_LILY_RAISE), DF(_34_W_QWE)
// ),
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
// [_LILY_RAISE] = LAYOUT(
// 		KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                 KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11, KC_F12,
// 		BL_DEC,  BL_INC,  KC_BTN2, KC_MS_U, KC_BTN1, KC_WH_U,               KC_HOME, KC_PGDN, KC_UP,   KC_PGUP, KC_INS, KC_NO,
// 		KC_BRID, KC_BRIU, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D,               KC_END,  KC_LEFT, KC_DOWN, KC_RGHT, KC_DEL, KC_NO,
// 		KC_VOLD, KC_VOLU, KC_MPLY, KC_WBAK, KC_WFWD, KC_WREF, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_PSCR,
// 		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
// ),
//  Q   W   E   R   T       Y   U   I   O   P
[_34_W_QWE] = _LAYOUT_34(
_W_L4 (KC_Q   ),LALT_T(KC_W   ),_W_M2T(KC_E   ),_W_L3(KC_R),_W_M2T(KC_T),/**/KC_Y,KC_U,KC_I   ,KC_O   ,KC_P   ,
_W_L4 (KC_A   ),LALT_T(KC_S   ),_W_M2T(KC_D   ),_W_L2(KC_F),_W_M2T(KC_G),/**/KC_H,KC_J,KC_K   ,KC_L   ,KC_SCLN,
_W_L4 (KC_Z   ),LALT_T(KC_X   ),_W_M2T(KC_C   ),_W_L1(KC_V),_W_M2T(KC_B),/**/KC_N,KC_M,KC_COMM,KC_DOT ,KC_SLSH,
LSFT_T(KC_ESC ),_W_M1T(KC_SPC ),                                                       KC_ENT ,KC_BSPC),
[_34_W_COL] = _LAYOUT_34(
_W_L4 (_C_Q   ),LALT_T(_C_W   ),_W_M2T(_C_E   ),_W_L3(_C_R),_W_M2T(KC_T),/**/_C_Y,_C_U,_C_I   ,_C_O   ,_C_P   ,
_W_L4 (_C_A   ),LALT_T(_C_S   ),_W_M2T(_C_D   ),_W_L2(_C_F),_W_M2T(KC_G),/**/_C_H,_C_J,_C_K   ,_C_L   ,_C_SCLN,
_W_L4 (_C_Z   ),LALT_T(_C_X   ),_W_M2T(_C_C   ),_W_L1(_C_V),_W_M2T(KC_B),/**/_C_N,_C_M,_C_COMM,_C_DOT ,_C_SLSH,
LSFT_T(KC_ESC ),_W_M1T(KC_SPC ),                                                       KC_ENT ,KC_BSPC),
[_34_W_1_NAV] = _LAYOUT_34(
KC_GRV ,KC_LALT,_W_M2  ,KC_TRNS,XX,/**/KC_HOME,KC_PGDN,KC_UP  ,KC_PGUP,KC_INS ,
KC_TAB ,KC_LALT,_W_M2  ,KC_TRNS,XX,/**/KC_END ,KC_LEFT,KC_DOWN,KC_RGHT,KC_DEL ,
KC_CAPS,KC_LALT,_W_M2  ,KC_TRNS,XX,/**/XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
KC_LSFT,_W_M1  ,                                               KC_SPC ,KC_ESC ),
[_34_W_2_NUM] = _LAYOUT_34(
KC_GRV ,KC_LALT,_W_M2  ,KC_TRNS,XX,/**/KC_MINS,KC_7   ,KC_8   ,KC_9   ,KC_EQL ,
KC_TAB ,KC_LALT,_W_M2  ,KC_TRNS,XX,/**/KC_LBRC,KC_4   ,KC_5   ,KC_6   ,KC_RBRC,
KC_CAPS,KC_LALT,_W_M2  ,KC_TRNS,XX,/**/XXXXXXX,KC_1   ,KC_2   ,KC_3   ,KC_BSLS,
KC_LSFT,_W_M1  ,                                               KC_QUOT,KC_0   ),
[_34_W_3_FUN] = _LAYOUT_34(
KC_GRV ,KC_LALT,_W_M2  ,KC_TRNS,XX,/**/KC_PAUS,KC_F7  ,KC_F8  ,KC_F9  ,KC_F12 ,
KC_TAB ,KC_LALT,_W_M2  ,KC_TRNS,XX,/**/KC_SLCK,KC_F4  ,KC_F5  ,KC_F6  ,KC_F11 ,
KC_CAPS,KC_LALT,_W_M2  ,KC_TRNS,XX,/**/KC_PSCR,KC_F1  ,KC_F2  ,KC_F3  ,KC_F10 ,
KC_LSFT,_W_M1  ,                                               XXXXXXX,XXXXXXX),
[_34_W_4_MSC] = _LAYOUT_34(
KC_TRNS,KC_MPLY,KC_MUTE,KC_VOLD,KC_VOLU,/**/MO(_ST),KC_WH_D,KC_MS_U,KC_WH_U,KC_ACL2,
KC_TRNS,_W_WBAK,_W_WFWD,_W_WPRV,_W_WNXT,/**/MO(_ST),KC_MS_L,KC_MS_D,KC_MS_R,KC_ACL2,
KC_TRNS,XXXXXXX,XXXXXXX,KC_BRID,KC_BRIU,/**/MO(_ST),KC_WH_L,KC_BTN3,KC_WH_R,KC_ACL0,
KC_BSPC,KC_ENT ,                                                    KC_BTN1,KC_BTN2),
[_34_M_QWE] = _LAYOUT_34(
_M_L4 (KC_Q   ),LALT_T(KC_W   ),_M_M2T(KC_E   ),_M_L3(KC_R),KC_T,/**/KC_Y,KC_U,KC_I   ,KC_O   ,KC_P   ,
_M_L4 (KC_A   ),LALT_T(KC_S   ),_M_M2T(KC_D   ),_M_L2(KC_F),KC_G,/**/KC_H,KC_J,KC_K   ,KC_L   ,KC_SCLN,
_M_L4 (KC_Z   ),LALT_T(KC_X   ),_M_M2T(KC_C   ),_M_L1(KC_V),KC_B,/**/KC_N,KC_M,KC_COMM,KC_DOT ,KC_SLSH,
LSFT_T(KC_ESC ),_M_M1T(KC_SPC ),                                                       KC_ENT ,KC_BSPC),
[_34_M_COL] = _LAYOUT_34(
_M_L4 (_C_Q   ),LALT_T(_C_W   ),_M_M2T(_C_E   ),_M_L3(_C_R),_C_T,/**/_C_Y,_C_U,_C_I   ,_C_O   ,_C_P   ,
_M_L4 (_C_A   ),LALT_T(_C_S   ),_M_M2T(_C_D   ),_M_L2(_C_F),_C_G,/**/_C_H,_C_J,_C_K   ,_C_L   ,_C_SCLN,
_M_L4 (_C_Z   ),LALT_T(_C_X   ),_M_M2T(_C_C   ),_M_L1(_C_V),_C_B,/**/_C_N,_C_M,_C_COMM,_C_DOT ,_C_SLSH,
LSFT_T(KC_ESC ),_M_M1T(KC_SPC ),                                                       KC_ENT ,KC_BSPC),
[_34_M_1_NAV] = _LAYOUT_34(
KC_GRV ,KC_LALT,_M_M2  ,KC_TRNS,XX,/**/KC_HOME,KC_PGDN,KC_UP  ,KC_PGUP,KC_INS ,
KC_TAB ,KC_LALT,_M_M2  ,KC_TRNS,XX,/**/KC_END ,KC_LEFT,KC_DOWN,KC_RGHT,KC_DEL ,
KC_CAPS,KC_LALT,_M_M2  ,KC_TRNS,XX,/**/XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
KC_LSFT,_M_M1  ,                                               KC_SPC ,KC_ESC ),
[_34_M_2_NUM] = _LAYOUT_34(
KC_GRV ,KC_LALT,_M_M2  ,KC_TRNS,XX,/**/KC_MINS,KC_7   ,KC_8   ,KC_9   ,KC_EQL ,
KC_TAB ,KC_LALT,_M_M2  ,KC_TRNS,XX,/**/KC_LBRC,KC_4   ,KC_5   ,KC_6   ,KC_RBRC,
KC_CAPS,KC_LALT,_M_M2  ,KC_TRNS,XX,/**/XXXXXXX,KC_1   ,KC_2   ,KC_3   ,KC_BSLS,
KC_LSFT,_M_M1  ,                                               KC_QUOT,KC_0   ),
[_34_M_3_FUN] = _LAYOUT_34(
KC_GRV ,KC_LALT,_M_M2  ,KC_TRNS,XX,/**/KC_PAUS,KC_F7  ,KC_F8  ,KC_F9  ,KC_F12 ,
KC_TAB ,KC_LALT,_M_M2  ,KC_TRNS,XX,/**/KC_SLCK,KC_F4  ,KC_F5  ,KC_F6  ,KC_F11 ,
KC_CAPS,KC_LALT,_M_M2  ,KC_TRNS,XX,/**/KC_PSCR,KC_F1  ,KC_F2  ,KC_F3  ,KC_F10 ,
KC_LSFT,_M_M1  ,                                               XXXXXXX,XXXXXXX),
[_34_M_4_MSC] = _LAYOUT_34(
KC_TRNS,KC_MPLY,KC_MUTE,KC_VOLD,KC_VOLU,/**/MO(_ST),KC_WH_D,KC_MS_U,KC_WH_U,KC_ACL2,
KC_TRNS,_M_WBAK,_M_WFWD,_M_WPRV,_M_WNXT,/**/MO(_ST),KC_MS_L,KC_MS_D,KC_MS_R,KC_ACL2,
KC_TRNS,XXXXXXX,XXXXXXX,KC_BRID,KC_BRIU,/**/MO(_ST),KC_WH_L,KC_BTN3,KC_WH_R,KC_ACL0,
KC_BSPC,KC_ENT ,                                                    KC_BTN1,KC_BTN2),
[_ST] = _LAYOUT_34(
__,__,__,__,__,/**/__,DF(_34_M_QWE),DF(_34_M_COL),XXXXXXX,XXXXXXX,
__,__,__,__,__,/**/__,DF(_34_W_QWE),DF(_34_W_COL),XXXXXXX,XXXXXXX,
__,__,__,__,__,/**/__,EEP_RST      ,RESET        ,XXXXXXX,XXXXXXX,
__,__,                                            _______,_______)
};
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
 * |      |      |      |      |      |      |       |    |       |      |  -_X |  =+  |  '"  | Caps |      |
 *                   |      |      | Esc  |  / Space /    \ Enter \  |BSpace|      |      |
 *                   `------------------------------'      '------------------------------'
 */
// [_34_RIGHT_NAV] = LAYOUT(
// 		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
// 		KC_NO, KC_RALT, KC_LCTL, KC_NO,   KC_NO, KC_NO,               KC_HOME,KC_PGDN, KC_UP,   KC_PGUP, KC_INS,  KC_NO,
// 		KC_NO, KC_LALT, KC_LGUI, KC_LSFT, KC_NO, KC_NO,               KC_END, KC_LEFT, KC_DOWN, KC_RGHT, KC_DEL,  KC_NO,
// 		KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  KC_MINS, KC_EQL,  KC_QUOT, KC_CAPS, KC_NO,
// 		KC_NO, KC_NO, KC_ESC, KC_SPC,                KC_ENT, KC_BSPC, KC_NO, KC_NO
// ),
// /* MOUSE
//  * ,-----------------------------------------.                    ,-----------------------------------------.
//  * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
//  * |      | AltGr| Ctrl |      |      |      |                    | Wh ^ | Mh < | Ms ^ | Mh > | Acc3 |      |
//  * |      | Alt  | Cmd  | Shft |      |      |-------.    ,-------| Wh v | Ms < | Ms v | Ms > | Acc2 |      |
//  * |      |      |      |      |      |      |       |    |       |      | Ws 1 | Ms 3 | Ws 2 | Acc1 |      |
//  *                   |      |      | Esc  |  / Space /    \ Enter \  |BSpace|      |      |
//  *                   `------------------------------'      '------------------------------'
//  */
// [_34_RIGHT_MOUSE] = LAYOUT(
// 		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
// 		KC_NO, KC_RALT, KC_LCTL, KC_NO,   KC_NO, KC_NO,               KC_WH_U, KC_WH_L, KC_MS_U, KC_WH_R, KC_ACL2, KC_NO,
// 		KC_NO, KC_LALT, KC_LGUI, KC_LSFT, KC_NO, KC_NO,               KC_WH_D, KC_MS_L, KC_MS_D, KC_MS_R, KC_ACL1, KC_NO,
// 		KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_BTN1, KC_BTN3, KC_BTN2, KC_ACL0, KC_NO,
// 		KC_NO, KC_NO, KC_ESC, KC_SPC,                KC_ENT, KC_BSPC, KC_NO, KC_NO
// ),
// /* NUM
//  * ,-----------------------------------------.                    ,-----------------------------------------.
//  * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
//  * |      |  1!  |  2@  |  3#  |  4$  |  5%  |                    |      |      |      | Ctrl | AltGr|      |
//  * |      |  6^  |  7*  |  8*  |  9(  |  0)  |-------.    ,-------|      |      | Shft | Cmd  | Alt  |      |
//  * |      |  Tab |  `~  |  \|  |  [{  |  ]}  |-------|    |-------|      |      |      |      |      |      |
//  *                   |      |      | Esc  |  / Space /    \ Enter \  |BSpace|      |      |
//  *                   `------------------------------'      '------------------------------'
//  */
// [_34_LEFT_NUM] = LAYOUT(
// 		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
// 		KC_NO, KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                  KC_NO, KC_NO, KC_NO,   KC_RCTL, KC_RALT, KC_NO,
// 		KC_NO, KC_6,   KC_7,    KC_8,    KC_9,    KC_0,                  KC_NO, KC_NO, KC_RSFT, KC_RGUI, KC_LALT, KC_NO,
// 		KC_NO, KC_TAB, KC_GRV,  KC_BSLS, KC_LBRC, KC_RBRC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,
// 		KC_NO, KC_NO, KC_ESC, KC_SPC,                KC_ENT, KC_BSPC, KC_NO, KC_NO
// ),
// /* MEDIA
//  * ,-----------------------------------------.                    ,-----------------------------------------.
//  * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
//  * |      |Track-|Track+| Vol- | Vol+ | Mute |                    |      |      |      | Ctrl | AltGr|      |
//  * |      |Search| Home | Back |Foward|Rfrsh |-------.    ,-------|      |      | Shft | Cmd  | Alt  |      |
//  * |      |BkLt- |BkLt+ |Brght-|Brght+|      |-------|    |-------|      |      |      |      |      |      |
//  *                   |      |      | Esc  |  / Space /    \ Enter \  |BSpace|      |      |
//  *                   `------------------------------'      '------------------------------'
//  */
// [_34_LEFT_MEDIA] = LAYOUT(
// 		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
// 		KC_NO, KC_MPRV, KC_MNXT, KC_VOLD, KC_VOLU, KC_MUTE,               KC_NO, KC_NO, KC_NO,   KC_RCTL, KC_RALT, KC_NO,
// 		KC_NO, KC_WSCH, KC_WHOM, KC_WBAK, KC_WFWD, KC_WREF,               KC_NO, KC_NO, KC_RSFT, KC_RGUI, KC_LALT, KC_NO,
// 		KC_NO, BL_DEC,  BL_INC,  KC_BRID, KC_BRIU, KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,
// 		KC_NO, KC_NO, KC_ESC, KC_SPC,                KC_ENT, KC_BSPC, KC_NO, KC_NO
// ),
// /* FUN
//  * ,-----------------------------------------.                    ,-----------------------------------------.
//  * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
//  * |      |  F1  |  F2  |  F3  |  F4  | PtScr|                    |      |      |      | Ctrl | AltGr|      |
//  * |      |  F5  |  F6  |  F7  |  F8  | ScrLk|-------.    ,-------|      |      | Shft | Cmd  | Alt  |      |
//  * |      |  F9  |  F10 |  F11 |  F12 | Pause|-------|    |-------|      |      |      |      |      |      |
//  *                   |      |      | Esc  |  / Space /    \ Enter \  |BSpace|      |      |
//  *                   `------------------------------'      '------------------------------'
//  */
// [_34_LEFT_FUN] = LAYOUT(
// 		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
// 		KC_NO, KC_F1, KC_F2,  KC_F3,  KC_F4,  KC_PSCR,               KC_NO, KC_NO, KC_NO,   KC_RCTL, KC_RALT, KC_NO,
// 		KC_NO, KC_F5, KC_F6,  KC_F7,  KC_F8,  KC_SLCK,               KC_NO, KC_NO, KC_RSFT, KC_RGUI, KC_LALT, KC_NO,
// 		KC_NO, KC_F9, KC_F10, KC_F11, KC_F12, KC_PAUS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,
// 		KC_NO, KC_NO, KC_ESC, KC_SPC,                KC_ENT, KC_BSPC, KC_NO, KC_NO
// ),
// /* UNCOMMON
//  * ,-----------------------------------------.                    ,-----------------------------------------.
//  * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
//  * |      | AltGr| Ctrl |      |      |      |                    | Wh ^ | Ms 1 | Ms ^ | Ms 2 | Acc3 |      |
//  * |      | Alt  | Cmd  | Shft |      |      |-------.    ,-------| Wh v | Ms < | Ms v | Ms > | Acc2 |      |
//  * |      |      |      |      |      |      |       |    |       |      | Wh < | Ms 3 | Wh > | Acc1 |      |
//  *                   |      |      | Esc  |  / Space /    \ Enter \  |BSpace|      |      |
//  *                   `------------------------------'      '------------------------------'
//  */
// [_34_RIGHT_UNCOMMON] = LAYOUT(
// 		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
// 		KC_NO, KC_RALT, KC_LCTL, KC_NO,   KC_NO, KC_NO,               KC_NO, CG_SWAP,   CG_NORM,   RESET, DEBUG, KC_NO,
// 		KC_NO, KC_LALT, KC_LGUI, KC_LSFT, KC_NO, KC_NO,               KC_NO, DF(_34_1), DF(_34_2), KC_NO, KC_NO, KC_NO,
// 		KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,     KC_NO,     KC_NO, KC_NO, KC_NO,
// 		KC_NO, KC_NO, KC_ESC, KC_SPC,                KC_ENT, KC_BSPC, KC_NO, KC_NO
// )
		

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
// const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);

const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
void set_timelog(void);
const char *read_timelog(void);

#define _S1 24*2*4
#define _S2 24*4


bool oled_task_user(void) {
  static const char PROGMEM symbols[] = {
  // 'pixil-frame-0 (5)', 128x32px
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x42, 0x7f, 0x40, 0x40, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x42, 0x61, 0x51, 0x49, 0x46, 0x00, 0x00, 0x00, 0x3e, 0x41, 0x55, 0x5d, 0x51, 0x4e, 
0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x49, 0x49, 0x49, 0x36, 0x00, 
0x00, 0x00, 0x24, 0x7e, 0x24, 0x24, 0x7e, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x00, 0x00, 0x04, 0x04, 0x1f, 0x04, 0x04, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0xfc, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0xd8, 0x04, 0x04, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x14, 0x12, 0x7f, 0x10, 0x00, 
0x00, 0x00, 0x26, 0x49, 0x7f, 0x49, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x27, 0x45, 0x45, 0x45, 0x39, 0x00, 0x00, 0x00, 0x02, 0x45, 0x32, 0x08, 0x26, 0x51, 
0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x49, 0x49, 0x49, 0x32, 0x00, 
0x00, 0x00, 0x00, 0x04, 0x02, 0x02, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x41, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x41, 0x36, 0x08, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x61, 0x11, 0x09, 0x07, 0x00, 
0x00, 0x00, 0x36, 0x49, 0x49, 0x56, 0x20, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x36, 0x49, 0x49, 0x49, 0x36, 0x00, 0x00, 0x00, 0x14, 0x08, 0x36, 0x08, 0x14, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x49, 0x49, 0x29, 0x1e, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x3e, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x06, 0x18, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x08, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x06, 0x08, 0x06, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x41, 0x5d, 0x41, 0x3e, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x41, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
  };
  if (is_keyboard_master()) {
    // If you want to change the display of OLED, you need to change here
    // oled_write_ln(read_layer_state(), false);
    oled_write_ln(read_keylog(), false);
    oled_write_ln(read_keylogs(), false);
    // oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
    // oled_write_ln(read_host_led_state(), false);
    oled_write_ln(read_timelog(), false);
  } else {
    oled_write_raw_P(symbols, 128*32/8);
  }
  return false;
}
#endif // OLED_ENABLE

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
#ifdef OLED_ENABLE
    set_keylog(keycode, record);
#endif
    set_timelog();
  }
  return true;
}
