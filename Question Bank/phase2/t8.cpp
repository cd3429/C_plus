/*

8. A Computer Teacher wants to teach a 10th standard
class taht how a computer converts any decimal value into
binary value. Help that teacher by developing C++ program
for this urpose.

*/

#include <iostream>
using namespace std;

int main() {
    int decimal, binary = 0, place = 1;
    cout << "Enter a decimal number: ";
    cin >> decimal;

    while(decimal > 0) {
        int remainder = decimal % 2;
        binary += remainder * place;
        decimal /= 2;
        place *= 10;
    }

    cout << "Binary equivalent: " << binary << endl;

    return 0;
}

