#include<iostream>

using namespace std;

inline fact(int a)
{
	int mult=1;
	while(a>=1)
	{
	mult=mult*a;
	a--;
	}
	
	return mult ;
}

main()

{
	
	int n,i,a[n] ;
	
	cout<<"Enter the size od array : ";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
	cout<<"Enter the element : ";
	cin>>a[i];
	}
	
	cout<<"Factorial of array is : ";
	
	for(i=0;i<n;i++)
	{
	cout<<fact(a[i])<<" ";	
	}
	
}
