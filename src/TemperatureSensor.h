#pragma once
#ifndef _TEMPERATURE_SENSOR_H_
#define _TEMPERATURE_SENSOR_H_

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <inttypes.h>

class TemperatureSensor {
    public:
        virtual bool getTemperature(float *temp, bool forceUpdate = false);
};

#endif
