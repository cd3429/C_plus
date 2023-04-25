/*

18. Help Ayush to perfom given operation:
a. Assume any number
b. Add 8 in that number
c. Multiply it with 3
d. Subtract 12 from it
e. Add another 5 into that
f. Add your birth year in it
g. Subtract current year from that
Finally display which number he get after perfrming all
above mentioned operations and find is it divisible by 7
or not.

*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int number, birth_year, current_year, result;

    cout << "Enter any number: ";
    cin >> number;

    cout << "Enter your birth year: ";
    cin >> birth_year;

    cout << "Enter current year: ";
    cin >> current_year;

    // Perform the given operations
    result = (((number + 8) * 3) - 12 + 5 + birth_year - current_year);

    // Check if the final result is divisible by 7 or not
    if (result % 7 == 0) {
        cout << "Final result " << result << " is divisible by 7" << endl;
    } else {
        cout << "Final result " << result << " is not divisible by 7" << endl;
    }

    return 0;
}


