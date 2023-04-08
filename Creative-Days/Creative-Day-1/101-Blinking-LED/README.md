# 101 Blinking LED
Equipment: HERO board, breadboard, 3-pole dip switch, 1 x 220Ω resistor, 3 x 10KΩ resistors, LED, jumper cables
1.  This starts with the classic Arduino beginner project, download the Blink code from Examples | 01.Basics. 
2.  Use the breadboard and an LED on pin 13, with a protective 220R resistor, to make it blink on and off using the Blink example code. 
3.  Change to code to vary the frequency of the blink.
4.  Incorporate the dip switch on pins 9, 10 and 11, with 10KΩ pulldown resistors, to change on duration, off duration and whether the LED comes on at all.
5.  Print out the state of switches to the Serial Monitor as a 3 digit binary number.

### Helpful Hints
You may find it helpful to use the DIP switch as a binary counter, giving you 8 numbers which can be used to change the duration of the blink in this project. To change the inputs read from the switches into a denary number (total), you can use this statement: 

int total = digitalRead(Switch3)*1 + digitalRead(Switch2)*2 + digitalRead(Switch1)*4;

### Solution

If you want to discover how we solved this challenge, click [here](Solution.md)