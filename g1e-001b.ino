#include <LiquidCrystal.h>

LiquidCrystal lcd(8,9,4,5,6,7);

void setup() {
  lcd.begin(16, 2);
  analogWrite(10,50);
  
}

void loop() {
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("analogRead A0");
  lcd.setCursor(0,1);
  lcd.print(analogRead(0));

  delay(500);
  
}

