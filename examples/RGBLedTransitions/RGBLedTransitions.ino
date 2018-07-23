//Controlling an RGB LED
#include "RGBLed.h"

#define RED_PIN 9
#define GREEN_PIN 10
#define BLUE_PIN 11
#define DELAY 10

RGBLed led(RED_PIN, GREEN_PIN, BLUE_PIN);

void setup() {
}

void loop() {
  led.transition(RED, GREEN, 255, DELAY);
  led.transition(GREEN, BLUE, 255, DELAY);
  led.transition(BLUE, RED, 255, DELAY);
}