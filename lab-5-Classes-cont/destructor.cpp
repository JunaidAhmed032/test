#include <iostream>

using namespace std;

class MyClass {
public:
    int val1;
    float val2;
    string val3;
    // Constructor
    MyClass(int v1, float v2, string v3) {
        cout << "Constructor called" << endl;
        val1 = v1;
        val2 = v2;
        val3 = v3;
    }
    void display(){
        cout << val1 << " , " << val2 << " , " << val3 << endl;
    }
    // Destructor
    ~MyClass() {
        cout << "Destructor called" << endl;
        cout << "Object Deleted" << endl;
    }
};

int main() {
    // Destructor is automatically called when the object goes out of scope
    cout << "Inside main function" << endl;

    // Create an object
    MyClass obj(1,1.1,"something");

    obj.display();
    return 0;
}
