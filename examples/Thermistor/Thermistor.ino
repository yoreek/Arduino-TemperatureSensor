#include <Thermistor.h>

#define SENSOR_PIN          0
#define THERMISTOR_NOMINAL  10000
#define SERIES_RESISTOR     1000
#define ADC_CORRECTION      -48

Thermistor sensor = Thermistor(
    SENSOR_PIN,
    THERMISTOR_NOMINAL,
    SERIES_RESISTOR,
    ADC_CORRECTION
);

void setup() {
    Serial.begin(9600);
}

void printInfo() {
    float temp;

    if (sensor.getTemperature(&temp)) {
        Serial.print("Temp: ");
        Serial.print(temp);
        Serial.println(" C");
    }
    else {
        Serial.println("Failed to get data from sensor");
    }
}

void loop() {
    printInfo();

    delay(1000);
}
