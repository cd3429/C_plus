/*

7. Build a C++ program which helps students that how to
convert a given string in lowwercase, uppercase, title
case and toggle case whenever they wants by passing their
choice.

*/

#include <iostream>
#include <string>

using namespace std;

// function to convert string to lowercase
string toLowerCase(string str) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        }
    }
    return str;
}

// function to convert string to uppercase
string toUpperCase(string str) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        }
    }
    return str;
}

// function to convert string to title case
string toTitleCase(string str) {
    bool newWord = true;
    for (int i = 0; i < str.length(); i++) {
        if (newWord) {
            if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] -= 32;
            }
            newWord = false;
        } else {
            if (str[i] == ' ') {
                newWord = true;
            } else {
                if (str[i] >= 'A' && str[i] <= 'Z') {
                    str[i] += 32;
                }
            }
        }
    }
    return str;
}

// function to convert string to toggle case
string toToggleCase(string str) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        }
    }
    return str;
}

int main() {
    string str;
    int choice;
    
    cout << "Enter a string: ";
    getline(cin, str);
    
    cout << "Choose an option:\n";
    cout << "1. Convert to lowercase\n";
    cout << "2. Convert to uppercase\n";
    cout << "3. Convert to title case\n";
    cout << "4. Convert to toggle case\n";
    cout << "Enter your choice: ";
    cin >> choice;
    
    switch (choice) {
        case 1:
            cout << toLowerCase(str) << endl;
            break;
        case 2:
            cout << toUpperCase(str) << endl;
            break;
        case 3:
            cout << toTitleCase(str) << endl;
            break;
        case 4:
            cout << toToggleCase(str) << endl;
            break;
        default:
            cout << "Invalid choice!\n";
            break;
    }
    
    return 0;
}

