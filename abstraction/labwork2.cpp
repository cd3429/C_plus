/*

1. WAP to perform some basic mathematical operations
using Abstract class such like:
- area of circle
- area of triangle
- area of rectangle
- use one single pure virtual function named
calculate() to perform all above operations

*/

#include<iostream>

using namespace std ;

class circle{
	public :
		virtual void calculate () = 0 ;
};

class triangle{
	public :
		virtual void calculate () = 0 ;
};

class rectangle{
	public :
		virtual void calculate () = 0 ;
};

class shape_C : public circle {
	public :
		int C_r;
		
		public :
			
		void calculate(){
			
			cout<<"\n\nCirlce : ";
			cout<<"\n\tEnter the radius of the circle : "; cin>>C_r;
			cout<<"\n\n\tArea of cirlce is : "<<3.1415*C_r*C_r;
			}
			
};

class shape_T : public triangle {
	public :
		int T_h,T_b;
		
		public :
			
		void calculate(){
			
			
			cout<<"\n\nTriangle : ";
			cout<<"\n\tEnter the height of the triangle : "; cin>>T_h;
			cout<<"\tEnter the base of the triangle : "; cin>>T_b;
			cout<<"\n\n\tArea of tringle is :"<<0.5*T_b*T_h;
			
			}
			
};

class shape_R : public rectangle {
	public :
		int R_h,R_w;
		
		public :
			
		void calculate(){

			cout<<"\n\nRectangle : ";
			cout<<"\n\tEnter the height of the rectangle : "; cin>>R_h;
			cout<<"\tEnter the width of the rectangle : "; cin>>R_w;
			cout<<"\n\n\tArea of tringle is :"<<R_h*R_w;
			
		}
};



main(){
	
	circle *c=new shape_C();
	c->calculate();
	
	triangle *t=new shape_T();
	t->calculate();
	
	rectangle *r=new shape_R();
	r->calculate();

}
