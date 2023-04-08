
#include "HeartbeatPlus.h"

HeartbeatPlus::HeartbeatPlus(unsigned long onTime, unsigned long offTime, int pin) {
  _onTime = onTime;
  _offTime = offTime;
  _pin = pin;
  _lastMillis = millis();
  pinMode(_pin, OUTPUT);
}

void HeartbeatPlus::update() {
  unsigned long currentMillis = millis();
  unsigned long interval = _state ? _onTime : _offTime;
  if (currentMillis - _lastMillis >= interval) {
    _lastMillis = currentMillis;
    digitalWrite(_pin, !_state);
    _state = !_state;
  }
}
