TODO
- make video tutorial
- fix distance sensor? #include <VL53L0X.h>
- Should i take our the date/time functionality?

# baddie-watch
Working code for the BAD watch by DSTIKE, along with some fun payloads to try
out.

# what is the BAD watch by DSTIKE?
this: https://dstike.com/products/dstike-bad-watch

## Why are you doing this
Because the BAD watch is a great project, but the code is sorta... broken. This
repo, and THIS_TUTORIAL are meant to make it easier for regular people to use
the watch without knowing about hardware, or programming.
Disclaimer:
* the "distance sensor" won't work with this code
* the resetting the time requires a bootloader,

## Requirements
- DSTIKE bad watch https://dstike.com/products/dstike-bad-watch
- Arduino IDE https://www.arduino.cc/en/software
- a USB to microUSB cable (AKA, an Android phone charger) This is necessary to
plug your watch into the computer.



## Instructions
You can watch THIS_TUTORIAL or follow the steps below

### 1. Open a new Arduino project
File -> new

### 2. Set the board to "Arduino Leonardo"
Tools -> Board -> Arduino Leonardo

### 3. Copy + paste the baddie-watch code into the Arduino IDE

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
