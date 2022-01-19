#include QMK_KEYBOARD_H

enum layer_names {
    _QWERTY             = 0,
    FIRST_DEFAULT_LAYER = 0,
    _DVORAK,
    LAST_DEFAULT_LAYER = _DVORAK,
    _SYMBOLS,
    _NAV,
    _MEDIA,
    _NUMBERS,
    _FKEYS,
    _SS,
    _DEV,
};

enum custom_keycodes {
    KC_QWERTY,                                // Sets default layer to QWERTY
    FIRST_DEFAULT_LAYER_KEYCODE = KC_QWERTY,  // Sets default layer to QWERTY
    KC_DVORAK,                                // Sets default layer to DVORAK
    LAST_DEFAULT_LAYER_KEYCODE = KC_DVORAK,   // Sets default layer to WORKMAN
    // UC_FLIP,                                  // (ಠ痊ಠ)┻━┻
    // UC_TABL,                                  // ┬─┬ノ( º _ ºノ)
    // UC_SHRG,                                  // ¯\_(ツ)_/¯
    // UC_DISA,                                  // ಠ_ಠ
    // UC_HERT,                                  // <3
    NEW_SAFE_RANGE  // use "NEWPLACEHOLDER for keymap specific codes
};

#define _DEFAULT_LAYER_1 FIRST_DEFAULT_LAYER
#define _DEFAULT_LAYER_2 (FIRST_DEFAULT_LAYER + 1)

#define QWERTY DF(_QWERTY)
#define DVORAK DF(_DVORAK)
#define COLEMAK KC_COLEMAK
#define COLEMAKDH KC_COLEMAK_DH

#define DEFLYR1 FIRST_DEFAULT_LAYER_KEYCODE
#define DEFLYR2 (FIRST_DEFAULT_LAYER_KEYCODE + 1)

#define KC_RESET RESET
#define KC_RST KC_RESET

// Mac
#define UNDO LGUI(KC_Z)
#define REDO LSFT(LGUI(KC_Z))
#define CB_H LGUI(LSFT(KC_C))
#define CUT LGUI(KC_X)
#define COPY LGUI(KC_C)
#define PASTE LGUI(KC_V)

#define PLAY KC_MEDIA_PLAY_PAUSE
#define STOP KC_MEDIA_STOP
#define PAUSE KC_PAUSE
#define VOL_UP KC_AUDIO_VOL_UP
#define VOL_DW KC_AUDIO_VOL_DOWN
#define VOL_MT KC_AUDIO_MUTE

/* OSM keycodes, to keep things clean and easy to change */
#define KC_MLSF OSM(MOD_LSFT)
#define KC_MRSF OSM(MOD_RSFT)

#define OS_LGUI OSM(MOD_LGUI)
#define OS_RGUI OSM(MOD_RGUI)
#define OS_LSFT OSM(MOD_LSFT)
#define OS_RSFT OSM(MOD_RSFT)
#define OS_LCTL OSM(MOD_LCTL)
#define OS_RCTL OSM(MOD_RCTL)
#define OS_LALT OSM(MOD_LALT)
#define OS_RALT OSM(MOD_RALT)
#define OS_MEH OSM(MOD_MEH)
#define OS_HYPR OSM(MOD_HYPR)

// Tidy keymaps
#define NV(kc) LT(_NAV, kc)
#define SPC_SMB LT(_SYMBOLS, KC_SPACE)
#define CTL_ESC LCTL_T(KC_ESCAPE)
#define SFT_HME LSFT_T(KC_HOME)
#define SFT_ENT LSFT_T(KC_ENTER)
#define MEDIA OSL(_MEDIA)

#define LAYOUT_scylla_wrapper(...) LAYOUT_split_4x6_5(__VA_ARGS__)

// clang-format off
#define LAYOUT_scylla_base( \
    K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, \
    K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, \
    K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A  \
    ) \
    LAYOUT_scylla_wrapper( \
    _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                           KC_6,    KC_7,    KC_8,    KC_9,    KC_0, _______, \
\
    _______, K01,     K02,     K03,     K04,     K05,                            K06,     K07,     K08,     K09,     K0A,  _______, \
\
    _______, K11,     K12,     K13,     NV(K14), K15,                            K16,     K17,     K18,     K19,     K1A,  K1B,     \
\
    _______, K21,     K22,     K23,     K24,     K25,                            K26,     K27,     K28,     K29,     K2A,  MEDIA,   \
\
                                        KC_TAB,  SPC_SMB, SFT_HME,      SFT_ENT, CTL_ESC, KC_BSPC, \
                                                 OS_HYPR, OS_LGUI,      OS_LALT, OS_MEH \
    )

