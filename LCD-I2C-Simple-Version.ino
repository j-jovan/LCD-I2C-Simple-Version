#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);

void setup()
{
  lcd.begin();
  lcd.backlight();
  lcd.setCursor(0, 0); // First row
  lcd.print("First row");
  lcd.setCursor(0, 1); // Second row
  lcd.print("Second row");
}


void loop()
{

}
