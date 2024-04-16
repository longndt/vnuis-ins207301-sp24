#include <iostream>
using namespace std;

class Engine {
public:
    void start() {
        // Code to start the engine
        cout << "Engine started!" << endl;
    }
};

class Car {
public:
    Car() {}
    void startCar() {
        engine.start();
    }
private:
    Engine engine;
};

int main() {
    Car car;
    car.startCar();
    return 0;
}
