/*

WAP to get and display N numbers of Fast Food cafe
information using encapsulation and use of default
constructor by including below mentioned attributes:
- cafe_id
- cafe_name
- cafe_type (like rooftop or normal)
- cafe_rating (like 1 Star, 2 Start, ..., 5 Star)
- cafe_location (city name)
- cafe_establish_year
- cafe_staff_quantity

*/




#include <iostream>
#include <string>

using namespace std;

class FastFoodCafe {
private:
    int cafe_id;
    string cafe_name;
    string cafe_type;
    int cafe_rating;
    string cafe_location;
    int cafe_establish_year;
    int cafe_staff_quantity;

public:
    FastFoodCafe() {
        cafe_id = 0;
        cafe_name = "";
        cafe_type = "";
        cafe_rating = 0;
        cafe_location = "";
        cafe_establish_year = 0;
        cafe_staff_quantity = 0;
    }

    void set_id(int id) {
        cafe_id = id;
    }

    void set_name(string name) {
        cafe_name = name;
    }

    void set_type(string type) {
        cafe_type = type;
    }

    void set_rating(int rating) {
        cafe_rating = rating;
    }

    void set_location(string location) {
        cafe_location = location;
    }

    void set_establish_year(int year) {
        cafe_establish_year = year;
    }

    void set_staff_quantity(int staff) {
        cafe_staff_quantity = staff;
    }

    void display() {
        cout << "Cafe ID: " << cafe_id << endl;
        cout << "Cafe Name: " << cafe_name << endl;
        cout << "Cafe Type: " << cafe_type << endl;
        cout << "Cafe Rating: " << cafe_rating << " Star" << endl;
        cout << "Cafe Location: " << cafe_location << endl;
        cout << "Establishment Year: " << cafe_establish_year << endl;
        cout << "Staff Quantity: " << cafe_staff_quantity << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of Fast Food Cafes: ";
    cin >> n;

    FastFoodCafe cafes[n];

    for (int i = 0; i < n; i++) {
        cout << endl << "Enter details for Cafe " << i+1 << ":" << endl;
        int id, rating, year, staff;
        string name, type, location;

        cout << "Cafe ID: ";
        cin >> id;
        cafes[i].set_id(id);

        cout << "Cafe Name: ";
        cin >> name;
        cafes[i].set_name(name);

        cout << "Cafe Type (rooftop or normal): ";
        cin >> type;
        cafes[i].set_type(type);

        cout << "Cafe Rating (1 to 5 Star): ";
        cin >> rating;
        cafes[i].set_rating(rating);

        cout << "Cafe Location: ";
        cin >> location;
        cafes[i].set_location(location);

        cout << "Establishment Year: ";
        cin >> year;
        cafes[i].set_establish_year(year);

        cout << "Staff Quantity: ";
        cin >> staff;
        cafes[i].set_staff_quantity(staff);
    }

    cout << endl << "Details of " << n << " Fast Food Cafes:" << endl;
    for (int i = 0; i < n; i++) {
        cout << endl << "Cafe " << i+1 << ":" << endl;
        cafes[i].display();
    }

    return 0;
}

