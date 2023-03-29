#include<iostream>

using namespace std;

infcalc(int op)
{
	int choice,a,b ;
	
	cout<<"\n\n\nFor Addiction press 1"<<endl;
	cout<<"For Substraction press 2"<<endl;
	cout<<"For Multiplication press 3"<<endl;
	cout<<"For Division press 4"<<endl;
	cout<<"For reminder press 5"<<endl;
	cout<<"To exist press 0"<<endl;
	cout<<"\nSelect the operation from 1 to 5 : "<<endl; cin>>choice;
	
	if(choice!=0)
	{
	cout<<"\nEnter first number : "; cin>>a;
	cout<<"Enter second number : ";  cin>>b;
    }
    
	switch(choice)
	{
		case 1 : cout<<"\n\nThe sum of given two number is : "<<a+b; break;
		
		case 2 : cout<<"\n\nThe sub of given two number is : "<<a-b; break;
		
		case 3 : cout<<"\n\nThe multiplication of given two number is : "<<a*b; break;
		
		case 4 : cout<<"\n\nThe division of given two number is : "<<a/b; break;
		
		case 5 : cout<<"\n\nThe reminder of given two number is : "<<a%b; break;
		
		case 0 : cout<<"\n\nThank you for using infinite calc"; break;
		
		default : cout<<"\n\nInvalid Choice! Try again!";
	}
	
	if(choice!=0)
	{
		infcalc(choice);
	}
}
	
main()
{
		int op=1;
		infcalc(op);
}


