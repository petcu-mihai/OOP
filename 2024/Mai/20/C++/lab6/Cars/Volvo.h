#ifndef VOLVO_H
#define VOLVO_H

#include "../Car.h"

class Volvo : public Car {
public:
    Volvo() : Car(60, 8, 180, 150, 120) {}  // Example values for capacity, consumption, and speeds
};

#endif
