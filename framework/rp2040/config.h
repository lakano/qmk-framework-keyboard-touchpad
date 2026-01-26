// Copyright 2022 Arya (@CRImier)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/* Specific touchpad */
#define I2C_DRIVER I2CD1
#define I2C1_SCL_PIN        GP27
#define I2C1_SDA_PIN        GP26
#define HAL_USE_I2C TRUE


//#define MATRIX_ROW_PINS { 0, 1, 2, 3, 4, 5, 6, 7 }
//#define MATRIX_COL_PINS { 8, 9, 10, 11, 12, 13, 14, 15 }


#include_next <halconf.h>

/* ----------------- */


/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

//#define BACKLIGHT_PWM_DRIVER PWMD4
//#define BACKLIGHT_PWM_CHANNEL RP2040_PWM_CHANNEL_B

//#define BACKLIGHT_PIN GP29
#define BACKLIGHT_LEVELS 3
//#define BACKLIGHT_DEFAULT_LEVEL 100

/*Touchpad*/
//#define FRAMEWORK_TOUCHPAD_ENABLE yes
