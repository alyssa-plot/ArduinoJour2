#include <LiquidCrystal.h>

int rs = 12;
int en = 11;
int d4 = 5;
int d5= 4;
int d6 = 3;
int d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int i, j ; //Déclaration de i et j, variables égales à zéro
byte barre[] = { //Création du caractère de chargement
B111111,
B111111,
B111111,
B111111,
B111111,
B111111,
B111111,
B111111
};
void setup() {
lcd.begin(20, 4); //Activation de l'afficheur lcd
}
void loop() {
while(i != 100){
while(i < 100){
lcd.createChar(1, barre); //Déclaration du caractère de chargement
delay(250); //On attends 250 ms
i++ ; //i augmente de 1
lcd.setCursor(8, 1); //On place le curseur à la colonne 8, ligne 1
lcd.print(i); //On écrit la valeur de i
lcd.print("%"); //Puis le signe % (pourcent)
affichage(); //Utilisation de la fonction affichage déclarée plus bas
if(i == 100){
lcd.clear(); //Si i = 100, on efface l'écran
}
}
while(i == 100 && j < 20){
lcd.setCursor(8, 1); //On place le curseur à la colonne 8, ligne 1
lcd.print(i); //On écrit la valeur de i
lcd.print("%"); //Puis le signe % (pourcent)
lcd.setCursor(j, 2); //On place le curseur à la colonne égale à la valeur de j et à la ligne 2
lcd.write(byte(1)); //On affiche le caractère de chargement
j++ ; //j augmente de 1
}
}
}
void affichage(){ //Fonction permettant de gérer l'affichage du caractère de chargement. Je ne la détaillerai pas ici
switch(i){
case 5 :
lcd.setCursor(0, 2);
lcd.write(byte(1));
break ;
case 10 :
lcd.setCursor(1, 2);
lcd.write(byte(1));
break ;
case 15 :
lcd.setCursor(2, 2);
lcd.write(byte(1));
break ;
case 20 :
lcd.setCursor(3, 2);
lcd.write(byte(1));
break ;
case 25 :
lcd.setCursor(4, 2);
lcd.write(byte(1));
break ;
case 30 :
lcd.setCursor(5, 2);
lcd.write(byte(1));
break ;
case 35 :
lcd.setCursor(6, 2);
lcd.write(byte(1));
break ;
case 40 :
lcd.setCursor(7, 2);
lcd.write(byte(1));
break ;
case 45 :
lcd.setCursor(8, 2);
lcd.write(byte(1));
break ;
case 50 :
lcd.setCursor(9, 2);
lcd.write(byte(1));
break ;
case 55 :
lcd.setCursor(10, 2);
lcd.write(byte(1));
break ;
case 60 :
lcd.setCursor(11, 2);
lcd.write(byte(1));
break ;
case 65 :
lcd.setCursor(12, 2);
lcd.write(byte(1));
break ;
case 70 :
lcd.setCursor(13, 2);
lcd.write(byte(1));
break ;
case 75 :
lcd.setCursor(14, 2);
lcd.write(byte(1));
break ;
case 80 :
lcd.setCursor(15, 2);
lcd.write(byte(1));
break ;
case 85 :
lcd.setCursor(16, 2);
lcd.write(byte(1));
break ;
case 90 :
lcd.setCursor(17, 2);
lcd.write(byte(1));
break ;
case 95 :
lcd.setCursor(18, 2);
lcd.write(byte(1));
break ;
}
}