/*

8. A sport coach needs to convert submitted participants’
inches into feet and inches for height measurement. Write
a C++ Program to provide a solution for this.

*/

#include <iostream>

using namespace std;

int main() {
    int height_in_inches;
    int feet, inches;

    cout << "Enter height in inches: ";
    cin >> height_in_inches;

    // Calculate feet and inches
    feet = height_in_inches / 12;
    inches = height_in_inches % 12;

    cout << "Height is " << feet << " feet " << inches << " inches" << endl;

    return 0;
}

