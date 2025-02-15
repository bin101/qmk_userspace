// Copyright 2025 Jens van Almsick (@bin101)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "keymap_us_international.h"
#include "layer_names.h"
#include "lightning.h"


#define CTL_Z MT(MOD_LCTL, KC_Z)
#define GUI_Z MT(MOD_LGUI, KC_Z)
#define FN_A LT(0, KC_A)
#define FN_O LT(0, KC_O)
#define FN_U LT(0, KC_U)
#define FN_S LT(0, KC_S)
#define FN_G LT(0, KC_G)
#define FN_H LT(0, KC_H)
#define FN_DOLL LT(0, KC_DOLLAR)

// aerospace hotkeys
#define DESK_1 LOPT(KC_1)
#define DESK_2 LOPT(KC_2)
#define DESK_3 LOPT(KC_3)
#define DESK_4 LOPT(KC_4)
#define DESK_5 LOPT(KC_5)
#define LASTDE LOPT(KC_X)

#define LJOIN LAG(KC_H)
#define DJOIN LAG(KC_J)
#define UJOIN LAG(KC_K)
#define RJOIN LAG(KC_L)

#define LFOCU LOPT(KC_H)
#define DFOCU LOPT(KC_J)
#define UFOCU LOPT(KC_K)
#define RFOCU LOPT(KC_L)

#define STACK LCA(KC_A)
#define FLOAT LCA(KC_F)
#define TILES LCA(KC_D)
#define FULLS LOPT(KC_F)
#define BALAN LCA(KC_S)

#define RSTAT LCAG(KC_R)
#define LTAB  RCS(KC_TAB)
#define RTAB  LCTL(KC_TAB)

#define AUTOF LSG(KC_L)

enum custom_keycodes {
    OS_LOCK = SAFE_RANGE,
    OS_SLEEP,
 };

bool mac_mode;


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_MAC] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
        KC_EQUAL, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINUS,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
        KC_TAB,  KC_Q,     KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    FN_U,   KC_I,    FN_O,    KC_P,  KC_BSLS,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
        KC_DELETE, FN_A,   FN_S,    KC_D,    KC_F,   FN_G,                                FN_H,  KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        KC_LSFT,  CTL_Z,   KC_X,    KC_C,    KC_V,    KC_B,   KC_BSPC,          KC_ESC,  KC_N,    KC_M,    KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
    //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                      TL_LOWR, KC_SPACE, KC_LGUI,                  KC_LALT, KC_ENTER, TL_UPPR
                                  // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
    ),

    [_WIN] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
        KC_EQUAL, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINUS,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
        KC_TAB,  KC_Q,     KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    FN_U,   KC_I,    FN_O,    KC_P,  KC_BSLS,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
        KC_DELETE, FN_A,   FN_S,    KC_D,    KC_F,   FN_G,                                FN_H,  KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        KC_LSFT,  GUI_Z,   KC_X,    KC_C,    KC_V,    KC_B,   KC_BSPC,          KC_ESC,  KC_N,    KC_M,    KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
    //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                      TL_LOWR, KC_SPACE, KC_LCTL,                  KC_LALT, KC_ENTER, TL_UPPR
                                  // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
    ),

    [_NAVI] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
        RSTAT,   DESK_1,  DESK_2,  DESK_3,  DESK_4,  DESK_5,                            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
        TILES,   LJOIN,   DJOIN,   UJOIN,   RJOIN,   STACK,                             XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
        FLOAT,   LFOCU,   DFOCU,   UFOCU,   RFOCU,   FULLS,                             KC_LEFT, KC_DOWN,  KC_UP,  KC_RIGHT, XXXXXXX, XXXXXXX,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       _______, XXXXXXX, LASTDE,  LTAB,    RTAB,    AUTOF,  XXXXXXX,           XXXXXXX,  BALAN,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                      _______, XXXXXXX, _______,                   _______, XXXXXXX, _______
                                  // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
    ),

    [_SYMBOLS] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                              KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
        XXXXXXX, KC_EXLM,  KC_AT,  KC_LCBR, KC_RCBR, KC_CIRC,                            KC_KP_MINUS, KC_KP_7, KC_KP_8, KC_KP_9, KC_KP_SLASH, XXXXXXX,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
        XXXXXXX, KC_HASH, FN_DOLL, KC_LPRN, KC_RPRN, KC_GRV,                            KC_KP_PLUS, KC_KP_4, KC_KP_5, KC_KP_6, KC_KP_ASTERISK, XXXXXXX,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        XXXXXXX, KC_AMPR, KC_PIPE, KC_LBRC, KC_RBRC, KC_TILD, XXXXXXX,          XXXXXXX, KC_KP_0, KC_KP_1, KC_KP_2, KC_KP_3, KC_KP_ENTER, XXXXXXX,
    //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                      _______, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, _______
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
        KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    TG(4),            _______,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_BSPC,
    //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                       KC_LGUI, KC_SPACE, KC_LALT,                  QK_GESC,  KC_ENTER, KC_RALT
                                  // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
    ),

    [_ADJUST] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
        QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                            XXXXXXX, RM_VALD, RM_TOGG, RM_VALU, XXXXXXX, QK_BOOT,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                            XXXXXXX, KC_BRID, XXXXXXX, KC_BRIU, XXXXXXX, OS_SLEEP,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, TG(4)  ,                            OS_LOCK, KC_VOLD, KC_MUTE, KC_VOLU, XXXXXXX, XXXXXXX,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        EE_CLR,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX, EE_CLR,
    //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                      _______, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, _______
                                  // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
    ),
};


