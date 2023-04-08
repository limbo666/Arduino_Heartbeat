#include "Heartbeat.h"

Heartbeat::Heartbeat(unsigned long interval, int pin) {
  _interval = interval;
  _pin = pin;
  _lastMillis = millis();
  pinMode(_pin, OUTPUT);
}

void Heartbeat::update() {
  unsigned long currentMillis = millis();
  if (currentMillis - _lastMillis >= _interval) {
    _lastMillis = currentMillis;
    digitalWrite(_pin, !_state);
    _state = !_state;
  }
}
