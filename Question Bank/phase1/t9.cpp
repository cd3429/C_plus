/*

9. An innocent boy must have to solve that how to raise
any number(Base) to power N for proving his common
ability among all classmates. Write a C++ Program to
provide a solution for this boy.

*/

#include <iostream>

using namespace std;

int main() {
    double base, result = 1.0;
    int n;

    cout << "Enter the base number: ";
    cin >> base;

    cout << "Enter the power (as an integer): ";
    cin >> n;

    // Calculate the result using a loop
    for (int i = 1; i <= n; i++) {
        result = result*base;
    }

    cout << base << " raised to the power of " << n << " is " << result << endl;

    return 0;
}


