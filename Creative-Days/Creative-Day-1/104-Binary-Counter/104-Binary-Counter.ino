/* Project 104 - Binary LED counter, 
enter the binary value using a DIP Switch, between 000 and 111
write out the denary on the LEDS
*/

// These variables are used to show how the devices are connected to the HERO pins
int Switch1 = 2;     // Switch 1 of our DIP switch is attached to pin 2
int Switch2 = 3;     // Switch 2 of our DIP switch is attached to pin 3
int Switch3 = 4;     // Switch 3 of our DIP switch is attached to pin 4
int LED1 = 6;        // 1
int LED2 = 7;        // 2
int LED3 = 8;        // 3
int LED4 = 9;        // 4
int LED5 = 10;       // 5
int LED6 = 11;       // 6
int LED7 = 12;       // 7

void setup()
{
  pinMode(Switch1, INPUT); // 3 switches as input
  pinMode(Switch2, INPUT);
  pinMode(Switch3, INPUT);
  pinMode(LED1, OUTPUT); // 7 LEDs as outputs
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
  pinMode(LED7, OUTPUT); 
}

void loop(){

  // these variables are only used in this function, so do not need to be defined at the start of this program
  int Sw1=digitalRead(Switch1);
  int Sw2=digitalRead(Switch2);
  int Sw3=digitalRead(Switch3);

  /* The formula will calculate denary value from the binary value of the DIP switches. 
  See https://www.bbc.co.uk/bitesize/guides/z6qqmsg/revision/2 if you want to find out more */
  int total=Sw1*1+Sw2*2+Sw3*4;

  // switch on LEDs
  if (total > 0) {
    digitalWrite(LED1,HIGH);
  } else {
    digitalWrite(LED1,LOW);
  }
  if (total > 1) {
    digitalWrite(LED2,HIGH);
  } else {
    digitalWrite(LED2,LOW);
  }
  if (total > 2) {
    digitalWrite(LED3,HIGH);
  } else {
    digitalWrite(LED3,LOW);
  }
  if (total > 3) {
    digitalWrite(LED4,HIGH);
  } else {
    digitalWrite(LED4,LOW);
  }
  if (total > 4) {
    digitalWrite(LED5,HIGH);
  } else {
    digitalWrite(LED5,LOW);
  }
  if (total > 5) {
    digitalWrite(LED6,HIGH);
  } else {
    digitalWrite(LED6,LOW);
  }
  if (total > 6) {
    digitalWrite(LED7,HIGH);
  } else {
    digitalWrite(LED7,LOW);
  }
}