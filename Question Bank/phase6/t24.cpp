/*

24. Design a swapping program using only constructors for
helping Devansh to gain passing marks in examination.

*/

#include <iostream>
using namespace std;

class Swap {
public:
    // Constructor that initializes the two member variables
    Swap(int& a, int& b) : a_(a), b_(b) {}

    // Swap function that exchanges the values of a_ and b_
    void swap() {
        int temp = a_;
        a_ = b_;
        b_ = temp;
    }

    // Getter functions for the private member variables
    int getA() const {
        return a_;
    }

    int getB() const {
        return b_;
    }

private:
    int& a_;
    int& b_;
};

int main() {
    int x = 5, y = 10;
    cout << "Before swap: x = " << x << ", y = " << y << endl;

    // Create a Swap object using the constructor
    Swap(x, y).swap();

    cout << "After swap: x = " << x << ", y = " << y << endl;

    return 0;
}

