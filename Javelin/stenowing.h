 //---------------------------------------------------------------------------

#pragma once
#include "main_flash_layout.h"

//---------------------------------------------------------------------------

#define JAVELIN_USE_EMBEDDED_STENO 1
#define JAVELIN_USE_USER_DICTIONARY 1
#define JAVELIN_USB_MILLIAMPS 100
#define JAVELIN_DEBOUNCE_MS 10
#define JAVELIN_BUTTON_MATRIX 1

constexpr uint8_t COLUMN_PINS[] = {2, 3, 4, 5, 6, 20, 22, 26, 27, 28, 29};
constexpr uint8_t ROW_PINS[] = {7, 23, 8};
constexpr uint32_t COLUMN_PIN_MASK = 0x1b8007e;
constexpr uint32_t ROW_PIN_MASK = 0x2060000;

constexpr int8_t KEY_MAP[3][16] = {
  {  0,  1,  2,  3,  4, /**/  5,  6,  7,  8,  9, 10 },
  { 11, 12, 13, 14, 15, /**/ 16, 17, 18, 19, 20, 21 },
  { -1, -1, 22, 23, 24, /**/ 25, 26, 27, -1, -1, -1 },
};

#define JAVELIN_RGB 1
#define JAVELIN_RGB_PIN 0
#define JAVELIN_RGB_COUNT 28
#define JAVELIN_USE_RGB_MAP 1

constexpr uint8_t RGB_MAP[JAVELIN_RGB_COUNT] = {
   0, 1, 2, 3, 4, 5, /**/ 6, 7, 8, 9, 10,
  11,12,13,14,16,17, /**/ 18,19,20,21,22,
           23,24,25, /**/ 26,27,28
};

#define JAVELIN_SCRIPT_CONFIGURATION \
  R"({"name":"StenoWing","layout":[{"x":0,"y":0},{"x":1,"y":0},{"x":2,"y":0},{"x":3,"y":0},{"x":4,"y":0},{"x":5,"y":0},{"x":6,"y":0},{"x":7,"y":0},{"x":8,"y":0},{"x":9,"y":0},{"x":10,"y":0},{"x":0,"y":1},{"x":1,"y":1},{"x":2,"y":1},{"x":3,"y":1},{"x":4,"y":1},{"x":5,"y":1},{"x":6,"y":1},{"x":7,"y":1},{"x":8,"y":1},{"x":9,"y":1},{"x":10,"y":1},{"x":2,"y":2},{"x":3,"y":2},{"x":4,"y":2},{"x":5,"y":2},{"x":6,"y":2},{"x":7,"y":2}]})"

const size_t BUTTON_COUNT = 28;
const char *const MANUFACTURER_NAME = "gzowski";
const char *const PRODUCT_NAME = "StenoWing (Javelin)";
const int VENDOR_ID = 0x39DF;//---------------------------------------------------------------------------
