/*

7. Priyank needs to find an average of three numbers to
gain required passing marks in exam. Write a C++ Program
to helps Priyank to solve his issue.

*/

#include <iostream>

using namespace std;

int main() {
    float num1, num2, num3, avg;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter the third number: ";
    cin >> num3;

    // Calculate the average
    avg = (num1 + num2 + num3) / 3.0;

    cout << "The average of " << num1 << ", " << num2 << " and " << num3 << " is: " << avg << endl;

    return 0;
}

