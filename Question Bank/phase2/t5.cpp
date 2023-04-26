/*

5. A Prime School wants an automate system for generating
students grades.
If marks in Maths>80, Phy>75 and Chem>72 then generate
Grade A.
If marks in 60<=Maths<=80, 55<=Phy<=75 and 50<=Chem<=72
then generate Grade B.
If marks in 40<=Maths<60, 35<=Phy<55 and 35<=Chem<50 then
generate Grade C.
Apply Grade D (Fail) if minimum criteria of marks doesn’t
satisfy bt any student.
Write a C++ Program for generating total N number of
students grades for this Prime School.

*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    int maths, phy, chem;
    char grade;

    for(int i = 1; i <= n; i++) {
        cout << "Enter the marks for student " << i << endl;
        cout << "Maths: ";
        cin >> maths;
        cout << "Phy: ";
        cin >> phy;
        cout << "Chem: ";
        cin >> chem;

        if(maths > 80 && phy > 75 && chem > 72) {
            grade = 'A';
        } else if(maths >= 60 && maths <= 80 && phy >= 55 && phy <= 75 && chem >= 50 && chem <= 72) {
            grade = 'B';
        } else if(maths >= 40 && maths < 60 && phy >= 35 && phy < 55 && chem >= 35 && chem < 50) {
            grade = 'C';
        } else {
            grade = 'D';
        }

        cout << "Grade for student " << i << " is " << grade << endl;
    }

    return 0;
}


