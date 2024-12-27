#include <Wire.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // the lcd with pins initialized

void setup() {
  Serial.begin(9600);
  Wire.begin(9); // I2C bus as slave with address 9
  Wire.onReceive(receivemsg); // the receivemsg function
  lcd.begin(16, 2); // Initialize LCD
}

void loop(){}

void receivemsg(int i ) {
  String receivedMessage = "";
  while (Wire.available()) {
    char c = Wire.read();
    receivedMessage += c;
    Serial.println(c);
  }
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(receivedMessage);
}
