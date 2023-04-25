/*

23. By writing a logic for checking if a given number is
Armstrong or Not, Mayur will be qualified for an entrance
exam. Write a C++ Program for Mayur to qualify.

*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int num, originalNum, remainder, n = 0, result = 0;

  cout << "Enter a positive integer: ";
  cin >> num;

  originalNum = num;

  while (originalNum != 0) {
    originalNum /= 10;
    ++n;
  }

  originalNum = num;

  while (originalNum != 0) {
    remainder = originalNum % 10;
    result += pow(remainder, n);
    originalNum /= 10;
  }

  if (result == num)
    cout << num << " is an Armstrong number.";
  else
    cout << num << " is not an Armstrong number.";

  return 0;
}

