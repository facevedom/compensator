#include "LedControl.h"

const int START_GOOD_ACTIVITY_BUTTON_PIN = 9;
const int START_BAD_ACTIVITY_BUTTON_PIN = 8;
const float NUMBER_OF_LEDS = 64;

int DEFAULT_SCREEN_INTENSITY = 15;

LedControl lc = LedControl(12, 10, 11, 1); // Pins: DIN,CLK,CS, # of Displays connected

void setup() {
  initialize();

  // buttons setup
  pinMode(START_GOOD_ACTIVITY_BUTTON_PIN, INPUT_PULLUP);
  pinMode(START_BAD_ACTIVITY_BUTTON_PIN, INPUT_PULLUP);
}

void loop() {
  light(0,0);
}
