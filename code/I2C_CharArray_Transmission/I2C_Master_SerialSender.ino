/* This code read characters from the user and then send it
 * using I2C communication protocol
 */
 
#include<Wire.h>
#define maxcharacters 50

void setup() {
  Wire.begin(); //initialize the I2C communication protocol
  Serial.begin(9600); //initialize the serial communication
  Serial.println("Enter what you want to send!");
}

void loop() {
  int availablebytes = Serial.available(); //the number of sent charaters or bytes 
  delay(100);
  if (availablebytes != 0){
    char data[maxcharacters] = "";
    for(int i=0;i<availablebytes;i++){
      data[i] = Serial.read();
    }
    Wire.beginTransmission(8); // starts an I2C transmission to device address 8.
    Wire.write(data); //writes the data stored in data to the I2C bus.
    Wire.endTransmission();
    delay(500);
  }
}
