/*

5. An Indian Airport needs an identification system to
easily extract all types of vowels, consonants, digits
and spacial symbols from Highjackers’ communicative
messages to identify their next move. Help Indian
Airlines by building a C++ program which prime purpose is
to identify all string literals.

*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string message;
    int vowels = 0, consonants = 0, digits = 0, symbols = 0;

    cout << "Enter the message: ";
    getline(cin, message);

    for (int i = 0; i < message.length(); i++) {
        if (isalpha(message[i])) {
            if (message[i] == 'a' || message[i] == 'e' || message[i] == 'i' || message[i] == 'o' || message[i] == 'u' ||
                message[i] == 'A' || message[i] == 'E' || message[i] == 'I' || message[i] == 'O' || message[i] == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        } else if (isdigit(message[i])) {
            digits++;
        } else {
            symbols++;
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Digits: " << digits << endl;
    cout << "Special symbols: " << symbols << endl;

    return 0;
}

