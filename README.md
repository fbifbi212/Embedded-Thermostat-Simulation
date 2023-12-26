# Embedded Thermostat Simulation c++

This project simulates a basic thermostat as a representation of an embedded system. The thermostat controls the heating based on a predefined temperature range.

## Description

The project consists of the following files:

- **main.cpp:** Entry point for the program, demonstrates the functionality of the Thermostat class.
- **Thermostat.h:** Header file containing the declaration of the Thermostat class.
- **Thermostat.cpp:** Implementation file with the details of the Thermostat class.

## Thermostat Class

The `Thermostat` class represents a basic thermostat functionality with the ability to set temperature and control heating based on a predefined temperature threshold.

### Usage

1. Clone this repository.
2. Compile the C++ files using your preferred compiler.
3. Run the executable to observe thermostat simulation.

## Usage Example

The provided `main.cpp` file demonstrates how to create a Thermostat object, set temperature, and control heating based on the temperature value.

```cpp
#include <iostream>
#include "Thermostat.h"

int main() {
    Thermostat thermostat;

    thermostat.setTemperature(18.5);
    thermostat.controlTemperature();

    return 0;
}
