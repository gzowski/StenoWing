// Copyright 2025 James Gzowski
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H
enum custom_layer { _STENO, };
static uint8_t  press_countA = 0;
static uint16_t press_timer  = 0;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_STENO] = LAYOUT_3x11(
	KC_Q,KC_W,KC_E,KC_R,KC_T,KC_Y,KC_U,KC_I,KC_O,KC_P,KC_LBRC,
	KC_A,KC_S,KC_D,KC_F,KC_G,KC_H,KC_J,KC_K,KC_L,KC_SCLN,KC_QUOT,
	KC_SPC,KC_C,KC_V,KC_N,KC_M,KC_ENT),
};

bool process_record_kb(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_Q:
            if (record->event.pressed) {
                if (timer_elapsed(press_timer) > 250) {
                    press_countA = 0;
                }
                press_countA++;
                press_timer = timer_read();
                if (press_countA == 3) {
                    rgb_matrix_toggle();
                    press_countA = 0;
                }
            }
            break;
    }
    return process_record_user(keycode, record);
}

void matrix_init_user(void) {
        steno_set_mode(STENO_MODE_GEMINI);
}
