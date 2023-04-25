/*

3. Kevin has two plain floors within different bowls
containig one coin in each bowl. He bet his friend to
transfer that coins in either bowls within 5 minutes.
Help him by providing a C++ solution using UDF.

*/

#include <iostream>
using namespace std;

void swapCoins(int bowl1, int bowl2) {
  int temp = bowl1;
  bowl1 = bowl2;
  bowl2 = temp;
  cout << "Transferred : " << "Bowl 1: " << bowl1 << ", Bowl 2: " << bowl2 << endl;
}

int main() {
  int bowl1 = 10;
  int bowl2 = 20;

  cout << "Initial state: " << "Bowl 1: " << bowl1 << ", Bowl 2: " << bowl2 << endl;
  
  swapCoins(bowl1, bowl2);
  
}

