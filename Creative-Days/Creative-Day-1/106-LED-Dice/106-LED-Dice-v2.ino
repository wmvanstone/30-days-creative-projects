/* Project 104 - Binary LED counter, 
enter lighting options using the dip switch
show patterns on the LEDs
*/
int Switch3 = 6;              // switch 3 of our DIP switch is attached to pin 11
int LED7 = 13;                // 7
int LED6 = 12;                // 6
int LED5 = 11;                // 5
int LED4 = 10;                // 4
int LED3 = 9;                 // 3
int LED2 = 8;                 // 2
int LED1 = 7;                 // 1
int Sw3LastState = -1;        // previous state of Switch 3
int Sw3 = -1;                 // current state of Switch 3

void setup()
{
  pinMode(LED7, OUTPUT);      // 7 LEDs as outpute
  pinMode(LED6, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED1, OUTPUT);
  pinMode(Switch3, INPUT);    // 3 switch triggers dice roll
  Serial.begin(9600);
  Sw3LastState = digitalRead(Switch3);
  randomSeed(analogRead(A0)); // resets random number generator
                              // using random noise from pin A0
}

void loop(){
  Sw3=digitalRead(Switch3);
  if (Sw3 != Sw3LastState) {  // roll dice
    Sw3LastState = Sw3; 
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,LOW);
    digitalWrite(LED3,LOW);
    digitalWrite(LED4,LOW);
    digitalWrite(LED5,LOW);
    digitalWrite(LED6,LOW);
    digitalWrite(LED7,LOW);
    delay(500);               // flicker so even the same roll shows
    int DiceRoll = random(1,7);
    Serial.println(DiceRoll);
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