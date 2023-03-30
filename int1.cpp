//1. WAP to pass function as an argument to a function.

#include<iostream>
#include<string.h>

using namespace std ;

ave(float n,float d)
{
	return n/d;
}

sum(int a,int b,int c)
{
	return a+b+c;
}

main()

{
	
	int a,b,c;
	
	cout<<" a : "; cin>>a ; 
	cout<<" b : "; cin>>b ; 
	cout<<" c : "; cin>>c ; 
	
	cout<<"Average is : "<<ave(sum(a,b,c),3);
	
}


