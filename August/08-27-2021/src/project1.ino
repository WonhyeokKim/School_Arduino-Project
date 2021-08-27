#include <led_control.h>

#define START_PIN 7
#define END_PIN 12

#define BUTTON_0 2
#define BUTTON_1 3

void setup() {
  Serial.begin(9600);
}

void loop() {
  LedSpectrom led = LedSpectrom(START_PIN, END_PIN);
  led.led_spectrom(BUTTON_0, 500, true);
  led.led_spectrom(BUTTON_1, 500, false);
}
