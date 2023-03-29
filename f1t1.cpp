//1. WAP to check given string is numeric or not.

#include<iostream>
#include<string.h>
using namespace std ;

main()
{
	
	char a[100],count=0;
	
	cout<<"Enter a string : ";
	cin>>a;
	
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]>=48 && a[i]<=57)
		{
			count++;
		}
	}
	
	if(count==strlen(a))
	{
		cout<<"The string is numeric";
	}
	else
	{
		cout<<"The string is NOT numeric";
	}
		
}
