#include <iostream>

using namespace std;

struct ElectronicItem {
    string name;
    double price;
};

// Standalone function to perform electronic store functionality
double electronicStore() {
    const int itemCount = 10;
    ElectronicItem electronicItems[itemCount] = {
        {"Laptop", 999.99},
        {"Smartphone", 499.99},
        {"Headphones", 79.99},
        {"Smart TV", 699.99},
        {"Digital Camera", 299.99},
        {"Tablet", 299.99},
        {"Gaming Console", 399.99},
        {"Wireless Earbuds", 129.99},
        {"Fitness Tracker", 49.99},
        {"External Hard Drive", 89.99}
    };

    string purchasedItems[itemCount];
    double totalCost = 0.0;
    int purchasedItemCount = 0;

    while (true) {
        cout << "Electronic Store Menu:" << endl;
        cout << "Item               Price" << endl;
        cout << "------------------------" << endl;

        for (int i = 0; i < itemCount; ++i) {
            cout << i + 1 << ". " << electronicItems[i].name << "       $" << electronicItems[i].price << endl;
        }

        cout << "Enter the number of the item you want to purchase (0 to finish): ";
        int choice;
        cin >> choice;

        if (choice >= 1 && choice <= itemCount) {
            purchasedItems[purchasedItemCount++] = electronicItems[choice - 1].name;
            totalCost += electronicItems[choice - 1].price;
        } else if (choice == 0) {
            break;  // User is done shopping
        } else {
            cout << "Invalid choice. Please enter a valid item number." << endl;
        }
    }

    // Display the receipt
    cout << "\nReceipt:" << endl;
    cout << "------------------------" << endl;

    for (int i = 0; i < purchasedItemCount; ++i) {
        cout << purchasedItems[i] << endl;
    }

    cout << "\nTotal Cost: $" << totalCost << endl;

    return totalCost;
}
