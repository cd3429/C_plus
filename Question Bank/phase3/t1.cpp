/*

1. Nayan bet 1200 to his friend Kartik if he find
frequency of each characters in given String. Whereas
Dhruv bet 1500 to his friend Piyush if he finds it
first. Provide a C++ program to help this fellows so that
they can play this interesting game.

*/

#include <iostream>
#include <string>

using namespace std;

#include <iostream>
#include <string>

using namespace std;

int main() {
    string input_string;
    cout << "Enter a string: ";
    cin>>input_string;

    int freq[256] = { 0 };

    for (int i = 0; i < input_string.size(); i++) {
        char c = input_string[i];
        freq[c]++;
    }

    cout << "Frequency of each character in the string:\n";
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            cout << (char)i << ": " << freq[i] << endl;
        }
    }

    return 0;
}


