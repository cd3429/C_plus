/*1. WAP to create a friend function for two different classes
which performs addition of two times in format of
HH:MM:SS.*/

#include<iostream>

using namespace std;
class B;
class C;
class A{
	public :
	int d;
	public :
		void h(){
			cout<<"Enter the Hour :- ";
			cin>>d;
		}
		friend void add(A,B,C);
};
class B{
	public :
	int e;
	public :
		void m(){
			cout<<"Enter the Minute :- ";
			cin>>e;
		}
		friend void add(A,B,C);
};
class C{
	public :
	int f;
	public :
		void s(){
			cout<<"Enter the Second :- ";
			cin>>f;
		}
		friend void add(A,B,C);
};

void add(A g,B i,C j,A k,B l,C n){
	
	int H,M,S;
		H=g.d+k.d;
		M=i.e+l.e;
		S=j.f+n.f;
		while(S>=60)
		{
			S-=60;
			M++;
		}
		while(M>=60)
		{
			M-=60;
			H++;
		}
		cout << "HH:MM:SS  " << H  << ":" << M << ":" << S; 
}

main(){
	A g,k;
	B i,l;
	C j,n;
	cout<<"Enter 1st time"<<endl;
	g.h();
	i.m();
	j.s();
	cout<<"Enter 2nd time"<<endl;
	k.h();
	l.m();
	n.s();
	cout<<"addition of two time"<<endl;
	add(g,i,j,k,l,n);
}
