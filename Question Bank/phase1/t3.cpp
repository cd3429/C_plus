/*
3. A student in a fifth class encounters a very easy math
problem to find quotient and remainder. Write a C++
Program which provides a solution for this particular
problem.
*/

#include<iostream>

using namespace std ;

class student{
	
	int x,y ;
	
	public :
		
		void ask_student()
		{
			cout<<"So bad that you didn't pay attention in math class. WEll! Give me two numbers : \n";
			cout<<"Enter x : "; cin>>x ;
			cout<<"Enter y : "; cin>>y ;
		}
		
		void quo()
		{
			cout<<"\nThe quotient of the x/y is : "<<x/y;
		}
		
		void rem()
		{
			cout<<"\nThe reminder of the x/y is : "<<x%y;
		}
};

main()
{
	student s;
	s.ask_student();
	s.quo();
	s.rem();
}
