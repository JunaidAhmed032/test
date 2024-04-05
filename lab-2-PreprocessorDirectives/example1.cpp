/*
There are 4 types of Directives:
1. Macros
    Square Function
    Area of Circle
2. File Inclusion
    Demonstration Example
    GIK Cafe System
3. Conditional Directives
    #ifdef
    #if-else
4. Other Directives
*/

#include<iostream>
using namespace std;


int main(){
    int x,y;
    int *x_ptr = &x;
    int *y_ptr = &y;
    x=5;
    y=7;
    cout << "the value of x is :" << x << "\nStored at the address : " << x_ptr << endl;
    cout << "the value of y is :" << y << "\nStored at the address : " << y_ptr << endl;

}