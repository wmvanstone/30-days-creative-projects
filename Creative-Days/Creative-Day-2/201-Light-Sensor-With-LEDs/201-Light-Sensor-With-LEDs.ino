/* Project 201 - Light Sensor with LEDs
Use a photoresistor to read the light level and use the LEDs to indicate whether it's bright or dark. 
Calibrate the sensor so the ambient light level illuminates 1 LED and maximum illuminates 10 LEDs. 
*/

// Link the components with their HERO pins
int sensorPin = A0; // select the "analog zero" input pin for probing the photoresistor
int LED1 = 2;
int LED2 = 3;
int LED3 = 4;
int LED4 = 5;
int LED5 = 6;
int LED6 = 7;
int LED7 = 8;
int LED8 = 9;
int LED9 = 10;
int LED10 = 11;

int sensorValue = 0; // variable thatwe'll use to store the value reading from the sensor
int sensorHighValue = 1010; // This is the highest reading when light is shone on sensor
int sensorLowValue = 668; // This is the lowest reading with the ambient light conditions
int LEDinterval = 0; // Initialize the LED interval

void setup() {

  Serial.begin(9600);

  int sensorRange = sensorHighValue - sensorLowValue; 
  LEDinterval = int(sensorRange/10); // This is the range expected on the sensor divided by the number of LEDs

  // Set up the LEDs as outputs
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
  pinMode(LED7, OUTPUT);
  pinMode(LED8, OUTPUT);
  pinMode(LED9, OUTPUT);
  pinMode(LED10, OUTPUT);

  // Set up the Photoresistor sensor pin as an input
  pinMode(sensorPin, INPUT);
}

void loop() {
  // Read the analog sensor value and send it to serial
  sensorValue = analogRead(sensorPin);
  
  /*Read the analog sensor value and send it to the serial monitor and make a note of
  the lowest and highest reading in order to callibrate your display */
  Serial.println(sensorValue);

  // Calculate the number of LEDs to light up
  int noLEDs = int((sensorValue - sensorLowValue)/LEDinterval);

  // Turn the LEDs off if they are above the expected number of LEDs

  if (noLEDs < 10) {
    digitalWrite(LED10, LOW);
  }
  if (noLEDs < 9) {
    digitalWrite(LED9, LOW);
  }  
  if (noLEDs < 8) {
    digitalWrite(LED8, LOW);
  }
  if (noLEDs < 7) {
    digitalWrite(LED7, LOW);
  }
  if (noLEDs < 6) {
    digitalWrite(LED6, LOW);
  }
  if (noLEDs < 5) {
    digitalWrite(LED5, LOW);
  }
  if (noLEDs < 4) {
    digitalWrite(LED4, LOW);
  }
  if (noLEDs < 3) {
    digitalWrite(LED3, LOW);
  }
  if (noLEDs < 2) {
    digitalWrite(LED2, LOW);
  }
  if (noLEDs < 1) {
    digitalWrite(LED1, LOW);
  }

  // Turn the LEDs on if they are under the expected number of LEDs
  if (noLEDs >= 1) {
    digitalWrite(LED1, HIGH);
  }
  if (noLEDs >= 2) {
    digitalWrite(LED2, HIGH);
  }
  if (noLEDs >= 3) {
    digitalWrite(LED3, HIGH);
  }
  if (noLEDs >= 4) {
    digitalWrite(LED4, HIGH);
  } 
  if (noLEDs >= 5) {
    digitalWrite(LED5, HIGH);
  }
  if (noLEDs >= 6) {
    digitalWrite(LED6, HIGH);
  }
  if (noLEDs >= 7) {
    digitalWrite(LED7, HIGH);
  }
  if (noLEDs >= 8) {
    digitalWrite(LED8, HIGH);
  } 
  if (noLEDs >= 9) {
    digitalWrite(LED9, HIGH);
  }
  if (noLEDs >= 10) {
    digitalWrite(LED10, HIGH);
  }  
}