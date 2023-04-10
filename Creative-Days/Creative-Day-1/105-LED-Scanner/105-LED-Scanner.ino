/* Project 105 - LED Scanner, 
enter lighting options using the dip switch
show patterns on the LEDs
*/
int Switch1 = 2;     // Switch 1 of our DIP switch is attached to pin 9
int Switch2 = 3;     // Switch 2 of our DIP switch is attached to pin 10
int Switch3 = 4;     // Switch 3 of our DIP switch is attached to pin 11
int LED8 = 13;       // 8
int LED7 = 12;       // 7
int LED6 = 11;       // 6
int LED5 = 10;       // 5
int LED4 = 9;        // 4
int LED3 = 8;        // 3
int LED2 = 7;        // 2
int LED1 = 6;        // 1

void setup()
{
  pinMode(LED8, OUTPUT); // 8 LEDs as outputs
  pinMode(LED7, OUTPUT);
  pinMode(LED6, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED1, OUTPUT);
  pinMode(Switch1, INPUT); // 3 switches as input
  pinMode(Switch2, INPUT);
  pinMode(Switch3, INPUT);
}

void loop(){
  int Sw1=digitalRead(Switch1);
  int Sw2=digitalRead(Switch2);
  int Sw3=digitalRead(Switch3);
  if (Sw1 == HIGH) {  // scan left to right
    digitalWrite(LED1,HIGH);
    delay(100);
    digitalWrite(LED2,HIGH);
    delay(100);
    digitalWrite(LED3,HIGH);
    delay(100);
    digitalWrite(LED4,HIGH);
    digitalWrite(LED1,LOW);
    delay(100);
    digitalWrite(LED5,HIGH);
    digitalWrite(LED2,LOW);
    delay(100);
    digitalWrite(LED6,HIGH);
    digitalWrite(LED3,LOW);
    delay(100);
    digitalWrite(LED7,HIGH);
    digitalWrite(LED4,LOW);
    delay(100);
    digitalWrite(LED8,HIGH);
    digitalWrite(LED5,LOW);
    delay(100);
    digitalWrite(LED6,LOW);
    delay(100);
    digitalWrite(LED7,LOW);
    delay(100);
    digitalWrite(LED8,LOW);
    delay(100);
  }
  if (Sw2 == HIGH) {  // scan left to right
    digitalWrite(LED8,HIGH);
    delay(100);
    digitalWrite(LED7,HIGH);
    delay(100);
    digitalWrite(LED6,HIGH);
    delay(100);
    digitalWrite(LED5,HIGH);
    digitalWrite(LED8,LOW);
    delay(100);
    digitalWrite(LED4,HIGH);
    digitalWrite(LED7,LOW);
    delay(100);
    digitalWrite(LED3,HIGH);
    digitalWrite(LED6,LOW);
    delay(100);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED5,LOW);
    delay(100);
    digitalWrite(LED1,HIGH);
    digitalWrite(LED4,LOW);
    delay(100);
    digitalWrite(LED3,LOW);
    delay(100);
    digitalWrite(LED2,LOW);
    delay(100);
    digitalWrite(LED1,LOW);
    delay(100);
  }
  if (Sw3 == HIGH) {  // scan left to right
    digitalWrite(LED8,HIGH);
    digitalWrite(LED1,HIGH);
    delay(100);
    digitalWrite(LED7,HIGH);
    digitalWrite(LED2,HIGH);
    delay(100);
    digitalWrite(LED6,HIGH);
    digitalWrite(LED3,HIGH);
    digitalWrite(LED8,LOW);
    digitalWrite(LED1,LOW);
    delay(100);
    digitalWrite(LED5,HIGH);
    digitalWrite(LED4,HIGH);
    digitalWrite(LED7,LOW);
    digitalWrite(LED2,LOW);
    delay(100);
    digitalWrite(LED6,LOW);
    digitalWrite(LED3,LOW);
    delay(100);
    digitalWrite(LED5,LOW);
    digitalWrite(LED4,LOW);
    delay(100);
    digitalWrite(LED5,HIGH);
    digitalWrite(LED4,HIGH);
    delay(100);
    digitalWrite(LED6,HIGH);
    digitalWrite(LED3,HIGH);
    delay(100);
    digitalWrite(LED7,HIGH);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED5,LOW);
    digitalWrite(LED4,LOW);
    delay(100);
    digitalWrite(LED8,HIGH);
    digitalWrite(LED1,HIGH);
    digitalWrite(LED6,LOW);
    digitalWrite(LED3,LOW);
    delay(100);
    digitalWrite(LED7,LOW);
    digitalWrite(LED2,LOW);
    delay(100);
    digitalWrite(LED8,LOW);
    digitalWrite(LED1,LOW);
    delay(100);
  }
}