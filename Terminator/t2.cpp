// 2. Create hybrid inheritance and remove ambiguity permanently.

#include<iostream>

using namespace std;

class Dummy {
	
	public :
		
		virtual void input()=0;
		virtual void sum()=0;
		
};

class A : public Dummy {
	
	public :
	
	int a ;
	
	public :
		
		void input()
		{
			cout<<"Enter the value of A : "; cin>>a;
		}
	
};


class B : public Dummy {
	
	public :
		
	int b ;
	
	public :
		
		void input()
		{
			cout<<"Enter the value of B : "; cin>>b;
		}
	
};


class C : public Dummy {
	
	public :
		
	int c ;
	
	public :
		
		void input()
		{
			cout<<"Enter the value of C : "; cin>>c;
		}
	
};

class Output : public A , public B , public C , public Dummy{
	
	public :
		
		void sum()
		{
			cout<<"The sum of A,B and C is : "<<a+b+c;
		}
	
};

main(){
	
	Dummy *D1 = new A();
	D1->input();
	
	
	Dummy *D2 = new B();
	D2->input();
	
	
	Dummy *D3 = new C();
	D3->input();
	
	Dummy *D = new Output();
	D->sum(); 
}
