//5. WAP to find square root of given numbers from array elements.

#include<iostream>
#include<string.h>
#include<math.h>
using namespace std ;

main()
{
	
	int i,a;
	
	cout<<"Enter a number : ";
	cin>>a;	
	
	for(i=0;i<a;i++)
	{
		if(i*i==a)
		{
			cout<<"Squareroot of a is "<<i;
		}
	}
	
	cout<<"\nSquareroot of a is (with math.h) : "<<sqrt(a);
		
}

