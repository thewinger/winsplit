// Copyright 2024 thewinger (@thewinger)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once


/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET // Activates the double-tap behavior
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U // Timeout window in ms in which the double tap can occur.
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17 // Specify a optional status led by GPIO number which blinks when entering the bootloader

#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP2
#define I2C1_SCL_PIN GP3

// #define DOUBLE_TAP_SHIFT_TURNS_ON_CAPS_WORD
#define CAPS_WORD_INVERT_ON_SHIFT

#define TAPPING_TERM 200
#define TAPPING_TERM_PER_KEY

/* disable debug print */
//#define NO_DEBUG
// #define SERIAL_USART_TX_PIN GP0     // The GPIO pin that is used split communication.
/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
