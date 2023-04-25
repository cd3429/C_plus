/*

11. Build a system which converts given message into
Cyphertext by adding custom letter or ASCII value. Also
provide decoding for that encoded text to understand
Indian Army to secure internal communication between
soldiers. Help them by creating a C++ program.

*/

#include <iostream>
#include <string>
using namespace std;

#include <iostream>
#include <string>

using namespace std;

int main() {
    string message;
    string key;
    cout << "Enter message to be encoded: ";
    getline(cin, message);
    cout << "Enter encryption key: ";
    getline(cin, key);

    string encoded_message = "";
    for (int i = 0; i < message.length(); i++) {
        char c = message[i];
        if (isalpha(c)) {
            c = toupper(c);
            int offset = key[i % key.length()] - 'A';
            c = ((c - 'A') + offset) % 26 + 'A';
        }
        encoded_message += c;
    }

    cout << "Encoded message: " << encoded_message << endl;

    string decoded_message = "";
    for (int i = 0; i < encoded_message.length(); i++) {
        char c = encoded_message[i];
        if (isalpha(c)) {
            c = toupper(c);
            int offset = key[i % key.length()] - 'A';
            c = ((c - 'A') - offset + 26) % 26 + 'A';
        }
        decoded_message += c;
    }

    cout << "Decoded message: " << decoded_message << endl;

    return 0;
}

