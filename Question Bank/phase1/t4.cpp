/*
4. Two classmates wants to exchange their seating with
each other. But the problem is that there are only two
chairs in the small classroom which already aquires by
them. Write a C++ Program which provides a solution for
this particular problem.
*/

#include<iostream>

using namespace std;

class classmates{
	
	int chair1=11,chair2=27;
	
	public :
		
		void advise()
		{
			cout<<"Well! one of you could just stand up and move aside, offer your chair to your classmate and kindly seat on his/her chair. But anyways! \n";
		}
		
		void seatingArrangement()
		{
			cout<<"\nClassmate 1 is seating on the chair : "<<chair1<<endl;
			cout<<"Classmate 2 is seating on the chair : "<<chair2<<endl;			
		}
		
		void switchchairs()
		{
			chair1=chair1+chair2;
			chair2=chair1-chair2;
			chair1=chair1-chair2;
			cout<<"\nYour chairs are switched!\n";
		}
};

main()
{
	classmates c;
	c.advise();
	c.seatingArrangement();
	c.switchchairs();
	c.seatingArrangement();
}
