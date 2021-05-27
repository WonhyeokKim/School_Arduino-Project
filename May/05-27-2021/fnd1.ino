/*
 * This code is Deprecated by Project_TL
#define PIN_A 4
#define PIN_B 5
#define PIN_C 12
#define PIN_D 11
#define PIN_E 10
#define PIN_F 3
#define PIN_G 2
#define PIN_DP 13
*
*/

const int pinA = 4;
const int pinB = 5;
const int pinC = 12;
const int pinD = 11;
const int pinE = 10;
const int pinF = 3;
const int pinG = 2;
const int pinDP = 13;

void setup() {
  pinMode(pinA, OUTPUT);
  pinMode(pinB, OUTPUT);
  pinMode(pinC, OUTPUT);
  pinMode(pinD, OUTPUT);
  pinMode(pinE, OUTPUT);
  pinMode(pinF, OUTPUT);
  pinMode(pinG, OUTPUT);
  pinMode(pinDP, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  digitalWrite(pinDP, HIGH);
  
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, HIGH);
  
  delay(1000);
  
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, HIGH);
  
  delay(1000);
  
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, LOW);
  
  delay(1000);
  
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, LOW);
  
  delay(1000);
  
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, LOW);
  
  delay(1000);
  
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, LOW);
  
  delay(1000);
  
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, LOW);
  
  delay(1000);
  
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, HIGH);
  
  delay(1000);
  
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, LOW);
  
  delay(1000);
  
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, LOW);
  
  delay(1000);
}
/* Convert this later
int printNumber(int type) {
  switch (type) {
    case 0:
    segmentOutput(true, true, true, true, true, true, false, false);
    
    case 1:
    segmentOutput(false, true, true, false, false, false, false, false);
    
    case 2:
    segmentOutput(true, true, false, true, true, false, false, false);
    
    case 3:
    segmentOutput(true, true, true, true, false, false, true, false);
    
    case 4:
    segmentOutput(false, true, true, false, false, true, true, false);
    
    case 5:
    segmentOutput(true, false, true, true, false, true, true, false);
    
    case 6:
    segmentOutput(true, false, true, true, true, true, true, false);
    
    case 7:
    segmentOutput(true, true, true, false, false, false, false, false);
    
    case 8:
    segmentOutput(true, true, true, true, true, true, true, false);
    
    case 9:
    segmentOutput(true, true, true, false, false, true, true, false);
    case 10:
    segmentOutput(true, true, true, true, true, true, false, false);
    
    case 11:
    segmentOutput(true, true, true, true, true, true, false, false);
    
    case 12:
    segmentOutput(true, true, true, true, true, true, false, false);
    
    case 13:
    segmentOutput(true, true, true, true, true, true, false, false);
    
    case 14:
    segmentOutput(true, true, true, true, true, true, false, false);
    
    case 15:
    segmentOutput(true, true, true, true, true, true, false, false);
  }
  
  return type;
}

void segmentOutput(
  bool enableA,
  bool enableB,
  bool enableC,
  bool enableD,
  bool enableE,
  bool enableF,
  bool enableG,
  bool enableDP
) {
  if (enableA) {
  	digitalWrite(pinA, HIGH);
  } else if (enableB) {
    digitalWrite(pinB, HIGH);
  } else if (enableC) {
    digitalWrite(pinC, HIGH);
  } else if (enableD) {
    digitalWrite(pinD, HIGH);
  } else if (enableE) {
    digitalWrite(pinE, HIGH);
  } else if (enableF) {
    digitalWrite(pinF, HIGH);
  } else if (enableG) {
    digitalWrite(pinG, HIGH);
  } else if (enableDP) {
    digitalWrite(pinDP, HIGH);
  } else if (!enableA) {
  	digitalWrite(pinA, LOW);
  } else if (!enableB) {
    digitalWrite(pinB, LOW);
  } else if (!enableC) {
    digitalWrite(pinC, LOW);
  } else if (!enableD) {
    digitalWrite(pinD, LOW);
  } else if (!enableE) {
    digitalWrite(pinE, LOW);
  } else if (!enableF) {
    digitalWrite(pinF, LOW);
  } else if (!enableG) {
    digitalWrite(pinG, LOW);
  } else if (!enableDP) {
    digitalWrite(pinDP, LOW);
  }
}
*/
