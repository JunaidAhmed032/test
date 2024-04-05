#include <iostream>

using namespace std;

class MyClass {
public:
    static int sharedValue; // Declaration of static data member
};

// Definition of static data member
int MyClass::sharedValue = 0;

int main() {
    MyClass objA;
    MyClass objB;

    // Both objA and objB can access and modify sharedValue
    objA.sharedValue = 5;
    cout << "Value of sharedValue (set by objA): " << objA.sharedValue << endl;

    objB.sharedValue = 10; // Modifying the same static member from objB
    cout << "Value of sharedValue (set by objB): " << objB.sharedValue << endl;

    // Now both objA and objB will have the same value for sharedValue
    cout << "Value of sharedValue (accessed by objA): " << objA.sharedValue << endl;

    return 0;
}
