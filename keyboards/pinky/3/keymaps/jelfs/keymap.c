/* Copyright 2018 'Masayuki Sunahara'
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
#include QMK_KEYBOARD_H


enum {
    TD_NOTHING_CAPS,
};
 
qk_tap_dance_action_t tap_dance_actions[] = {
    // Tap once does nothing, twice for Caps Lock - prevents accidental capslock
    [TD_NOTHING_CAPS] = ACTION_TAP_DANCE_DOUBLE(_______, KC_CAPS),
};


enum layer_names {
    _BASE,
    _ONE,
    _TWO,
    _THREE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_split_3x7_4(
<<<<<<< HEAD
        KC_TAB         , KC_Q   , KC_W        , KC_E       , KC_R        , KC_T          , _______            ,       _______  , KC_Y        , KC_U        , KC_I       , KC_O   , KC_P   , KC_EQL ,
        KC_ESC         , KC_A   , LT(2, KC_S) , LT(1, KC_D), LSFT_T(KC_F), LT(3, KC_G)   , KC_VOLD            ,       KC_VOLU  , LT(3, KC_H) , RSFT_T(KC_J), LT(1, KC_K), LT(2, KC_L)   , KC_SCLN, KC_QUOT,
        LCTL_T(KC_NUBS) , KC_Z   , KC_X        , KC_C       , KC_V        , KC_B          , TD(TD_NOTHING_CAPS),       KC_MPLY  , KC_N        , KC_M        , KC_COMM    , KC_DOT , KC_SLSH, KC_NUHS,
                                                KC_LALT    , KC_LGUI     , KC_BSPC, KC_DEL                    ,       KC_ENT   , KC_SPC      , KC_RCTL     , KC_GRV
    ),
    [_ONE] = LAYOUT_split_3x7_4(
        LCTL(KC_GRV), KC_EXLM, KC_AT,   KC_LCBR, KC_RCBR, KC_MINS, _______,    _______, _______, KC_7, KC_8   , KC_9, _______, _______,
        LGUI(KC_GRV), _______, _______, KC_LBRC, KC_RBRC, KC_UNDS, _______,    _______, _______, KC_4, KC_5   , KC_6, _______, _______,
        _______     , _______, _______, KC_LPRN, KC_RPRN, _______, _______,    _______, _______, KC_1, KC_2   , KC_3, _______, _______,
                                        _______, _______, _______, _______,    _______, _______, KC_0, _______
=======
        KC_TAB          , KC_Q   , KC_W        , KC_E       , KC_R        , KC_T          , _______            ,       _______  , KC_Y        , KC_U           , KC_I       , KC_O   , KC_P   , KC_EQL ,
        KC_ESC          , KC_A   , LT(2, KC_S) , LT(1, KC_D), LSFT_T(KC_F), LT(3, KC_G)   , KC_VOLD            ,       KC_VOLU  , LT(3, KC_H) , RSFT_T(KC_J)   , LT(1, KC_K), LT(2, KC_L)     , KC_SCLN, KC_QUOT,
        LCTL_T(KC_NUBS) , KC_Z   , KC_X        , KC_C       , KC_V        , KC_B          , TD(TD_NOTHING_CAPS),       KC_MPLY  , KC_N        , KC_M           , KC_COMM    , KC_DOT , KC_SLSH, KC_NUHS,
                                                 KC_LALT    , KC_LGUI     , KC_BSPC       , KC_DEL             ,       KC_ENT   , KC_SPC      , KC_RCTL        , KC_GRV
    ),
    [_ONE] = LAYOUT_split_3x7_4(
        LCTL(KC_GRV), KC_EXLM, KC_AT,   KC_LCBR, KC_RCBR, KC_MINS, _______,         _______, _______, KC_7, KC_8   , KC_9, _______, _______,
        LGUI(KC_GRV), _______, _______, KC_LBRC, KC_RBRC, KC_UNDS, _______,         _______, _______, KC_4, KC_5   , KC_6, _______, _______,
        _______     , _______, _______, KC_LPRN, KC_RPRN, _______, _______,         _______, _______, KC_1, KC_2   , KC_3, _______, _______,
                                        _______, _______, _______, _______,         _______, _______, KC_0, _______
>>>>>>> 51f2a4923f3466e405ecbada38ec98a3cb62b998
    ),
    [_TWO] = LAYOUT_split_3x7_4(
        _______, KC_EXLM, KC_AT  , KC_HASH, KC_DLR , KC_PERC, _______,              _______, KC_CIRC, KC_AMPR, KC_ASTR, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______,              _______, KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, _______, _______,
        _______, _______, _______, _______, _______, _______, _______,              _______, _______, _______, _______, _______, _______, _______,
                                   _______, _______, _______, _______,              KC_MPRV, KC_MPLY, KC_MNXT, _______
    ),
    [_THREE] = LAYOUT_split_3x7_4(
        _______, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  ,              KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12,  _______,
        _______, _______, _______, _______, _______, _______, _______,              _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______,              _______, _______, _______, _______, _______, _______, _______,
                                   _______, _______, _______, _______,              _______, _______, _______, _______
    )
};