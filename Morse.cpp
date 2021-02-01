#include <Arduino.h>
#include <Morse.h>

//the first part is the class, second is the function
Morse::Morse(int pin) //this says what should happen when someone creates and instence of this class
{
  pinMode(pin, OUTPUT);
  _pin = pin;
}

void Morse::dot()
{
  digitalWrite(_pin, HIGH);
  delay(250);
  digitalWrite(_pin, LOW);
  delay(250);  
}

void Morse::dash()
{
  digitalWrite(_pin, HIGH);
  delay(1000);
  digitalWrite(_pin, LOW);
  delay(250);
}

void Morse::sos(){
  dot(); dot(); dot();
  dash(); dash(); dash();
  dot(); dot(); dot();
}
  
