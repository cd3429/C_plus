/*

16. Find Volume of a Box using Parameterized Constructor
and figure out if that is odd or even number.

*/

#include <iostream>

using namespace std;

class Box {
private:
    int length, width, height;
public:
    Box() {
        length = 0;
        width = 0;
        height = 0;
    }
    Box(int l, int w, int h) {
        length = l;
        width = w;
        height = h;
    }
    int volume() {
        return length * width * height;
    }
};

int main() {
    int l, w, h;
    cout << "Enter length, width, and height of the box: ";
    cin >> l >> w >> h;
    
    Box b(l, w, h);
    cout << "Volume of the box is: " << b.volume() << endl;

    if (b.volume() % 2 == 0) {
        cout << "The volume is an even number." << endl;
    }
    else {
        cout << "The volume is an odd number." << endl;
    }

    return 0;
}


