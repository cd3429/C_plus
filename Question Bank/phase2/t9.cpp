/*

9. A Hospital Staff needs a BMI Calculator for rapidly
check BMI values of any patient. Design a BMI Calculator
by using C++ to provide this facility to all Hospital
staff members.

*/

#include <iostream>
using namespace std;

int main() {
    float weight, height, bmi;
    cout << "Enter weight in kilograms: ";
    cin >> weight;
    cout << "Enter height in meters: ";
    cin >> height;

    bmi = weight / (height * height);

    cout << "BMI: " << bmi << endl;
    if (bmi < 18.5) {
        cout << "Underweight" << endl;
    } else if (bmi < 25) {
        cout << "Normal" << endl;
    } else if (bmi < 30) {
        cout << "Overweight" << endl;
    } else {
        cout << "Obese" << endl;
    }

    return 0;
}

