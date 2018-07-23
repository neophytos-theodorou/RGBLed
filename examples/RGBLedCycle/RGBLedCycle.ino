//Controlling an RGB LED
#include "RGBLed.h"

#define RED_PIN 9
#define GREEN_PIN 10
#define BLUE_PIN 11
#define DELAY 1000

RGBLed led(RED_PIN, GREEN_PIN, BLUE_PIN);

void setup() {
}

void loop() {
  led.setColour(RED);
  delay(DELAY);
  led.setColour(GREEN);
  delay(DELAY);
  led.setColour(BLUE);
  delay(DELAY);
}