#define LAYOUT_base_wrapper(...) LAYOUT_scylla_base(__VA_ARGS__)

// Layout
//     _______, _______, _______, _______, _______, _______,                        _______, _______, _______, _______, _______, _______,
//
//     _______, _______, _______, _______, _______, _______,                        _______, _______, _______, _______, _______, _______,
//
//     _______, _______, _______, _______, _______, _______,                        _______, _______, _______, _______, _______, _______,
//
//     _______, _______, _______, _______, _______, _______,                        _______, _______, _______, _______, _______, _______,
//
//                                         _______, _______, _______,      _______, _______, _______,
//
//                                                  _______, _______,      _______, _______


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_DEFAULT_LAYER_1] = LAYOUT_base_wrapper(
      KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,       KC_Y,    KC_U,    KC_I,    KC_O,    KC_P   ,
      KC_A,    KC_S,    KC_D,    KC_F,    KC_G,       KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
      KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,       KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH
  ),

  [_DEFAULT_LAYER_2] = LAYOUT_base_wrapper(
      KC_QUOT, KC_COMM, KC_DOT, KC_P,     KC_Y,       KC_F,    KC_G,    KC_C,    KC_R,    KC_L,
      KC_A,    KC_O,    KC_E,   KC_U,     KC_I,       KC_D,    KC_H,    KC_T,    KC_N,    KC_S, KC_SLSH,
      KC_SCLN, KC_Q,    KC_J,   KC_K,     KC_X,       KC_B,    KC_M,    KC_W,    KC_V,    KC_Z
  ),

  [_SYMBOLS] = LAYOUT_scylla_wrapper(
    _______, _______, _______, _______, _______, _______,                        _______, _______, _______, _______, _______, _______,

    _______, _______, KC_TILD, KC_AT,   KC_EXLM, _______,                        _______, KC_AMPR, KC_PIPE, KC_ASTR, _______, _______,

    _______, KC_CIRC, KC_QUOT, KC_DQUO, KC_GRV,  KC_DLR,                         KC_LBRC, KC_LPRN, KC_RPRN, KC_RBRC, _______, _______,

    _______, KC_PERC, KC_HASH, KC_MINS, KC_PLUS, _______,                        _______, KC_EQL,  KC_SLSH, KC_BSLS, _______, _______,

                                        _______, _______, _______,      _______, _______, _______,

                                                 _______, _______,      _______, _______
  ),

  [_NAV] = LAYOUT_scylla_wrapper(
    _______, _______, _______, _______, _______, _______,                        _______, _______, _______, _______, _______, _______,

    _______, _______, _______, _______, _______, _______,                        _______, _______, _______, _______, _______, _______,

    _______, _______, _______, _______, _______, _______,                        KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,

    _______, _______, _______, _______, _______, _______,                        _______, QWERTY,  DVORAK,  _______, _______, _______,

                                        PASTE,   COPY,    KC_LSFT,      OS_LGUI, OS_LALT, _______,

                                                 CUT,     _______,      _______, _______
  ),

  [_MEDIA] = LAYOUT_scylla_wrapper(
    _______, _______, _______, _______, _______, _______,                        _______, _______, _______, _______, _______, _______,

    _______, _______, _______, _______, _______, _______,                        _______, _______, _______, _______, _______, _______,

    _______, _______, _______, _______, _______, _______,                        _______, _______, _______, _______, _______, _______,

    _______, _______, _______, _______, _______, _______,                        _______, VOL_DW,  VOL_UP,  _______, _______, _______,

                                        _______, _______, _______,      _______, _______, _______,

                                                 _______, _______,      RESET,   _______
  ),
};
// clang-format on

// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//     switch (keycode) {
//         case FIRST_DEFAULT_LAYER_KEYCODE ... LAST_DEFAULT_LAYER_KEYCODE:
//             if (record->event.pressed) {
// #ifdef CONSOLE_ENABLE
//                 xprintf("Switching def layer to %s", keycode);
// #endif
//                 set_single_persistent_default_layer(keycode - FIRST_DEFAULT_LAYER_KEYCODE);
//             }
//             return false;
//             break;
//     }
//     return true;
// }
