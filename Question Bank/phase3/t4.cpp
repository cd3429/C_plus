/*

4. A Refugee camp have shortage of registering refugees
which are coming from Afghanistan. So registration team
split up their register documents in two teams: One note
down first name along with passport id, another one note
down last name along with that passport id. Now while
entering that all data as a final stage, a Computer
operator needs a system which automatically merge first
name and last name togather as per reference of passport
id. So design this type of system in C++ to help that
Refugee camp.

*/

#include <iostream>
#include <string>

using namespace std;

const int MAX_SIZE = 100;

int main() {
    string firstName[MAX_SIZE], lastName[MAX_SIZE], passportID[MAX_SIZE];
    int n;

    cout << "Enter the number of refugees: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Refugee " << i+1 << ":" << endl;
        cout << "First name: ";
        cin >> firstName[i];
        cout << "Last name: ";
        cin >> lastName[i];
        cout << "Passport ID: ";
        cin >> passportID[i];
    }

    string fullName[MAX_SIZE];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (passportID[i] == passportID[j]) {
                fullName[i] = firstName[i] + " " + lastName[j];
                break;
            }
        }
    }

    cout << "Merged Full Names:" << endl;
    for (int i = 0; i < n; i++) {
        cout <<"Passport ID : "<<passportID[i]<<" : "<<fullName[i] << endl;
    }

    return 0;
}

