/* Project 107 - LED Matrix 
Create a simple 3x3 LED matrix display using 9 LEDs. 
Use the DIP switch to control which LEDs are on or off to display different patterns:
+ , X, H, L, diamond, horizontal lines, vertical lines. 
Cycle through the patterns when all switches are turned on.
*/

int Switch1 = A1;             // switch 3 of our DIP switch is attached to pin A1
int Switch2 = A2;             // switch 3 of our DIP switch is attached to pin A2
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

int LastState = -1;           // record of last state of dip switches

void setup()
{
  pinMode(LED1, OUTPUT);      // 9 LEDs as output
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
  pinMode(LED7, OUTPUT);
  pinMode(LED8, OUTPUT);
  pinMode(LED9, OUTPUT);
  pinMode(Switch1, INPUT);    //
  pinMode(Switch2, INPUT);    //
  pinMode(Switch3, INPUT);    // 
}

void loop(){
  int total = digitalRead(Switch3)*4+digitalRead(Switch2)*2+digitalRead(Switch1);
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