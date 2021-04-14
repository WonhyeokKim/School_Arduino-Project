int button1 = 11;
int button2 = 10;
int button3 = 9;

int led1 = 13;
int led2 = 12;

void setup() {
    pinMode(button1, INPUT);
    pinMode(button2, INPUT);
    pinMode(button3, INPUT);

    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);

    Serial.begin(9600);
}

void loop() {
    if (digitalRead(button3) == HIGH && digitalRead(button1) == HIGH) {
        digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);

        delaySecond(1);

        digitalWrite(led1, LOW);
        digitalWrite(led2, LOW);
        delaySecond(1);
    } else if (digitalRead(button1) == HIGH) {
        digitalWrite(led1, HIGH);
        delaySecond(1);
        digitalWrite(led2, HIGH);
        delaySecond(1);

        digitalWrite(led1, LOW);
        digitalWrite(led2, LOW);
        delaySecond(1);
    } else if (digitalRead(button2) == HIGH) {
      	digitalWrite(led2, HIGH);
        delaySecond(1);
        digitalWrite(led1, HIGH);
        delaySecond(1);

        digitalWrite(led2, LOW);
        digitalWrite(led1, LOW);
        delaySecond(1);
    }
}

void delaySecond(int second) {
    delay(1000 * second);
}