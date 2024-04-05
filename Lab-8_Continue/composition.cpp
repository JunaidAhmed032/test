#include <iostream>

using namespace std;

class Engine {
public:
    void start() {
        cout << "Engine started!" << endl;
    }
};

class Car {
private:
    Engine engine; // Car owns the Engine (Composition)
public:
    void startCar() {
        engine.start();
    }
};

int main() {
    Car car;
    car.startCar(); // Output: "Engine started!"
    return 0;
}
