#pragma once
#ifndef _HUMIDITY_SENSOR_H_
#define _HUMIDITY_SENSOR_H_

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <inttypes.h>

class HumiditySensor {
    public:
        virtual bool getHumidity(float *humd, bool forceUpdate = false);
};

#endif
