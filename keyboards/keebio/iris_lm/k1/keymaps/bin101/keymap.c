// Copyright 2025 Jens van Almsick (@bin101)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "keymap_us_international.h"
#include "layer_names.h"
#include "lightning.h"


#define CTL_Z MT(MOD_LCTL, KC_Z)
#define CTL_SL MT(MOD_RCTL, KC_SLSH)
#define FN_A LT(0, KC_A)
#define FN_O LT(0, KC_O)
#define FN_U LT(0, KC_U)
#define FN_S LT(0, KC_S)
#define FN_G LT(0, KC_G)
#define FN_H LT(0, KC_H)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_BASE] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_EQUAL, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINUS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,     KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    FN_U,   KC_I,    FN_O,    KC_P,  KC_BSLS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_DELETE, FN_A,   FN_S,    KC_D,    KC_F,   FN_G,                                FN_H,  KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT,  CTL_Z,   KC_X,    KC_C,    KC_V,    KC_B,   TL_LOWR,          TL_UPPR,  KC_N,    KC_M,    KC_COMM, KC_DOT, CTL_SL, KC_RSFT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LGUI, KC_SPACE, KC_BSPC,                  QK_GESC, KC_ENTER, KC_RALT
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_SYMBOLS] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                            KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PGUP,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_GRV,  XXXXXXX, KC_UP,   XXXXXXX, QK_BOOT, XXXXXXX,                            XXXXXXX, KC_P7,   KC_P8,   KC_P9,   KC_P0,   KC_PGDN,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_DEL,  KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, KC_LBRC,                            KC_RBRC, KC_P4,   KC_P5,   KC_P6,   KC_PLUS, KC_PIPE,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     RM_NEXT, EE_CLR,  XXXXXXX, XXXXXXX, XXXXXXX, KC_LCBR, _______,          _______, KC_RCBR, KC_P1,   KC_P2,   KC_P3,   KC_MINS, XXXXXXX,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    XXXXXXX, XXXXXXX, KC_DEL,                    KC_DEL,  XXXXXXX, KC_P0
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_NAVI] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_F12,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     RM_TOGG, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                            KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, QK_BOOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     RM_NEXT, KC_MPRV, KC_MNXT, KC_VOLU, KC_PGUP, KC_UNDS,                            KC_EQL,  KC_HOME, RM_HUEU, RM_SATU, RM_VALU, KC_BSLS,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_MUTE, KC_MSTP, KC_MPLY, KC_VOLD, KC_PGDN, KC_MINS, _______,          _______, KC_PLUS, KC_END,  RM_HUED, RM_SATD, RM_VALD, EE_CLR,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_GAMEING] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_EQUAL, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINUS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    _______,          _______,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_BSPC,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LGUI, KC_SPACE, KC_LALT,                  QK_GESC,  KC_ENTER, KC_RALT
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

 [_ADJUST] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                            XXXXXXX, RM_VALD, RM_TOGG, RM_VALU, XXXXXXX, XXXXXXX,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                            XXXXXXX, KC_BRID, XXXXXXX, KC_BRIU, XXXXXXX, XXXXXXX,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, TG(3)  ,                            XXXXXXX, KC_VOLD, KC_MUTE, KC_VOLU, XXXXXXX, XXXXXXX,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     EE_CLR,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,          _______, XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX, XXXXXXX,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  )
};



void keyboard_post_init_user(void) {
    rgb_matrix_enable();
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case FN_A:
            if (record->tap.count && record->event.pressed) {
                tap_code(KC_A); // short press sends 'a'
            } else if (record->event.pressed) {
                tap_code16(US_ADIA); // long press sends 'ä'
            }
            return false;
        case FN_O:
            if (record->tap.count && record->event.pressed) {
                tap_code(KC_O); // short press sends 'o'
            } else if (record->event.pressed) {
                tap_code16(US_ODIA); // long press sends 'ö'
            }
            return false;
        case FN_U:
            if (record->tap.count && record->event.pressed) {
                tap_code(KC_U); // short press sends 'u'
            } else if (record->event.pressed) {
                tap_code16(US_UDIA); // long press sends 'ü'
            }
            return false;
        case FN_S:
            if (record->tap.count && record->event.pressed) {
                tap_code(KC_S); // short press sends 's'
            } else if (record->event.pressed) {
                tap_code16(US_SS); // long press sends 'ß'
            }
            return false;
        case FN_G:
            if (record->tap.count && record->event.pressed) {
                tap_code(KC_G); // short press sends 'g'
            } else if (record->event.pressed) {
                tap_code16(KC_HOME); // long press sends 'home'
            }
            return false;
        case FN_H:
            if (record->tap.count && record->event.pressed) {
                tap_code(KC_H); // short press sends 'h'
            } else if (record->event.pressed) {
                tap_code16(KC_END); // long press sends 'end'
            }
            return false;
    }
    return true;
}

