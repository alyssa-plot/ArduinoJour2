#include <LiquidCrystal.h>
#include <TimeLib.h>

int rs = 12;
int en = 11;
int d4 = 5;
int d5= 4;
int d6 = 3;
int d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  lcd.begin(16, 2);
}

void loop() {
  lcd.setCursor(0, 0);
  lcd.print("Heure:");

  int heures = hour();
  int minutes = minute();
  int secondes = second();

  lcd.setCursor(0, 1);
  if (heures < 10) {
    lcd.print("0");
  }
  lcd.print(heures);
  lcd.print(":");
  if (minutes < 10) {
    lcd.print("0");
  }
  lcd.print(minutes);
  lcd.print(":");
  if (secondes < 10) {
    lcd.print("0");
  }
  lcd.print(secondes);

  delay(1000);
}
