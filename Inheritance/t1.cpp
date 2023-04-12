/*

1. WAP to find sum of all three number’s cubes by
implementing single level inheritance: Class X->Class Y
- Class X has following members: a, b & c attributes in
integer data type
- Class Y has following members: setData() and
getData() methods

*/



#include<iostream>

using namespace std ;

class X 
{
	protected :
		
		int a,b,c ; 
		
};

class Y : public X

{
	int sum ;
	
	public :
		
		void setData()
		{
			cout<<"Enter a : "; cin>>a ;
			cout<<"Enter b : "; cin>>b ;
			cout<<"Enter c : "; cin>>c ;
		}
	
		void getData()
		{
			
		sum = a*a*a + b*b*b + c*c*c ;	
		cout<<"The answer is : "<<sum ;
			
		}
};

main()
{
	Y yy ;
	yy.setData();
	yy.getData();
	
}










