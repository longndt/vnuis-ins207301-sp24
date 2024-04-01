#include <iostream>
using namespace std;

// Abstract class
class Vehicle {
public:
    virtual void startEngine() const = 0;
};

class Car : public Vehicle {
public:
    void startEngine() const override {
        cout << "Car engine started." << endl;
    }
};

class Motorcycle : public Vehicle {
public:
    void startEngine() const override {
        cout << "Motorcycle engine started." << endl;
    }
};
