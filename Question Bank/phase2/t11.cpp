/*

11. A Mountain Tracker needs a Temperature Converter for
maintaining his tracking at Mount Everest. Build
temperature converter for that tracker using C++ as your
primary language.

*/

#include <iostream>
using namespace std;

int main() {
    int choice;
    double temp, convertedTemp;

    cout << "Temperature Converter" << endl;
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter the temperature in Celsius: ";
        cin >> temp;
        convertedTemp = (temp * 9/5) + 32;
        cout << temp << " degrees Celsius is equal to " << convertedTemp << " degrees Fahrenheit." << endl;
    } else if (choice == 2) {
        cout << "Enter the temperature in Fahrenheit: ";
        cin >> temp;
        convertedTemp = (temp - 32) * 5/9;
        cout << temp << " degrees Fahrenheit is equal to " << convertedTemp << " degrees Celsius." << endl;
    } else {
        cout << "Invalid choice." << endl;
    }

    return 0;
}

