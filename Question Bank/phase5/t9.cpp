/*

9. A Supreme Court wants a system which automatically
figure out difference of two given time whether it is in
seconds or any other format. Develop a solution in C++
using UDF.

*/

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

using namespace std;


int timeToSeconds(string timeString) {
    int hours, minutes, seconds, totalSeconds;
    sscanf(timeString.c_str(), "%d:%d:%d", &hours, &minutes, &seconds);
    totalSeconds = hours * 3600 + minutes * 60 + seconds;
    return totalSeconds;
}

string timeDifference(string time1, string time2) {
    int seconds1 = timeToSeconds(time1);
    int seconds2 = timeToSeconds(time2);
    int diffSeconds = abs(seconds1 - seconds2);
    int hours = diffSeconds / 3600;
    diffSeconds %= 3600;
    int minutes = diffSeconds / 60;
    diffSeconds %= 60;

    stringstream ss;
    ss << hours << ":" << minutes << ":" << diffSeconds;

    return ss.str();
}

main() {
    string time1, time2;
    cout << "Enter the first time in format of HH:MM:SS: ";
    cin >> time1;
    cout << "Enter the second time in format of HH:MM:SS: ";
    cin >> time2;

    string diffTime = timeDifference(time1, time2);
    cout << "The difference between the two times is: " << diffTime << endl;

}

