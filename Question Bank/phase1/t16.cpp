/*

16. Two friends are playing a game in which they have to
check whether a given number is Even or Odd. Help them to
Write a C++ Program for that.

*/

#include <iostream>

using namespace std;

main() {
    int num;

    // Input the number
    cout << "Enter a number: ";
    cin >> num;

    // Check if the number is even or odd
    if (num % 2 == 0) {
        cout << num << " is even." << endl;
    } else {
        cout << num << " is odd." << endl;
    }

}


