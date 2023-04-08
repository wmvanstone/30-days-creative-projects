# 102 Traffic Light

## Equipment: 

HERO board, breadboard, 3-pole dip switch, 5 x 220Ω resistors, 3 x 10KΩ resistors, 2 x red LEDs, 1 x yellow LED, 2 x green LEDs, jumper cables

## Instructions:

1. Use three LEDs to make a simple traffic light. The cycle of lights should be:
    1. Green on, delay, then off
    2. Amber, flashing then off
    3. Red on, delay, then off
    4. Amber on, delay, then off

2. Use the first switch of the DIP switch to control the speed of the cycle of the lights - Switch off = fast cycle, Switch on = slower cycle (delay is doubled). 

3. Use the second switch of the DIP switch to turn the traffic lights on or off. The lights should turn off after a completed cycle and not turn back on until the second switch is turned on.

4. Use the third switch to include the pedestrian crossing lights into the cycle. The cycle of the lights should now be:
    1. Green on, delay, then off. Walk (green LED) off, Dont_Walk (red LED) on.
    2. Amber, flashing then off
    3. Red on, Dont_Walk off, Walk flashes on and off, then Red off, Dont_Walk on.
    4. Amber on, delay, then off 

### Solution

If you want to discover how we solved this challenge, click [here](Solution)