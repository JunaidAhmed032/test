#include <iostream>

using namespace std;

class MyClass {
private:
    int x;
    static int count; // Declaration of static data member

public:
    MyClass(int val) : x(val) {
        count++; // Increment count each time an object is created
    }

    static void showCount() { // Declaration of static member function
        cout << "Total objects created: " << count << endl;
    }

    void showX() {
        cout << "Value of x: " << x << endl;
    }
};

// Definition of static data member
int MyClass::count = 0;

int main() {
    MyClass obj1(10);
    MyClass obj2(20);
    MyClass obj3(30);

    obj1.showX();
    obj2.showX();
    obj3.showX();

    MyClass::showCount(); // Accessing static member function without object

    return 0;
}
