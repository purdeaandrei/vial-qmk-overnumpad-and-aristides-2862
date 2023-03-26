/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define VIAL_KEYBOARD_UID {0x02, 0x70, 0xCF, 0x4A, 0x57, 0x01, 0xCB, 0xA6}

// F13 = 3,14 Enter=5,8
#define VIAL_UNLOCK_COMBO_ROWS { 3,  5 }
#define VIAL_UNLOCK_COMBO_COLS { 14, 8 }

#define DYNAMIC_KEYMAP_MACRO_COUNT 32
#define DYNAMIC_KEYMAP_LAYER_COUNT 16

#undef SERIAL_NUMBER
#define SERIAL_NUMBER DEF_SERIAL_NUMBER ":vial:f64c2b3c"
