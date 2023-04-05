#include <LiquidCrystal.h>

int rs = 12;
int en = 11;
int d4 = 5;
int d5= 4;
int d6 = 3;
int d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

byte smiley[8] = {
    B00000,
    B10001,
    B00000,
    B00000,
    B10001,
    B01110,
    B00000,
};

void setup()
{
    lcd.createChar(0, smiley);
    lcd.begin(16, 2);
    lcd.write((uint8_t) 0);
}

void loop()
{
  // code à tourner infiniment
}