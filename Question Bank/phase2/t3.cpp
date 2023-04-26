/*

3. Write a C++ Program to solve this mathematical
equation to find out write answer for passing math’s
exam: 2(x-3)=4x-1

*/

#include <iostream>
using namespace std;

int main() {
    float x;
    cout << "Solving the equation 2(x-3)=4x-1\n";
    cout << "Enter the value of x: ";
    cin >> x;

    if(2*(x-3) == 4*x-1) {
        cout << "x = " << x << " is a solution to the equation.\n";
    } else {
        cout << "x = " << x << " is not a solution to the equation.\n";
    }

    return 0;
}

