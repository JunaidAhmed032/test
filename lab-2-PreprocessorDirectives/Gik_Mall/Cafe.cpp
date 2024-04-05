#include <iostream>

using namespace std;

struct CoffeeItem {
    string name;
    double price;
};

// Standalone function to perform coffee shop functionality
double coffeeShop() {
    const int itemCount = 5;
    CoffeeItem coffeeItems[itemCount] = {
        {"Black Coffee", 2.99},
        {"Latte", 4.49},
        {"Cappuccino", 3.99},
        {"Espresso", 3.49},
        {"Iced Coffee", 3.79}
    };

    string purchasedItems[itemCount];
    double totalCost = 0.0;
    int purchasedItemCount = 0;

    while (true) {
        cout << "Coffee Shop Menu:" << endl;
        cout << "Item                     Price" << endl;
        cout << "---------------------------------" << endl;

        for (int i = 0; i < itemCount; ++i) {
            cout << i + 1 << ". " << coffeeItems[i].name << "       $" << coffeeItems[i].price << endl;
        }

        cout << "Enter the number of the item you want to purchase (0 to finish): ";
        int choice;
        cin >> choice;

        if (choice >= 1 && choice <= itemCount) {
            purchasedItems[purchasedItemCount++] = coffeeItems[choice - 1].name;
            totalCost += coffeeItems[choice - 1].price;
        } else if (choice == 0) {
            break;  // User is done ordering
        } else {
            cout << "Invalid choice. Please enter a valid item number." << endl;
        }
    }

    // Display the receipt
    cout << "\nReceipt:" << endl;
    cout << "---------------------------------" << endl;

    for (int i = 0; i < purchasedItemCount; ++i) {
        cout << purchasedItems[i] << endl;
    }

    cout << "\nTotal Cost: $" << totalCost << endl;

    return totalCost;
}
