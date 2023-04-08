
Heartbeat Library
=================

The Heartbeat library provides a simple way to generate a heartbeat signal using the Arduino's digital pins. It uses the millis() function to avoid blocking other code.

Installation
------------

To install the library, download the zip file and extract it into your Arduino libraries directory. The library directory should be named "Heartbeat".

Usage
-----

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

License
-------

This library is licensed under the MIT License. See the LICENSE file for details.

