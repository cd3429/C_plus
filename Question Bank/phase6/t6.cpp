/*

6. A 26 m long rope is stretched from the top of a 13 m
tree to the ground. Find the distance between the tree
and the end of the rope on the ground. WAP c++ program.

*/

#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    const double tree_height = 13; 
    const double rope_length = 26;
    double distance; 

    distance = sqrt(pow(rope_length, 2) - pow(tree_height, 2));

    cout << "The distance between the tree and the end of the rope is " << distance << " meters" << endl;

    return 0;
}

