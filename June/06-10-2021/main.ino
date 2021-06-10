// I'm really hate CPP
#define LED_1 13

void setup() {
	pinMode(LED_1, OUTPUT);
  	Serial.begin(9600);
}

void loop() {
  	select_mode(2);
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

/*
 * 0: 500이상 넘기면 켜짐 모드
 * 1: 1023초 까지의 깜빡임 모드
 * 2: 2000초 까지의 깜빡임 모드
 */

void select_mode(int select_mode) {
	int value = analogRead(A0);
	switch (select_mode) {
      	case 0:
      		Serial.println(value);
			led_setting(LED_1, value);
      
      		if (value < 500) {
      			digitalWrite(LED_1, 0);
            } else {
            	digitalWrite(LED_1, 1);
            }
      		
      		break;
      	case 1:
  			Serial.println(value);
			led_setting(LED_1, value);
      		break;
      	case 2:
			float get_value = change_value(value);
  			Serial.print(value);
  			Serial.print("\t");
  			Serial.println(get_value);
		
			led_setting(LED_1, get_value);
      		break;
	}
}
