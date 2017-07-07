#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

KEYMAP(
        ESC,   1,    2,     3,     4,     5,     BSLS,  HOME, END,    6,     7,    8,      9,     0,     PGUP,  \
        TAB,   Q,    W,     E,     R,     T,     P7,    P8,   P9,     Y,     U,    I,      O,     P,     PGDN,  \
        LSFT,  A,    S,     D,     F,     G,     P4,    P5,   P6,     H,     J,    K,      L,     SCLN,  QUOT,  \
        LCTL,  Z,    X,     C,     V,     B,     P1,    P2,   P3,     N,     M,    COMM,   DOT,   SLSH,  MINS,  \
        FN15,  LGUI, LALT,  FN0,   DEL,   BSPC,  P0,    EQL,  PDOT,   SPC,   ENT,  LEFT,   DOWN,  UP,    RGHT
),

KEYMAP(
        MUTE,   F1,    F2,    F3,    F4,    F5,    F6,    F7,    F8,    F9,    F10,   F11,   F12,  MYCM, WSCH,\
        VOLU,   TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  FN5,   FN2,   MPLY,  TRNS,  TRNS,  TRNS,  P7,   P8,   P9,  \
        VOLD,   TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  FN6,   FN3,   MPRV,  TRNS,  TRNS,  TRNS,  P4,   P5,   P6,  \
        FN8,    TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  FN7,   FN4,   MNXT,  TRNS,  TRNS,  TRNS,  P1,   P2,   P3,  \
        FN9,    TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  FN8,   FN9,   TRNS,  TRNS,  TRNS,  TRNS,  TRNS, P0,   PDOT
),

KEYMAP(
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS
),

KEYMAP( /* Tab */
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS
),
};

enum function_id {
    RGBLED_TOGGLE,
    RGBLED_STEP_MODE,
    RGBLED_INCREASE_HUE,
    RGBLED_DECREASE_HUE,
    RGBLED_INCREASE_SAT,
    RGBLED_DECREASE_SAT,
    RGBLED_INCREASE_VAL,
    RGBLED_DECREASE_VAL,
};

const action_t PROGMEM fn_actions[] = {
    [0]  = ACTION_LAYER_MOMENTARY(1),
    [1]  = ACTION_LAYER_MOMENTARY(2),
    [2]  = ACTION_LAYER_TAP_KEY(3, KC_TAB),
    [3]  = ACTION_MODS_TAP_KEY(MOD_RSFT, KC_ENT),
    [4]  = ACTION_MODS_KEY(MOD_LSFT, KC_GRV),
    [5]  = ACTION_MODS_KEY(MOD_LSFT, KC_1),
    [6]  = ACTION_MODS_KEY(MOD_LSFT, KC_2),
    [7]  = ACTION_MODS_KEY(MOD_LSFT, KC_3),
    [8]  = ACTION_MODS_KEY(MOD_LSFT, KC_4),
    [9]  = ACTION_MODS_KEY(MOD_LSFT, KC_5),
    [10] = ACTION_MODS_KEY(MOD_LSFT, KC_6),
    [11] = ACTION_MODS_KEY(MOD_LSFT, KC_7),
    [12] = ACTION_MODS_KEY(MOD_LSFT, KC_8),
    [13] = ACTION_MODS_KEY(MOD_LSFT, KC_9),
    [14] = ACTION_MODS_KEY(MOD_LSFT, KC_0),
    [15] = ACTION_FUNCTION(RGBLED_TOGGLE),
    [16] = ACTION_FUNCTION(RGBLED_STEP_MODE),
    [17] = ACTION_FUNCTION(RGBLED_INCREASE_HUE),
    [18] = ACTION_FUNCTION(RGBLED_DECREASE_HUE),
    [19] = ACTION_FUNCTION(RGBLED_INCREASE_SAT),
    [20] = ACTION_FUNCTION(RGBLED_DECREASE_SAT),
    [21] = ACTION_FUNCTION(RGBLED_INCREASE_VAL),
    [22] = ACTION_FUNCTION(RGBLED_DECREASE_VAL),
    [23] = ACTION_MODS_KEY(MOD_LSFT, KC_MINS),
    [24] = ACTION_MODS_KEY(MOD_LSFT, KC_EQL),
    [25] = ACTION_MODS_KEY(MOD_LSFT, KC_LBRC),
    [26] = ACTION_MODS_KEY(MOD_LSFT, KC_RBRC),
    [27] = ACTION_MODS_KEY(MOD_LSFT, KC_BSLS),

};

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt) {
  switch (id) {
    case RGBLED_TOGGLE:
        if (record->event.pressed) {
        rgblight_toggle();
        }
        break;
    case RGBLED_INCREASE_HUE:
        if (record->event.pressed) {
        rgblight_increase_hue();
        }
        break;
    case RGBLED_DECREASE_HUE:
        if (record->event.pressed) {
          rgblight_decrease_hue();
        }
        break;
    case RGBLED_INCREASE_SAT:
        if (record->event.pressed) {
        rgblight_increase_sat();
        }
        break;
    case RGBLED_DECREASE_SAT:
        if (record->event.pressed) {
          rgblight_decrease_sat();
        }
        break;
    case RGBLED_INCREASE_VAL:
        if (record->event.pressed) {
          rgblight_increase_val();
        }
        break;
    case RGBLED_DECREASE_VAL:
        if (record->event.pressed) {
          rgblight_decrease_val();
        }
        break;
    case RGBLED_STEP_MODE:
        if (record->event.pressed) {
          rgblight_step();
        }
        break;
  }
}


