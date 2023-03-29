//4. WAP to check if a given character is vowel or consonant.

#include<iostream>

using namespace std ;

main()

{
	
	char a ;
	
	cout<<"Enter a character : ";
	cin>>a;
	
	if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
	{
		cout<<"The character is vowel";
	}
	else
	{
		cout<<"The character is consonant";
	}
	

}
