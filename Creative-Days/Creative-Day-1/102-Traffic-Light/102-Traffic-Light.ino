/* Project 102 - Traffic Light. Based on the built-in LED control example code, 
this now incorporates a DIP Switch to control the pedestrian crossing,
to control whether the system runs and the delay time
*/

// These variables are used to show how the devices are connected to the HERO pins
int Walk = 6;   // Pedestrian go on pin 6
int Dont_Walk = 7; // Pedestrian stop on pin 7
int Switch1 = 8;  // Switch 1 of our DIP switch is attached to pin 8
int Switch2 = 9;  // Switch 2 of our DIP switch is attached to pin 9
int Switch3 = 10; // Switch 3 of our DIP switch is attached to pin 10
int Green = 11;   // Green traffic light on pin 11
int Amber = 12;   // Amber traffic light on pin 12
int Red = 13;     // Red traffic light on pin 13

void setup()
{
  // 3 switches as input
  pinMode(Switch1, INPUT); 
  pinMode(Switch2, INPUT);
  pinMode(Switch3, INPUT);
  
  // 5 LEDs as outputs
  pinMode(Walk, OUTPUT);
  pinMode(Dont_Walk, OUTPUT);
  pinMode(Green, OUTPUT);
  pinMode(Amber, OUTPUT);
  pinMode(Red, OUTPUT);
}

void loop(){

  // These variables are only used in this loop() function so can be defined here
  int Sw1=digitalRead(Switch1);
  int Sw2=digitalRead(Switch2);
  int Sw3=digitalRead(Switch3);
  int time = 1; // multiplier to change duration of delays

  // Cycle traffic lights
  // Set delays
  if (Sw1 == HIGH) {
    time = 2;  // switch 1 doubles the delay throughout the code
  }
  // Switch the lights on or off
  if (Sw2 == HIGH) {          // switch 2 controls whether the traffic light system runs at all
    digitalWrite(Red,HIGH);
    digitalWrite(Dont_Walk,HIGH);
    delay(100 * time); 
    // Operate the pedestrian crossing
    if (Sw3 == HIGH){         // switch 3 determines whether the pedestrian crossing runs
      digitalWrite(Walk,HIGH);   // switch on green crossing light
      digitalWrite(Dont_Walk,LOW);  // switch off red crossing light
      delay(1000 * time);
      // flash green light
      digitalWrite(Walk,LOW);
      delay(100 * time);
      digitalWrite(Walk,HIGH);
      delay(100 * time);
      digitalWrite(Walk,LOW);
      delay(100 * time);
      digitalWrite(Walk,HIGH);
      delay(100 * time);
      // end flash of pedestrian crossing light
      digitalWrite(Dont_Walk,HIGH);
      digitalWrite(Walk,LOW);
      // End of pedestrian crossing code
      delay(100 * time);
    } else {
      delay(1000 * time);
    }
    digitalWrite(Amber,HIGH);
    digitalWrite(Red, LOW);
    delay(1000 * time);
    digitalWrite(Green,HIGH);
    digitalWrite(Amber,LOW);
    delay(1000 * time);
    digitalWrite(Amber,HIGH);
    digitalWrite(Green,LOW);
    // flash amber light
    digitalWrite(Amber,LOW);
    delay(100 * time);
    digitalWrite(Amber,HIGH);
    delay(100 * time);
    digitalWrite(Amber,LOW);
    delay(100 * time);
    digitalWrite(Amber,HIGH);
    delay(100 * time);    
    // end flash of amber light
    digitalWrite(Red, HIGH);
    digitalWrite(Amber,LOW);
  } else { // switch off the lights if switch 2 is switched off
    digitalWrite(Red,LOW);
    digitalWrite(Dont_Walk,LOW);
  }
}