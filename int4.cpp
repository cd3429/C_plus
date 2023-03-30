//4. WAP to illustrate the use of inline function by creating a function which prints a multiplication table of given number.

#include<iostream>
#include<string.h>

using namespace std ;

inline multy(int i,int n)
{
	cout<<n<<" x "<<i<<" = "<<n*i;
}

main()
{
	int a,i;
	cout<<"Enter a number : ";
	cin>>a;
	
	for(i=1;i<=10;i++)
	{
	multy(i,a);
	cout<<endl;	
	}
}


