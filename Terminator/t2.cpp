// 2. Create hybrid inheritance and remove ambiguity permanently.

#include<iostream>

using namespace std;

class Dummy {
	public :
		virtual void input()=0;
		virtual int getValue()=0;
};

class A : public Dummy {
	public :
		int a ;
		void input() {
			cout<<"Enter the value of A : "; 
			cin>>a;
		}
		int getValue() {
			return a;
		}
};

class B : public Dummy {
	public :
		int b ;
		void input() {
			cout<<"Enter the value of B : "; 
			cin>>b;
		}
		int getValue() {
			return b;
		}
};

class C : public Dummy {
	public :
		int c ;
		void input() {
			cout<<"Enter the value of C : "; 
			cin>>c;
		}
		int getValue() {
			return c;
		}
};

class Output : public A , public B , public C {
	public :
		Output(Dummy* D1, Dummy* D2, Dummy* D3) {
			A::a = D1->getValue();
			B::b = D2->getValue();
			C::c = D3->getValue();
		}
		void sum() {
			cout<<"The sum of A, B and C is : "<<A::a+B::b+C::c;
		}
};

int main() {
	Dummy *D1 = new A();
	D1->input();
	
	Dummy *D2 = new B();
	D2->input();
	
	Dummy *D3 = new C();
	D3->input();
	
	Output O(D1, D2, D3);
	O.sum(); 
	
}
