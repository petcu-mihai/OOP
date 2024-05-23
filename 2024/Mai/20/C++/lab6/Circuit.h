#ifndef CIRCUIT_H
#define CIRCUIT_H

#include <vector>
#include <memory>
#include "Car.h"
#include "Weather.h"

using namespace std;

class Circuit {
    double length;
    Weather weather;
    vector<unique_ptr<Car>> cars;
    vector<pair<Car*, double>> results; // Stores cars and their race completion time
    vector<Car*> didNotFinish; // Stores cars that did not finish the race  

public:
    Circuit() : length(0), weather(Weather::Sunny) {}

    void SetLength(double l) { length = l; }
    void SetWeather(Weather w) { weather = w; }
    
    void AddCar(Car* car) {
        cars.emplace_back(car);
    }

    void Race();
    void ShowFinalRanks();
    void ShowWhoDidNotFinish();
};

#endif
