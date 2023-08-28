#include <Arduino.h>
#include "TrafficLight.h"

TrafficLight trafficLight1(D0, D1, D2, D3, D4, D5, (long[]){1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000});
TrafficLight trafficLight2(D6, D7, D8, 0, 0, 0, (long[]){1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000});

void setup()
{
  trafficLight1.setup(millis());
  trafficLight2.setup(millis() + 5000);
}

void loop()
{
  trafficLight1.update(millis());
  trafficLight2.update(millis());
}