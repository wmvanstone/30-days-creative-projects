# 110 - Timer

## Equipment:

HERO board, breadboard, 3-pole dip switch, 7 x 220Ω resistors, 3 x 10KΩ resistors, 7 x LEDs, jumper cables

## Instructions:
Starting with the 104 Binary Counter [circuit](..\104-Binary-Counter\solution.md) and [code](..\104-Binary-Counter\104-Binary-Counter.ino), create a countdown timer with the 6 LEDs as a countdown display, and another to flash when the countdown time has been reached. Use the third DIP switch to choose seconds or minutes, the first and second switches to choose the countdown time required. Use the reset switch on the HERO board to start the timer each time. 

Version 1: Use the [delay() function](https://www.arduino.cc/reference/en/language/functions/time/delay/) to achieve this. <br>
Version 2: Use parts of [109-Blink-without-delay.ino](..\109-Blink-Without-Delay\109-Blink-Without-Delay-v2.ino) to determine the passing of time and also blink the built in LED at a regular interval.

## Helpful Hints:
When you use the DIP switch as a binary counter, giving you 8 numbers (0 to 7), you can change the inputs read from the switches into a denary number (total) using this statement: 

int total = digitalRead(Switch3)*1 + digitalRead(Switch2)*2 + digitalRead(Switch1)*4;

You may want to use the long data type instead of an integer data type to hold the time values, which are in milliseconds.

### Solution

If you want to discover how we solved this challenge, click on the links below:

[Solution for Version 1](Solution.md) <br>
[Solution for Version 2](Solution-v2.md)