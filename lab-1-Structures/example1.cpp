// today's agenda:
// What is a structure?
// working with structure
// typedef? but why...
// what is union? different?
// Enum....
#include<iostream>

using namespace std;

typedef struct person{
    string name;
    int reg;
    float height;

    void displayInfo(){
        cout << "Name : " << name << endl;
    cout << "Registration Number : " << reg << endl;
    cout << "Height : " << height << endl;
    }
}pr;

int main(){
    person p1;
    cout << "Name of this person : " << endl;
    getline(cin, p1.name);
    cout << "Enter Registration:" << endl;
    cin >> p1.reg;
    cout << "Enter Height" << endl;
    cin >> p1.height;
    
    p1.displayInfo();
    cout << "\t====================="<< endl;

    pr p2;
    p2.name = "xyz";
    p2.height = 6.2;
    p2.reg = 333;

    p2.displayInfo();
}