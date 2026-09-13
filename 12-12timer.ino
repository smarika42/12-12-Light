// All 6 LEDs on for 12 hours, then off for 12 hours, repeating.
// led6 -> pin 2, led1 -> pin 3, led2 -> pin 4, led4 -> pin 5, led3 -> pin 6, led5 -> pin 7, led7 -> pin 9

const int ledPins[] = {2, 3, 4, 5, 6, 7, 9};
const int numLeds = 7;

const unsigned long twelveHoursMs = 1UL * 60UL * 1000UL; // 1 minute (60,000 ms) - for testing
// 12 hours = 12UL * 60UL * 60UL * 100UL;
unsigned long lastToggleTime = 0;
bool ledsOn = true;

void setup() {
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
  setLeds(ledsOn);
  lastToggleTime = millis();
}

void loop() {
  if (millis() - lastToggleTime >= twelveHoursMs) {
    ledsOn = !ledsOn;
    setLeds(ledsOn);
    lastToggleTime = millis();
  }
}

void setLeds(bool state) {
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], state ? HIGH : LOW);
  }
}
