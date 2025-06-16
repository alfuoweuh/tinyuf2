#ifndef WAVESHARE_ESP32S3_LCD_19_H_
#define WAVESHARE_ESP32S3_LCD_19_H_

//--------------------------------------------------------------------+
// Button
//--------------------------------------------------------------------+
#define PIN_BUTTON_UF2 0
#define PIN_DOUBLE_RESET_RC 36

//--------------------------------------------------------------------+
// LED - RGB LED je na pinu 15 podle vašich údajů
//--------------------------------------------------------------------+
#define NEOPIXEL_PIN 15
#define NEOPIXEL_POWER_PIN -1
#define NEOPIXEL_POWER_STATE 1
#define NEOPIXEL_NUMBER 2

//--------------------------------------------------------------------+
// TFT - podle specifikací vaší desky
//--------------------------------------------------------------------+
#define CONFIG_LCD_TYPE_ST7789V
#define DISPLAY_PIN_MISO -1
#define DISPLAY_PIN_MOSI 7
#define DISPLAY_PIN_SCK 6
#define DISPLAY_PIN_CS 5
#define DISPLAY_PIN_DC 4
#define DISPLAY_PIN_RST 8
#define DISPLAY_PIN_BL 15

#define DISPLAY_WIDTH 170
#define DISPLAY_HEIGHT 320

//--------------------------------------------------------------------+
// USB UF2
//--------------------------------------------------------------------+
#define USB_VID 0x239A
#define USB_PID 0x80E9
#define USB_MANUFACTURER "Waveshare"
#define USB_PRODUCT "ESP32-S3-LCD-1.9"
#define UF2_PRODUCT_NAME USB_MANUFACTURER " " USB_PRODUCT
#define UF2_BOARD_ID "ESP32-S3-LCD-1.9"
#define UF2_VOLUME_LABEL "WSS3BOOT"
#define UF2_INDEX_URL "https://www.waveshare.com/esp32-s3-lcd-1.9.htm"

#endif