#ifndef CAR_H
#define CAR_H

#include "Weather.h"

class Car {
protected:
    double fuelCapacity;
    double fuelConsumption;
    double averageSpeedSunny;
    double averageSpeedRain;
    double averageSpeedSnow;

public:
    Car(double fc, double fcons, double asSun, double asRain, double asSnow)
        : fuelCapacity(fc), fuelConsumption(fcons),
          averageSpeedSunny(asSun), averageSpeedRain(asRain), averageSpeedSnow(asSnow) {}

    virtual ~Car() {}

    virtual double GetFuelCapacity() const { return fuelCapacity; }
    virtual double GetFuelConsumption() const { return fuelConsumption; }
    virtual double GetSpeed(Weather weather) const {
        switch (weather) {
            case Weather::Sunny: return averageSpeedSunny;
            case Weather::Rain:  return averageSpeedRain;
            case Weather::Snow:  return averageSpeedSnow;
            default: return 0;
        }
    }

    virtual bool CanFinish(double circuitLength, Weather weather) const {
        double maxDistance = fuelCapacity / fuelConsumption * 100; // assuming fuel consumption is given per 100 km
        return maxDistance >= circuitLength;
    }
};

#endif
