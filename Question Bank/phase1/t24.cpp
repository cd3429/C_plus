/*

24. By writing a logic for checking if a given string is
Palindrom or Not, Apexa will be qualified for an entrance
exam. Write a C++ Program for Apexa to qualify.

*/

#include <iostream>
#include <cstring>
using namespace std;

int main() {
  char str[100];

  cout << "Enter a string: ";
  cin>>str;

  int len = strlen(str);
  bool isPalindrome = true;

  for (int i = 0; i < len / 2; ++i) {
    if (str[i] != str[len - i - 1]) {
      isPalindrome = false;
      break;
    }
  }

  if (isPalindrome)
    cout << str << " is a palindrome.";
  else
    cout << str << " is not a palindrome.";

  return 0;
}

