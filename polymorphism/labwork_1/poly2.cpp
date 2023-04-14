/*

2. WAP to implement method overriding by following
below mentioned criteria:
- Class Cricket -> Class T20Match
- Class Cricket -> Class TestMatch
- override getTotalOvers() method in both classes

*/

#include<iostream>
using namespace std;

class cricket{
	public :
		int t20_over=20,test_over=90;
	
};

class t20 : public cricket{
	public :
		void getTotalOvers()
		{
			cout << "\nT20 over is : "<<t20_over;
		}
};

class test : public cricket{
	public :
		void getTotalOvers()
		{
			cout << "\nTest match over : " <<test_over;
		}
};

int main()
{
	t20 t1;
	test t2;
	
	t1.getTotalOvers();
	t2.getTotalOvers();
}
