/*

6. A Reality show on TV organizes “Fastest-fingers Fast”
round for entering in a Game. In this round participant
has to find reverse of a given number as soon as possible
to win this round. Design a C++ UDF for that.

*/

#include <iostream>
using namespace std;

int reverseNumber(int n) {
    int reversed = 0;
    while(n != 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    return reversed;
}

main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "The reverse of " << num << " is " << reverseNumber(num) << endl;
}

