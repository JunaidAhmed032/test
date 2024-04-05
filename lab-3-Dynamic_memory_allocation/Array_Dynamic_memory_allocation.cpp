#include <iostream>

using namespace std;

int main() {
    int size;
    
    // Ask the user for the size of the array
    cout << "Enter the size of the array: ";
    cin >> size;
    
    // Dynamically allocate memory for an integer array of given size
    int* arr = new int[size];
    
    // Check if memory allocation was successful
    if (arr == nullptr) {
        cerr << "Failed to allocate memory" << endl;
        return 1;
    }
    
    // Read integers from the user and store them in the array
    cout << "Enter " << size << " integers:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    
    // Display the elements of the array
    cout << "The array elements are: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Deallocate the dynamically allocated memory
    delete[] arr;
    cout << "Array has been Deleted: " << endl;
    cout << "The array elements are: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
