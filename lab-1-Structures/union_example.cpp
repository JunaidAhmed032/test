#include<iostream>
#include<string>

using namespace std;

union student{
    double salary;
    float cgpa;
    char i;
    int reg;
    int age;
};

int main(){
    student s1;
    s1.i = 'a';
    s1.reg = 110;
    cout << "initial of the name : "<<s1.i << endl;
    cout << "registration number : "<<s1.reg << endl;
}