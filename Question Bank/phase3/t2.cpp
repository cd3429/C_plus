/*

2. Design a system in which if a length of a String is
greater than 3 and less than 9, then it returns reverse
of that string. Otherwise, it returns sum of each
letters’ ASCII value. Use C++ for building this type of
system.

*/

#include <iostream>
#include <string>

using namespace std;

string reverse_string(string str) {
    string reversed_str;
    for (int i = str.length() - 1; i >= 0; i--) {
        reversed_str += str[i];
    }
    return reversed_str;
}

int sum_ascii_values(string str) {
    int sum = 0;
    for (int i = 0; i < str.length(); i++) {
        sum += (int)str[i];
    }
    return sum;
}

int main() {
    string input_string;
    cout << "Enter a string: ";
    getline(cin, input_string);

    int length = input_string.length();
    if (length > 3 && length < 9) {
        cout << "Reversed string: " << reverse_string(input_string) << endl;
    } else {
        cout << "Sum of ASCII values: " << sum_ascii_values(input_string) << endl;
    }

    return 0;
}

