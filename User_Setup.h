// Setup for the ESP32 S3 with ILI9341 display
// Note SPI DMA with ESP32 S3 is not currently supported
//#define USER_SETUP_ID 70
#define USER_SETUP_INFO "User_Setup"
// See SetupX_Template.h for all options available
#define ILI9341_2_DRIVER

                    // Typical board default pins - change to match your board
#define TFT_CS   39 //     10 or 34 (FSPI CS0) 
#define TFT_MOSI 35 //     11 or 35 (FSPI D)
#define TFT_SCLK 36 //     12 or 36 (FSPI CLK)
#define TFT_MISO 37 //     13 or 37 (FSPI Q)

/*
 * in NodeMCU ESP-S3-12K-Kit, GPIO 6 and 7 are connected to LEDs,
 * so re-allocate to GPIO 15 and 16.
 */
// Use pins in range 0-31
#define TFT_DC    16     //7
//#define TFT_RST   15     //6
#define TFT_RST  -1  // Set TFT_RST to -1 if display RESET is connected to ESP32 board RST


#define TFT_BL   6            // LED back-light control pin
#define TFT_BACKLIGHT_ON HIGH  // Level to turn ON back-light (HIGH or LOW)


//#define TOUCH_CS 16 // Optional for touch screen

#define LOAD_GLCD
#define LOAD_FONT2
#define LOAD_FONT4
#define LOAD_FONT6
#define LOAD_FONT7
#define LOAD_FONT8
#define LOAD_GFXFF

#define SMOOTH_FONT

// FSPI port (SPI2) used unless following defined. HSPI port (SPI3) NOT TESTED YET
//#define USE_HSPI_PORT
#define USE_HSPI_PORT
//#define SPI_FREQUENCY  27000000
#define SPI_FREQUENCY  40000000   // Maximum for ILI9341

#define SPI_READ_FREQUENCY  6000000 // 6 MHz is the maximum SPI read speed for the ST7789V

#define SPI_TOUCH_FREQUENCY 2500000