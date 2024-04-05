#include<iostream>
using namespace std;

#define LINUX 0
#define WINDOWS 1
#define ANDROID 2
#define IOS 3
#define OS IOS


int main(){
    #if OS == IOS
        cout << "We are on Apple"<< endl;
    #elif OS == WINDOWS
        cout << "We are on windows" << endl;
    #elif OS == LINUX
        cout << "we are on Linux " << endl;
    #else
        cout << "System Unsupported" << endl;
    #endif
    cout << "out of there" << endl;
}