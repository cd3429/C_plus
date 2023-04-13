/*

2. WAP with a mother class and an  daugther class.
Both of them should have a method void display ()that 
prints a message (different for mother and daugther). 
In the main define a daugther and call the display() method on it.

*/

#include <iostream>
using namespace std;

class Mother {
public:
    void display() {
        cout << "I am the mother." << endl;
    }
};

class Daughter : public Mother {
public:
    void display() {
        cout << "I am the daughter." << endl;
    }
};

main() {
    Daughter d;
    d.display();
    d.Mother::display();
}

