/*

4. WAP to create an Abstract Class Shape. Make two sub-class Circle and Triangle which implements a method from Shape class called getArea().

*/

#include<iostream>

using namespace std ;

class Shape {
		protected :
			int C_r,T_b,T_h;
			
		public :
			
		virtual void getArea() = 0 ;
			
};

class circle : public Shape{
	public :
		
		void getArea(){
			
			cout<<"\n\nCirlce : ";
			cout<<"\n\tEnter the radius of the circle : "; cin>>C_r;
			cout<<"\n\n\tArea of cirlce is : "<<3.1415*C_r*C_r;
			}
};

class triangle : public Shape{
	public :
		
		void getArea(){		
			cout<<"\n\nTriangle : ";
			cout<<"\n\tEnter the height of the triangle : "; cin>>T_h;
			cout<<"\tEnter the base of the triangle : "; cin>>T_b;
			cout<<"\n\n\tArea of tringle is :"<<0.5*T_b*T_h;			
			}
};




main(){
	
	Shape *c=new circle();
	c->getArea();
	
	Shape *d=new triangle();
	d->getArea();
	
}
