/*

15. Aaryan is constantly trying to Check Whether a
character is Vowel or Consonant. But for some unknown
reason he just cannot remember difference between vowel
and consonant. Write a C++ Program to provide a better
solution to Aaryan.

*/

#include <iostream>

using namespace std;

main() {
    char ch;

    // Input the character
    cout << "Enter a character: ";
    cin >> ch;

    // Check if the character is a vowel or consonant
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        cout << ch << " is a vowel." << endl;
    } else {
        cout << ch << " is a consonant." << endl;
    }

}

