#include <LiquidCrystal.h>

#define back 9
#define front 10

int pos = 6;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // RS, E, D4, D5, D6, D7
byte char1[] = {
  B00000,
  B00000,
  B00111,
  B01111,
  B11111,
  B11111,
  B11111,
  B11111
};
byte char2[] = {
  B11111,
  B11111,
  B11111,
  B11111,
  B01111,
  B00111,
  B00000,
  B00000
};
byte char3[] = {
  B11110,
  B11110,
  B11110,
  B11111,
  B11111,
  B11111,
  B11111,
  B00000
};

byte char4[] = {
  B00000,
  B11111,
  B11111,
  B11111,
  B11111,
  B11110,
  B11110,
  B11110
};
byte char5[] = {
  B00000,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B00111
};

byte char6[] = {
  B00111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B00000
};
byte char7[] = {
  B00000,
  B00000,
  B11100,
  B11110,
  B11111,
  B11111,
  B11111,
  B11111
};

byte char8[] = {
  B11111,
  B11111,
  B11111,
  B11111,
  B11110,
  B11100,
  B00000,
  B00000
};

void setup() {
  lcd.begin(16, 2);
  lcd.createChar(1, char1);
  lcd.createChar(2, char2);
  lcd.createChar(3, char3);
  lcd.createChar(4, char4);
  lcd.createChar(5, char5);
  lcd.createChar(6, char6);
  lcd.createChar(7, char7);
  lcd.createChar(8, char8);
  lcd.setCursor(0,0);
  lcd.write(1);
  lcd.setCursor(0,1);
  lcd.write(2);
  lcd.write(3);
  lcd.setCursor(1,0);
  lcd.write(4);
  lcd.write(5);
  lcd.setCursor(2,1);
  lcd.write(6);
  lcd.setCursor(3,0);
  lcd.write(7);
  lcd.setCursor(3,1);
  lcd.write(8);
  lcd.home();
}

void loop() { 
}
