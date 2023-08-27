#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  notify("IoT AI/ML World");
}

void loop() {
  display("HELLO", "OOOOO");
}

void display(String line1, String line2) {
  lcd.clear();
  lcd.blink();
  lcd.setCursor(0, 0);
  lcd.print(line1);
  
  lcd.setCursor(0, 1);
  lcd.print(line2);
  
  delay(700);
}

void notify(String input) {
  lcd.clear();
  lcd.noBlink();
  lcd.setCursor(16, 1);
  
  lcd.print(input);
  for (int i = 0; i < 16 + input.length(); i++) {
    lcd.scrollDisplayLeft();
    delay(50);
  }
}
