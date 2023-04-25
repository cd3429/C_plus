/*

12. A math teacher wants to teach how to find a Simple
Interest. Write a C++ Program to provide a solution for
this.

*/

#include <iostream>

using namespace std;
main() {
	
    double principal, rate, time, interest;


    cout << "Enter the principal amount: ";
    cin >> principal;
    cout << "Enter the interest rate (as a decimal): ";
    cin >> rate;
    cout << "Enter the time period (in years): ";
    cin >> time;

    interest = principal * rate * time;

    cout << "The simple interest is: " << interest << endl;

}

