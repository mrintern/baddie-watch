* Unfinished porject, proceed with caution d00d

# baddie-watch
an attempt to fix the BAD WATCH by DSTIKE, and make it usable for non-programmers / hardware hackers

# what is the BAD watch by DSTIKE?
this: https://dstike.com/products/dstike-bad-watch

## Why are you doing this
Because the BAD watch is a great project, but the code is sorta... broken. Needs some housekeeping.
Disclaimer:
* the "distance sensor" won't work with this code
* resetting the time requires a bootloader

## Requirements
- DSTIKE bad watch https://dstike.com/products/dstike-bad-watch
- Arduino IDE https://www.arduino.cc/en/software
- a USB to microUSB cable (AKA, an Android phone charger) This is necessary to
plug your watch into the computer.



## Instructions
### 1. Open a new Arduino project
File -> new

### 2. Set the board to "Arduino Leonardo"
Tools -> Board -> Arduino Leonardo

### 3. Copy + paste the baddie_watch.ino code into the Arduino IDE

### 4. Download these libraries into your Arduino IDE
* If your not sure how to import libraries into your Arduino environment, use
this guide: https://www.instructables.com/Import-a-Code-Library-to-Arduino/

- arduino timer https://github.com/contrem/arduino-timer
- Adafruit GFX https://github.com/adafruit/Adafruit-GFX-Library
- Adafruit NeoPixel https://github.com/adafruit/Adafruit_NeoPixel
- Adafruit SH1106 https://github.com/wonho-maker/Adafruit_SH1106
- Adafruit RTC lib https://github.com/adafruit/RTClib
- Adafruit_I2CDevice.h https://github.com/adafruit/Adafruit_BusIO

### 4. Click "verify" in the Arduino IDE
Hopefully, you don't see any errors. If you do, open an issue please.

### 5. Click "Upload"

### 6. Have fun!
