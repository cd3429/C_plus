/*
2. Sameer is too weak to find multiplication of any three
numbers. Write a C++ Program which helps Sameer to solve
his issue.
*/

#include<iostream>

using namespace std;

class sameer{
	
	public :
		
		int x,y,z;
		
		void ask_sameer(){
			cout<<"Sameer! Give me three numbers! , I will do multiplication for you. Because you are too dumb. \n";
			cout<<"\nEnter the value of x : "; cin>>x;
			cout<<"Enter the value of y : "; cin>>y;
			cout<<"Enter the value of z : "; cin>>z;
		}

		void multiply(){
			cout<<"\nThe multiplication of the three numbers is : "<<x*y*z;
		}	
};

main()
{
	sameer s;
	s.ask_sameer();
	s.multiply();
}
