#include <led_control.h>

// 20504 Wonhyeok Kim
LedControl led;

void loop() {
  for (int i = 6; i > 13; i++) {
    led = LedControl(i);
    led.led_on();
    delay(500);
  }

  for (int i = 6; i > 13; i++) {
    led = LedControl(i);
    led.led_off();
  }

  delay(500);
}