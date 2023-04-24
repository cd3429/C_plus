//2) WAP to illustrate the use of access modifiers in inheritence.

#include<iostream>

using namespace std;

class A{
	
	protected :
		
	int a;
	
	public :
		inputa()
		{
			cout<<"Enter the value of a : ";
			cin>>a;
		}
		outputa()
		{
			cout<<"\na : "<<a;
		}
};

class B : public A{
	
	protected :
		
		int b;
		
	public :
		inputb()
		{
			cout<<"Enter the value of b : ";
			cin>>b;
		}
		outputb()
		{
			cout<<"\nb : "<<b;
		}
};

class C : public B{
	
	protected :
		
		int c;
		
	public :
		inputc()
		{
			cout<<"Enter the value of c : ";
			cin>>c;
		}
		outputc()
		{
			cout<<"\nc : "<<c;
		}
};

main()
{
	C chirag;
	chirag.inputa();
	chirag.inputb();
	chirag.inputc(); cout<<endl;
	chirag.outputa();
	chirag.outputb();
	chirag.outputc();
}
