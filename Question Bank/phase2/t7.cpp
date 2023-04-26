/*

7. Prepare a Calculator which only performs Circle
related mathematical operations like finding Area of
Circle, Perimeter of Circle and Conversion of radius into
Diameter. All operations are continuous until user wish
to exit. By using C++, create this calculator for a batch
of bacholers.

*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    char op;
    double radius, diameter, area, perimeter;
    const double pi = 3.14159265359;

    do {
        cout << "Enter 'a' to find area, 'p' to find perimeter, 'd' to convert radius to diameter, or 'q' to quit: ";
        cin >> op;

        if(op == 'q') {
            break;
        }

        cout << "Enter radius of circle: ";
        cin >> radius;

        switch(op) {
            case 'a':
                area = pi * pow(radius, 2);
                cout << "Area of circle with radius " << radius << " = " << area << endl;
                break;
            case 'p':
                perimeter = 2 * pi * radius;
                cout << "Perimeter of circle with radius " << radius << " = " << perimeter << endl;
                break;
            case 'd':
                diameter = 2 * radius;
                cout << "Diameter of circle with radius " << radius << " = " << diameter << endl;
                break;
            default:
                cout << "Error: invalid input" << endl;
        }

    } while(true);

    cout << "Calculator has been terminated." << endl;

    return 0;
}

