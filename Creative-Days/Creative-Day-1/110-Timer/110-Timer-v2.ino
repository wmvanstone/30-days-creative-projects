/* Project 110 - Timer - Version 2
This creates a countdown timer with the 6 LEDs as a countdown display, 
and another to flash when the countdown time has been reached. 

Use the first 2 DIP switches to select the time period to count – 
there are 4 options - and the third button will set each interval to  
seconds or minutes. You can see in the code that the options chosen in this
program give an interval between the LEDs of 1,2,3 or 4 seconds, or 1,2,3 or 4 minutes.

This code will use the millis() function to calculate the passing of time and
also cause the built-in LED will flash every second.
*/

// constants won't change. Used here to set a pin number:
const int ledPin = LED_BUILTIN;  // the number of the Built in LED pin
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

// Variables will change:
int ledState = LOW;  // ledState used to set the LED
unsigned long timerInterval = 0; // timerInterval is used to hold the time between LEDs

// Generally, you should use "unsigned long" for variables that hold time
// The value will quickly become too large for an int to store
unsigned long previousMillis = 0;  // will store last time Built-in LED was updated
unsigned long previousTimeMillis = 0;  // will store last time a colored LED was updated
int LEDno = LED1; // Stores the next LED to be changed

// constants won't change: The interval is 1 second
const long interval = 1000;  // interval at which to blink the built-in LED (milliseconds)

void setup() {

  /* You can set up the serial monitor here is you want to track what is going on with
  variables later on in this code. You learn about the Serial Monitor on Day 6
  Serial.begin(9600); 
  */

  // set these digital pins as inputs:
  pinMode(Switch1, INPUT);
  pinMode(Switch2, INPUT);
  pinMode(Switch3, INPUT);
  
  // set these digital pins as output:
  pinMode(ledPin, OUTPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
  pinMode(LED7, OUTPUT);

  // Switch all the LEDs off except LED1
  digitalWrite(ledPin, LOW);
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

  // calculate denary value
  int timerOption=Sw1*1+Sw2*2+Sw3*4;

  // Set the timer interval based on the dip switch setting
  if (timerOption <= 3) {
    timerInterval = (timerOption + 1) * 1000 ; // intervals from 1 to 4 seconds
  }
  else if (timerOption > 3) {
    timerInterval = (timerOption - 3) * 60000 ; // intervals from 1 to 4 minutes
  }

  /* You can print the variables on the Serial Monitor if you want to
  Serial.print("timerOption = ");
  Serial.println(timerOption);
  Serial.print("timerInterval = ");
  Serial.println(timerInterval);
  */
}

void loop() {
  // check to see if it's time to blink the LED; that is, if the difference
  // between the current time and last time you blinked the LED is bigger than
  // the interval at which you want to blink the LED.

  unsigned long currentTimeMillis = millis();

  if ((currentTimeMillis - previousTimeMillis) >= timerInterval) {

    /* You can print the variables on the Serial Monitor if you want to
    Serial.print("currentTimeMillis = ");
    Serial.print(currentTimeMillis);
    Serial.print(" previousTimeMillis = ");
    Serial.println(previousTimeMillis);
    Serial.print("LEDno = ");
    Serial.println(LEDno);
    */

    // save the last time you changed a colored LED
    previousTimeMillis = previousTimeMillis + timerInterval;

    // Turn the LEDs on
    if (LEDno < LED7) {
      LEDno = LEDno + 1; // Increment the next LED no by one
      digitalWrite(LEDno, HIGH);
    }
  }

  if ((currentTimeMillis - previousMillis) >= interval/2) {
    // save the last time you blinked the LED
    previousMillis = currentTimeMillis;

    // if the LED is off turn it on and vice-versa:
    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }

    // set the LED with the ledState of the variable:
    digitalWrite(ledPin, ledState);

    if (LEDno >= LED7) {
      digitalWrite(LED7, ledState);
    }
  }
}