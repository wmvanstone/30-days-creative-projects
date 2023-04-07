/* Project 102 - Traffic Light. Based on the built-in LED control example code, 
this now incorporates a DIP Switch to control the pedestrian crossing,
to control whether the system runs and the delay time
*/
int Switch1 = 8;  // Switch 1 of our DIP switch is attached to pin 8
int Switch2 = 9;  // Switch 2 of our DIP switch is attached to pin 9
int Switch3 = 10; // Switch 3 of our DIP switch is attached to pin 10
int Red = 13;     // Red traffic light on pin 13
int Amber = 12;   // Amber traffic light on pin 12
int Green = 11;   // Green traffic light on pin 11
int Ped_Stop = 7; // Pedestrian stop on pin 7
int Ped_Go = 6;   // Pedestrian go on pin 6

void setup()
{
  pinMode(Red, OUTPUT); // 5 LEDs as outputs
  pinMode(Amber, OUTPUT);
  pinMode(Green, OUTPUT);
  pinMode(Ped_Stop, OUTPUT);
  pinMode(Ped_Go, OUTPUT);
  pinMode(Switch1, INPUT); // Set these switches as input
  pinMode(Switch2, INPUT);
  pinMode(Switch3, INPUT);
}

void loop(){
  int Sw1=digitalRead(Switch1);
  int Sw2=digitalRead(Switch2);
  int Sw3=digitalRead(Switch3);
  int time = 1; // multiplier to change duration of delays
  // Cycle traffic lights - set delays
  if (Sw1 == HIGH) {
    time = 2;  // switch 1 doubles the delay throughout the code
  }
  // Switch the lights on or off
  if (Sw2 == HIGH) {          // switch 2 controls whether the traffic light system runs at all
    digitalWrite(Red,HIGH);
    digitalWrite(Ped_Stop,HIGH);
    // Operate the pedestrian crossing
    if (Sw3 == HIGH){         // switch 3 determines whether the pedestrian crossing runs
      digitalWrite(Ped_Go,HIGH);   // switch on green crossing light
      digitalWrite(Ped_Stop,LOW);  // switch off red crossing light
      delay(1000 * time);
      // flash green light
      digitalWrite(Ped_Go,LOW);
      delay(100 * time);
      digitalWrite(Ped_Go,HIGH);
      delay(100 * time);
      digitalWrite(Ped_Go,LOW);
      delay(100 * time);
      digitalWrite(Ped_Go,HIGH);
      delay(100 * time);
      digitalWrite(Ped_Go,LOW);
      delay(100 * time);
      digitalWrite(Ped_Go,HIGH);
      delay(100 * time);
      // end flash of pedestrian crossing light
      digitalWrite(Ped_Stop,HIGH);
      digitalWrite(Ped_Go,LOW);
      delay(200 * time);
      // End of pedestrian crossing code
    } else {
      delay(1000 * time);
    }
    digitalWrite(Amber,HIGH);
    delay(100 * time);
    digitalWrite(Red, LOW);
    delay(500 * time);
    digitalWrite(Green,HIGH);
    delay(100 * time);
    digitalWrite(Amber,LOW);
    delay(1000 * time);
    digitalWrite(Amber,HIGH);
    delay(100 * time);
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
    digitalWrite(Amber,LOW);
    delay(100 * time);
    digitalWrite(Amber,HIGH);
    delay(100 * time);    
    // end flash of amber light
    digitalWrite(Red, HIGH);
    delay(100 * time);
    digitalWrite(Amber,LOW);
  } else { // switch off the lights if switch 2 is switched off
    digitalWrite(Red,LOW);
    digitalWrite(Ped_Stop,LOW);
  }
}