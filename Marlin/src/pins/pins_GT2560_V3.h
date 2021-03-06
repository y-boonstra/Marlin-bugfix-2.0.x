/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * GT2560 V3.0 pin assignment
 */

#if !defined(__AVR_ATmega1280__) && !defined(__AVR_ATmega2560__)
  #error "Oops! Select 'Arduino/Genuino Mega or Mega 2560' in 'Tools > Board.'"
#endif

#ifndef BOARD_NAME
  #define BOARD_NAME "GT2560 V3.0"
#endif

//
// Servos
//
#define SERVO0_PIN         11   //13 untested  3Dtouch

//
// Limit Switches
//
#define X_MIN_PIN          24
#define X_MAX_PIN          22
#define Y_MIN_PIN          28
#define Y_MAX_PIN          26
#define Z_MIN_PIN          30
#define Z_MAX_PIN          32

//
// Runout Sensor
//
#ifndef FIL_RUNOUT_PIN
  #define FIL_RUNOUT_PIN   66
#endif
#ifndef FIL_RUNOUT2_PIN
  #define FIL_RUNOUT2_PIN  67
#endif

//
// Power Recovery
//
#define POWER_LOSS_PIN     69   // Pin to detect power loss
#define POWER_LOSS_STATE   LOW

//
// Z Probe (when not Z_MIN_PIN)
//
#ifndef Z_MIN_PROBE_PIN
  #define Z_MIN_PROBE_PIN  32
#endif

//
// Steppers
//
#define X_STEP_PIN         37
#define X_DIR_PIN          39
#define X_ENABLE_PIN       35

#define Y_STEP_PIN         31
#define Y_DIR_PIN          33
#define Y_ENABLE_PIN       29

#define Z_STEP_PIN         25
#define Z_DIR_PIN          23
#define Z_ENABLE_PIN       27

#define E0_STEP_PIN        46
#define E0_DIR_PIN         44
#define E0_ENABLE_PIN      12

#define E1_STEP_PIN        49
#define E1_DIR_PIN         47
#define E1_ENABLE_PIN      48

//
// Temperature Sensors
//
#define TEMP_0_PIN         11   // Analog Input
#define TEMP_1_PIN          9   // Analog Input
#define TEMP_2_PIN          1   // Analog Input
#define TEMP_BED_PIN       10   // Analog Input

//
// Heaters / Fans
//
#define HEATER_0_PIN       10
#define HEATER_1_PIN        3
#define HEATER_2_PIN        1
#define HEATER_BED_PIN      4
#define FAN_PIN             9
//#define FAN1_PIN            8
//#define FAN2_PIN            7


//
// Misc. Functions
//
#define SD_DETECT_PIN      38
#define SDSS               53
#define LED_PIN             6
#define PS_ON_PIN          12
#define SUICIDE_PIN        54   //PIN that has to be turned on right after start, to keep power flowing.

#ifndef CASE_LIGHT_PIN
  //#define CASE_LIGHT_PIN 21
  #define CASE_LIGHT_PIN    6
#endif

//
// LCD Controller
//
#define BEEPER_PIN         18

#define LCD_PINS_RS        20
#define LCD_PINS_ENABLE    17
#define LCD_PINS_D4        16
#define LCD_PINS_D5        21
#define LCD_PINS_D6         5
#define LCD_PINS_D7        36

#if ENABLED(NEWPANEL)
  #define BTN_EN1          42
  #define BTN_EN2          40
  #define BTN_ENC          19
#endif
