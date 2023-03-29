//3. WAP to convert given string into toggle case.

#include<iostream>
#include<string.h>
using namespace std ;

main()
{
	
	char a[100];
	
	cout<<"Enter a string : ";
	cin>>a;
	
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]>=65 && a[i]<=90)
		{
			a[i]+=32;
		}
		else
		{
			a[i]=-32;
		}
	}
		
	puts(a);
}
