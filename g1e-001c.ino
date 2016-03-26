#include <LiquidCrystal.h>

LiquidCrystal lcd(8,9,4,5,6,7);

void setup() {
  lcd.begin(16, 2);
  analogWrite(10,50);
  lcd.setCursor(0,0);
  lcd.print("Enter Button:");
}

byte LCD_Key () {
  int lcd_key_pr = analogRead(0); 

   
   if (lcd_key_pr > 940)  return 0;  //Button none    1023
   if (lcd_key_pr < 65)   return 1;  //Button Right   0
   if (lcd_key_pr < 219)  return 2;  //Button Up      131
   if (lcd_key_pr < 394)  return 3;  //Button Down    307
   if (lcd_key_pr < 601)  return 4;  //Button Left    481
   if (lcd_key_pr < 940)  return 5;  //Button Select  722
}


void loop() {
  lcd.setCursor(0,1);    

  switch (LCD_Key())
 {
   case 0:
     lcd.print("none  ");
     break;
   case 1:
     lcd.print("Right ");
     break;
   case 2:
     lcd.print("Up   ");
     break;
   case 3:
     lcd.print("Down    ");
     break;
   case 4:
     lcd.print("Left  ");
     break;
   case 5:
     lcd.print("Select");
     break;
 }
 
}

