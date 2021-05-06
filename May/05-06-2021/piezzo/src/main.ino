/*
 * Created 05/06/2021
 */

int piezzo = 13;
int swap_button = 12;
int swap_button_2 = 11;

int alarm_seconds;

void setup() {
  	pinMode(piezzo, OUTPUT);
  	pinMode(swap_button, INPUT_PULLUP);
  	pinMode(swap_button_2, INPUT_PULLUP);
  
  	Serial.begin(9600);
}

void loop() {
  	if (digitalRead(swap_button) == LOW) {
    	alarm(piezzo, 1);
  	}
  
  	if (digitalRead(swap_button_2) == LOW) {
  		dot(piezzo);
  	}
}

void dot(int PIN_NAME) {
	digitalWrite(PIN_NAME, HIGH); 
  	delay(500);
  
  	digitalWrite(PIN_NAME, LOW);
  	delay(100);
}

void alarm(int PIN_NAME, int SECOND) {
  	alarm_seconds = SECOND;
  	digitalWrite(PIN_NAME, HIGH);
  	delay(SECOND * 1000);
  
  	digitalWrite(PIN_NAME, LOW);
  	delay(SECOND * 1000);
  
  	Serial.println(get_second());
}

int get_second() {
  	return alarm_seconds;
}
