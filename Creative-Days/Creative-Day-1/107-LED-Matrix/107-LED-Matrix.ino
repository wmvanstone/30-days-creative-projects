/* Project 107 - LED Matrix 
Create a simple 3x3 LED matrix display using 9 LEDs. 
Use the DIP switch to control which LEDs are on or off to display different patterns:
+ , X, H, L, diamond, horizontal lines, vertical lines. 
Cycle through the patterns when all switches are turned on.
*/

// These variables are used to show how the devices are connected to the HERO pins
int Switch1 = A1;             // switch 1 of our DIP switch is attached to pin A1
int Switch2 = A2;             // switch 2 of our DIP switch is attached to pin A2
int Switch3 = A3;             // switch 3 of our DIP switch is attached to pin A3
int LED1 = 6;                 // 1
int LED2 = 7;                 // 2
int LED3 = 5;                 // 3
int LED4 = 9;                 // 4
int LED5 = 10;                // 5
int LED6 = 8;                 // 6
int LED7 = 12;                // 7
int LED8 = 13;                // 8
int LED9 = 11;                // 9

/* This variable needs to be set to a value that is different from the current value
on the DIP switch so it will detect a difference in the loop() function, whether it
is ON (1) ir OFF (0) */
int LastState = -1;           // record of last state of DIP switches

void setup()
{
  pinMode(Switch1, INPUT);    // 3 switches of the DIP switch as inputs
  pinMode(Switch2, INPUT);
  pinMode(Switch3, INPUT);  
  pinMode(LED1, OUTPUT);      // 9 LEDs as output
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
  pinMode(LED7, OUTPUT);
  pinMode(LED8, OUTPUT);
  pinMode(LED9, OUTPUT);
}

void loop(){
  
  /* This variable is only needed inside this loop() function so can be defined here.
  The formula will calculate denary value from the binary value of the DIP switches. 
  See https://www.bbc.co.uk/bitesize/guides/z6qqmsg/revision/2 if you want to find out more*/
  int total = digitalRead(Switch3)*4+digitalRead(Switch2)*2+digitalRead(Switch1);

  /* Light up the LEDs in the correct formation for each option. This uses the logical OR operator ||.
  See https://www.arduino.cc/reference/en/language/structure/boolean-operators/logicalor/ for more details */

  if (total != LastState) {  // change LED matrix display
    if (total == 0 || total == 7){ // 0
      digitalWrite(LED1,HIGH);
      digitalWrite(LED2,HIGH);
      digitalWrite(LED3,HIGH);
      digitalWrite(LED4,HIGH);
      digitalWrite(LED5,LOW);
      digitalWrite(LED6,HIGH);
      digitalWrite(LED7,HIGH);
      digitalWrite(LED8,HIGH);
      digitalWrite(LED9,HIGH);
      delay(1000);
    }
    if (total == 1 || total == 7){ // +
      digitalWrite(LED1,LOW);
      digitalWrite(LED2,HIGH);
      digitalWrite(LED3,LOW);
      digitalWrite(LED4,HIGH);
      digitalWrite(LED5,HIGH);
      digitalWrite(LED6,HIGH);
      digitalWrite(LED7,LOW);
      digitalWrite(LED8,HIGH);
      digitalWrite(LED9,LOW);
      delay(1000);
    }    
    if (total == 2 || total == 7){ // X
      digitalWrite(LED1,HIGH);
      digitalWrite(LED2,LOW);
      digitalWrite(LED3,HIGH);
      digitalWrite(LED4,LOW);
      digitalWrite(LED5,HIGH);
      digitalWrite(LED6,LOW);
      digitalWrite(LED7,HIGH);
      digitalWrite(LED8,LOW);
      digitalWrite(LED9,HIGH);
      delay(1000);
    }
    if (total == 3 || total == 7){ // H
      digitalWrite(LED1,HIGH);
      digitalWrite(LED2,LOW);
      digitalWrite(LED3,HIGH);
      digitalWrite(LED4,HIGH);
      digitalWrite(LED5,HIGH);
      digitalWrite(LED6,HIGH);
      digitalWrite(LED7,HIGH);
      digitalWrite(LED8,LOW);
      digitalWrite(LED9,HIGH);
      delay(1000);
    }
    if (total == 4 || total == 7){ // L
      digitalWrite(LED1,HIGH);
      digitalWrite(LED2,HIGH);
      digitalWrite(LED3,HIGH);
      digitalWrite(LED4,LOW);
      digitalWrite(LED5,LOW);
      digitalWrite(LED6,HIGH);
      digitalWrite(LED7,LOW);
      digitalWrite(LED8,LOW);
      digitalWrite(LED9,HIGH); 
      delay(1000);
    }
    if (total == 5 || total == 7){ // Diamond
      digitalWrite(LED1,LOW);
      digitalWrite(LED2,HIGH);
      digitalWrite(LED3,LOW);
      digitalWrite(LED4,HIGH);
      digitalWrite(LED5,LOW);
      digitalWrite(LED6,HIGH);
      digitalWrite(LED7,LOW);
      digitalWrite(LED8,HIGH);
      digitalWrite(LED9,LOW);
      delay(1000);
    }
    if (total == 6 || total == 7){ // Horizontal lines
      digitalWrite(LED1,HIGH);
      digitalWrite(LED2,HIGH);
      digitalWrite(LED3,HIGH);
      digitalWrite(LED4,LOW);
      digitalWrite(LED5,LOW);
      digitalWrite(LED6,LOW);
      digitalWrite(LED7,HIGH);
      digitalWrite(LED8,HIGH);
      digitalWrite(LED9,HIGH);
      delay(1000); 
    }
    if (total == 7){ // Vertical Lines
      digitalWrite(LED1,HIGH);
      digitalWrite(LED2,LOW);
      digitalWrite(LED3,HIGH);
      digitalWrite(LED4,HIGH);
      digitalWrite(LED5,LOW);
      digitalWrite(LED6,HIGH);
      digitalWrite(LED7,HIGH);
      digitalWrite(LED8,LOW);
      digitalWrite(LED9,HIGH);
      delay(1000);
    }
  }
}