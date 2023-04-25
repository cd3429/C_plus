/*

11. Build an Indian Regional Festival system in C++. User
can enter any date of current running year, and bases on
that date display which festival will be coming on that
date.

*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    int day, month, year;

    cout << "Enter date (DD MM YYYY): ";
    cin >> day >> month >> year;

    if (month == 1 && day == 1) {
        cout << "New Year's Day" << endl;
    } else if (month == 1 && day == 14) {
        cout << "Makar Sankranti / Pongal" << endl;
    } else if (month == 1 && day == 26) {
        cout << "Republic Day" << endl;
    } else if (month == 3 && day == 11) {
        cout << "Mahashivratri" << endl;
    } else if (month == 4 && day == 2) {
        cout << "Good Friday" << endl;
    } else if (month == 4 && day == 14) {
        cout << "Ambedkar Jayanti" << endl;
    } else if (month == 4 && day == 21) {
        cout << "Ram Navami" << endl;
    } else if (month == 4 && day == 25) {
        cout << "Mahavir Jayanti" << endl;
    } else if (month == 5 && day == 1) {
        cout << "Labour Day" << endl;
    } else if (month == 5 && day == 13) {
        cout << "Eid al-Fitr" << endl;
    } else if (month == 7 && day == 21) {
        cout << "Eid al-Adha" << endl;
    } else if (month == 8 && day == 15) {
        cout << "Independence Day" << endl;
    } else if (month == 9 && day == 10) {
        cout << "Ganesh Chaturthi" << endl;
    } else if (month == 10 && day == 2) {
        cout << "Gandhi Jayanti" << endl;
    } else if (month == 10 && day == 19) {
        cout << "Dussehra" << endl;
    } else if (month == 11 && day == 4) {
        cout << "Diwali" << endl;
    } else if (month == 12 && day == 25) {
        cout << "Christmas" << endl;
    } else {
        cout << "No festival on this date" << endl;
    }

    return 0;
}



