/*

11. Declare a result of the survey that tells us which
country have largest Army strength, US, China or India.
Design a C++ UDF to announce the result of this survey to
the public.

*/

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

void announceArmyStrength(int us, int china, int india) {
    stringstream ss;
    string result;

    if (us > china && us > india) {
        ss << "The United States has the largest army strength with " << us << " active military personnel.";
    } else if (china > us && china > india) {
        ss << "China has the largest army strength with " << china << " active military personnel.";
    } else if (india > us && india > china) {
        ss << "India has the largest army strength with " << india << " active military personnel.";
    } else {
        result = "There is a tie for the largest army strength.";
    }

    result = ss.str();

    cout << result << endl;
}

main() {
	
    int us_army, china_army, india_army;

    cout << "Enter the number of active military personnel in the United States: ";
    cin >> us_army;

    cout << "Enter the number of active military personnel in China: ";
    cin >> china_army;

    cout << "Enter the number of active military personnel in India: ";
    cin >> india_army;

    announceArmyStrength(us_army, china_army, india_army);

}

