int getInput = 12;
int redLed = 13;

void setup() {
    pinMode(getInput, INPUT);
    pinMode(redLed, OUTPUT);

    Serial.begin(9600);
}

void loop() {
    if (digitalRead(getInput) == HIGH) {
        digitalWrite(redLed, HIGH);
      	delay(1000 * 2);
      	digitalWrite(redLed, LOW);
    }

    /* Homeworks
     * TODO List: LED와 버튼을 하나씩 더 추가합니다.
     */
}