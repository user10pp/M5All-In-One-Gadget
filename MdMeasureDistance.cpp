#include "MdMeasureDistance.h"
#include "DrUltraSonic.h"
#include "M5All-In-One-Gadget.h"
#include <Arduino.h>

DrUltraSonic drul = DrUltraSonic(ECHO_PIN, TRIG_PIN);

double MdMeasureDistance::getDistance()
{
    double distance;

    distance = (340.0 / 1000000) * drul.measureReturnTime() * 0.5 * 100;
    Serial.println(drul.measureReturnTime());
    Serial.print(distance);

    Serial.println("[cm]");
    delay(300);

    return distance;
}