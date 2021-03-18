int getInput1 = 10;
int getInput2 = 11;
int led1 = 12;
int led2 = 13;

void setup() {
    // Input Only
    pinMode(getInput1, INPUT);
    pinMode(getInput2, INPUT);

    // Output Only
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);

    // Serial Output limit
    Serial.begin(9600);
}

void loop() {
    if (digitalRead(getInput1) == HIGH) {
        digitalWrite(led1, HIGH);
        delaySecond(1);
        digitalWrite(led2, HIGH);
        delaySecond(1);

        digitalWrite(led1, LOW);
        digitalWrite(led2, LOW);
        delaySecond(1);
    } else if (digitalRead(getInput2) == HIGH) {
      	digitalWrite(led2, HIGH);
        delaySecond(1);
        digitalWrite(led1, HIGH);
        delaySecond(1);

        digitalWrite(led2, LOW);
        digitalWrite(led1, LOW);
        delaySecond(1);
    }

    /* Homeworks
     * TODO List: LED와 버튼을 하나씩 더 추가합니다.
     */
}

void delaySecond(int second) {
    delay(1000 * second);
}