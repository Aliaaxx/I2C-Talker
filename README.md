# I2C-Talker

This project demonstrates communication between two Arduino boards using the I2C protocol. The master Arduino sends either a character array or a string to the slave Arduino, which displays the received message on an LCD screen. The project is implemented in two main variations:
1. **Character Array Transmission**: Sends a predefined character array from the master to the slave.
2. **String Transmission**: Sends a string from the master to the slave.

## Repository Structure

```
code/
|-- I2C_CharArray_Transmission/
|   |-- I2C_Master_SerialSender.ino
|   |-- I2C_Slave_LCDDisplay.ino
|
|-- I2C_String_Transmission/
    |-- I2C_Master_SerialSender.ino
    |-- I2C_Slave_LCDDisplay.ino
```

## Circuit Overview
The circuit connects two Arduino devices using the I2C protocol. Additionally, an LCD display is used to show the received data on the slave device.
![I2C_LCD](https://github.com/user-attachments/assets/3f088662-0279-46ea-96de-0015288295f5)

