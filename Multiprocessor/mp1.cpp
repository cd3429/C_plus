/*

1. WAP to create a Message class with a constructor that takes a single string with a default value. 
Create a private member string, and in the constructor simply assign the argument string to your internal string. 
Create two overloaded member functions called print( ): one that takes no arguments and simply prints the message stored in the object, 
and one that takes a string argument, which it prints in addition to the internal message.

*/

#include<iostream>
using namespace std ;

class Message{
	
	string s1="I love monsoon!" ;
	
	public :
		
		Message()
		{
			cout<<endl<<s1 ;			
		}
		
		Message(string s2)
		{
			cout<<endl<<s1 ; // additional message 
			cout<<endl<<s2 ;
		}
	
};

main()
{
	string s;
	
	cout<<"\nEnter String : "; cin>>s;
	cout<<endl;
	Message m ;
	Message m2(s);
}
