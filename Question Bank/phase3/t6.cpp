/*

6. Design a system for “Dare to Win” game scenario. In
this game, two participants have to guess any situation
or work which he/she wants to be done by opposition
player. So both player write their itended dare works and
now a system will swap that both dare works and provide
that to other opposite players. Write a C++ program to
help swapping that dare works.

*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string dare1, dare2, temp;
    
    cout << "Player 1, enter your dare work: ";
    getline(cin, dare1);
    
    cout << "Player 2, enter your dare work: ";
    getline(cin, dare2);
    
    temp = dare1;
    dare1 = dare2;
    dare2 = temp;
    
    cout << "Swapping completed!\n";
    cout << "Player 1's dare work: " << dare1 << endl;
    cout << "Player 2's dare work: " << dare2 << endl;
    
    return 0;
}

