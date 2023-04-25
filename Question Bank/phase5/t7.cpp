/*

7. Ajay has to find Fibonacci Series upto given number to
successfully pass in Math’s examination. Help him by
designing a UDF in C++.

*/

#include <iostream>
using namespace std;

void fibonacci(int num) {
    int num1 = 0, num2 = 1, nextNum = 0;
    cout << "Fibonacci Series up to " << num << " :\n" << num1 << " " << num2 << " ";
    nextNum = num1 + num2;
    while(nextNum <= num) {
        cout << nextNum << " ";
        num1 = num2;
        num2 = nextNum;
        nextNum = num1 + num2;
    }
}

main() {
    int num;
    cout << "Enter a number to generate Fibonacci Series up to: ";
    cin >> num;
    fibonacci(num);

}

