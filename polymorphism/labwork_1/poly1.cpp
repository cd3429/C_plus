/*

WAP to perform all basic arithmetic operations such
like +, -, *, and / operations by implementing method
overloading using total 2 classes.
- use only one method named calculate() in child
class
- if you pass 2 arguments, perform division
- if you pass 3 arguments, perform subtraction
- if you pass 4 arguments, perform multiplication
- if you pass 5 arguments, perform addition

*/


#include<iostream>

using namespace std;

class A{
	public :
	int a,b,c,d,e;
	
	input()
	{
		cout<<"Enter a : "; cin>>a ;
		cout<<"Enter b : "; cin>>b ;
		cout<<"Enter c : "; cin>>c ;
		cout<<"Enter d : "; cin>>d ;
		cout<<"Enter e : "; cin>>e ;	
	}
};

class B : public A
{
	
	public :
	
	calculate(float a,float b){
		//division
		cout<<"\nDivision is : "<<a/b;
	}
	
	calculate(int a,int b,int c){
		//substraction
		cout<<"\nSub is : "<<a-b-c;
	}
	
	
	calculate(int a,int b,int c,int d){
		//multiplication
		cout<<"\nMultiplication is : "<<a*b*c*d;
	}
	
	calculate(int a,int b,int c,int d,int e){
		//sum
		cout<<"\nSum is : "<<a+b+c+d+e;
	}
	
};

main()
{
	
	B b ;
	b.input();
	b.calculate(b.a,b.b);
	b.calculate(b.a,b.b,b.c);
	b.calculate(b.a,b.b,b.c,b.d);
	b.calculate(b.a,b.b,b.c,b.d,b.e);
	
}
