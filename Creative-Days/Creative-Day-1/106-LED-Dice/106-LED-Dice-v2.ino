/* Project 104 - Binary LED counter, enter lighting options using the DIP switch
to show patterns on the LEDs
*/

// These variables are used to show how the devices are connected to the HERO pins
int Switch3 = 6;              // switch 3 of our DIP switch is attached to pin 11
int LED1 = 7;                 // 1
int LED2 = 8;                 // 2
int LED3 = 9;                 // 3
int LED4 = 10;                // 4
int LED5 = 11;                // 5
int LED6 = 12;                // 6
int LED7 = 13;                // 7

// These variables need to be set before the loop() function is run
int Sw1LastState = 0;         // Set the state of Switch 1 to OFF, or LOW
int Sw3LastState = -1;        // previous state of Switch 3
int Sw3 = -1;                 // current state of Switch 3

void setup()
{
  pinMode(Switch3, INPUT);    // Switch 3 triggers dice roll
  pinMode(LED1, OUTPUT);      // 7 LEDs as outputs
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
  pinMode(LED7, OUTPUT);      
  
  // Start the serial monitor so we can tell what number is being generated (this is optional)
  Serial.begin(9600);

  // Determine the state of the switch before we begin the loop() function
  Sw3LastState = digitalRead(Switch3);

  // reset the random number generator using random noise from pin A0
  randomSeed(analogRead(A0)); 
}

void loop(){
  Sw3=digitalRead(Switch3);
  if (Sw3 != Sw3LastState) {  // roll dice
    Sw3LastState = Sw3; 

    // flicker the LEDs off so even the same roll shows
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,LOW);
    digitalWrite(LED3,LOW);
    digitalWrite(LED4,LOW);
    digitalWrite(LED5,LOW);
    digitalWrite(LED6,LOW);
    digitalWrite(LED7,LOW);
    delay(500);

    // This variable is only used in this function, so can be defined here for the first time
    int DiceRoll = random(1,7);

    Serial.println(DiceRoll); // Print DiceRoll to the serial monitor (optional)

    /* Light up the LEDs in the correct formation for each dice roll. This uses the logical OR operator ||.
    See https://www.arduino.cc/reference/en/language/structure/boolean-operators/logicalor/ for more details */

    if (DiceRoll == 4 || DiceRoll == 5 || DiceRoll == 6){ 
      digitalWrite(LED1,HIGH);
      digitalWrite(LED7,HIGH);
    }
    if (DiceRoll == 2 || DiceRoll == 3 || DiceRoll == 4 || DiceRoll == 5 || DiceRoll == 6){
      digitalWrite(LED2,HIGH);
      digitalWrite(LED6,HIGH);
    }    
    if (DiceRoll == 1 || DiceRoll == 3 || DiceRoll == 5){
      digitalWrite(LED4,HIGH);
    }
    if (DiceRoll == 6){
      digitalWrite(LED3,HIGH);
      digitalWrite(LED5,HIGH);
    }
  }
}