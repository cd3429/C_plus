/*

21. Priya wants to teach his newly enrolled boy that how
to find number of Digits in any number. Write a C++
Program to provide a solution for this problem.

*/

#include <iostream>
using namespace std;

int main() {
  int num, count = 0;
  cout << "Enter a number: ";
  cin >> num;

  while (num != 0) {
    num /= 10;
    ++count;
  }

  cout << "Number of digits: " << count;
  return 0;
}

