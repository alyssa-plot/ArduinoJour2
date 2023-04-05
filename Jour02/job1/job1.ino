#include <LiquidCrystal.h>

int rs = 12;
int en = 11;
int d4 = 5;
int d5= 4;
int d6 = 3;
int d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

unsigned long temps_debut = 0;
unsigned int temps_affichage = 0;

void setup() {
  lcd.begin(16, 2);
  lcd.print("Pouet");
  temps_debut = millis();
}

void loop() {
  temps_affichage = (millis() - temps_debut) / 1000;
  lcd.setCursor(0, 1);
  lcd.print("Temps: ");
  lcd.print(temps_affichage);
  delay(1000);
}