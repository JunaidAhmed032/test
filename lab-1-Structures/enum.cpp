#include <iostream>
using namespace std;

// Define an enumeration named Weekday with constants for each day
enum class Weekday {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

int main() {
    // Declare a variable of type Weekday
    Weekday today = Weekday::Friday;

    // Access and print the value of the variable
    cout << "Today is ";
    
    switch (today) {
        case Weekday::Monday:
            cout << "Monday";
            break;
        case Weekday::Tuesday:
            cout << "Tuesday";
            break;
        case Weekday::Wednesday:
            cout << "Wednesday";
            break;
        case Weekday::Thursday:
            cout << "Thursday";
            break;
        case Weekday::Friday:
            cout << "Friday";
            break;
        case Weekday::Saturday:
            cout << "Saturday";
            break;
        case Weekday::Sunday:
            cout << "Sunday";
            break;
    }

    cout << "." << endl;

    return 0;
}
