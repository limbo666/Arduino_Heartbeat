#ifndef Heartbeat_h
#define Heartbeat_h

#include "Arduino.h"

class Heartbeat {
  public:
    Heartbeat(unsigned long interval, int pin);
    void update();
  private:
    unsigned long _interval;
    int _pin;
    unsigned long _lastMillis;
    bool _state = false;
};

#endif
