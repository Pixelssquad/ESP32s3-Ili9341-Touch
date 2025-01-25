# ESP32s3-Ili9341-Touch
Connect ESP32S3 to ILI9341 TFT With Touch

Use the provided User_Setup.h for the TFT_eSPI Library
put the file in \Arduino\libraries\TFT_eSPI
is the configuration for the ESP32s3

Connections

ESP32s3      TFT
--DISPLAY PINS---
3v3          VCC
GND          GND
39           CS
RST          RESET
DC           16
35           MOSI
SCK          36
3V3          LED
---TOUCH PINS---
48           T_CLK
47           T_CS
21           T_DIN
20           T_D0
45           T_IRQ


![PIN1](https://github.com/user-attachments/assets/4bdc4fc9-5ec8-4472-888d-87ef39bcde9a)

![IMG20250126003904](https://github.com/user-attachments/assets/62db5eb3-9bfa-4aad-a975-2c2346751488)

