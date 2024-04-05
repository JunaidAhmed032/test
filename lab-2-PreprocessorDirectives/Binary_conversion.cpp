#include <iostream>
#include <iomanip>
#include <bitset>
using namespace std;

// Function to convert integers to binary representation
void binary(int u)
{
    cout << setw(5) << u << ": ";        // setw(5) sets the width for better formatting
    cout << bitset<8>((int)u);          // Convert 'u' to a binary representation with 16 bits
    cout << "\n";                         // Move to the next line for better readability
}

int main()
{
    // Demonstrate the binary conversion for different integers
    binary(5);
    binary(55);
    binary(255);
    binary(4555);
    binary(5000);

    // Pause the console to keep the output visible (Platform-specific)
    // #ifdef _WIN32   // Check if the program is running on Windows
    //     system("PAUSE");
    // #else           // For non-Windows systems (e.g., Linux)
    //     cout << "Press Enter to continue...";
    //     cin.ignore();
    //#endif

    return 0;
}
