#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("<Eng. Software>");
  lcd.setCursor(5, 1);
  lcd.print("<UEPA>");
  delay(5000);

  lcd.clear();
}

void loop() {
  lcd.setCursor(4, 0);
  lcd.print("<Hello");
  lcd.setCursor(5, 1);
  lcd.print("World>");
  }
