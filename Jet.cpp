
#include "Jet.h"
#include <ctime>

Jet::Jet() {
    setBrand("Custom");
    setModel("VTx");
}

Jet::Jet(string brand, string model, string fuelType, int numEngines) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setNumEngines(numEngines);
}

Jet::~Jet() = default;

int Jet::getNumEngines(){
    return numberOfEngines;
}

void Jet::setNumEngines(int numEngines) {
    numberOfEngines = numEngines;
}

double Jet::mileageEstimate(double time) {srand(time(0));
    srand(time(0));
    double i = rand() % 60 + 40; //gives number between 40 and 100
    double mileage = i;
    if (numberOfEngines > 2 && fuelType == "Rocket") {
        mileage += numbeeofEngines * (mileage * 0.055);
    }
    return mileage;
}

string Jet::toString() {
    return "-> Jet\n" + PoweredVehicle::toString() + "\n\tNumber of Engines: " +
           getNumEngines();
}
