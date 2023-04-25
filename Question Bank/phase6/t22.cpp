/*

22. A Global survey held to collect information about hotels all around the world. Provide a C++ solution to create a class Hotel with fields like 
• hotel id 
• hotel name 
• hotel_type 
• hotel_staff_size
• hotel_room_size 
• hotel_establish_year 
• hotel_country 
• hotel_rating_type 
• hotel_website 
Illustrate the use of strict encapsulation with this keyword. 

*/

#include <iostream>
#include <string>
using namespace std;

class Hotel {
public:
    // Setters for private fields
    void setId(int id) { id_ = id; }
    void setName(const string& name) { name_ = name; }
    void setType(const string& type) { type_ = type; }
    void setStaffSize(int staffSize) { staffSize_ = staffSize; }
    void setRoomSize(int roomSize) { roomSize_ = roomSize; }
    void setEstablishYear(int establishYear) { establishYear_ = establishYear; }
    void setCountry(const string& country) { country_ = country; }
    void setRatingType(const string& ratingType) { ratingType_ = ratingType; }
    void setWebsite(const string& website) { website_ = website; }

    // Getters for private fields
    int getId() const { return id_; }
    string getName() const { return name_; }
    string getType() const { return type_; }
    int getStaffSize() const { return staffSize_; }
    int getRoomSize() const { return roomSize_; }
    int getEstablishYear() const { return establishYear_; }
    string getCountry() const { return country_; }
    string getRatingType() const { return ratingType_; }
    string getWebsite() const { return website_; }

private:
    int id_;
    string name_;
    string type_;
    int staffSize_;
    int roomSize_;
    int establishYear_;
    string country_;
    string ratingType_;
    string website_;
};

int main() {
    Hotel hotel;

    hotel.setId(1);
    hotel.setName("The Ritz-Carlton");
    hotel.setType("Luxury");
    hotel.setStaffSize(100);
    hotel.setRoomSize(400);
    hotel.setEstablishYear(1983);
    hotel.setCountry("United States");
    hotel.setRatingType("Five-star");
    hotel.setWebsite("https://www.ritzcarlton.com");

    cout << "Hotel ID: " << hotel.getId() << endl;
    cout << "Hotel Name: " << hotel.getName() << endl;
    cout << "Hotel Type: " << hotel.getType() << endl;
    cout << "Hotel Staff Size: " << hotel.getStaffSize() << endl;
    cout << "Hotel Room Size: " << hotel.getRoomSize() << endl;
    cout << "Hotel Establish Year: " << hotel.getEstablishYear() << endl;
    cout << "Hotel Country: " << hotel.getCountry() << endl;
    cout << "Hotel Rating Type: " << hotel.getRatingType() << endl;
    cout << "Hotel Website: " << hotel.getWebsite() << endl;

    return 0;
}

