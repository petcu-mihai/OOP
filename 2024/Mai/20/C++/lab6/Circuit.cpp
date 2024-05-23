#include "Circuit.h"
#include <algorithm>
#include <iostream>

using namespace std;

void Circuit::Race() {
    for (auto& car : cars) {
        double speed = car->GetSpeed(weather);
        if (speed > 0) {
            double timeToComplete = length / speed;
            if (car->CanFinish(length, weather)) {
                results.push_back(make_pair(car.get(), timeToComplete));
            } else {
                didNotFinish.push_back(car.get());
            }
        }
    }

    // Sort results by the time it took to complete the circuit
    sort(results.begin(), results.end(), [](const auto& a, const auto& b) {
        return a.second < b.second;
    });
}

void Circuit::ShowFinalRanks() {
    cout << "Final Ranks:" << endl;
    for (const auto& result : results) {
        cout << "Car: " << typeid(*result.first).name()
             << " - Time: " << result.second << " hours" << endl;
    }
}

void Circuit::ShowWhoDidNotFinish() {
    cout << "Cars that did not finish:" << endl;
    for (const auto& car : didNotFinish) {
        cout << "Car: " << typeid(*car).name() << endl;
    }
}
