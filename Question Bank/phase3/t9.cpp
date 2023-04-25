/*

9. Create an Instagram filter by which we can easily
extract all digits and special symbols fron any username.
By doing so, we can retrieve a pure username with only
alphabets within it. Use C++ as a prime language to do
so.

*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string username, filtered_username;

    cout << "Enter your username: ";
    getline(cin, username);

    for (int i = 0; i < username.length(); i++) {
        char c = username[i];

        if (isalpha(c)) {
            filtered_username += c;
        }
    }

    cout << "Filtered username: " << filtered_username << endl;

    return 0;
}

