/*

27. Reserve Bank of India pre-defines a Rate of Interest
(ROI) for all banks across the Nation. But some private
sector banks can apply different ROI. Use inheritance and
polymorphism concept to illustrate this scenario.

*/

#include <iostream>
using namespace std;

class RBI {
public:
    virtual double getROI() const {
        return 4.0; // pre-defined ROI for all banks
    }
};

class PrivateBank : public RBI {
public:
    double getROI() const override {
        return 5.0; // custom ROI for private sector banks
    }
};

int main() {
    RBI* rbi = new RBI();
    cout << "ROI for RBI: " << rbi->getROI() << endl;
    delete rbi;

    RBI* privateBank = new PrivateBank();
    cout << "ROI for private bank: " << privateBank->getROI() << endl;
    delete privateBank;

    return 0;
}

