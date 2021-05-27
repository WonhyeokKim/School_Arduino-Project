const int pinA = 2;
const int pinB = 3;
const int pinC = 12;
const int pinD = 11;
const int pinE = 10;
const int pinF = 4;
const int pinG = 5;
const int pinDP = 13;

int segment[10][8] = {
  0, 0, 0, 0, 0, 0, 1, 1,
  1, 0, 0, 1, 1, 1, 1, 1,
  0, 0, 1, 0, 0, 1, 0, 1,
  0, 0, 0, 0, 1, 1, 0, 1,
  1, 0, 0, 1, 1, 0, 0, 1,
  0, 1, 0, 0, 1, 0, 0, 1,
  0, 1, 0, 0, 0, 0, 0, 1,
  0, 0, 0, 1, 1, 1, 1, 1,
  0, 0, 0, 0, 0, 0, 0, 1,
  0, 0, 0, 1, 1, 0, 0, 1
};

void setup() {
  pinMode(pinA, OUTPUT);
  pinMode(pinB, OUTPUT);
  pinMode(pinC, OUTPUT);
  pinMode(pinD, OUTPUT);
  pinMode(pinE, OUTPUT);
  pinMode(pinF, OUTPUT);
  pinMode(pinG, OUTPUT);
  pinMode(pinDP, OUTPUT);
}

void loop() {
  for (int i = 0; 10 > i; i++) {
  	displayDigital(segment[i]);
    delay(500);
  }
}

void displayDigital(int *segment){
  digitalWrite(pinA, segment[0]);
  digitalWrite(pinB, segment[1]);
  digitalWrite(pinC, segment[2]);
  digitalWrite(pinD, segment[3]);
  digitalWrite(pinE, segment[4]);
  digitalWrite(pinF, segment[5]);
  digitalWrite(pinG, segment[6]);
  digitalWrite(pinDP, segment[7]);
}
