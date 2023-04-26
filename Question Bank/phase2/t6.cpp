/*

6. Design a Calculator for an arithmetic operations in
which user can do all basic operations as many times he/
she wants until he/she exit from that. Use C++ as a
primary language to accomplish this challenge.

*/

#include <iostream>
using namespace std;

int main() {
    char op;
    double num1, num2;

    do {
        cout << "Enter an operator (+, -, *, /) or 'q' to quit: ";
        cin >> op;

        if(op == 'q') {
            break;
        }

        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        switch(op) {
            case '+':
                cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
                break;
            case '-':
                cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
                break;
            case '*':
                cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
                break;
            case '/':
                if(num2 == 0) {
                    cout << "Error: cannot divide by zero" << endl;
                } else {
                    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
                }
                break;
            default:
                cout << "Error: invalid operator" << endl;
        }

    } while(true);

    cout << "Calculator has been terminated." << endl;

    return 0;
}



