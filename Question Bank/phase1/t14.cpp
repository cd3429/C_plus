/*

14. Gaurav must have to teach his little 5 years old baby
to check whether a given year is leap year or not. Write
a C++ Program to provide a solution for Gaurav.

*/

#include <iostream>

using namespace std;

int main() {
    int year;

    // Input the year
    cout << "Enter a year: ";
    cin >> year;

    // Check if the year is a leap year
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}


