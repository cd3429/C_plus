//3. WAP to create class to read time in seconds and convert into time in (HH:MM:SS) format.

#include<iostream>

using namespace std;

class convertTime{
	
	int Sec,h=0,m=0,s=0 ; // h=hour , m=minute , s=second ;
	
	public :
		
		getvalues(){
		
		cout<<"Enter the Second value : "; 	cin>>Sec ; 
		
		}
	
		printdata(convertTime s)
		{
	
			while(s.Sec>=60)
			{
				m++;
				s.Sec-=60;
			}
			
			
			while(m>=60)
			{
				h++;
				m-=60;
			}
			
			cout<<"\nThe sum of two time is : "<<h<<" hours "<<m<<" minutes "<<s.Sec<<" seconds " ;
		}
	
};

main()
{
	convertTime s;
	s.getvalues();
	s.printdata(s);
}
