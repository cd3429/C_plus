/*

27. Create a addition logic to find sum of all digits of
a given number to surpass a very challenging dream of
Tanmay. Write a C++ program to develop this system for
Tanmay.

*/

#include <iostream>
using namespace std;

int main() {
  int num, sum = 0, digit;

  cout << "Enter a number: ";
  cin >> num;

  while (num != 0) {
    digit = num % 10;
    sum += digit;
    num /= 10;
  }

  cout << "The sum of the digits is " << sum << ".";

  return 0;
}

