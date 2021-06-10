// I'm really hate C++ code
#define LED_1 13

void setup() {
  	pinMode(LED_1, OUTPUT);
  	Serial.begin(9600);
}

void loop() {
	Serial.println(get_value());
	if (get_value() > 100) {
  		digitalWrite(13, HIGH);
    	} else {
    		digitalWrite(13, LOW);
    	}
}

int get_value() {
	return analogRead(A0);
}
