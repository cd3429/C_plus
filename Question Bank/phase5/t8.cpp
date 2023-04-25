/*

8. Design a C++ UDF which converts given seconds into
time in format of HH:MM:SS. Also create another UDF which
converts given time into total seconds. End user have
choice to perform either operations whenever he/she
wants.

*/

#include <iostream>
#include <sstream>
using namespace std;


string secondsToTime(int seconds) {
    int hours, minutes;
    hours = seconds / 3600;
    seconds %= 3600;
    minutes = seconds / 60;
    seconds %= 60;

    stringstream ss;
    ss << hours << ":" << minutes << ":" << seconds;
    return ss.str();
}

int timeToSeconds(string timeString) {
    int hours, minutes, seconds, totalSeconds;
    sscanf(timeString.c_str(), "%d:%d:%d", &hours, &minutes, &seconds);
    totalSeconds = hours * 3600 + minutes * 60 + seconds;
    return totalSeconds;
}

int main() {
    int choice, seconds;
    string timeString;
    cout << "Enter your choice: " << endl;
    cout << "1. Convert seconds to time in format of HH:MM:SS" << endl;
    cout << "2. Convert time in format of HH:MM:SS to total seconds" << endl;
    cin >> choice;

    if (choice == 1) {
        cout << "Enter the number of seconds to convert: ";
        cin >> seconds;
        string time = secondsToTime(seconds);
        cout << "The time in format of HH:MM:SS is: " << time << endl;
    }
    else if (choice == 2) {
        cout << "Enter the time in format of HH:MM:SS to convert: ";
        cin >> timeString;
        int totalSeconds = timeToSeconds(timeString);
        cout << "The total seconds is: " << totalSeconds << endl;
    }
    else {
        cout << "Invalid choice! Please try again." << endl;
    }

    return 0;
}


