#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);

void setup()
{
  lcd.begin();
  lcd.backlight();
  lcd.setCursor(1, 0);
  lcd.print("Message");
  lcd.setCursor(1, 1);
}


void loop()
{

}
