/*

28. One character is common in both Marvel & DC universe
named “Access”. Implement below mentioned structure using
proper inheritance concept and with assumable fields and
methods. You can create and use any type of methods and
illustrations to enhance this program as per your
preference.

The relation between different classes :

Universe->Marvel
Universe->DC
Marvel->MHeroes->Access
DC->DCHeroes->Access

*/

#include <iostream>
#include <string>

using namespace std;

class Universe {
    protected:
        string universeName;
    public:
        Universe(string name) {
            universeName = name;
        }
        string getUniverseName() {
            return universeName;
        }
};

class Marvel : public Universe {
    public:
        Marvel(string name) : Universe(name) {}
};

class DC : public Universe {
    public:
        DC(string name) : Universe(name) {}
};

class MHeroes : public Marvel {
    public:
        MHeroes(string name) : Marvel("Marvel"), heroName(name) {}
        void printHero() {
            cout << "Hero Name: " << heroName << endl;
            cout << "Universe: " << getUniverseName() << endl;
        }
    private:
        string heroName;
};

class DCHeroes : public DC {
    public:
        DCHeroes(string name) : DC("DC"), heroName(name) {}
        void printHero() {
            cout << "Hero Name: " << heroName << endl;
            cout << "Universe: " << getUniverseName() << endl;
        }
    private:
        string heroName;
};

class Access : public MHeroes, public DCHeroes {
    public:
        Access(string name) : MHeroes(name), DCHeroes(name), heroName(name) {}
        void printHero() {
            cout << "Hero Name: " << heroName << endl;
            cout << "Marvel Universe: " << MHeroes::getUniverseName() << endl;
            cout << "DC Universe: " << DCHeroes::getUniverseName() << endl;
        }
    private:
        string heroName;
};

int main() {
    Access a("Spiderman");
    a.printHero();
    return 0;
}

