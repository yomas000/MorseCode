#ifndef Morse_h //these prevent people from declaring the library twice
#define Morse_h

#include <Arduino.h>

class Morse
{
  public:
    Morse(int pin);
    void dot();
    void dash();
    void sos();
  private:
    int _pin;
};

#endif
