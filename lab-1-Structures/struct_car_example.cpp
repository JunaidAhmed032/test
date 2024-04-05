#include <iostream>
#include <string>

using namespace std;
// Define a structure named 'Car'
struct Car {
    // Member variables
    string make;
    string model;
    int year;
    double price;

    // Member function to display information
    void displayInfo() {
        cout << "Make: " << make << "\n";
        cout << "Model: " << model << "\n";
        cout << "Year: " << year << "\n";
        cout << "Price: $" << price << "\n";
    }
};

int main() {
    // Create an instance of the 'Car' structure
    Car myCar;

    // Assign values to the member variables
    myCar.make = "Toyota";
    myCar.model = "Camry";
    myCar.year = 2022;
    myCar.price = 25000.0;

    // Call the member function to display information
    myCar.displayInfo();

    return 0;
}
