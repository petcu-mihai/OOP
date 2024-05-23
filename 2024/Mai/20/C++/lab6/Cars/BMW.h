#ifndef BMW_H
#define BMW_H

#include "../Car.h"

class BMW : public Car {
public:
    BMW() : Car(65, 6.5, 200, 180, 170) {}
};

#endif
