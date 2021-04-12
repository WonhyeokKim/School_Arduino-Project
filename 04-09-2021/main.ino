int button1 = 2;
int button2 = 3;
int button3 = 4;
// int button4 = 5;

int led1 = 10;
int led2 = 11;
int led3 = 12;
// int temp1 = 13;

void setup() {
    pinMode(button1, INPUT);
    pinMode(button2, INPUT);
    pinMode(button3, INPUT);

    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(led3, OUTPUT);
}

void loop() {
    digitalWrite(led1, HIGH);
}