/* Defining a class
   Setting Attributes
   Access Specifiers
    public
    private
    protected
   Class Methods
    Inside the class
    Outside the class 
   Encapsulation
    Setter
    Getter  

*/
#include<iostream>

using namespace std;
class Student{
    private:
    int reg;
    string name;
    string dept;
    public:
    void setatb(){
        cout << "Enter the Name of student: " << endl;
        cin >> name;
        cout << "Enter the Registration Number of student: " << endl;
        cin >> reg;
        cout << "Enter the Department of student: " << endl;
        cin >> dept;
    }
    void getatb(){
        cout << "Name of student: " << name << endl;
        cout << "Registration Number of student: " << reg << endl;
        cout << "Department of student: " << dept << endl;
    }
};
int main(){
    Student s1;
    s1.setatb();
    s1.getatb();
    
    
}