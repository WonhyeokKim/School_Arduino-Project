int button1 = 13;

void setup() {
    pinMode(button1, INPUT_PULLUP);
    Serial.begin(9600);
}

void loop() {
    if (digitalRead(button1) == LOW) {
        Serial.println("[DEBUG] Button 1 has clicked!");
    }
}