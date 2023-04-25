/*

9. Design a GST Calculator in C++ to find total TAX on
various types of categorized items. Apply proper types of
Indian GST TAX varients based on different types of
Goods. GST have been divided into four GST rates – 5%,
12%, 18%, and 28% by the GST Council.

*/

#include <iostream>

using namespace std;

int main() {
    double item_price;
    double gst_rate;
    double gst_amount;
    double total_price;

    cout << "Enter the item price: ";
    cin >> item_price;

    cout << "Enter the GST rate (5, 12, 18, or 28): ";
    cin >> gst_rate;

    switch (int(gst_rate)) {
        case 5:
            gst_amount = item_price * 0.05;
            break;
        case 12:
            gst_amount = item_price * 0.12;
            break;
        case 18:
            gst_amount = item_price * 0.18;
            break;
        case 28:
            gst_amount = item_price * 0.28;
            break;
        default:
            cout << "Invalid GST rate" << endl;
            return 0;
    }

    total_price = item_price + gst_amount;

    cout << "Item price: " << item_price << endl;
    cout << "GST rate: " << gst_rate << "%" << endl;
    cout << "GST amount: " << gst_amount << endl;
    cout << "Total price: " << total_price << endl;

    return 0;
}

