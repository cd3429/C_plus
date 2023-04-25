/*

13. A fourth standard student forced by his teacher to
dentify if a given Character is Uppercase, Lowercase,
Digit or Special Character. Write a C++ Program to help
that student.

*/

#include <iostream>

using namespace std;

main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {
        cout << "The character is an uppercase letter." << endl;
    } else if (ch >= 'a' && ch <= 'z') {
        cout << "The character is a lowercase letter." << endl;
    } else if (ch >= '0' && ch <= '9') {
        cout << "The character is a digit." << endl;
    } else {
        cout << "The character is a special character." << endl;
    }

}

