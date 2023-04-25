/*

25. By using an easy technique, Write a C++ program to
Find Largest Number among four numbers to help Prisha
boost-up her confidence in logical building process.

*/

#include <iostream>
using namespace std;

int main() {
  int num1, num2, num3, num4, max;

  cout << "Enter four numbers: ";
  cin >> num1 >> num2 >> num3 >> num4;

  max = num1; 

  if (num2 > max) {
    max = num2;
  }
  if (num3 > max) {
    max = num3;
  }
  if (num4 > max) {
    max = num4;
  }

  cout << "The largest number is " << max << ".";

  return 0;
}

