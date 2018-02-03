/*
  Binary Blink

  This super crappy code was written in the haze of cold medicine and has zero guarantee to work.
  In theory, it does.  It will make blinky lights on the B-Sides Seattle badge from 2018

  Do with it what you will.

  Change it, erase it, post it online and mock it incessantly.
*/

int ledOne = 2;
int ledTwo = 3;
int ledThree = 4;
int ledFour = 9;
int ledFive = 8;
int ledSix = 7;
int ledSeven = 6;
int ledEight = 5;

// Timer for the spiral
int timer = 100;  
// Array of pin numbers to which LEDs are attached
int ledPins[] = {2, 3, 4, 9, 8, 7, 6, 5};
int pinCount = 8; 

// This runs to initiallize as soon as the chip is reset or gets power
void setup() {
  // Initialize Arduino digital pins [2,3,4,5,6,7,8,9] for output
  // Digital pins utilized on the ATMEGA328p are [4,5,6,11,12,13,14,15], which map to the Arduino pins above
  pinMode(ledOne, OUTPUT);
  pinMode(ledTwo, OUTPUT);
  pinMode(ledThree, OUTPUT);
  pinMode(ledFour, OUTPUT);
  pinMode(ledFive, OUTPUT);
  pinMode(ledSix, OUTPUT);
  pinMode(ledSeven, OUTPUT);
  pinMode(ledEight, OUTPUT);
}

// Loop forever and ever and ever and ever (and ever)
// As is, this just turns the LEDs on as "bits" in an ASCII character byte
// LEDs start at the bottom left (7 o'clock or so) and circle around the board clock-wise, positions 1-8
void loop() {
  //B 01000010
  digitalWrite(ledOne, LOW);
  digitalWrite(ledTwo, HIGH);
  digitalWrite(ledThree, LOW);
  digitalWrite(ledFour, LOW);
  digitalWrite(ledFive, LOW);
  digitalWrite(ledSix, LOW);
  digitalWrite(ledSeven, HIGH);
  digitalWrite(ledEight, LOW);
  delay(1000);
  //S 01010011
  digitalWrite(ledOne, LOW);
  digitalWrite(ledTwo, HIGH);
  digitalWrite(ledThree, LOW);
  digitalWrite(ledFour, HIGH);
  digitalWrite(ledFive, LOW);
  digitalWrite(ledSix, LOW);
  digitalWrite(ledSeven, HIGH);
  digitalWrite(ledEight, HIGH);
  delay(1000);
  //I 01001001
  digitalWrite(ledOne, LOW);
  digitalWrite(ledTwo, HIGH);
  digitalWrite(ledThree, LOW);
  digitalWrite(ledFour, LOW);
  digitalWrite(ledFive, HIGH);
  digitalWrite(ledSix, LOW);
  digitalWrite(ledSeven, LOW);
  digitalWrite(ledEight, HIGH);
  delay(1000);
  //D 01000100
  digitalWrite(ledOne, LOW);
  digitalWrite(ledTwo, HIGH);
  digitalWrite(ledThree, LOW);
  digitalWrite(ledFour, LOW);
  digitalWrite(ledFive, LOW);
  digitalWrite(ledSix, HIGH);
  digitalWrite(ledSeven, LOW);
  digitalWrite(ledEight, LOW);
  delay(1000);
  //E 01000101
  digitalWrite(ledOne, LOW);
  digitalWrite(ledTwo, HIGH);
  digitalWrite(ledThree, LOW);
  digitalWrite(ledFour, HIGH);
  digitalWrite(ledFive, LOW);
  digitalWrite(ledSix, LOW);
  digitalWrite(ledSeven, HIGH);
  digitalWrite(ledEight, HIGH);
  delay(1000);
  //S 01010011
  digitalWrite(ledOne, LOW);
  digitalWrite(ledTwo, HIGH);
  digitalWrite(ledThree, LOW);
  digitalWrite(ledFour, HIGH);
  digitalWrite(ledFive, LOW);
  digitalWrite(ledSix, LOW);
  digitalWrite(ledSeven, HIGH);
  digitalWrite(ledEight, HIGH);
  delay(1000);
  // All off
  digitalWrite(ledOne, LOW);
  digitalWrite(ledTwo, LOW);
  digitalWrite(ledThree, LOW);
  digitalWrite(ledFour, LOW);
  digitalWrite(ledFive, LOW);
  digitalWrite(ledSix, LOW);
  digitalWrite(ledSeven, LOW);
  digitalWrite(ledEight, LOW);
  delay(1000);
  // All on
  digitalWrite(ledOne, HIGH);
  digitalWrite(ledTwo, HIGH);
  digitalWrite(ledThree, HIGH);
  digitalWrite(ledFour, HIGH);
  digitalWrite(ledFive, HIGH);
  digitalWrite(ledSix, HIGH);
  digitalWrite(ledSeven, HIGH);
  digitalWrite(ledEight, HIGH);
  delay(1000);
  // loop from the lowest pin to the highest:
  for (int thisPin = 0; thisPin < pinCount; thisPin++) {
    // turn the pin on:
    digitalWrite(ledPins[thisPin], HIGH);
    delay(timer);
    // turn the pin off:
    digitalWrite(ledPins[thisPin], LOW);

  }
  // All off
  digitalWrite(ledOne, LOW);
  digitalWrite(ledTwo, LOW);
  digitalWrite(ledThree, LOW);
  digitalWrite(ledFour, LOW);
  digitalWrite(ledFive, LOW);
  digitalWrite(ledSix, LOW);
  digitalWrite(ledSeven, LOW);
  digitalWrite(ledEight, LOW);
  delay(3000);
}
