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
        send_signal(led1);
        send_signal(led2);
    } else if (digitalRead(getInput2) == HIGH) {
      	send_signal(led2);
      	send_signal(led1);
    }

    /* Homeworks
     * TODO List: LED와 버튼을 하나씩 더 추가합니다.
     */
}

void delaySecond(int second) {
    delay(1000 * second);
}

void send_signal(int led) {
    digitalWrite(led, HIGH);
    delaySecond(1);
    digitalWrite(led, LOW);
}