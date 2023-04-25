/*

12. Two buses(Bus B1 & Bus B2) head forwards from Mumbai
to Kolkata. Both of them have to cover total distance of
1933 KM. Bus B1 reached on destination with total time of
40 Hr & Bus B2 takes total time of 46 Hr. Find out
velocity of both buses using a C++ UDF.

*/

#include <iostream>

using namespace std;

double calculateVelocity(double distance, double time) {
    return distance / time;
}

int main() {
    double distance = 1933;
    double time1 = 40;
    double time2 = 46; 

    double velocity1 = calculateVelocity(distance, time1);
    double velocity2 = calculateVelocity(distance, time2);

    cout << "Velocity of Bus B1: " << velocity1 << " km/hr" << endl;
    cout << "Velocity of Bus B2: " << velocity2 << " km/hr" << endl;

    return 0;
}


