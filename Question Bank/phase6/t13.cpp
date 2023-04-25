/*

13. Build a Counter App in C++ using OOP concept.
Initially the counter meant to be set as a value 0 using
constructor. By pressing UP Arrow from keyboard, counter
will be increment and by pressing DOWN Arrow, counter
will be decrement. You can use ASCII value concept by
achieving this type of functionality at the execution
time of a Program.

*/

#include <iostream>
#include <conio.h>

using namespace std;

class Counter {
    private:
        int value;

    public:
        Counter() {
            value = 0;
        }

        void increment() {
            value++;
        }

        void decrement() {
            value--;
        }

        void display() {
            cout << "Counter Value: " << value << endl;
        }
};

int main() {
    Counter c;

    char key;
    while (true) {
        if (kbhit()) {
            key = getch();
            if (key == 72) { // UP Arrow key
                c.increment();
                c.display();
            }
            else if (key == 80) { // DOWN Arrow key
                c.decrement();
                c.display();
            }
        }
    }

    return 0;
}

