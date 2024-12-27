/* This code is used to recieve data via I2C communication
 * prtocol and then display the data on LCD
 */

#include <Wire.h>
#include <LiquidCrystal.h>

const int RS = 12, E = 11, DB4 = 5, DB5 = 4, DB6 = 3, DB7 = 2;
LiquidCrystal lcd(RS, E, DB4,DB5, DB6, DB7); //create lcd object

void setup() {
  lcd.begin(16, 2); //16 columns and 2 rows
  Wire.begin(8); //read from address 8 (join I2C bus)
  Wire.onReceive(receiveEvent); //interupt when recive a data  
}

void loop() {
}

void receiveEvent(int howMany) {
  lcd.clear();
  while(Wire.available()){
    char c = Wire.read(); // will receive the byte as a character
    lcd.print(c);
  }
}
