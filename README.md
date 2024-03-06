# IR_sensor_IoT

This code is written for an ESP32 microcontroller using the Arduino IDE. It utilizes an infrared (IR) sensor connected to pin 7 and an LED connected to pin 6. The code continuously reads the state of the IR sensor and turns on the LED if the sensor detects an object within its range.

### Hardware Setup
1. Connect an infrared (IR) sensor to pin 7 of the ESP32 microcontroller.
2. Connect an LED to pin 6 of the ESP32 microcontroller.

### Code Explanation
- The `setup()` function initializes the pin modes for the IR sensor and the LED.
- Inside the `loop()` function, the code reads the state of the IR sensor using `digitalRead(ir_sensor)`.
- If the sensor detects an object (data == 1), the LED is turned on by setting its pin to HIGH.
- If no object is detected (data == 0), the LED is turned off by setting its pin to LOW.
- The state of the IR sensor (data) is printed to the serial monitor for debugging purposes.

### Usage
1. Connect the ESP32 microcontroller to your computer.
2. Open the Arduino IDE.
3. Copy the provided code into a new sketch.
4. Upload the sketch to the ESP32 board.
5. Open the serial monitor to view the state of the IR sensor.

### Additional Notes
- Ensure that the IR sensor is properly calibrated and positioned to detect objects within its range.
- Adjust the code as needed for specific project requirements, such as adding additional sensors or controlling other components.

### Compatibility
- This code is designed for the ESP32 microcontroller using the Arduino IDE.
- Ensure you have the necessary libraries installed for the ESP32 board in the Arduino IDE.



 
