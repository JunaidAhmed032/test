#include<iostream>
#include<string>

using namespace std;

struct person {
    string name;
    int reg;
};

int main() {
    const int arraySize = 3;  // You can change this to the desired size of the array
    person arr[arraySize];

    // Input values for each person in the array
    for (int i = 0; i < arraySize; ++i) {
        cout << "Enter name for person " << i + 1 << ": ";
        cin >> arr[i].name;

        cout << "Enter registration for person " << i + 1 << ": ";
        cin >> arr[i].reg;
    }

    // Print the values of each person in the array
    for (int i = 0; i < arraySize; ++i) {
        cout << "Person " << i + 1 << ": Name = " << arr[i].name << ", Registration = " << arr[i].reg << endl;
    }

    return 0;
}
