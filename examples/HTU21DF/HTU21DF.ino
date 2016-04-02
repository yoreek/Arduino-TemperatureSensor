#include <Wire.h>
#include <HTU21DF.h>

HTU21DF htu = HTU21DF();

void setup() {
    Serial.begin(9600);
    Wire.begin();
    htu.begin();
}

void printInfo() {
    float temp, humd;
    int userRegister;

    if (!htu.isAlive()) {
        Serial.println("Couldn't find sensor!");
        return;
    }

    if (htu.getTemperature(&temp) && htu.getHumidity(&humd)) {
        Serial.print("Temp: ");
        Serial.print(temp);
        Serial.print(" C  Humidity: ");
        Serial.print(humd);
        Serial.print(" %  Humidity(Comp): ");
        htu.getHumidityComp(&humd);
        htu.getDewPoint(&temp);
        Serial.print(humd);
        Serial.print(" %  Dew Point: ");
        Serial.print(temp);
        Serial.println(" C");
    }
    else {
        Serial.println("Failed to get data from sensor");
    }

    if ((userRegister = htu.readUserRegister()) != -1) {
        Serial.print("User Register: 0x");
        Serial.println(userRegister, HEX);
    }
    else {
        Serial.println("Failed to get data from sensor");
    }
}

void loop() {
    printInfo();

    delay(1000);
}
