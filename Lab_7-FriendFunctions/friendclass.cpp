#include <iostream>

using namespace std;

// // Forward declaration of class B
// class B;

// Class A declaration
class A {
private:
    int privateA;

public:
    A() : privateA(1000) {}

    int getPrivateA() {
        return privateA;
    }

    // Function to set privateA
    void setPrivateA(int value) {
        privateA = value;
    }


    // Declaration of friend class B
    friend class B;
};

// Class B declaration
class B {
private:
    int privateB;

public:
    B() : privateB(2000) {}

    // Function to access privateB
    int getPrivateB() {
        return privateB;
    }

    // Function to set privateB
    void setPrivateB(int value) {
        privateB = value;
    }

    // Function to access privateA from class A
    void displayPrivateA(A objA) {
        cout << "Updated PrivateA from class A: " << objA.privateA << endl;
    }
};

int main() {
    A objA;
    B objB;
    cout<< "current value of PrivateA: " << objA.getPrivateA()<<endl;
    cout<< "current value of PrivateB: " << objB.getPrivateB()<<endl;
    objA.setPrivateA(5); // Accessing private member of A
    objB.setPrivateB(10); // Accessing private member of B

    // Accessing private members of class A from class B
    objB.displayPrivateA(objA);

    return 0;
}
