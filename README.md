
Arduino Heartbeat Libraries
===========================

This repository contains two Arduino libraries for generating a heartbeat signal using the digital pins of an Arduino: Heartbeat and HeartbeatPlus. Both libraries use the millis() function to avoid blocking other code.

Installation
------------

To use either library, download the zip file (from release page https://github.com/limbo666/Arduino_Heartbeat/releases/tag/First_Release) and extract it into your Arduino libraries directory. Each library directory should be named according to the library: "Heartbeat" or "HeartbeatPlus".


Heartbeat Library
-----------------

The Heartbeat library provides a simple way to generate a heartbeat signal using the Arduino's digital pins.

### Usage

To use the library in your sketch, include the Heartbeat header file and create an instance of the Heartbeat class. For example:

arduino

```arduino
#include <Heartbeat.h>

Heartbeat heartbeat(500, 13); // Create a Heartbeat instance with a 500ms interval on pin 13

void setup() {
  // Call the update function once in the setup function
  heartbeat.update();
}

void loop() {
  // Call the update function in the loop function
  heartbeat.update();
}
```

In this example, the Heartbeat constructor takes two parameters: the interval in milliseconds between each pulse, and the pin number that the pulse should be output on.

The update function checks the elapsed time since the last pulse and toggles the pin state if the interval has elapsed.


HeartbeatPlus Library
---------------------

The HeartbeatPlus library provides an advanced way to generate a heartbeat signal using the Arduino's digital pins, allowing you to set separate on and off times for the LED.

### Usage

To use the library in your sketch, include the HeartbeatPlus header file and create an instance of the HeartbeatPlus class. For example:

arduino

```arduino
#include <HeartbeatPlus.h>

HeartbeatPlus heartbeatPlus(50, 950, 13); // Create a HeartbeatPlus instance with a 50ms on time, 950ms off time, on pin 13

void setup() {
  // Call the update function once in the setup function
  heartbeatPlus.update();
}

void loop() {
  // Call the update function in the loop function
  heartbeatPlus.update();
}
```

In this example, the HeartbeatPlus constructor takes three parameters: the on time in milliseconds, the off time in milliseconds, and the pin number that the pulse should be output on.

The update function checks the elapsed time since the last pulse and toggles the pin state if the interval has elapsed, using either the on time or off time based on the current state.



License
-------

Both libraries are licensed under the MIT License. See the LICENSE file for details.
