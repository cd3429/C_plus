/*

4. Ronak gives an examination in which he gains internal
viva marks in all subjects like this: 23, 19, 22, 28 & 23
(all marks are out of 30). And gains final written
examination marks like this: 65, 58, 49, 52 & 64 (all
marks are out of 70). Evaluate final total examination
marks by adding both exam marks and reveal marks out of
100 in each subject by using C++. Also, final total
average value for that.

*/


#include <iostream>
using namespace std;

main()
{
    int vivaMarks[5] = {23, 19, 22, 28, 23};
    int writtenMarks[5] = {65, 58, 49, 52, 64};
    int totalMarks[5];
    float sum=0 ;

    // Calculate total marks for each subject
    for(int i=0; i<5; i++) {
        totalMarks[i] = vivaMarks[i] + writtenMarks[i];
        cout << "Subject " << i+1 << ": " <<  totalMarks[i] << endl;
        sum=sum+totalMarks[i];
    }

    cout << "Final total examination marks: " << sum << endl;
    cout << "Final total average value: " << sum/5 << endl;
}

