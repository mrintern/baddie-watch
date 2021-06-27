/*

this is untested baddie_watch code, but it probably works. Also it fixes the laser.
To remove the complaints about memory, comment out the print statements and arrays.

*/

#include <Wire.h>
#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SH1106.h>
#include <Adafruit_NeoPixel.h>
#include <Keyboard.h>
#include "RTClib.h"
#include <timer.h>


#define BUTTON_UP 10
#define BUTTON_CENTER 9
#define BUTTON_DOWN 8

#define BUZZER 12
#define LASER 13
#define OLED_RESET 7 // not used
#define PIXEL_COUNT 1
#define PIXEL_PIN   6

auto timer = timer_create_default();
Adafruit_SH1106 display(OLED_RESET);
Adafruit_NeoPixel strip = Adafruit_NeoPixel(PIXEL_COUNT, PIXEL_PIN, NEO_GRB + NEO_KHZ800);
RTC_DS3231 rtc;

char daysOfTheWeek[7][12] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

boolean button_down_now_state = HIGH;
boolean button_down_old_state = LOW;
boolean laser_state = HIGH;

boolean isRtc = false;

int defaultDelay = 4; //malduino converter
int defaultCharDelay = 5; //malduino converter
int rMin = 0; //malduino converter
int rMax = 100; //malduino converter

void setup() {
  Wire.begin();
  Serial.begin(115200);

  pinMode(BUTTON_UP,INPUT_PULLUP);
  pinMode(BUTTON_CENTER,INPUT_PULLUP);
  pinMode(BUTTON_DOWN,INPUT_PULLUP);
  pinMode(BUZZER,OUTPUT);
  pinMode(LASER,OUTPUT);
  pinMode(PIXEL_PIN,OUTPUT);
  
  display.begin(SH1106_SWITCHCAPVCC, 0x3C); 
  display.setTextColor(WHITE);
  badUSB();
  delay(2000);
  
}

void loop() {
  
  timer.tick();
  DateTime now = rtc.now();
  display.clearDisplay(); 
  display.setTextSize(2); 
  display.setCursor(0,0);
  //display.print(daysOfTheWeek[now.dayOfTheWeek()]);
  display.print("!");
  display.setTextSize(1);
  display.setCursor(0,20);
  display.print("Temp: ");
  display.print(rtc.getTemperature());
  display.println(" C");
  display.setCursor(0,40);
  display.setTextSize(0.75);
  display.print("\"If you can't do one thing, you cant do   anything\"");
  
  display.display();

  button_down_now_state = digitalRead (BUTTON_DOWN);
  if (button_down_old_state == LOW && button_down_now_state == HIGH) {        //if low -> high
      laser_state = !laser_state;                        //switch state: true <-> false
      digitalWrite (LASER, laser_state);
   }
  button_down_old_state = button_down_now_state;       //save button state

}

void badUSB(){
  Keyboard.begin();    
    delay(1000);
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press(' ');
    Keyboard.releaseAll();
    delay(500);
    Keyboard.print("terminal");
    delay(500);
    typeKey(KEY_RETURN);
    delay(500);
    Keyboard.print("upload test");
    delay(500);
    typeKey(KEY_RETURN);
    delay(500);
    Keyboard.end();
    delay(500); 
}

void typeKey(int key){
  Keyboard.press(key);
  delay(defaultCharDelay);
  Keyboard.release(key);
}
