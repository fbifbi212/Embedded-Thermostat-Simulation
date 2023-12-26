#include <iostream>
#include "Thermostat.h"

int main() {
    Thermostat thermostat;

    thermostat.setTemperature(18.5);
    thermostat.controlTemperature();

    return 0;
}
