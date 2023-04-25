/*

5. A scientist wants to create a sientific calculator
which only contains functionalities like:
 maximum number from 3 number
 square of a given numbe
 square root of a given numbe
 components of a given number
Design a C++ system to help this scientist by using UDFs.

*/

#include <iostream>
#include <cmath>
using namespace std;

int max_of_three(int a, int b, int c) {
    int max_num = a;
    if (b > max_num) {
        max_num = b;
    }
    if (c > max_num) {
        max_num = c;
    }
    return max_num;
}

int square(int num) {
    return num * num;
}

double square_root(int num) {
    return sqrt(num);
}

void components(int num) {
    int temp = num;
    int digit, count = 0;
    while (temp != 0) {
        digit = temp % 10;
        cout << "Component " << ++count << ": " << digit << endl;
        temp /= 10;
    }
}

main() {
    int choice, num1, num2, num3, num, num4;
    while (true) {
        cout << "\nPlease choose an operation:" << endl;
        cout << "1. Find maximum of three numbers" << endl;
        cout << "2. Find square of a number" << endl;
        cout << "3. Find square root of a number" << endl;
        cout << "4. Find components of a number" << endl;
        cout << "5. Exit" << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Please enter three numbers: ";
                cin >> num1 >> num2 >> num3;
                cout << "Maximum of " << num1 << ", " << num2 << ", and " << num3 << ": " << max_of_three(num1, num2, num3) << endl;
                break;
            case 2:
                cout << "Please enter a number: ";
                cin >> num;
                cout << "Square of " << num << ": " << square(num) << endl;
                break;
            case 3:
                cout << "Please enter a number: ";
                cin >> num;
                cout << "Square root of " << num << ": " << square_root(num) << endl;
                break;
            case 4:
                cout << "Please enter a number: ";
                cin >> num4;
                cout << "Components of " << num4 << ":" << endl;
                components(num4);
                break;
            case 5:
                cout << "Exiting the program..." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

}


