/*

7. Build a C++ system which helps a Mathematician to
figure out the type of a Triangle. Bases on Pythagoras’
theorem, find out if a triangle is: obtuse, right or
acute.

*/

#include <iostream>
using namespace std;

int main() {
    double a, b, c; // lengths of the sides of the triangle

    // input the lengths of the sides
    cout << "Enter the lengths of the sides of the triangle: ";
    cin >> a >> b >> c;

    // check if the given sides form a triangle
    if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "The given sides do not form a triangle." << endl;
        return 0;
    }

    // sort the sides in ascending order
    if (a > b) swap(a, b);
    if (a > c) swap(a, c);
    if (b > c) swap(b, c);

    // check the type of the triangle based on Pythagoras' theorem
    if (a*a + b*b > c*c) {
        cout << "The given triangle is acute." << endl;
    } else if (a*a + b*b == c*c) {
        cout << "The given triangle is right." << endl;
    } else {
        cout << "The given triangle is obtuse." << endl;
    }

    return 0;
}


