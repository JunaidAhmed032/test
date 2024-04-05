#include <iostream>
#include <string>

using namespace std;

// Define a structure named 'FighterJet'
struct FighterJet {
    // Member variables
    string model;
    string manufacturer;
    int maxSpeed;  // in miles per hour
    int maxAltitude;  // in feet
    int generation;  // e.g., 4th generation, 5th generation, etc.
    bool isStealth;  // true if the jet has stealth capabilities
    string weaponSystem;  // e.g., AIM-120 AMRAAM, AIM-9 Sidewinder, etc.

    // Member function to display information
    void displayInfo() {
        cout << "Model: " << model << "\n";
        cout << "Manufacturer: " << manufacturer << "\n";
        cout << "Max Speed: " << maxSpeed << " mph\n";
        cout << "Max Altitude: " << maxAltitude << " feet\n";
        cout << "Generation: " << generation << "th generation\n";
        cout << "Stealth: " << (isStealth ? "Yes" : "No") << "\n";
        cout << "Weapon System: " << weaponSystem << "\n";
    }
};

int main() {
    // Create an instance of the 'FighterJet' structure
    FighterJet myJet;

    // Assign values to the member variables
    myJet.model = "F-22 Raptor";
    myJet.manufacturer = "Lockheed Martin";
    myJet.maxSpeed = 1500;
    myJet.maxAltitude = 65000;
    myJet.generation = 5;
    myJet.isStealth = true;
    myJet.weaponSystem = "AIM-120 AMRAAM";

    // Call the member function to display information
    myJet.displayInfo();

    return 0;
}
