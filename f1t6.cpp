//6. WAP to generate cube of given 5 numbers and make an array of that generated cubes.

#include<iostream>
#include<string.h>
using namespace std ;

main()
{
	
	int a[5],i;
	
	for(i=0;i<5;i++)
	{
		cout<<"Enter element : ";
		cin>>a[i];
	}
	
	cout<<"\n Original Array : ";
	
	for(i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
	
	
	cout<<"\n Cube Array : ";
	
	for(i=0;i<5;i++)
	{
		cout<<a[i]*a[i]*a[i]<<" ";
	}
	
}
