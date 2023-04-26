/*

14. Develop a solution for Income Tax Department for
identify which person have to pay how much tax basis on
his/her income using C++ and pre-defined percentage
criteria for tax calculation.

*/

#include <iostream>
using namespace std;

int main() {
    float income, tax;

    cout << "Enter your income: ";
    cin >> income;

    if (income <= 250000) {
        tax = 0;
    }
    else if (income <= 500000) {
        tax = (income - 250000) * 0.05;
    }
    else if (income <= 1000000) {
        tax = (income - 500000) * 0.2 + 12500;
    }
    else {
        tax = (income - 1000000) * 0.3 + 112500;
    }

    cout << "Tax to be paid: " << tax << " INR" << endl;

    return 0;
}

