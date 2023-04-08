#ifndef HeartbeatPlus_h
#define HeartbeatPlus_h

#include "Arduino.h"

class HeartbeatPlus {
  public:
    HeartbeatPlus(unsigned long onTime, unsigned long offTime, int pin);
    void update();
  private:
    unsigned long _onTime;
    unsigned long _offTime;
    int _pin;
    unsigned long _lastMillis;
    bool _state = false;
};

#endif
