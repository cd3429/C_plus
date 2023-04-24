/*		phase 4 , task 1

A Train going to Busan have 2 containers which
contains Zombies. Container A has 6 zombies, and
Container B has 4 zombies. Passengers have to reach in
engine container by passing through them. Help them by
transferring zombies from both that containers to a new
Container C. Build a C++ program for it.

*/


#include <iostream>
using namespace std;

main() {
	//zombies in each container 
    int containerA = 6, tempA=containerA;
    int containerB = 4, tempB=containerB;
    int containerC = 0; 

	//moving zombies container A to C
    for (int i = 0; i < containerA; i++) {
        containerC++;
        tempA--;
    }

	//moving zombies container B to C
    for (int i = 0; i < containerB; i++) {
        containerC++;
        tempB--;
    }

	cout << "Number of zombies in container A: " << tempA << endl;
	cout << "Number of zombies in container B: " << tempB << endl;
    cout << "Number of zombies in container C: " << containerC << endl;
    
    cout << "All zombies are moved from container A and B and passengers can reach to the engine!  "<< endl;

}

