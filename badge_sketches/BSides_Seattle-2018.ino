/*
  Binary Blink

  This super crappy code was written in the haze of cold medicine and has zero guarantee to work.
  In theory, it does.  It will make blinky lights on the B-Sides Seattle badge from 2018

  Do with it what you will.

  Change it, erase it, post it online and mock it incessantly.
*/

int led0 = 2;
int led1 = 3;
int led2 = 4;
int led3 = 9;
int led4 = 8;
int led5 = 7;
int led6 = 6;
int led7 = 5;

// Timer for the spiral
int timer = 100;
// Array of pin numbers to which LEDs are attached
int ledPins[] = {2, 3, 4, 9, 8, 7, 6, 5};
int pinCount = 8; 

byte flash[] = {
  B00000000, B11111111
};
byte bullet[] = {
  B00010001, B00100010, B01000100, B10001000
};
byte radiate[] = {
  B00011000, B00100100, B01000010, B10000001, B00000000,
  B00000000
};
byte negradiate[] = {
  B10000001, B01000010, B00100100, B00011000, B00000000,
  B00000000
};
byte march[] = {
  B00000001, B00000010, B00000100, B00001000, B00010000,
  B00100000, B01000000, B10000000, B01000000, B00100000,
  B00010000, B00001000, B00000100, B00000010, B00000001
};
byte negmarch[] = {
  B11111111, B11111110, B11111101, B11111011, B11110111,
  B11101111, B11011111, B10111111, B01111111, B11111111,
  B01111111, B10111111, B11011111, B11101111, B11110111,
  B11111011, B11111101, B11111110
};
byte stackdots[] = {
  B00000000, B10000000, B01000000, B00100000, B00010000,
  B00001000, B00000100, B00000010, B00000001, B10000001,
  B01000001, B00100001, B00010001, B00001001, B00000101,
  B00000011, B10000011, B01000011, B00100011, B00010011,
  B00001011, B00000111, B10000111, B01000111, B00100111,
  B00010111, B00001111, B10001111, B01001111, B00101111,
  B00011111, B10011111, B01011111, B00111111, B10111111,
  B01111111, B11111111
};
byte sparkle[] = {
  B00000001, B10000000, B00000010, B01000000, B00000100,
  B00100000, B00001000, B00010000
};

// This runs to initiallize as soon as the chip is reset or gets power
void setup() {
  // Initialize Arduino digital pins [2,3,4,5,6,7,8,9] for output
  // Digital pins utilized on the ATMEGA328p are [4,5,6,11,12,13,14,15], which map to the Arduino pins above
  pinMode(led0, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
}

void changeLED(byte pattern)
{
  if (bitRead( pattern, 0 ) == 0) {
    digitalWrite(led0, LOW);
  } else {
    digitalWrite(led0, HIGH);
  }
  if (bitRead( pattern, 1 ) == 0) {
    digitalWrite(led1, LOW);
  } else {
    digitalWrite(led1, HIGH);
  }
  if (bitRead( pattern, 2 ) == 0) {
    digitalWrite(led2, LOW);
  } else {
    digitalWrite(led2, HIGH);
  }
  if (bitRead( pattern, 3 ) == 0) {
    digitalWrite(led3, LOW);
  } else {
    digitalWrite(led3, HIGH);
  }
  if (bitRead( pattern, 4 ) == 0) {
    digitalWrite(led4, LOW);
  } else {
    digitalWrite(led4, HIGH);
  }
  if (bitRead( pattern, 5 ) == 0) {
    digitalWrite(led5, LOW);
  } else {
    digitalWrite(led5, HIGH);
  }
  if (bitRead( pattern, 6 ) == 0) {
    digitalWrite(led6, LOW);
  } else {
    digitalWrite(led6, HIGH);
  }
  if (bitRead( pattern, 7 ) == 0) {
    digitalWrite(led7, LOW);
  } else {
    digitalWrite(led7, HIGH);
  }
}

int plength;
void loop() {
  // Flash
  for (int i = 0; i < 30; i++) {
    for (int j = 0; j < 2; j++) {
      changeLED(flash[j]);
      delay(80);
    }
  }
  // Bullet
  for (int i = 0; i < 20; i++) {
    for (int j = 0; j < 4; j++) {
      changeLED(bullet[j]);
      delay(100);
    }
  }
  // radiate
  for (int i = 0; i < 20; i++) {
    for (int j = 0; j < 6; j++) {
      changeLED(radiate[j]);
      delay(100);
    }
  }
  // negradiate
  for (int i = 0; i < 20; i++) {
    for (int j = 0; j < 6; j++) {
      changeLED(negradiate[j]);
      delay(110);
    }
  }
  // march
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 15; j++) {
      changeLED(march[j]);
      delay(100);
    }
  }
  // negmarch
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 18; j++) {
      changeLED(negmarch[j]);
      delay(110);
    }
  }
  // stackdots
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 37; j++) {
      changeLED(stackdots[j]);
      delay(100);
    }
  }
  // sparkle
  for (int i = 0; i < 20; i++) {
    for (int j = 0; j < 8; j++) {
      changeLED(sparkle[j]);
      delay(110);
    }
  }
}
