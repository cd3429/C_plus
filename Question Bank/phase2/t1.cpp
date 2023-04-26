/*

1. Kashyap has difficulty to remember multiplication
tables. Write a C++ Program which generates
multiplication tables between n1 and n2 provided values.

*/

#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cout << "Enter the starting value (n1): ";
    cin >> n1;
    cout << "Enter the ending value (n2): ";
    cin >> n2;

    for(int i = n1; i <= n2; i++) {
        for(int j = 1; j <= 10; j++) {
            cout << i << " x " << j << " = " << i*j << endl;
        }
        cout << endl;
    }

    return 0;
}

