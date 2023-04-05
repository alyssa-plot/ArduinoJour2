#include <LiquidCrystal.h>

int rs = 12;
int en = 11;
int d4 = 5;
int d5= 4;
int d6 = 3;
int d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int sec = 00;
int min = 00;
int hr  = 00;
int pot =  0;
const byte potentiometre = A0;

void attente() {
  for (int f = 3; f >= 1; f--)
  {
    lcd.setCursor(14, 1);
    lcd.print (f);
    delay(1000) ;
  }
}
void setup()
{
  lcd.begin(16, 2);
  lcd.setCursor(2, 0);
  lcd.print("CHRONOMETRE");
  lcd.setCursor(0, 1);
  lcd.print ("commence dans ");
  attente();
  lcd.setCursor(0, 1);
  lcd.print("                 ");
}

void loop()
{
  pot = analogRead(potentiometre);
  if (pot < 100)
  {
    lcd.setCursor(2, 0);
    lcd.print("CHRONOMETRE");
    lcd.setCursor(0, 1);
  }
  else
  {
    if ((pot >= 100) && (pot <= 950))
    {
      comptage();
    }
    else
    {
    }
  }
}
void comptage()
{
  sec++;
  delay(1000);
  if (sec == 60)
  {
    sec = 00;
    min = min + 1;
  }
  else
  {
    if (min == 60)
    {
      min = 00;
      hr = hr + 1;
    }
  }
  //colonne, ligne
  lcd.setCursor(0, 1);
  if (hr < 10) {
    lcd.print(" ");
  }
  lcd.print(hr);
  lcd.setCursor(2, 1);
  lcd.print("h  ");

  lcd.setCursor(4, 1);
  if (min < 10) {
    lcd.print(" ");
  }
  lcd.print(min);
  lcd.setCursor(6, 1);
  lcd.print("min ");

  lcd.setCursor(10, 1);
  if (sec < 10) {
    lcd.print(" ");
  }
  lcd.print(sec);
  lcd.setCursor(12, 1);
  lcd.print("sec ");
}