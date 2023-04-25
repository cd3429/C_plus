/*

17. Sameer needs to master a technique to find if a given
number is Prime number or not for his best presentation
at the Teachers Day to impress his Math teacher. Help
sameer to Write a C++ Program with best technique.

*/

#include <iostream>

using namespace std;

int main() {
    int num, i;
    bool isPrime = true;

    cout << "Enter a number: ";
    cin >> num;

    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}

