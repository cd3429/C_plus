/*

10. List of some historical words by some famous
Philosopher has been written in his diary. But all that
words are only can be read if we put that word in front
of mirror. So write a C++ program to design it.

*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter a word: ";
    getline(cin, input);
    string mirror = "";
    for (int i = input.length() - 1; i >= 0; i--) {
        mirror += input[i];
    }
    cout << "Mirror image: " << mirror << endl;
    return 0;
}

