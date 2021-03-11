/*
 * Project Name: Test_LED
 * Project Date: 03/11/2021
 * Project Description: This is led test code.
 * This project is publishing by ProjectTL12345 for Github
 */

const int mainPin = 13;
const int led1 = 12;
const int led2 = 11;
const int led3 = 10;

void setup() {
  pinMode(mainPin, OUTPUT);
  
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  flashLed(led1);
  flashLed(led2);
  flashLed(led3);
}

void flashLed(int pinNumber) {
  digitalWrite(pinNumber, HIGH);
  Serial.println(digitalRead(pinNumber));
  delay(1000);
  
  digitalWrite(pinNumber, LOW);
  Serial.println(digitalRead(pinNumber));
  delay(1000);
}
