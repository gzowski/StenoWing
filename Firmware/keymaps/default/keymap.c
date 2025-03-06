// Copyright 2025 James Gzowski
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H
enum custom_layer { _STENO, };
static uint8_t  press_countA = 0;
static uint16_t press_timer  = 0;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_STENO] = LAYOUT_3x11(
	STN_S1,STN_TL,STN_PL,STN_HL,STN_ST1,STN_ST3,STN_FR,STN_PR,STN_LR,STN_TR,STN_DR,
	STN_S2,STN_KL,STN_WL,STN_RL,STN_ST2,STN_ST4,STN_RR,STN_BR,STN_GR,STN_SR,STN_ZR,
	STN_N1,STN_A,STN_O,STN_E,STN_U,STN_N2),
};

bool process_record_kb(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case STN_S1:
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
