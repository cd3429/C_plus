/*

3. WAP with a mother class animal. Inside it define a name and an age variables, and set_value() function. 
Then create two bases class Zebra and Dolphin which write a message telling the age, 
the name and giving some extra information (e.g. place of origin).

*/

#include <iostream>
using namespace std;

class Animal {
public:
    string name;
    int age;
public:
    void set_value(string n, int a) {
        name = n;
        age = a;
    }
};


class Zebra : public Animal {
public:
    void set_value(string n, int a) {
        Animal::set_value(n, a);
        cout << "Name of the animal is " << name << ". It is " << age << " years old." << endl;
        cout << "It comes from Africa." << endl;
    }
};

class Dolphin : public Animal {
public:
    void set_value(string n, int a) {
        Animal::set_value(n, a);
        cout << "Name of the animal is " << name << ". It is" << age << " years old." << endl;
        cout << "It comes from the ocean." << endl;
    }
};

main() {
	
	Animal a[2];
	
	cout<<"\nEnter the Name : "; cin>>a[0].name;
	cout<<"Enter the Age : "; cin>>a[0].age;
	
	cout<<"\nEnter the Name : "; cin>>a[1].name;
	cout<<"Enter the Age : "; cin>>a[1].age;
	
	
    Zebra z;
    z.set_value(a[0].name,a[0].age);

    Dolphin d;
    d.set_value(a[1].name,a[1].age);

}

