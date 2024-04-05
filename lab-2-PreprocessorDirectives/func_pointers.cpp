#include <iostream>

using namespace std;

// Function taking two integers and returning their sum
int add(int x, int y) {
    return x + y;
}

// Function taking two integers and returning their difference
int subtract(int x, int y) {
    return x - y;
}

// Function pointer declaration: points to a function taking two integers and returning an integer
int (*operation_ptr)(int, int);

int main() {
    // Set operation_ptr to point to the add function
    operation_ptr = add;

    // Call the function indirectly using the pointer
    int result = (*operation_ptr)(5, 3);
    cout << "5 + 3 using add function pointer: " << result << endl;

    // Change the pointer to point to the subtract function
    operation_ptr = subtract;

    // Call the function indirectly using the pointer again
    result = (*operation_ptr)(7, 2);
    cout << "7 - 2 using subtract function pointer: " << result << endl;

    return 0;
}
