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
    Engine* engine; // Car has an Engine (Aggregation)
public:
    Car(Engine* eng) : engine(eng) {} // Constructor
    void startCar() {
        engine->start();
    }
};

int main() {
    Engine myEngine;
    Car car(&myEngine);
    car.startCar(); // Output: "Engine started!"
    return 0;
}
