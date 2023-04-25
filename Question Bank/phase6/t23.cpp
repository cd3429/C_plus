/*

23. Jemin wants to create an automate system which
compare two given strings and it returns 1 if both
strings are same and 0 otherwise. Create a C++ system for
helping Jemin using overloading concept.

*/

#include <iostream>
#include <string>
using namespace std;

class StringCompare {
public:
    StringCompare() {}

    // Overload the == operator to compare a string and a StringCompare object
    friend int operator==(const StringCompare& sc, const string& str) {
        if (sc.str_ == str) {
            return 1;
        } else {
            return 0;
        }
    }

    // Setter for the private member variable str_
    void setString(const string& str) {
        str_ = str;
    }

public : 
    string str_;
};

int main() {
    StringCompare sc;
    sc.setString("hello");
    string str1 = "hello";
    string str2 = "world";
    string str3 = "hello";

    cout << "Comparing \"" << sc.str_ << "\" and \"" << str1 << "\": " << (sc == str1) << endl;
    cout << "Comparing \"" << sc.str_ << "\" and \"" << str2 << "\": " << (sc == str2) << endl;
    cout << "Comparing \"" << sc.str_ << "\" and \"" << str3 << "\": " << (sc == str3) << endl;

    return 0;
}

