/*
Copyright 2021 Astra Jones

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    Star Boards
#define PRODUCT         LetsChoc
#define DESCRIPTION     40 ortho split 
#define VIAL_KEYBOARD_UID {0xF5, 0xF7, 0xCC, 0xD4, 0xEE, 0xED, 0x00, 0x1D}
 
/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 6

#define SOFT_SERIAL_PIN D3
#define SPLIT_USB_DETECT

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
*//////////////////
#define MATRIX_ROW_PINS { B5, B4, E6, D7 }
#define MATRIX_COL_PINS { F4, D2, D1, D0, D4, C6 }

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5


