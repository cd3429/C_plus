/*

17. By creating below mentioned inherited structure of
calsses, Assume suitable data and member methods for
creating a Cricket scenario and listing score tables for
top five players.
Player -> CricketPlayer
CricketPlayer -> Batsman
CrickerPlayer -> Bowler

*/

#include <iostream>
#include <string>

using namespace std;

class Player {
public:
    string name;
    int age;
public:
    void setDetails() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
};

class CricketPlayer : public Player {
public:
    string country;
public:
    void setCountry() {
        cout << "Enter country: ";
        cin >> country;
    }
};

class Batsman : public CricketPlayer {
private:
    int runsScored;
public:
    void setRunsScored() {
        cout << "Enter runs scored: ";
        cin >> runsScored;
    }
    int getRunsScored() {
        return runsScored;
    }
};

class Bowler : public CricketPlayer {
private:
    int wicketsTaken;
public:
    void setWicketsTaken() {
        cout << "Enter wickets taken: ";
        cin >> wicketsTaken;
    }
    int getWicketsTaken() {
        return wicketsTaken;
    }
};

int main() {
    Batsman b1, b2;
    Bowler bo1, bo2 , bo3;

    cout << "Enter details for Batsman 1:\n";
    b1.setDetails();
    b1.setCountry();
    b1.setRunsScored();

    cout << "Enter details for Batsman 2:\n";
    b2.setDetails();
    b2.setCountry();
    b2.setRunsScored();

    cout << "Enter details for Bowler 1:\n";
    bo1.setDetails();
    bo1.setCountry();
    bo1.setWicketsTaken();

    cout << "Enter details for Bowler 2:\n";
    bo2.setDetails();
    bo2.setCountry();
    bo2.setWicketsTaken();
    
    cout << "Enter details for Bowler 3:\n";
    bo3.setDetails();
    bo3.setCountry();
    bo3.setWicketsTaken();

    cout << "\nTop 5 Players:\n";

    cout << "Batsman 1 - Name: " << b1.name << ", Age: " << b1.age << ", Country: " << b1.country << ", Runs Scored: " << b1.getRunsScored() << endl;
    cout << "Batsman 2 - Name: " << b2.name << ", Age: " << b2.age << ", Country: " << b2.country << ", Runs Scored: " << b2.getRunsScored() << endl;
    cout << "Bowler 1 - Name: " << bo1.name << ", Age: " << bo1.age << ", Country: " << bo1.country << ", Wickets Taken: " << bo1.getWicketsTaken() << endl;
    cout << "Bowler 2 - Name: " << bo2.name << ", Age: " << bo2.age << ", Country: " << bo2.country << ", Wickets Taken: " << bo2.getWicketsTaken() << endl; 
    cout << "Bowler 3 - Name: " << bo3.name << ", Age: " << bo3.age << ", Country: " << bo3.country << ", Wickets Taken: " << bo3.getWicketsTaken() << endl;

    return 0;
}


