/*

19. Help a builder to build a house as same as
structurized as below: (Arrows represents the direction of information flow)

House->Kitchen,Bedroom,Backyard
Kitchen->Dining Table
Bedroom->Bathroom
Backyard->Garage

Assume suitable data and member methods. You can add your
own functionalities to enhance this solution.

*/

#include <iostream>
#include <string>

using namespace std;

class Kitchen {
private:
    string table;
public:
    Kitchen(string table) {
        this->table = table;
    }
    void display() {
        cout << "What kind of Table is there? : " << table << endl;
    }
};

class Bedroom {
private:
    string bath;
public:
    Bedroom(string bath) {
        this->bath = bath;
    }
    void display() {
        cout << "Is Bathroom attached or seperate? : " << bath << endl;
    }
};

class Backyard {
private:
    string garden;
public:
    Backyard(string garden) {
        this->garden = garden;
    }
    void display() {
        cout << "What kind of flowers are there in the Garden: " << garden << endl;
    }
};

class House {
private:
    Kitchen kitchen;
    Bedroom bedroom;
    Backyard backyard;
public:
    House(Kitchen k, Bedroom b, Backyard y) : kitchen(k), bedroom(b), backyard(y) {}
    void display() {
        kitchen.display();
        bedroom.display();
        backyard.display();
    }
};

int main() {
    Kitchen k("Dining Table");
    Bedroom b("Attached");
    Backyard y("Roses");
    House h(k, b, y);
    h.display();
    return 0;
}

