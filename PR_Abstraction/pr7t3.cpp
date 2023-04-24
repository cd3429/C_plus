//3) WAP to demonstrate usage of Virtual Function.
#include<iostream>
using namespace std;

class house{
	
	protected :
		
	int price;
	int area;
	
	public :
		virtual void input()=0;
		virtual void output()=0;
};

class blueprint : public house{
	
	public :
		
		void input()
		{
			cout<<"Enter the price of the house : "; cin>>price;
			cout<<"Enter the area of the house in sqr feet : "; cin>>area;
		}
		void output()
		{
			cout<<"\nThe price of the house : "<<price;
			cout<<"\nThe area of the house in sqr feet : "<<area;
		}
};

main()
{
	blueprint b;
	b.input(); cout<<endl;
	b.output();
}
