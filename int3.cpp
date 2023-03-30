#include<iostream>
#include<string.h>

using namespace std ;

fact(int a,int mult)
{
	if(a>=1)
	{
		mult=mult*a;
		cout<<a<<" x ";
		a--;
		fact(a,mult);
	}
	else
	{
		return mult ;
	}
	
}

main()
{
	int a,mult=1;
	cout<<"Enter a number : ";
	cin>>a;
	
	cout<<"\nFactorial of "<<a<<" is "<<fact(a,mult);
}


