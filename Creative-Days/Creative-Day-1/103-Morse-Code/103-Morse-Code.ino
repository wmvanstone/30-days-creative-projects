/* Project 103 - Morse Code Based on the built-in LED control example code, 
this now incorporates a DIP Switch to control the messages,
1 = SOS, 2 = TTT, 3 = HELP, which each play in order if they are all on
*/
int Switch1 = 9;      // Switch 1 of our DIP switch is attached to pin 9
int Switch2 = 10;     // Switch 2 of our DIP switch is attached to pin 10
int Switch3 = 11;     // Switch 3 of our DIP switch is attached to pin 11
int LED = 13;         // Flashing LED on pin 13
int dotlength = 200;  // length of a dot in milli seconds, the time unit

void setup()
{
  pinMode(LED, OUTPUT); // 5 LEDs as outputs
  pinMode(Switch1, INPUT); // 3 switches as input
  pinMode(Switch2, INPUT);
  pinMode(Switch3, INPUT);
}

void loop(){
  int Sw1=digitalRead(Switch1);
  int Sw2=digitalRead(Switch2);
  int Sw3=digitalRead(Switch3);
  // SOS message
  if (Sw1 == HIGH) {   // .../---/... = SOS
    // S
    // dot
    digitalWrite(LED,HIGH);
    delay(dotlength);
    digitalWrite(LED,LOW);
    delay(dotlength);  // pause between dots and dashes
    // dot
    digitalWrite(LED,HIGH);
    delay(dotlength);
    digitalWrite(LED,LOW);
    delay(dotlength);  // pause between dots and dashes
    // dot
    digitalWrite(LED,HIGH);
    delay(dotlength);
    digitalWrite(LED,LOW);
    delay(dotlength*3); // pause between letters
    // O
    // dash
    digitalWrite(LED,HIGH);
    delay(dotlength*3);
    digitalWrite(LED,LOW);
    delay(dotlength);  // pause between dots and dashes
    // dash
    digitalWrite(LED,HIGH);
    delay(dotlength*3);
    digitalWrite(LED,LOW);
    delay(dotlength);  // pause between dots and dashes      
    // dash
    digitalWrite(LED,HIGH);
    delay(dotlength*3);
    digitalWrite(LED,LOW);
    delay(dotlength*3); // pause between letters
  // S
  // dot
    digitalWrite(LED,HIGH);
    delay(dotlength);
    digitalWrite(LED,LOW);
    delay(dotlength);  // pause between dots and dashes
    // dot
    digitalWrite(LED,HIGH);
    delay(dotlength);
    digitalWrite(LED,LOW);
    delay(dotlength);  // pause between dots and dashes
    // dot
    digitalWrite(LED,HIGH);
    delay(dotlength);
    digitalWrite(LED,LOW);
    delay(dotlength*6); // pause for end of word    
  }
  // TTT message
  if (Sw2 == HIGH) {    // TTT distress message -/-/-
    // T
    // dash
    digitalWrite(LED,HIGH);
    delay(dotlength*3);
    digitalWrite(LED,LOW);
    delay(dotlength*3);  // pause between letters
    // T
    // dash
    digitalWrite(LED,HIGH);
    delay(dotlength*3);
    digitalWrite(LED,LOW);
    delay(dotlength*3);  // pause between letters     
    // T
    // dash
    digitalWrite(LED,HIGH);
    delay(dotlength*3);
    digitalWrite(LED,LOW);
    delay(dotlength*6);  // pause between words
  }
  // HELP Message
  if (Sw3 == HIGH) {     // HELP is ...././.-../.--.
    // H
    // dot
    digitalWrite(LED,HIGH);
    delay(dotlength);
    digitalWrite(LED,LOW);
    delay(dotlength);  // pause between dots and dashes
    // dot
    digitalWrite(LED,HIGH);
    delay(dotlength);
    digitalWrite(LED,LOW);
    delay(dotlength);  // pause between dots and dashes
    // dot
    digitalWrite(LED,HIGH);
    delay(dotlength);
    digitalWrite(LED,LOW);
    delay(dotlength);  // pause between dots and dashes
    // dot
    digitalWrite(LED,HIGH);
    delay(dotlength);
    digitalWrite(LED,LOW);
    delay(dotlength*3); // pause between letters
    // E
    // dot
    digitalWrite(LED,HIGH);
    delay(dotlength);
    digitalWrite(LED,LOW);
    delay(dotlength*3); // pause between letters
    // L
    // dot
    digitalWrite(LED,HIGH);
    delay(dotlength);
    digitalWrite(LED,LOW);
    delay(dotlength);  // pause between dots and dashes
    // dash
    digitalWrite(LED,HIGH);
    delay(dotlength*3);
    digitalWrite(LED,LOW);
    delay(dotlength);  // pause between dots and dashes
    // dot
    digitalWrite(LED,HIGH);
    delay(dotlength);
    digitalWrite(LED,LOW);
    delay(dotlength);  // pause between dots and dashes
    // dot
    digitalWrite(LED,HIGH);
    delay(dotlength);
    digitalWrite(LED,LOW);
    delay(dotlength*3); // pause between letters   
    // P 
    // dot
    digitalWrite(LED,HIGH);
    delay(dotlength);
    digitalWrite(LED,LOW);
    delay(dotlength);  // pause between dots and dashes
    // dash
    digitalWrite(LED,HIGH);
    delay(dotlength*3);
    digitalWrite(LED,LOW);
    delay(dotlength);  // pause between dots and dashes      
    // dash
    digitalWrite(LED,HIGH);
    delay(dotlength*3);
    digitalWrite(LED,LOW);
    delay(dotlength);  // pause between dots and dashes
    // dot
    digitalWrite(LED,HIGH);
    delay(dotlength);
    digitalWrite(LED,LOW);
    delay(dotlength*6); // pause for end of word 
  } 
}