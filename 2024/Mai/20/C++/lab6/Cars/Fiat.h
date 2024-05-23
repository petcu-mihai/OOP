#ifndef FIAT_H
#define FIAT_H

#include "../Car.h"

class Fiat : public Car {
public:
    Fiat() : Car(45, 5, 160, 140, 130) {}
};

#endif
