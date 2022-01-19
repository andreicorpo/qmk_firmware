#include QMK_KEYBOARD_H
// clang-format off
#define _________________QWERTY_L1_________________       KC_Q,    KC_W,    KC_E,    KC_R,    KC_T
#define _________________QWERTY_L2_________________       KC_A,    KC_S,    KC_D,    KC_F,    KC_G
#define _________________QWERTY_L3_________________       KC_Z,    KC_X,    KC_C,    KC_V,    KC_B

#define _________________QWERTY_R1_________________       KC_Y,    KC_U,    KC_I,    KC_O,    KC_P
#define _________________QWERTY_R2_________________       KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT
#define _________________QWERTY_R3_________________       KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH

#define ______________COLEMAK_MOD_DH_L1____________       KC_Q,    KC_W,    KC_F,    KC_P,    KC_B
#define ______________COLEMAK_MOD_DH_L2____________       KC_A,    KC_R,    KC_S,    KC_T,    KC_G
#define ______________COLEMAK_MOD_DH_L3____________       KC_Z,    KC_X,    KC_C,    KC_D,    KC_V

#define ______________COLEMAK_MOD_DH_R1____________       KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN
#define ______________COLEMAK_MOD_DH_R2____________       KC_M,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT
#define ______________COLEMAK_MOD_DH_R3____________       KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLASH


#define _________________DVORAK_L1_________________       KC_QUOT, KC_COMM, KC_DOT, KC_P,     KC_Y
#define _________________DVORAK_L2_________________       KC_A,    KC_O,    KC_E,   KC_U,     KC_I
#define _________________DVORAK_L3_________________       KC_SCLN, KC_Q,    KC_J,   KC_K,     KC_X

#define _________________DVORAK_R1_________________       KC_F,    KC_G,    KC_C,    KC_R,    KC_L
#define _________________DVORAK_R2_________________       KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_SLSH
#define _________________DVORAK_R3_________________       KC_B,    KC_M,    KC_W,    KC_V,    KC_Z


#define ________________NUMBER_LEFT________________       KC_1,    KC_2,    KC_3,    KC_4,    KC_5
#define ________________NUMBER_RIGHT_______________       KC_6,    KC_7,    KC_8,    KC_9,    KC_0
#define _________________FUNC_LEFT_________________       KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5
#define _________________FUNC_RIGHT________________       KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10

#define ___________________BLANK___________________       _______, _______, _______, _______, _______

#define ________________SYMBOLS_L1_________________       _______, KC_TILD,  KC_AT,   KC_EXLM,  _______
#define ________________SYMBOLS_L2_________________       KC_CIRC, KC_QUOTE, KC_DQUO, KC_GRAVE, KC_DLR
#define ________________SYMBOLS_L3_________________       KC_PERC, KC_HASH,  KC_MINS, KC_PLUS,  _______

#define ________________SYMBOLS_R1_________________       _______, KC_AMPR, KC_PIPE, KC_ASTR, _______
#define ________________SYMBOLS_R2_________________       KC_LBRC, KC_LPRN, KC_RPRN, KC_RBRC, _______
#define ________________SYMBOLS_R3_________________       _______, KC_EQL,  KC_SLSH, KC_BSLS, _______

#define __________________NAV_L1___________________       CUT,     PASTE,   COPY,    _______, _______
#define __________________NAV_L2___________________       _______, OS_LALT, OS_LGUI, _______, _______
#define __________________NAV_L3___________________       KC_LSFT, _______, _______, _______, _______
                                                   
#define __________________NAV_R1___________________       REDO,    UNDO,    _______, _______, _______
#define __________________NAV_R2___________________       KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______
#define __________________NAV_R3___________________       _______, KC_BSPC, KC_TAB,  _______, _______

#define _________________MEDIA_L1__________________       _______, _______, _______, RESET,   _______
#define _________________MEDIA_L2__________________       ___________________BLANK___________________
#define _________________MEDIA_L3__________________       ___________________BLANK___________________

#define _________________MEDIA_R1__________________       _______, VOL_DW,  VOL_UP,  _______, _______
#define _________________MEDIA_R2__________________       _______, PLAY,    PAUSE,   STOP,    _______
#define _________________MEDIA_R3__________________       _______, DEFLYR1, DEFLYR2, DEFLYR3, _______

#define _______________NUMBERS_L1__________________       ___________________BLANK___________________
#define _______________NUMBERS_L2__________________       ___________________BLANK___________________
#define _______________NUMBERS_L3__________________       ___________________BLANK___________________

#define _______________NUMBERS_R1__________________       _______, KC_7,    KC_8,    KC_9,    _______
#define _______________NUMBERS_R2__________________       _______, KC_4,    KC_5,    KC_6,    _______
#define _______________NUMBERS_R3__________________       KC_0,    KC_1,    KC_2,    KC_3,    _______

#define ______________NUMBERS_2_L1_________________       _______, _______, _______, _______, _______
#define ______________NUMBERS_2_L2_________________       _______, KC_2   , KC_3   , KC_4   , KC_5   
#define ______________NUMBERS_2_L3_________________       KC_1   , _______, _______, _______, _______

#define ______________NUMBERS_2_R1_________________       _______, _______, _______, _______, _______
#define ______________NUMBERS_2_R2_________________       KC_6   , KC_7   , KC_8   , KC_9   , _______
#define ______________NUMBERS_2_R3_________________       _______, _______, _______, _______, KC_0   

#define ________________NUMBERS_1__________________       KC_0,    KC_1,    KC_2,    KC_3,    KC_4
#define ________________NUMBERS_2__________________       KC_5,    KC_6,    KC_7,    KC_8,    KC_9

#define SS_S_C LGUI(LCTL(LSFT(KC_4)))
#define SS_A_C LGUI(LCTL(LSFT(KC_3)))
#define SS_S_F LGUI(LSFT(KC_4))
#define SS_A_F LGUI(LSFT(KC_3))
#define SS_W_F LGUI(LSFT(KC_5))
#define ______________SS_CLIPBOARD_________________       _______, SS_S_C,  SS_A_C,  _______, _______
#define ________________SS_FILE____________________       _______, SS_S_F,  SS_A_F,  SS_W_F,  _______


#define WEB_RE LGUI(LSFT(KC_R))
#define ____________________DEV____________________       _______, _______, KC_F12, WEB_RE,   _______


#define __________________MODS_L1__________________       _______, _______, _______, _______, _______
#define __________________MODS_L2__________________       _______, _______, OS_LALT, OS_LGUI, _______
#define __________________MODS_L3__________________       _______, _______, KC_TAB,  KC_BSPC, _______
#define _________MODS_LT_________                         TO(0),   OSM(MOD_HYPR), _______

#define __________________MODS_R1__________________       _______, _______, _______, _______, _______
#define __________________MODS_R2__________________       _______, OS_MEH,  OS_HYPR,  KC_ENT,  _______
#define __________________MODS_R3__________________       _______, KC_BSPC, KC_TAB,  _______, _______
#define _________MODS_RT__________                        TO(0),   KC_HOME, OSM(MOD_LGUI)
// clang-format on
