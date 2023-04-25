// 1. WAP to create a class which illustrate the concept of handling all types of exceptions using general exception.

#include<iostream>

using namespace std;

class div{
	
	float a,b,div;
	
	public :
		
		void input(){
			cout<<"Enter the value of a : "; cin>>a; 
			cout<<"Enter the value of b : "; cin>>b;		
		}
		
		void output(){
			
			try{
				if(b!=0)
				{
					div=a/b;
					cout<<"\nThe division of "<<a<<" and "<<b<<" is : "<<div<<endl;
				}
				else
				{
					throw "I hate pineapple on pizza." ;
				}
			}
			catch(...)
			{
				cout<<"\nCan not divide by zero ";
			}
		}
		
};

main()
{
						
			div d1;
			d1.input();
			d1.output();
		
}
