#define LED_0 2
#define LED_1 3
#define LED_2 4
#define LED_3 5
#define LED_4 6
#define LED_5 7

void setup() {
  pinMode(LED_0, OUTPUT);
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  pinMode(LED_3, OUTPUT);
  pinMode(LED_4, OUTPUT);
  pinMode(LED_5, OUTPUT);

  Serial.begin(9600);
}

class LedControl {
  public:
  void led(int button_pin, int led_pin) {
    if (digitalRead(button_pin) != 1) {
      digitalWrite(led_pin, 1);
    } else {
      digitalWrite(led_pin, 0);
    }
  }

  void led_on(int led_pin) {
    digitalWrite(led_pin, 1);
  }

  void led_off(int led_pin) {
    digitalWrite(led_pin, 0);
  }
};

void loop() {
  LedControl control;
  control.led_on(LED_0);
  delay(500);
  control.led_on(LED_1);
  delay(500);
  control.led_on(LED_2);
  delay(500);
  control.led_on(LED_3);
  delay(500);
  control.led_on(LED_4);
  delay(500);
  control.led_on(LED_5);
  delay(500);

  control.led_off(LED_0);
  control.led_off(LED_1);
  control.led_off(LED_2);
  control.led_off(LED_3);
  control.led_off(LED_4);
  control.led_off(LED_5);
  delay(500);
}
