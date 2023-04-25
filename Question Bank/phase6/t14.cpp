/*

14. Calculate an Electricity Bill of a House of one month
based on total units burned. Develop a C++ solution for
this calculation.

*/

#include <iostream>

using namespace std;

int main() {
    const int UNIT_RATE = 7; // per unit rate in INR
    int unitsBurned;

    cout << "Enter the total units burned: ";
    cin >> unitsBurned;

    double bill = unitsBurned * UNIT_RATE;

    cout << "Your electricity bill for the month is: " << bill << " INR\n";

    return 0;
}

