#include <Arduino.h>
#include <Ultrasonic.h>

Ultrasonic ultraleft(12, 11);
Ultrasonic ultraright(9, 10);

const int pinled = 8;
const int pinled2 = 7;

int val = 0;
int state = 0;
int old_val = 0;

int val2 = 0;
int state2 = 0;
int old_val2 = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(pinled, OUTPUT);
  pinMode(pinled2, OUTPUT);
}

void loop()
{

  // val = ultraright.Ranging(CM); 
  // if ((val <= 15) && (old_val <= 15))
  // {
  //   state = 1 - state;
  //   delay(500);
  // }
  // old_val = val; 
  // if (state == 1)
  // {
  //   digitalWrite(pinled, HIGH); 
  // }
  // else
  // {
  //   digitalWrite(pinled, LOW);
  // }

  // val2 = ultraleft.Ranging(CM); 
  // if ((val2 <= 15) && (old_val2 <= 15))
  // {
  //   state2 = 1 - state2;
  //   delay(500);
  // }
  // old_val2 = val2; 
  // if (state2 == 1)
  // {
  //   digitalWrite(pinled2, HIGH); 
  // }
  // else
  // {
  //   digitalWrite(pinled2, LOW); 
  // }
}