/*

10. A brand new smart device which meant to convert total
provided Days Into Years, Weeks and Days. But for some
technical interruption, that device stops working
properly. Write a C++ Program to provide a solution for
this.

*/

#include <iostream>

using namespace std;

int main() {
    int total_days, years, weeks, days;

    cout << "Enter total number of days: ";
    cin >> total_days;

    years = total_days / 365;
    total_days = total_days % 365;

    weeks = total_days / 7;
    days = total_days % 7;

    cout << years << " years, " << weeks << " weeks, and " << days << " days" << endl;

    return 0;
}


