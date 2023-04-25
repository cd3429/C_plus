/*

20. A Teacher give a punishment to all students to find
reverse numbers of given 3 random numbers by logically
under 15 minutes. Write a C++ Program to provide a
solution for this problem.

*/

#include <iostream>

using namespace std;

int main() {
   int num1, num2, num3;

   // Prompt the user to enter three random numbers
   cout << "Enter three random numbers: ";
   cin >> num1 >> num2 >> num3;

   // Find the reverse of each number using a while loop
   int rev1 = 0, rev2 = 0, rev3 = 0;
   while (num1 > 0) {
      rev1 = rev1 * 10 + num1 % 10;
      num1 /= 10;
   }
   while (num2 > 0) {
      rev2 = rev2 * 10 + num2 % 10;
      num2 /= 10;
   }
   while (num3 > 0) {
      rev3 = rev3 * 10 + num3 % 10;
      num3 /= 10;
   }

   // Print the reversed numbers
   cout << "The reversed numbers are: " << rev1 << ", " << rev2 << ", " << rev3 << endl;

   return 0;
}



