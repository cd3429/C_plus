/*

2. A Math problem to find average of all even numbers
from n Natural numbers raise difficulty to all 5th
standard students. Write a C++ Program to help them.

*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int sum = 0, count = 0;
    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0) {
            sum += i;
            count++;
        }
    }

    float average = (float) sum / count;
    cout << "The average of all even numbers from 1 to " << n << " is " << average << endl;

    return 0;
}


