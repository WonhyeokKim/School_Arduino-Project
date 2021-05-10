#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 2, 3, 4, 5);
const int tempPin = A0;

void setup() {
  lcd.begin(16, 2);
  Serial.begin(9600);
  
  bootLoader();
}

void loop() {
  lcd.clear();
  lcd.setCursor(0, 0);
  
  String tempStr = String(getTemp());
  
  lcd.print("TEMP: " + tempStr);
  
  String runTime = String(getRuntime());
  
  lcd.setCursor(0, 1);
  lcd.print("RUN_TIME: " + runTime + "s");
  
  Serial.println(tempStr);
  Serial.println(runTime);
  
  delay(500);
  lcd.clear();
}

float getTemp() {
  int readTemp = analogRead(tempPin);
  float voltage = readTemp * 5.0 / 1024.0;
  float temperature = voltage * 100 - 50;
  
  return temperature;
}

int getRuntime() {
  return millis() / 1000;
}

void bootLoader() {
  
  lcd.setCursor(2, 0);
  lcd.print("TEMPERATUERS");
  
  lcd.setCursor(1, 1);
  lcd.print("20504 WONHYEOK");
  
  delay(5000);
}
