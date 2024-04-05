#include<iostream>

using namespace std;

class Person{
    private:
    string name;
    float height;
    int age;
    // Person(string name, float height, int age){
    //     this->name = name;
    //     this->height = height;
    //     this->age = age;
    // }
    public:
    Person(string n =, float h, int a) : name(n), height(h), age(a) {}
    void show(){
        cout << "Name : " << name << endl;
        cout << "Height : " << height << endl;
        cout << "Age : " << age << endl;
    }
};

int main(){
   Person p1("ali", 6.1, 22);
   p1.show();
    
}