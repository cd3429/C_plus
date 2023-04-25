/*

11. Raman have an idea to impress his Computer Teacher by
solving Square Root of a number without using any
programming library. Write a C++ Program to help Raman.

*/

#include <iostream>

using namespace std;

double newton_sqrt(double x, double epsilon = 1e-6) {
    double guess = x / 2; // Initial guess
    double error = guess * guess - x; // Initial error

    while (error > epsilon) {
        guess = guess - (guess * guess - x) / (2 * guess); // Update guess using the formula
        error = guess * guess - x; // Calculate new error
    }

    return guess;
}

main() {
    double x;
    cout << "Enter a number: ";
    cin >> x;

    double sqrt_x = newton_sqrt(x);
    cout << "The square root of " << x << " is " << sqrt_x << endl;
}



