/*

12. Nishant trapped in a cyber game, in which he only
gets some random amount of seconds for determining at
which exact time he has to leave that game. Wite a C++
program which converts that seconds into HH:MM:SS format.

*/

#include <iostream>
using namespace std;

int main() {
    int seconds, minutes, hours;

    cout << "Enter the number of seconds: ";
    cin >> seconds;

    minutes = seconds / 60;
    seconds = seconds % 60;
    hours = minutes / 60;
    minutes = minutes % 60;

    cout << "The time is " << hours << ":" << minutes << ":" << seconds << endl;

    return 0;
}

