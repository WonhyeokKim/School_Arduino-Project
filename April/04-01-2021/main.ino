int setRed = 11;
int setBlue = 10;
int setGreen = 9;

void setup() {
    pinMode(setRed, OUTPUT);
    pinMode(setBlue, OUTPUT);
    pinMode(setGreen, OUTPUT);

    Serial.begin(9600);
}

void loop() {
    analogWrite(setRed, 255);
    analogWrite(setBlue, 0);
    analogWrite(setGreen, 0);

    delay(500);

    analogWrite(setRed, 0);
    analogWrite(setBlue, 0);
    analogWrite(setGreen, 0);

    delay(500);

    analogWrite(setRed, 0);
    analogWrite(setBlue, 255);
    analogWrite(setGreen, 0);

    delay(500);

    analogWrite(setRed, 0);
    analogWrite(setBlue, 0);
    analogWrite(setGreen, 0);

    delay(500);

    analogWrite(setRed, 0);
    analogWrite(setBlue, 0);
    analogWrite(setGreen, 255);

    delay(500);

    analogWrite(setRed, 0);
    analogWrite(setBlue, 0);
    analogWrite(setGreen, 0);

    delay(500);
}