/*

8. A 15 m fire-fighter’s ladder is leaning against the
wall. If the ground distance between the foot of the
ladder and the wall is 7 m, what is the wall’s height?

*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float ladder = 15.0; // length of the ladder
    float distance = 7.0; // distance from ladder foot to wall
    float height = sqrt(pow(ladder, 2) - pow(distance, 2)); // calculating wall height using Pythagoras' theorem
    
    cout << "The wall's height is: " << height << " meters." << endl;
    return 0;
}

