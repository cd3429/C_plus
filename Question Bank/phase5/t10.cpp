/*

10. A bomb is planted at Suratgarh Railway Station. It
can be defused by entering any number which is itself an
Armstrong number. Design a C++ UDF which figures out if a
given number is Armstrong or not.

*/

#include <iostream>
#include <cmath>

using namespace std;

bool isArmstrong(int num) {
    int digits = 0, sum = 0, temp = num;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return (num == sum);
}

main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isArmstrong(num)) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

}


