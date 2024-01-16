#define SERIAL_USART_TX_PIN GP1
One or the other
#define SPLIT_LAYER_STATE_ENABLE
This enables syncing of the layer state between both halves of the split keyboard. The main purpose of this feature is to enable support for use of things like OLED display of the currently active layer.

#define SPLIT_WPM_ENABLE
This enables transmitting the current WPM to the slave side of the split keyboard. The purpose of this feature is to support cosmetic use of WPM (e.g. displaying the current value on an OLED screen).

#define SPLIT_OLED_ENABLE
This enables transmitting the current OLED on/off status to the slave side of the split keyboard. The purpose of this feature is to support state (on/off state only) syncing.

#define MATRIX_ROW_PINS_RIGHT { <row pins> }
#define MATRIX_COL_PINS_RIGHT { <col pins> }

#define RGBLIGHT_SPLIT
This option enables synchronization of the RGB Light modes between the controllers of the split keyboard. This is for keyboards that have RGB LEDs that are directly wired to the controller (that is, they are not using the “extra data” option on the TRRS cable).

#define RGBLED_SPLIT { 6, 6 }
  RGBLED = RGBMATRIX?
This sets how many LEDs are directly connected to each controller. The first number is the left side, and the second number is the right side.


WS2812_PIO_USE_PIO0)


#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET // Activates the double-tap behavior
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U // Timeout window in ms in which the double tap can occur.
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17 // Specify a optional status led by GPIO number which blinks when entering the bootloader

#undef I2C_DRIVER
Hay que meter tema de OLEd
