/* Project 101 - Blinking LED. Based on the built-in LED control example code, 
this now incorporates a DIP Switch to vary the frequency of the blink dependent
on the binary input that is created by the switches
*/
int Switch1 = 9;  // Switch 1 of our DIP switch is attached to pin 9
int Switch2 = 10; // Switch 2 of our DIP switch is attached to pin 10
int Switch3 = 11; // Switch 3 of our DIP switch is attached to pin 11
  

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(Switch1, INPUT); // Set these switches as input
  pinMode(Switch2, INPUT);
  pinMode(Switch3, INPUT);
  Serial.begin(9600);
}



void loop(){
  int Sw1=digitalRead(Switch1);
  int Sw2=digitalRead(Switch2);
  int Sw3=digitalRead(Switch3);
  Serial.print(Sw1);
  Serial.print(Sw2);
  Serial.println(Sw3);
  
  int total = digitalRead(Switch3)*1 + digitalRead(Switch2)*2 + digitalRead(Switch1)*4; // calculate binary input
  
  // Make the speed of flashing proportional to total
  digitalWrite(LED_BUILTIN, HIGH);
  delay(total*100); // Wait for 100*total millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(total*100); // Wait for 100*total millisecond(s)  
}
