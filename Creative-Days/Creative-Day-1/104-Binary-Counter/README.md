# 104 Binary Counter

## Equipment:

HERO board, breadboard, 3-pole dip switch, 7 x 220Ω resistors, 3 x 10KΩ resistors, 7 x LEDs, jumper cables

## Instructions:
Use the DIP switch to increment a binary counter displayed on multiple LEDs. Each switch position can represent a binary digit, and the circuit can increment the counter as the binary count increases. Display the message as a denary value using 7 LEDs. 

## Helpful Hints:
When you use the DIP switch as a binary counter, giving you 8 numbers, you can change the inputs read from the switches into a denary number (total) using this statement: 

int total = digitalRead(Switch3)*1 + digitalRead(Switch2)*2 + digitalRead(Switch1)*4;