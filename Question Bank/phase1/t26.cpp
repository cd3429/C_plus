/*

26. Develop a simple comparision system which identify if
given number is Palindrome or not. By this system, a bank
employee will appriciate your help. Write a C++ program
for developing this system.

*/

#include <iostream>
using namespace std;

int main() {
  int num, reversed = 0, remainder, original;

  cout << "Enter a number: ";
  cin >> num;

  original = num; 

  while (num != 0) {
    remainder = num % 10;
    reversed = reversed * 10 + remainder;
    num /= 10;
  }

  if (original == reversed)
    cout << original << " is a palindrome.";
  else
    cout << original << " is not a palindrome.";

  return 0;
}