void keyboard_post_init_user(void) {
    rgb_matrix_enable();
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case FN_A:
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_A); // short press sends 'a'
            } else if (record->event.pressed) {
                tap_code16(US_ADIA); // long press sends 'ä'
            }
            return false;
        case FN_O:
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_O); // short press sends 'o'
            } else if (record->event.pressed) {
                tap_code16(US_ODIA); // long press sends 'ö'¡¡¡¡¡
            }
            return false;
        case FN_U:
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_U); // short press sends 'u'
            } else if (record->event.pressed) {
                tap_code16(US_UDIA); // long press sends 'ü'
            }
            return false;
        case FN_S:
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_S); // short press sends 's'
            } else if (record->event.pressed) {
                tap_code16(US_SS); // long press sends 'ß'
            }
            return false;
        case FN_G:
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_G); // short press sends 'g'
            } else if (record->event.pressed) {
                tap_code16(KC_HOME); // long press sends 'home'
            }
            return false;
        case FN_H:
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_H); // short press sends 'h'
            } else if (record->event.pressed) {
                tap_code16(KC_END); // long press sends 'end'
            }
            return false;
        case FN_DOLL:
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_DOLLAR); // short press sends '$'
            } else if (record->event.pressed) {
                tap_code16(US_EURO); // long press sends '€'
            }
            return false;
        case OS_LOCK:
            if (mac_mode) {
                if (record->event.pressed) {
                    tap_code16(C(G(KC_Q)));
                }
            } else {
                if (record->event.pressed) {
                    tap_code16(G(KC_L));
                }
            }
            return false;
        case OS_SLEEP:
            if (mac_mode) {
                if (record->event.pressed) {
                    tap_code16(S(C(KC_MEDIA_EJECT)));
                }
            } else {
                if (record->event.pressed) {
                    tap_code16(KC_SYSTEM_SLEEP);
                }
            }
            return false;
    }
    return true;
}

bool process_detected_host_os_user(os_variant_t detected_os) {
    switch (detected_os) {
        case OS_WINDOWS:
        case OS_LINUX:
            layer_on(_WIN);
            mac_mode = false;
            break;
        default:
            layer_on(_MAC);
            mac_mode = true;
            break;
    }
    return false;
}
