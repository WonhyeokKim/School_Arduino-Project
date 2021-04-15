int led1 = 11;
int led2 = 12;
int led3 = 13;

void setup() {
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(led3, OUTPUT);

    randomSeed(analogRead(A0));

    Serial.begin(114000);
}

void loop() {
    int value = random(100) % 3;
    Serial.println(getValue(value));

    if (value == 0) {
        runLed(led1, 500);
    } else if (value == 1) {
        runLed(led2, 500);
    } else {
        runLed(led3, 500);
    }    
}

void runLed(int led, int sleep) { // Milisecond
    digitalWrite(led, HIGH);
    delay(sleep);
    digitalWrite(led, LOW);
}

int getValue(int value) {
    return value;
}