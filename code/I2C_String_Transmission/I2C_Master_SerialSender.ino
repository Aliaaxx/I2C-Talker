#include <Wire.h>

void setup() {
  Wire.begin(); // i2c bus as master
  Serial.begin(9600); // serial communication started
}

void loop() {
  if(Serial.available() > 0) {
    String message = Serial.readString();
    Wire.beginTransmission(9);
    Wire.write(message.c_str());
    Wire.endTransmission();
    Serial.println("Msg is transmitted to slave Arduino: " + message);
  }
}
