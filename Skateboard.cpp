
#include "Skateboard.h"
#include <ctime>


Skateboard::Skateboard(string brand, string model) {
    setBrand(brand);
    setModel(model);
}

Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double time) {
    srand(time(0));
    double i = rand() % 40 + 10; //gives number between 50 and 10
    double random = i/100;
    double i2 = rand() % (time/3 - 1) + 1; //gives number between 1 and a third of time
    double mileage = random;
    if (time > 25 && time < 250){
        mileage += i2;
    }
    return mileage;
}

string Skateboard::toString() {
    string s = "-> Skateboard\n\t";
    return "-> Skateboard\n" + Vehicle::toString();
}
