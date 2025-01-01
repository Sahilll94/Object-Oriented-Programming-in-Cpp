#include <iostream>
using namespace std;

// Base Class
class Engine {
public:
    void startEngine() {
        cout << "Engine started." << endl;
    }
};

// Another Base Class
class Transmission {
public:
    void setGear(int gear) {
        cout << "Gear set to " << gear << "." << endl;
    }
};

// Intermediate Class 1
class Car : public Engine {
public:
    void drive() {
        cout << "Car is driving." << endl;
    }
};

// Intermediate Class 2
class Truck : public Engine, public Transmission {
public:
    void haul() {
        cout << "Truck is hauling cargo." << endl;
    }
};

// Derived Class
class HybridVehicle : public Car, public Truck {
public:
    void activateHybridMode() {
        cout << "Hybrid mode activated." << endl;
    }
};

int main() {
    HybridVehicle hv;

    cout << "--------------------------------" << endl;

    // Accessing methods from various base and derived classes
    hv.Car::startEngine(); // Explicitly specifying which startEngine() to use
    hv.setGear(3);
    hv.drive();
    hv.haul();
    hv.activateHybridMode();

    cout << "--------------------------------" << endl;

    return 0;
}
