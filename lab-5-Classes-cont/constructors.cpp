#include<iostream>

using namespace std;

class Student{
    public:
    int reg;
    string name;
    string dept;
    //Student(int r = 101, string n = "john", string dpt = "unknown") : reg(r), name(n), dept(dpt) { }
    Student(int reg = 101, string name = "john", string dept = "unknown"){
        this->reg = reg;
        this->name = name;
        this->dept = dept;
    }
    void display(){
        cout << "Registration:" << reg << endl;
        cout << "Name:\t" << name << endl;
        cout << "Department:" << dept << endl;
    }
};

int main(){
    Student s1(112,"ali","chemical");
    Student s2;
    s1.display();
    cout << "\t-------\n";
    s2.display();
}