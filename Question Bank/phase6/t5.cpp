/*

5. The two short sides of a right triangle are 6 cm and
13 cm. Find the length of the third side using Pythagoras
Theorem with help of C++.

*/

#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    const int a = 6; 
    const int b = 13; 
    double c; 

    c = sqrt(pow(a, 2) + pow(b, 2));

    cout << "The length of the hypotenuse is " << c << " cm" << endl;

    return 0;
}

