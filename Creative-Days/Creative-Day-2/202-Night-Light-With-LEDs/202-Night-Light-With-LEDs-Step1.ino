/* Project 202 - Night light with LEDs - STEP 1
Use the photoresistor and 3 LEDs to create a night light. Control with the DIP switch
a)	Basic version which switches all LEDs on when the main light in a room goes off. Switch on using Switch 1
*/

// These variables are used to show how the devices are connected to the HERO pins
int sensorPin = A0; // select the "analog zero" input pin for probing the photoresistor

// Set up the DIP switches
const int Switch1 = 2;     // Switch 1 of our DIP switch is attached to pin 2
const int Switch2 = 3;     // Switch 2 of our DIP switch is attached to pin 3
const int Switch3 = 4;     // Switch 3 of our DIP switch is attached to pin 4

// This shows how the LEDs are connected to the HERO pins
const int LED1 = 9; 
const int LED2 = 10;
const int LED3 = 11;

// These variables must be set to zero before the loop() function is run
int sensorValue = 0; // variable that we'll use to store the value reading from the sensor

/* These two values must be input by the programmer and will vary according to your ambient
light conditions. When the program is uploaded to the HERO board, you must select the serial
monitor and read the sensor value that is printed to the screen when your light is off. 
Take this value and copy it below for the sensorLowValue
Next, turn the light on - perhaps a lamp which is on the desk when you are working on your project.
Read the new value on the serial monitor and copy it below for the sensorHighValue.
This is used to callibrate your project for your current light conditions.
*/
const int sensorLowValue = 487; // This is the lowest reading with the light off
const int sensorHighValue = 793; // This is the highest reading when light is on
const int sensorSwitchValue = 500; // Set this value at a value higher than the sensorLowValue, at a level you want the nighlight LEDs to come on

void setup() {

  Serial.begin(9600); // This is used to set up the serial monitor

  // Set up the DIP switches as inputs
  pinMode(Switch1, INPUT);
  pinMode(Switch2, INPUT);
  pinMode(Switch3, INPUT);

  // Set up the LEDs as outputs
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);

  // Set up the Photoresistor sensor pin as an input
  pinMode(sensorPin, INPUT);
}

void loop() {

  // Read the DIP switch values and print them out to the monitor to check them
  int sw1 = digitalRead(Switch1);
  int sw2 = digitalRead(Switch2);
  int sw3 = digitalRead(Switch3);
  Serial.print("DIP switch reading = ");
  Serial.print(sw1);
  Serial.print(sw2);
  Serial.println(sw3);

  // Test to see if all switches are off and turn all LEDs off and cause a short delay if they are
  if (sw1==0 && sw2==0 & sw3==0){
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);    
    delay(100);
  }
  else if (sw1 == 1) {  // If switch 1 is turned on
    // Read the analog sensor value and send it to serial monitor
    sensorValue = analogRead(sensorPin);
    
    /*Read the analog sensor value and send it to the serial monitor and make a note of
    the lowest and highest reading in order to callibrate your display */
    Serial.println(sensorValue);

    // Determine if the sensorValue is higher than the sensorSwitchValue
    if (sensorValue >= sensorSwitchValue) {  // turn the LEDs off
      digitalWrite(LED1, LOW);
      digitalWrite(LED2, LOW);
      digitalWrite(LED3, LOW);
    }
    else {                        // turn the LEDs on
      digitalWrite(LED1, HIGH);
      digitalWrite(LED2, HIGH);
      digitalWrite(LED3, HIGH);
      delay(200);
    }
  }
}