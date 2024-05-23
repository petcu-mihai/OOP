#ifndef SEAT_H
#define SEAT_H

#include "../Car.h"

class Seat : public Car {
public:
    Seat() : Car(50, 6, 180, 160, 150) {}
};

#endif
