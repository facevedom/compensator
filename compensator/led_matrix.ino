void initialize() {
  // LED matrix setup
  lc.shutdown(0, false); // Wake up display
  lc.setIntensity(0, DEFAULT_SCREEN_INTENSITY);
  lc.clearDisplay(0);
}

void light(int x, int y) {  
  lc.setLed(0, x, y, true);
}
