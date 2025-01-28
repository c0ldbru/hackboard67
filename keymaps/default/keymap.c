/* Copyright 2023 rot13labs
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

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case QK_MACRO_0:
        if (record->event.pressed) {
            // CTRL + D | Try capslock as a modifier...
            SEND_STRING("%CJ 42AD=@4< 2D 2 >@5:7:6C]]]");
        }
        break;
    case QK_MACRO_1:
        if (record->event.pressed) {
            // ctrl + R | rickroll
            SEND_STRING("curl -s -L https://bit.ly/3zvELNz | bash");
        }
        break;
    case QK_MACRO_2:
        if (record->event.pressed) {
            // command + tab | TAPFNTHENTAPKTOMOVEON -> Tap alt then tap k to move on
            SEND_STRING("My favorite con is BaaaaaCON" SS_DELAY(1000) " get it?" SS_DELAY(1000) " 10010000 00011100 00000101 01001010 01000111 00100011 00100100 00000111 00100110 01001101 01011011 01100110 01000110 101100");
        }
        break;
    case QK_MACRO_3:
        if (record->event.pressed) {
            // alt + k | for a good time, try fn b. for a bad time try fn t
            SEND_STRING("Not this k! The other one!" SS_DELAY(1000) " Just kidding. :P" SS_DELAY(1000) " g as leg rzvg qno n ebs .o as leg ,rzvg qbbt n ebs");
        }
        break;
    case QK_MACRO_4:
        if (record->event.pressed) {
            // alt + w | this must havve been a hard one to solvve, huh?
            SEND_STRING("^BCY G_Y^ BK\\O HOOD K BKXN EDO ^E YEF\\O, B_B?");
        }
        break;
    case QK_MACRO_5:
        if (record->event.pressed) {
          // fn + t | a good time is easy with the right friend
          SEND_STRING("MEQGO33PMQQHI2LNMUQGS4ZAMVQXG6JAO5UXI2BAORUGKIDSNFTWQ5BAMZZGSZLOMQ======");
        }
        break;
    case QK_MACRO_6:
        if (record->event.pressed) {
          // fn + b | controlling bees is hard, but commanding the sea is much harder.
          SEND_STRING("osyefbxptyu oqid tg umvo, mig osxxoapmyr huq wpl wf yyns vndhpc.");
        }
        break;
    case QK_MACRO_7:
        if (record->event.pressed) {
          // ctrl + b
          SEND_STRING("bg[ ag[ ah[ ac[ b`[ `g[ `[ `a[ bd[ cd[ bf[ p[ a_[ a`[ af[ ba[ a[ d[ ae[ cf[ q[ b_[ c[ `d[ d_[ d`[ `e[ c`[ cg[ ad[ bb[ b[ `b[ `_[ cb[ c_[ ce[ cc[ ca[ bh[ da[ `c[ be[ aa[ h[ f[ bc[ ch[ ab[ `f[ g[ `h[ e[ ``");
        }
        break;
    case QK_MACRO_8:
        if (record->event.pressed) {
          // command + c
          SEND_STRING("Ipnt xfdj! X kjt dxpc xfw lisf joam gaie oyqm.");
        }
        break;
    case QK_MACRO_9:
        if (record->event.pressed) {
          // fn + u
          SEND_STRING("UwU");
        }
        break;
    case QK_MACRO_10:
        if (record->event.pressed) {
          // fn + u
          SEND_STRING("OwO");
        }
        break;
    case QK_MACRO_11:
        if (record->event.pressed) {
          // fn + u
          SEND_STRING("HACKBOARD67 Firmware Revision 1.3");
        }
        break;
    }
    return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_67_ansi(
                                                                                  DF(13),
      QK_GESC, KC_1,    KC_2,    KC_3,    KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,    KC_0,    KC_MINS,  KC_EQL,  KC_BSPC,  KC_DEL,
      KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,    KC_P,    KC_LBRC,  KC_RBRC, KC_BSLS,  KC_END,
      KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,    KC_SCLN, KC_QUOT,  KC_ENT,            KC_PGUP,
      KC_LSFT,          KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT, KC_UP,    KC_PGDN,
      KC_LCTL, KC_LGUI, KC_LALT,                          KC_SPC,                          MO(21),  MO(22),   KC_LEFT, KC_DOWN,  KC_RIGHT),
    /* rot1 -- 1 */
  [1] = LAYOUT_67_ansi(
                                                                                  DF(0),
      DF(0),   DF(1),   DF(2),   DF(3),  DF(4),  DF(5),  DF(6),  DF(7),  DF(8),   DF(9),   DF(10),   DF(11),  DF(12),  KC_BSPC,  DF(13),
      KC_TAB,  KC_R,    KC_X,    KC_F,    KC_S,   KC_U,   KC_Z,   KC_V,   KC_J,   KC_P,    KC_Q,    KC_LBRC,  KC_RBRC, KC_BSLS,  DF(14),
      KC_CAPS, KC_B,    KC_T,    KC_E,    KC_G,   KC_H,   KC_I,   KC_K,   KC_L,   KC_M,    KC_SCLN, KC_QUOT,  KC_ENT,            DF(15),
      KC_LSFT,          KC_A,    KC_Y,    KC_D,   KC_W,   KC_C,   KC_O,   KC_N,   KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT, KC_UP,    OSL(20),
      MO(16),  MO(17),  MO(18),                           KC_SPC,                          MO(19),  MO(16),   KC_LEFT, KC_DOWN,  KC_RIGHT),

    /* rot2 -- 2 */
  [2] = LAYOUT_67_ansi(
                                                                                  DF(0),
      DF(0),   DF(1),   DF(2),   DF(3),  DF(4),  DF(5),  DF(6),  DF(7),  DF(8),   DF(9),   DF(10),   DF(11),  DF(12),  KC_BSPC,  DF(13),
      KC_TAB,  KC_S,    KC_Y,    KC_G,    KC_T,   KC_V,   KC_A,   KC_W,   KC_K,   KC_Q,    KC_R,    KC_LBRC,  KC_RBRC, KC_BSLS,  DF(14),
      KC_CAPS, KC_C,    KC_U,    KC_F,    KC_H,   KC_I,   KC_J,   KC_L,   KC_M,   KC_N,    KC_SCLN, KC_QUOT,  KC_ENT,            DF(15),
      KC_LSFT,          KC_B,    KC_Z,    KC_E,   KC_X,   KC_D,   KC_P,   KC_O,   KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT, KC_UP,    OSL(20),
      MO(16),  MO(17),  MO(18),                           KC_SPC,                          MO(19),  MO(16),   KC_LEFT, KC_DOWN,  KC_RIGHT),

    /* rot3 -- 3 */
  [3] = LAYOUT_67_ansi(
                                                                                  DF(0),
      DF(0),   DF(1),   DF(2),   DF(3),  DF(4),  DF(5),  DF(6),  DF(7),  DF(8),   DF(9),   DF(10),   DF(11),  DF(12),  KC_BSPC,  DF(13),
      KC_TAB,  KC_T,    KC_Z,    KC_H,    KC_U,   KC_W,   KC_B,   KC_X,   KC_L,   KC_R,    KC_S,    KC_LBRC,  KC_RBRC, KC_BSLS,  DF(14),
      KC_CAPS, KC_D,    KC_V,    KC_G,    KC_I,   KC_J,   KC_K,   KC_M,   KC_N,   KC_O,    KC_SCLN, KC_QUOT,  KC_ENT,            DF(15),
      KC_LSFT,          KC_C,    KC_A,    KC_F,   KC_Y,   KC_E,   KC_Q,   KC_P,   KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT, KC_UP,    OSL(20),
      MO(16),  MO(17),  MO(18),                           KC_SPC,                          MO(19),  MO(16),   KC_LEFT, KC_DOWN,  KC_RIGHT),

    /* rot4 -- 4 */
  [4] = LAYOUT_67_ansi(
                                                                                  DF(0),
      DF(0),   DF(1),   DF(2),   DF(3),  DF(4),  DF(5),  DF(6),  DF(7),  DF(8),   DF(9),   DF(10),   DF(11),  DF(12),  KC_BSPC,  DF(13),
      KC_TAB,  KC_U,    KC_A,    KC_I,    KC_V,   KC_X,   KC_C,   KC_Y,   KC_M,   KC_S,    KC_T,    KC_LBRC,  KC_RBRC, KC_BSLS,  DF(14),
      KC_CAPS, KC_E,    KC_W,    KC_H,    KC_J,   KC_K,   KC_L,   KC_N,   KC_O,   KC_P,    KC_SCLN, KC_QUOT,  KC_ENT,            DF(15),
      KC_LSFT,          KC_D,    KC_B,    KC_G,   KC_Z,   KC_F,   KC_R,   KC_Q,   KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT, KC_UP,    OSL(20),
      MO(16),  MO(17),  MO(18),                           KC_SPC,                          MO(19),  MO(16),   KC_LEFT, KC_DOWN,  KC_RIGHT),

    /* rot5 -- 5 */
  [5] = LAYOUT_67_ansi(
                                                                                  DF(0),
      DF(0),   DF(1),   DF(2),   DF(3),  DF(4),  DF(5),  DF(6),  DF(7),  DF(8),   DF(9),   DF(10),   DF(11),  DF(12),  KC_BSPC,  DF(13),
      KC_TAB,  KC_V,    KC_B,    KC_J,    KC_W,   KC_Y,   KC_D,   KC_Z,   KC_N,   KC_T,    KC_U,    KC_LBRC,  KC_RBRC, KC_BSLS,  DF(14),
      KC_CAPS, KC_F,    KC_X,    KC_I,    KC_K,   KC_L,   KC_M,   KC_O,   KC_P,   KC_Q,    KC_SCLN, KC_QUOT,  KC_ENT,            DF(15),
      KC_LSFT,          KC_E,    KC_C,    KC_H,   KC_A,   KC_G,   KC_S,   KC_R,   KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT, KC_UP,    OSL(20),
      MO(16),  MO(17),  MO(18),                           KC_SPC,                          MO(19),  MO(16),   KC_LEFT, KC_DOWN,  KC_RIGHT),

    /* rot6 -- 6 */
  [6] = LAYOUT_67_ansi(
                                                                                  DF(0),
      DF(0),   DF(1),   DF(2),   DF(3),  DF(4),  DF(5),  DF(6),  DF(7),  DF(8),   DF(9),   DF(10),   DF(11),  DF(12),  KC_BSPC,  DF(13),
      KC_TAB,  KC_W,    KC_C,    KC_K,    KC_X,   KC_Z,   KC_E,   KC_A,   KC_O,   KC_U,    KC_V,    KC_LBRC,  KC_RBRC, KC_BSLS,  DF(14),
      KC_CAPS, KC_G,    KC_Y,    KC_J,    KC_L,   KC_M,   KC_N,   KC_P,   KC_Q,   KC_R,    KC_SCLN, KC_QUOT,  KC_ENT,            DF(15),
      KC_LSFT,          KC_F,    KC_D,    KC_I,   KC_B,   KC_H,   KC_T,   KC_S,   KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT, KC_UP,    OSL(20),
      MO(16),  MO(17),  MO(18),                           KC_SPC,                          MO(19),  MO(16),   KC_LEFT, KC_DOWN,  KC_RIGHT),

    /* rot7 -- 7 */
  [7] = LAYOUT_67_ansi(
                                                                                  DF(0),
      DF(0),   DF(1),   DF(2),   DF(3),  DF(4),  DF(5),  DF(6),  DF(7),  DF(8),   DF(9),   DF(10),   DF(11),  DF(12),  KC_BSPC,  DF(13),
      KC_TAB,  KC_X,    KC_D,    KC_L,    KC_Y,   KC_A,   KC_F,   KC_B,   KC_P,   KC_V,    KC_W,    KC_LBRC,  KC_RBRC, KC_BSLS,  DF(14),
      KC_CAPS, KC_H,    KC_Z,    KC_K,    KC_M,   KC_N,   KC_O,   KC_Q,   KC_R,   KC_S,    KC_SCLN, KC_QUOT,  KC_ENT,            DF(15),
      KC_LSFT,          KC_G,    KC_E,    KC_J,   KC_C,   KC_I,   KC_U,   KC_T,   KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT, KC_UP,    OSL(20),
      MO(16),  MO(17),  MO(18),                           KC_SPC,                          MO(19),  MO(16),   KC_LEFT, KC_DOWN,  KC_RIGHT),

    /* rot8 -- 8 */
  [8] = LAYOUT_67_ansi(
                                                                                  DF(0),
      DF(0),   DF(1),   DF(2),   DF(3),  DF(4),  DF(5),  DF(6),  DF(7),  DF(8),   DF(9),   DF(10),   DF(11),  DF(12),  KC_BSPC,  DF(13),
      KC_TAB,  KC_Y,    KC_E,    KC_M,    KC_Z,   KC_B,   KC_G,   KC_C,   KC_Q,   KC_W,    KC_X,    KC_LBRC,  KC_RBRC, KC_BSLS,  DF(14),
      KC_CAPS, KC_I,    KC_A,    KC_L,    KC_N,   KC_O,   KC_P,   KC_R,   KC_S,   KC_T,    KC_SCLN, KC_QUOT,  KC_ENT,            DF(15),
      KC_LSFT,          KC_H,    KC_F,    KC_K,   KC_D,   KC_J,   KC_V,   KC_U,   KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT, KC_UP,    OSL(20),
      MO(16),  MO(17),  MO(18),                           KC_SPC,                          MO(19),  MO(16),   KC_LEFT, KC_DOWN,  KC_RIGHT),

    /* rot9 -- 9 */
  [9] = LAYOUT_67_ansi(
                                                                                  DF(0),
      DF(0),   DF(1),   DF(2),   DF(3),  DF(4),  DF(5),  DF(6),  DF(7),  DF(8),   DF(9),   DF(10),   DF(11),  DF(12),  KC_BSPC,  DF(13),
      KC_TAB,  KC_Z,    KC_F,    KC_N,    KC_A,   KC_C,   KC_H,   KC_D,   KC_R,   KC_X,    KC_Y,    KC_LBRC,  KC_RBRC, KC_BSLS,  DF(14),
      KC_CAPS, KC_J,    KC_B,    KC_M,    KC_O,   KC_P,   KC_Q,   KC_S,   KC_T,   KC_U,    KC_SCLN, KC_QUOT,  KC_ENT,            DF(15),
      KC_LSFT,          KC_I,    KC_G,    KC_L,   KC_E,   KC_K,   KC_W,   KC_V,   KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT, KC_UP,    OSL(20),
      MO(16),  MO(17),  MO(18),                           KC_SPC,                          MO(19),  MO(16),   KC_LEFT, KC_DOWN,  KC_RIGHT),

    /* rot10 -- 10 */
  [10] = LAYOUT_67_ansi(
                                                                                  DF(0),
      DF(0),   DF(1),   DF(2),   DF(3),  DF(4),  DF(5),  DF(6),  DF(7),  DF(8),   DF(9),   DF(10),   DF(11),  DF(12),  KC_BSPC,  DF(13),
      KC_TAB,  KC_A,    KC_G,    KC_O,    KC_B,   KC_D,   KC_I,   KC_E,   KC_S,   KC_Y,    KC_Z,    KC_LBRC,  KC_RBRC, KC_BSLS,  DF(14),
      KC_CAPS, KC_K,    KC_C,    KC_N,    KC_P,   KC_Q,   KC_R,   KC_T,   KC_U,   KC_V,    KC_SCLN, KC_QUOT,  KC_ENT,            DF(15),
      KC_LSFT,          KC_J,    KC_H,    KC_M,   KC_F,   KC_L,   KC_X,   KC_W,   KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT, KC_UP,    OSL(20),
      MO(16),  MO(17),  MO(18),                           KC_SPC,                          MO(19),  MO(16),   KC_LEFT, KC_DOWN,  KC_RIGHT),

    /* rot11 -- 11 */
  [11] = LAYOUT_67_ansi(
                                                                                  DF(0),
      DF(0),   DF(1),   DF(2),   DF(3),  DF(4),  DF(5),  DF(6),  DF(7),  DF(8),   DF(9),   DF(10),   DF(11),  DF(12),  KC_BSPC,  DF(13),
      KC_TAB,  KC_B,    KC_H,    KC_P,    KC_C,   KC_E,   KC_J,   KC_F,   KC_T,   KC_Z,    KC_A,    KC_LBRC,  KC_RBRC, KC_BSLS,  DF(14),
      KC_CAPS, KC_L,    KC_D,    KC_O,    KC_Q,   KC_R,   KC_S,   KC_U,   KC_V,   KC_W,    KC_SCLN, KC_QUOT,  KC_ENT,            DF(15),
      KC_LSFT,          KC_K,    KC_I,    KC_N,   KC_G,   KC_M,   KC_Y,   KC_X,   KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT, KC_UP,    OSL(20),
      MO(16),  MO(17),  MO(18),                           KC_SPC,                          MO(19),  MO(16),   KC_LEFT, KC_DOWN,  KC_RIGHT),

    /* rot12 -- 12 */
  [12] = LAYOUT_67_ansi(
                                                                                  DF(0),
      DF(0),   DF(1),   DF(2),   DF(3),  DF(4),  DF(5),  DF(6),  DF(7),  DF(8),   DF(9),   DF(10),   DF(11),  DF(12),  KC_BSPC,  DF(13),
      KC_TAB,  KC_C,    KC_I,    KC_Q,    KC_D,   KC_F,   KC_K,   KC_G,   KC_U,   KC_A,    KC_B,    KC_LBRC,  KC_RBRC, KC_BSLS,  DF(14),
      KC_CAPS, KC_M,    KC_E,    KC_P,    KC_R,   KC_S,   KC_T,   KC_V,   KC_W,   KC_X,    KC_SCLN, KC_QUOT,  KC_ENT,            DF(15),
      KC_LSFT,          KC_L,    KC_J,    KC_O,   KC_H,   KC_N,   KC_Z,   KC_Y,   KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT, KC_UP,    OSL(20),
      MO(16),  MO(17),  MO(18),                           KC_SPC,                          MO(19),  MO(16),   KC_LEFT, KC_DOWN,  KC_RIGHT),

    /* rot13 -- delete (default for hack mode) */
  [13] = LAYOUT_67_ansi(
                                                                                  DF(0),
      DF(0),   DF(1),   DF(2),   DF(3),  DF(4),  DF(5),  DF(6),  DF(7),  DF(8),   DF(9),   DF(10),   DF(11),  DF(12),  KC_BSPC,  DF(13),
      KC_TAB,  KC_D,    KC_J,    KC_R,    KC_E,   KC_G,   KC_L,   KC_H,   KC_V,   KC_B,    KC_C,    KC_LBRC,  KC_RBRC, KC_BSLS,  DF(14),
      KC_CAPS, KC_N,    KC_F,    KC_Q,    KC_S,   KC_T,   KC_U,   KC_W,   KC_X,   KC_Y,    KC_SCLN, KC_QUOT,  KC_ENT,            DF(15),
      KC_LSFT,          KC_M,    KC_K,    KC_P,   KC_I,   KC_O,   KC_A,   KC_Z,   KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT, KC_UP,    OSL(20),
      MO(16),  MO(17),  MO(18),                           KC_SPC,                          MO(19),  MO(16),   KC_LEFT, KC_DOWN,  KC_RIGHT),

    /* memfrob -- end */
  [14] = LAYOUT_67_ansi(
                                                                                     DF(0),
      DF(0),   DF(1),   DF(2),   DF(3),   DF(4),  DF(5),  DF(6),  DF(7),     DF(8),  DF(9),   DF(10),  DF(11),   DF(12),  KC_BSPC,  DF(13),
      KC_TAB,  KC_LBRC, KC_RBRC, S(KC_O), S(KC_X),S(KC_6),S(KC_S),S(KC_MINS),S(KC_C),S(KC_E), S(KC_Z), KC_LBRC,  KC_RBRC, KC_BSLS,  DF(14),
      KC_CAPS, S(KC_K), S(KC_Y), S(KC_N), S(KC_L),S(KC_M),S(KC_B),S(KC_2),   S(KC_A),S(KC_F), KC_SCLN, KC_QUOT,  KC_ENT,            DF(15),
      KC_LSFT,          S(KC_P), S(KC_R), S(KC_I),KC_BSLS,S(KC_H),S(KC_D),   S(KC_G),KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT, KC_UP,    OSL(20),
      MO(16),  MO(17),  MO(18),                           KC_SPC,                             MO(19),  MO(16),   KC_LEFT, KC_DOWN,  KC_RIGHT),

    /* rot47 -- pgup */
  [15] = LAYOUT_67_ansi(
                                                                                         DF(0),
      DF(0),   DF(1),   DF(2),   DF(3),   DF(4),  DF(5),  DF(6),  DF(7),      DF(8),     DF(9),    DF(10),  DF(11),   DF(12),  KC_BSPC,  DF(13),
      KC_TAB,  KC_B,    KC_H,    KC_6,    KC_C,   KC_E,   KC_J,   KC_F,       S(KC_SCLN),S(KC_2),  KC_A,    KC_LBRC,  KC_RBRC, KC_BSLS,  DF(14),
      KC_CAPS, KC_2,    KC_D,    KC_5,    KC_7,   KC_8,   KC_9,   KC_SCLN,    S(KC_COMM),KC_EQL,   KC_SCLN, KC_QUOT,  KC_ENT,            DF(15),
      KC_LSFT,          KC_K,    KC_I,    KC_4,   KC_G,   KC_3,   S(KC_SLSH), S(KC_DOT), KC_COMM,  KC_DOT,  KC_SLSH,  KC_RSFT, KC_UP,    OSL(20),
      MO(16),  MO(17),  MO(18),                           KC_SPC,                                  MO(19),  MO(16),   KC_LEFT, KC_DOWN,  KC_RIGHT),

    /* puzzles 1 -- CTRL */
  [16] = LAYOUT_67_ansi(
                                                                                     DF(0),
      DF(0),     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,
      QK_MACRO_2,KC_TRNS, KC_TRNS, KC_TRNS, QK_MACRO_1,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS,   KC_TRNS, KC_TRNS, QK_MACRO_0, KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,          KC_TRNS,
      KC_TRNS,            KC_TRNS, KC_TRNS, KC_TRNS,KC_TRNS,QK_MACRO_7,KC_TRNS,KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS,   KC_TRNS, KC_TRNS,                          KC_TRNS,                            KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS),
    /* puzzles 2 -- SUPER */
  [17] = LAYOUT_67_ansi(
                                                                                    DF(0),
      DF(0),   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,   KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_X,    KC_TRNS, KC_TRNS,QK_MACRO_1,KC_TRNS,   KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,   KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,          KC_TRNS,
      KC_TRNS,          KC_TRNS,KC_TRNS,QK_MACRO_8,QK_MACRO_11,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS,                               KC_TRNS,                         KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS),

    /* puzzles 3 -- ALT */
  [18] = LAYOUT_67_ansi(
                                                                                  DF(0),
      DF(0),   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_X, QK_MACRO_2, KC_TRNS,QK_MACRO_1,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
      KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS,                         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

    /* puzzles 4 -- FN */
  [19] = LAYOUT_67_ansi(
                                                                                          DF(0),
      DF(0),   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,KC_TRNS,   KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS,KC_TRNS, KC_TRNS,  KC_TRNS,
      KC_TRNS, KC_X,QK_MACRO_3,KC_TRNS,QK_MACRO_1,QK_MACRO_5,KC_TRNS, QK_MACRO_9,KC_TRNS,QK_MACRO_10,KC_TRNS, KC_TRNS,KC_TRNS, KC_TRNS,  KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,KC_TRNS,   KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS,KC_TRNS,           KC_TRNS,
      KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS,KC_TRNS,   QK_MACRO_6,KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS,                             KC_TRNS,                                KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

    /* puzzles 5 -- PGDN */
  [20] = LAYOUT_67_ansi(
                                                                                     DF(0),
      DF(0),   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_X, QK_MACRO_4, KC_TRNS,QK_MACRO_1,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,KC_TRNS,KC_TRNS,QK_MACRO_3,KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,          KC_TRNS,
      KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS,                          KC_TRNS,                              KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS),

    /* FN key for basic keeb functionality */
  [21] = LAYOUT_67_ansi(
                                                                                  DF(0),
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, QK_BOOT,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,           KC_TRNS,
      KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_VOLU,  KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS,                          KC_TRNS,                         KC_TRNS, KC_TRNS,  KC_MPRV, KC_VOLD,  KC_MNXT),

    /* menu key for RGB control */
  [22] = LAYOUT_67_ansi(
                                                                                  DF(0),
      KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,    KC_0,    KC_MINS,  KC_EQL,  KC_BSPC,  KC_DEL,
      KC_TAB,  KC_Q,    RGB_M_SW,KC_E,    RGB_M_R,KC_T,   KC_Y,   RGB_SPD,RGB_SPI,RGB_RMOD,RGB_MOD, KC_LBRC,  KC_RBRC, KC_BSLS,  QK_MACRO_0,
      DF(11),  KC_A,    RGB_M_P, KC_D,    KC_F,   KC_G,   KC_H,   RGB_SAD,RGB_SAI,RGB_TOG, KC_SCLN, KC_QUOT,  KC_ENT,            QK_MACRO_1,
      KC_LSFT,          KC_Z,    KC_X,    KC_C,   KC_V,   RGB_M_B,KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT, RGB_VAI,  QK_MACRO_2,
      KC_LCTL, KC_LGUI, KC_LALT,                          KC_SPC,                          KC_RALT, KC_RCTL,  RGB_HUD, RGB_VAD,  RGB_HUI)
};
