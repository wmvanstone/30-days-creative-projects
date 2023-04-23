# 202 - Night light with LEDs


## Equipment:

HERO board, breadboard, 1 x photoresistor, 3 x 220Ω resistors, 3 x 10KΩ resistors, 3 x LEDs, jumper cables

## Instructions:

Use the photoresistor and 3 LEDs to create a night light. Control with the DIP switch <br>
a.	Basic version which switches all LEDs on when the main light in a room goes off. Switch on using Switch 1 <br>
b.	Adapt the basic version so that the LEDs gradually switches off LEDs during the night. Switch on using Switch 2 (this supersedes Switch 1) <br>
c.	Adapt the night light to use PWM to dim all the LEDs together, rather than gradually switching them off. Switch on using Switch 3 (this supersedes Switch 2) <br>
d.	Turn all switches off to turn off the nighlight

## Helpful Hints:
- If you are going to use the same circuit layout for all steps of this challenge, you will need to use pins that are suitable for PWM (Pulse Width Modulation). The PWM capable pins with ~ signs, 3, 5, 6, 9, 10 and 11. In this project, our LEDs are connected to pins 9, 10 and 11.
- Build and test each stage of the project before progressing to the next stage. This will help you to focus on one part of the functionality and will help you to identify errors since you are working on smaller portions of the code at one time.
- In order to work out what sensor reading will be appropriate for switching your LEDs on and off in this project, you will need to set up variables to hold your maximum and minimum sensor values that correspond to the light on and off in your room. You might find it helpful to set up a lamp on your desk so that you can easily turn it on and off. You will need to print out the value of this sensor reading to the serial monitor in your loop() function, and then modify your program to include the high and low values for your situation. Put these values in the setup() function
- You will also need to decide a sensor value at which the light will turn off or on. This should be a little higher than the minium sensor value.
- You can use logic in the loop() function to switch your LEDs on or off.

### Solution

If you want to discover how we solved this challenge, click on the link below:

[Solution](Solution.md) <br>
