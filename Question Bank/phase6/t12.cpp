/*

12. Prince wants to create a 24 Hr time convertor app in
C++. In this app, user can provide any 24 Hr time he/she
wants but output must be produced in 12 Hr format.
For example,
i/p: 15 Hr, 32 Minutes
o/p: 3:32 PM

*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    int hour, minute;
    string timePeriod;

    // Input
    cout << "Enter time in 24-hour format (HH MM): ";
    cin >> hour >> minute;

    // Convert to 12-hour format
    if (hour > 12) {
        hour -= 12;
        timePeriod = "PM";
    } else {
        timePeriod = "AM";
    }
    if (hour == 0) {
        hour = 12;
    }

    // Output
    cout << "Time in 12-hour format: " << (hour < 10 ? "0" : "") << hour << ":" << (minute < 10 ? "0" : "") << minute << " " << timePeriod << endl;

    return 0;
}


