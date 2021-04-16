int piezo = 13;
int button = 12;

void setup() {
    pinMode(button, INPUT_PULLUP);
    pinMode(piezo, OUTPUT);
}

void loop() {
    if (digitalRead(button) == LOW) {
        digitalWrite(piezo, HIGH);
    } else {
        digitalWrite(piezo, LOW);
    }
}