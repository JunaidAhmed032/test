#include <iostream>
#include <string>

using namespace std;

int main() {
    const int SIZE = 5; // Number of strings in the array
    string strings[SIZE]; // Array of strings

    // Input loop to populate the array
    cout << "Enter " << SIZE << " strings:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter string " << (i + 1) << ": ";
        getline(cin, strings[i]);
    }

    // Output loop to display the array
    cout << "\nYou entered the following strings:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "String " << (i + 1) << ": " << strings[i] << endl;
    }

    return 0;
}