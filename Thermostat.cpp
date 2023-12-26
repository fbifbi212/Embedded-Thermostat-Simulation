#include "Thermostat.h"
#include <iostream>

Thermostat::Thermostat() : temperature(0), heating(false) {}

void Thermostat::setTemperature(double temp) {
    temperature = temp;
    std::cout << "Current temperature: " << temperature << " degrees Celsius\n";
}

void Thermostat::controlTemperature() {
    if (temperature < 20) {
        heating = true;
        std::cout << "Heater turned on - Working to heat the room.\n";
    } else {
        heating = false;
        std::cout << "Heater turned off - Room temperature within normal range.\n";
    }
}