/*

2. Develop a solution for Akshay by which he can retrieve
factorial of all numbers between given range of two
numbers using a C++ user defined function (UDF).

*/

#include<iostream>

using namespace std;

fact(int long n1,int long n2)
{
	int long mult=1,n,num;
	
	for(int i=n1;i<=n2;i++)
	{
	n=i;
	num=i;
	while(n>=1)
	{
		mult=mult*n;
		n--;
	}
	cout<<"\nFactorial of "<<i<<" is : "<<mult;
	mult=1;
}
}


main()
{
 fact(1,10);	
}

