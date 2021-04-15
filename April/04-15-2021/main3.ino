int ledRed = 13;
int ledBlue = 12;
int ledGreen = 11;

const int sleepTime = 500;

void setup() {
    pinMode(ledRed, OUTPUT);
    pinMode(ledBlue, OUTPUT);
    pinMode(ledGreen, OUTPUT);

    randomSeed(analogRead(A0));

    Serial.begin(114000);
}

void loop() {
    int value = random(100) % 7;

    Serial.println(getValue(value));
    Serial.println(debug());

    switch (value) {
        case 0:
            runLed(ledRed, sleepTime);
            break;

        case 1:
            runLed(ledBlue, sleepTime);
            break;

        case 2:
            runLed(ledGreen, sleepTime);
            break;

        case 3:
            runDoubleLed(ledRed, ledBlue, sleepTime);
            break;

        case 4:
            runDoubleLed(ledRed, ledGreen, sleepTime);
            break;

        case 5:
            runDoubleLed(ledBlue, ledGreen, sleepTime);
            break;

        case 6:
            runAll(sleepTime);
            break;
    }
}

void runLed(int led, int sleep) { // Milisecond
    digitalWrite(led, HIGH);
    delay(sleep);
    digitalWrite(led, LOW);
}

void runDoubleLed(int led1, int led2, int sleep) { // Milisecond
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);

    delay(sleep);

    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
}

void runAll(int sleep) {
    digitalWrite(ledRed, HIGH);
    digitalWrite(ledBlue, HIGH);
    digitalWrite(ledGreen, HIGH);
    
    delay(sleep);

    digitalWrite(ledRed, LOW);
    digitalWrite(ledBlue, LOW);
    digitalWrite(ledGreen, LOW);
}

int getValue(int value) {
    return value;
}

int debug() {
    return analogRead(A0);
}