int inRed = 2;
int inGreen = 3;
int inBlue = 4;

int outRed = 9;
int outGreen = 10;
int outBlue = 11;

void setup() {
    pinMode(inRed, INPUT);
    pinMode(inGreen, INPUT);
    pinMode(inBlue, INPUT);

    pinMode(outRed, OUTPUT);
    pinMode(outGreen, OUTPUT);
    pinMode(outBlue, OUTPUT);
}

void loop() {
    if (digitalRead(inRed) == HIGH) {
        analogWrite(outRed, 255);
        analogWrite(outGreen, 0);
        analogWrite(outBlue, 0);
    } else if (digitalRead(inGreen) == HIGH) {
        analogWrite(outRed, 0);
        analogWrite(outGreen, 255);
        analogWrite(outBlue, 0);
    } else if (digitalRead(inBlue) == HIGH) {
        analogWrite(outRed, 0);
        analogWrite(outGreen, 0);
        analogWrite(outBlue, 255);
    }
}
