// Project 106 - Binary LED counter, 6 LEDs in a line

int Switch1 = 2;     // Switch 1 of our DIP switch is attached to pin 2

int Sw1LastState = 0; //Set the state of Switch 1 to OFF, or LOW

int LED1 = 6;        // 1
int LED2 = 7;        // 2
int LED3 = 8;        // 3
int LED4 = 9;        // 4
int LED5 = 10;       // 5
int LED6 = 11;       // 6


void setup() {
  pinMode(LED1, OUTPUT); // 6 LEDs as outputs
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
  pinMode(Switch1, INPUT); // Switch 1 as input

  // Turn all LEDs off and set up the  Sw1LastState to be the current state of the switch
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  digitalWrite(LED6, LOW);
  Sw1LastState = digitalRead(Switch1);

  Serial.begin(9600); // This opens communication with the serial monitor
}

void loop() {
  int Sw1=digitalRead(Switch1);

  if (Sw1 != Sw1LastState) {  // The switch has changed state
    Sw1LastState = Sw1;        // Change the variable to match the current value
    int DiceRoll = random(1, 7); // Create a random number between 1 and 6, inclusive
    Serial.println(DiceRoll);
    delay(500);

    if (DiceRoll == 1) {
      digitalWrite(LED1, HIGH);
      digitalWrite(LED2, LOW);
      digitalWrite(LED3, LOW);
      digitalWrite(LED4, LOW);
      digitalWrite(LED5, LOW);
      digitalWrite(LED6, LOW);
    }
    else if (DiceRoll == 2) {
      digitalWrite(LED1, HIGH);
      digitalWrite(LED2, HIGH);
      digitalWrite(LED3, LOW);
      digitalWrite(LED4, LOW);
      digitalWrite(LED5, LOW);
      digitalWrite(LED6, LOW);
    }
    else if (DiceRoll == 3) {
      digitalWrite(LED1, HIGH);
      digitalWrite(LED2, HIGH);
      digitalWrite(LED3, HIGH);
      digitalWrite(LED4, LOW);
      digitalWrite(LED5, LOW);
      digitalWrite(LED6, LOW);
    }
    else if (DiceRoll == 4) {
      digitalWrite(LED1, HIGH);
      digitalWrite(LED2, HIGH);
      digitalWrite(LED3, HIGH);
      digitalWrite(LED4, HIGH);
      digitalWrite(LED5, LOW);
      digitalWrite(LED6, LOW);
    }
    else if (DiceRoll == 5) {
      digitalWrite(LED1, HIGH);
      digitalWrite(LED2, HIGH);
      digitalWrite(LED3, HIGH);
      digitalWrite(LED4, HIGH);
      digitalWrite(LED5, HIGH);
      digitalWrite(LED6, LOW);
    }
    else if (DiceRoll == 6) {
      digitalWrite(LED1, HIGH);
      digitalWrite(LED2, HIGH);
      digitalWrite(LED3, HIGH);
      digitalWrite(LED4, HIGH);
      digitalWrite(LED5, HIGH);
      digitalWrite(LED6, HIGH);
    }
  }  
}