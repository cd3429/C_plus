/*

13. Design an EMI Calculator for deciding accurate EMI
price of ex-showroom car models to help an executive to
easily guide his consumers. Use C++ to build this type of
system.

*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double principal, interest_rate, tenure_years, emi;
    int tenure_months;

    cout << "Enter the principal amount: ";
    cin >> principal;

    cout << "Enter the interest rate per annum: ";
    cin >> interest_rate;

    cout << "Enter the tenure (in years): ";
    cin >> tenure_years;

    tenure_months = tenure_years * 12;
    interest_rate /= (12 * 100);

    emi = (principal * interest_rate * pow(1 + interest_rate, tenure_months)) / (pow(1 + interest_rate, tenure_months) - 1);

    cout << "The EMI is Rs. " << emi << endl;

    return 0;
}

