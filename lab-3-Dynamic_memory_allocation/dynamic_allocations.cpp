#include<iostream>

using namespace std;

int main(){
    //demonstrating dynamic allocation
    //referencing and dereferencing
    //deleting too
    int *ptr_var;
    ptr_var = new int;
    *ptr_var = 40;
    cout << "this is the address: "<<ptr_var<<endl; //address
    cout<< "Value at the address "<<ptr_var<<" is " <<*ptr_var<<endl; //value
}