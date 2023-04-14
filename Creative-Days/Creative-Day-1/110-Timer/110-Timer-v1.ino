/* Project 110 - Timer
This creates a countdown timer with the 6 LEDs as a countdown display, 
and another to flash when the countdown time has been reached. 

Use the first 2 DIP switches to select the time period to count – 
there are 4 options - and the third switch will set each interval to  
seconds or minutes. You can see the time chosen for each option in the code below
expressed in milliseconds.

This code uses the delay() function to determine how quickly the LEDs are going
to light up in sequence.
*/

// constants won't change. Used here to set a pin number:
const int LED1 = 6; // Link the LEDs on the breadboard with their relevant pins
const int LED2 = 7; // Assuming they are sequential in number, in this case, 6 to 12
const int LED3 = 8;
const int LED4 = 9;
const int LED5 = 10;
const int LED6 = 11;
const int LED7 = 12;
const int Switch1 = 2;  // Link the DIP Switch leads to their relevant pins
const int Switch2 = 3;
const int Switch3 = 4;

// These are the options (based on the binary value of the DIP switch) with their countdown values
const unsigned long Option0TotalTime = 5000;    //  5 seconds
const unsigned long Option1TotalTime = 10000;   // 10 seconds
const unsigned long Option2TotalTime = 20000;   // 20 seconds
const unsigned long Option3TotalTime = 30000;   // 30 seconds
const unsigned long Option4TotalTime = 300000;  //  5 minutes
const unsigned long Option5TotalTime = 600000;  // 10 minutes
const unsigned long Option6TotalTime = 1200000; // 20 minutes
const unsigned long Option7TotalTime = 1800000; // 30 minutes

const int noLEDs = 6; // The number of LEDs used in the timer sequence

// Variables will change:
unsigned long timerInterval = 0; // timerInterval is used to hold the time between LEDs

int LEDno = LED1; // Stores the next LED to be changed

void setup() {

  // set these digital pins as inputs:
  pinMode(Switch1, INPUT);
  pinMode(Switch2, INPUT);
  pinMode(Switch3, INPUT);
  
  // set these digital pins as output:
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
  pinMode(LED7, OUTPUT);

  // Switch all the LEDs off except LED1
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  digitalWrite(LED6, LOW);
  digitalWrite(LED7, LOW);

  int Sw1=digitalRead(Switch1);
  int Sw2=digitalRead(Switch2);
  int Sw3=digitalRead(Switch3);

  // calculate denary value from the binary value
  int timerOption=Sw1*1+Sw2*2+Sw3*4;

  // Set the timer interval based on the DIP switch setting
  if (timerOption == 0) {
    timerInterval = long(Option0TotalTime/noLEDs) ; // the calculated time interval, rounded down to the nearest integer
  }
  else if (timerOption == 1) {
    timerInterval = long(Option1TotalTime/noLEDs) ; // the long() function is needed to convert the decimal value to a long data type
  }
    else if (timerOption == 2) {
    timerInterval = long(Option2TotalTime/noLEDs) ; 
  }
    else if (timerOption == 3) {
    timerInterval = long(Option3TotalTime/noLEDs) ; 
  }
    else if (timerOption == 4) {
    timerInterval = long(Option4TotalTime/noLEDs) ; 
  }
    else if (timerOption == 5) {
    timerInterval = long(Option5TotalTime/noLEDs) ; 
  }
    else if (timerOption == 6) {
    timerInterval = long(Option6TotalTime/noLEDs) ; 
  }
    else if (timerOption == 7) {
    timerInterval = long(Option7TotalTime/noLEDs) ; 
  }

  /* These variables can be printed out on the serial monitor
  Serial.begin(9600); 
  Serial.print(Sw3);
  Serial.print(Sw2);
  Serial.println(Sw1);

  Serial.print("timerOption = ");
  Serial.println(timerOption);
  Serial.print("timerInterval = ");
  Serial.println(timerInterval);
  */

}

void loop() {

  // Turn the LEDs on
  if (LEDno < LED7) {
    delay(timerInterval); // Delay for the calculated time
    LEDno = LEDno + 1; // Increment the next LED no by one
    digitalWrite(LEDno, HIGH);
  }

  // Flash the final LED on and off
  if (LEDno >= LED7) {
    digitalWrite(LED7, HIGH); 
    delay(500);
    digitalWrite(LED7, LOW);
    delay(500);
  }
}