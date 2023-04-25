/*

3. An Auction is helding at Arizona for setting an old haunted house. 
For the reason, this is a haunted house, only three gigantic companies took a part in this Auction. 
Sell this haunted house to the highest bidder with count of three. 
Use C++ with all required criteria to build this type of Auction System. 

*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string companies[3] = {"Company A", "Company B", "Company C"};
    double bids[3] = {0.0, 0.0, 0.0};
    double highestBid = 0.0;
    int highestBidder = -1;

    cout << "Welcome to the haunted house auction at Arizona!" << endl;
    cout << "Three companies are bidding for the haunted house: " << endl;
    for (int i = 0; i < 3; i++) {
        cout << companies[i] << endl;
    }

    cout << "The bidding starts now..." << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Enter bid for " << companies[i] << ": ";
        cin >> bids[i];

        if (bids[i] > highestBid) {
            highestBid = bids[i];
            highestBidder = i;
        }
    }

    cout << "The auction is over." << endl;
    if (highestBidder >= 0) {
        cout << "The haunted house is sold to " << companies[highestBidder] << " for " << highestBid << " rupees." << endl;
    } else {
        cout << "No one bid for the haunted house. It remains unsold." << endl;
    }

    return 0;
}

