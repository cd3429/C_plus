/*

14. A window on a side wall have a dimension of 10x4
feet. Kaveri wants to apply curtains on that window such
that a window will perfectly coverd from all sides with
extra 2 feet. Design a C++ UDF with figures out if a
given dimensions of curtains satisfies mentioned criteria
or not.

*/

#include <iostream>

using namespace std;

bool isCurtainSizeValid(int width, int height) {
    int extra = 2;
    int windowWidth = 10;
    int windowHeight = 4;
    
    // calculate total required width and height
    int totalWidth = windowWidth + (2 * extra);
    int totalHeight = windowHeight + (2 * extra);
    
    // check if given width and height are greater than or equal to required values
    if (width >= totalWidth && height >= totalHeight) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int width, height;
    cout << "Enter width of curtains: ";
    cin >> width;
    cout << "Enter height of curtains: ";
    cin >> height;
    
    if (isCurtainSizeValid(width, height)) {
        cout << "Curtains are of valid size and will cover the window perfectly." << endl;
    }
    else {
        cout << "Curtains are not of valid size and will not cover the window perfectly." << endl;
    }
    
    return 0;
}

