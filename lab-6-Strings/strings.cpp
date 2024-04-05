#include<iostream>
#include<cstring>
#include<string>

using namespace std;

int main(){
    string shortinput, longinput;

    cout << "Enter only one word" << endl;
    cin >> shortinput;
    cin.ignore();
    cout << "Enter more than one word" << endl;
    getline(cin, longinput);

    cout << "Short Word: " << shortinput<<endl;
    cout << "Long Word: " << longinput << endl; 


}