#ifndef THERMOSTAT_H
#define THERMOSTAT_H

class Thermostat {
private:
    double temperature;
    bool heating;

public:
    Thermostat();
    void setTemperature(double temp);
    void controlTemperature();
};

#endif // THERMOSTAT_H