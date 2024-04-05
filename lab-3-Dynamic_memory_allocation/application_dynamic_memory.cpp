#include<iostream>
using namespace std;

int main() {
    int max = 5; // Initial size of the array
    int* a = new int[max]; // Dynamically allocated array on the heap
    int n = max; // Current number of elements in the array
    char check;

    // Read initial values into the array
    cout << "Enter " << max << " values: " << endl;
    for(int i = 0; i < max; i++)
        {cin >> a[i];}

    do {
        // Prompt user if they want to enter more values
        cout << endl << "Wanna enter more values??(y/n) ";
        cin >> check;

        if (check == 'y' || check == 'Y') {
            max = max + 1; // Increase the size of the array
            int* temp = new int[max]; // Create a new bigger array

            // Copy values from the old array to the new one
            for (int i = 0; i < n; i++) {
                temp[i] = a[i];
            }

            delete [] a; // Free memory allocated for the old array
            a = temp; // Update 'a' to point to the new array

            // Prompt user for another value
            cout << "Enter another value: ";
            cin >> a[n]; // Add the new value to the end of the array
            n++; // Increment the count of elements in the array
        }
        else {
            break; // Exit the loop if user doesn't want to enter more values
        }
    } while (check == 'y' || check == 'Y');

    // Output the array values
    cout << endl << "Array Values:" << endl;
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";

    delete [] a; // Free memory allocated for the array

    return 0;
}
