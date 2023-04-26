/*

10. An average consumer established his own business
shop. He went to C.A for maintain all his accounts
related queries. Now, help that C.A to build GST
calculator for ease of calculation.

*/

#include <iostream>
using namespace std;

int main() {
    double amount, gst, total;
    cout << "Enter the amount: ";
    cin >> amount;

    gst = amount * 0.18; // 18% GST
    total = amount + gst;

    cout << "Amount: " << amount << endl;
    cout << "GST (18%): " << gst << endl;
    cout << "Total: " << total << endl;

    return 0;
}

