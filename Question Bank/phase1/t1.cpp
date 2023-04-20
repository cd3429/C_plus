/*
1. Meena face an isuue to perform a mathematical
operation to find a cube of any number. Write a C++
Program which helps Meena to solve her issue.
*/


#include<iostream>

using namespace std;

class meena {
	
	private :
		
	int x;
	
	public :
		
	void ask_meena(){
		cout<<"Meena! Give me a number, I will do a cube for you : \nThe number : "; cin>>x ;
	}
	
	void cube(){
		cout<<"The cube of the number is : "<<x*x*x ;
	}
	
};

main()

{
	
	meena m ;
	m.ask_meena();
	m.cube();
	
}
