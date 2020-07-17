#include "LedControl.h"

const int START_GOOD_ACTIVITY_BUTTON_PIN = 9;
const int START_BAD_ACTIVITY_BUTTON_PIN = 8;
const float NUMBER_OF_LEDS = 64;

int DEFAULT_SCREEN_INTENSITY = 15;

LedControl lc = LedControl(12, 10, 11, 1); // Pins: DIN,CLK,CS, # of Displays connected

void setup() {
  // LED matrix setup
  lc.shutdown(0, false); // Wake up display
  lc.setIntensity(0, DEFAULT_SCREEN_INTENSITY);
  lc.clearDisplay(0);

  // buttons setup
  pinMode(START_GOOD_ACTIVITY_BUTTON_PIN, INPUT_PULLUP);
  pinMode(START_BAD_ACTIVITY_BUTTON_PIN, INPUT_PULLUP);
}

void loop() {

}
