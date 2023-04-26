/*

4. Write a C++ Program which finds the area of triangle
whose base is 56 units and height is 21 units. Also print
sum of all digits of that area of triangle.

*/

#include <iostream>
using namespace std;

int main() {
    int base = 56, height = 21;
    float area = 0.5 * base * height;
    cout << "The area of the triangle is " << area << endl;

    int sum = 0, digit;
    int temp = (int) area;
    while(temp > 0) {
        digit = temp % 10;
        sum += digit;
        temp /= 10;
    }

    cout << "The sum of all digits in the area of the triangle is " << sum << endl;

    return 0;
}



