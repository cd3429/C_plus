/*

19. Write a C++ program to Print Table of any Number less
than 10. A group of needy newbie math students will
appriciate your help for your help.

*/

#include <iostream>

using namespace std;

int main() {
   int num;

   cout << "Enter a number less than 10: ";
   cin >> num;

   cout << "Table of " << num << ":\n";
   for (int i = 1; i <= 10; ++i) {
      cout << num << " x " << i << " = " << num * i << endl;
   }

   return 0;
}

