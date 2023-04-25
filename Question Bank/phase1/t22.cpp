/*

22. Write a C++ Program to find Fibonacci Series upto N
numbers to help Darshan by passing fastest-finger first
round for entering Coding Quiz competition.

*/

#include <iostream>
using namespace std;

int main() {
  int n, a = 0, b = 1, c;
  cout << "Enter the number of terms to generate in the Fibonacci series: ";
  cin >> n;

  cout << "Fibonacci Series: ";

  for (int i = 1; i <= n; ++i) {
    cout << a << " ";
    c = a + b;
    a = b;
    b = c;
  }

  return 0;
}

