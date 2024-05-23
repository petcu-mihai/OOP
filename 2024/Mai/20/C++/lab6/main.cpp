#include "Circuit.h"
#include "Cars/Volvo.h"
#include "Cars/BMW.h"
#include "Cars/Seat.h"
#include "Cars/Fiat.h"
#include "Cars/RangeRover.h"

int main() {
    Circuit c;
    c.SetLength(100);
    c.SetWeather(Weather::Rain);
    c.AddCar(new Volvo());
    c.AddCar(new BMW());
    c.AddCar(new Seat());
    c.AddCar(new Fiat());
    c.AddCar(new RangeRover());
    c.Race();
    c.ShowFinalRanks();
    c.ShowWhoDidNotFinish();
    return 0;
}
