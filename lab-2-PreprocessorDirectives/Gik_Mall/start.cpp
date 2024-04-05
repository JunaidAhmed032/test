#include<iostream>
#include "Electronic.cpp"
#include "Clothing.cpp"
#include "Cafe.cpp"

using namespace std;

int main(){
        cout << "\t==* Welcome to GIK Mall *==" << endl;

    double electronicTotal = 0.0;
    double clothingTotal = 0.0;
    double coffeeTotal = 0.0;

    char choice;

    do {
        cout << "Enter the Ground Level to Shop From Desired Section:\n";
        cout << "1. Electronic Store\n";
        cout << "2. Clothing Store\n";
        cout << "3. Coffee Shop\n";
        cout << "F. Finish and View Total Bill\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case '1':
                cout << "\nElectronic Store Section:\n";
                electronicTotal += electronicStore();
                break;

            case '2':
                cout << "\nClothing Store Section:\n";
                clothingTotal += clothingStore();
                break;

            case '3':
                cout << "\nCoffee Shop Section:\n";
                coffeeTotal += coffeeShop();
                break;

            case 'F':
            case 'f':
                break;  // User wants to finish and view total bill

            default:
                cout << "Invalid choice. Please enter a valid option.\n";
        }

    } while (choice != 'F' && choice != 'f');

    // Display the overall receipt
    cout << "\t===========\n";
    cout << "\nOverall Receipt:" << endl;
    cout << "------------------------" << endl;

    cout << "Electronic Store Total: $" << electronicTotal << endl;
    cout << "Clothing Store Total: $" << clothingTotal << endl;
    cout << "Coffee Shop Total: $" << coffeeTotal << endl;

    double grandTotal = electronicTotal + clothingTotal + coffeeTotal;
    cout << "\nGrand Total: $" << grandTotal << endl;

    cout << "\nThank you for shopping at GIK Mall! Have a great day!" << endl;

    return 0;
}