int button = 13;
int led = 12;

void setup() {
    pinMode(button, INPUT);
    pinMode(led, OUTPUT);

    Serial.begin(9600);
}

void loop() {
    int readValue = digitalRead(button);
  	Serial.println(readValue);
  
    if (readValue == LOW) {
        digitalWrite(led, HIGH);
    } else {
        digitalWrite(led, LOW);
    }
}