/*
6. An IT company wants to generate random number of 6
digits long and send it to its employees. Write a C++
Program to help this IT company.
*/

#include<iostream>
#include<cstdlib>
#include <ctime>

using namespace std;

class rand_num{
	
	public :
		
	void randi(){
		srand(time(NULL));
		cout<<"The random number is : "<<rand() % 900000 + 100000;
	}
	
};

main()
{
	rand_num r;
	r.randi();
}
