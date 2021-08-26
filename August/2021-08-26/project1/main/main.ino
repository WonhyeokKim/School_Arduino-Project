#include <led_control.h>

// 20504 Wonhyeok Kim

void setup() {}

void loop() {
  for (int i = 12; i > 6; i--) {
    LedControl led = LedControl(i);
    led.led_on();
    delay(500);
  }

  for (int i = 12; i > 6; i--) {
    LedControl led = LedControl(i);
    led.led_off();
  }

  delay(500);
}