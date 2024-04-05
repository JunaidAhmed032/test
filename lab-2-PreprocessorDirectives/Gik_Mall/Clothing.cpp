#include <iostream>

using namespace std;

struct ClothingItem {
    string name;
    double price;
};

// Standalone function to perform clothing store functionality
double clothingStore() {
    const int itemCount = 8;
    ClothingItem clothingItems[itemCount] = {
        {"T-Shirt", 19.99},
        {"Jeans", 39.99},
        {"Hoodie", 29.99},
        {"Dress Shirt", 34.99},
        {"Skirt", 24.99},
        {"Jacket", 49.99},
        {"Sweater", 39.99},
        {"Shorts", 17.99}
    };

    string purchasedItems[itemCount];
    double totalCost = 0.0;
    int purchasedItemCount = 0;

    while (true) {
        cout << "Clothing Store Menu:" << endl;
        cout << "Item               Price" << endl;
        cout << "------------------------" << endl;

        for (int i = 0; i < itemCount; ++i) {
            cout << i + 1 << ". " << clothingItems[i].name << "       $" << clothingItems[i].price << endl;
        }

        cout << "Enter the number of the item you want to purchase (0 to finish): ";
        int choice;
        cin >> choice;

        if (choice >= 1 && choice <= itemCount) {
            purchasedItems[purchasedItemCount++] = clothingItems[choice - 1].name;
            totalCost += clothingItems[choice - 1].price;
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
