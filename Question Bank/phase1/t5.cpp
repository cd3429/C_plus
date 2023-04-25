/*
5. Two college collegues had argue with a ASCII value
conversion method. Write a C++ Program which provides a
solution for their issue.
*/

#include<iostream>

using namespace std;

class ascii{
	
	char x ;
	
	public :
		
		void input()
		{
			cout<<"Press any key : "; cin>>x;
		}
		
		void display_ascii()
		{
			cout<<"ASCII value : "<<(int)x;
		}
};

main()
{
	ascii a;
	a.input();
	a.display_ascii();
	
}
