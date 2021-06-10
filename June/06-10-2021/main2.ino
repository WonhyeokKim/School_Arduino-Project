// I'm really hate CPP
#define LED_1 13

void setup() {
	pinMode(LED_1, OUTPUT);
  	Serial.begin(9600);
}

void loop() {
  	int value = analogRead(A0);
  
  	float get_value = change_value(value);
  	Serial.print(value);
  	Serial.print("\t");
  	Serial.println(get_value);
  
  	led_setting(LED_1, get_value);
}

void led_setting(const int pin, float read_delay) {
	digitalWrite(pin, 1);
  	delay(read_delay);
  	digitalWrite(pin, 0);
  	delay(read_delay);
}

float change_value(int value) {
	return (float) value / 1023 * 2000;
}
