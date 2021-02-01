#ifndef Morse_h //these prevent people from declaring the library twice
#define Morse_h

#include <Arduino.h>

class Morse
{
  public:
    Morse(int pin);
    void dot();
    void dash();
  private:
    int _pin;
};

#endif
