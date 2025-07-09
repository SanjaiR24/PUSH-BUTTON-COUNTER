# PUSH-BUTTON-COUNTER

*COMPANY*: CODTECH IT SOLUTIONS

*NAME*: SANJAI R

*INTERN ID*: CT04DH8046

*DOMAIN*: EMBEDDED SYSTEMS

*DURATION*: 4 WEEKS

*MENTOR*: NEELA SANTHOSH

*TASK DESCRIPTION*
  
This task involves designing a simple embedded system that counts the number of times a push button is pressed and displays the count on a 16x2 I2C LCD using an Arduino Uno.
The system reads the digital input from a tactile push button connected to a GPIO pin. With each button press, a counter is incremented, and the new value is displayed on the LCD and optionally printed on the Serial Monitor. To avoid false triggering due to switch bounce, the ezButton library is used for effective debouncing and press detection.
This task demonstrates the use of digital inputs, I2C communication, and display interfacing in embedded systems.

*COMPONENTS USED*:
   
    Arduino(UNO)

    Push button

    10kΩ Resistor

    Breadboard and jumper wires

*WORKING PRINCIPLE*:

The push button is connected to digital pin 13 with an external pull-down resistor to ensure a LOW state when not pressed.
On button press, the pin goes HIGH. The ezButton library detects this press (on falling edge).
The press count is stored and updated in real-time on the I2C LCD display.
I2C simplifies LCD wiring using only two Arduino pins (SDA - A4, SCL - A5).

*OUTPUT*

https://github.com/user-attachments/assets/73b71c9f-7fdf-4f67-b66f-8eef0477121d
