//2. WAP to create a class to read and add two times.

#include<iostream>

using namespace std;

class convertTime{
	
	int h,m,s ; // h=hour , m=minute , s=second ;
	
	public :
		
		getvalues(){
		
		cout<<"Enter the Hour value : "; 	cin>>h ;
		cout<<"Enter the Minute value : "; 	cin>>m ;
		cout<<"Enter the Second value : "; 	cin>>s ; 
		
		}
	
		printdata(convertTime t1,convertTime t2)
		{
			
			h=t1.h+t2.h ;
			m=t1.m+t2.m ;
			s=t1.s+t2.s ;
			
			while(s>=60)
			{
				m++;
				s-=60;
			}
			
			
			while(m>=60)
			{
				h++;
				m-=60;
			}
			
			cout<<"\nThe sum of two time is : "<<h<<" hours "<<m<<" minutes "<<s<<" seconds " ;
		}
	
};

main()
{
	convertTime t1,t2,t;
	t1.getvalues();
	t2.getvalues();
	t.printdata(t1,t2);
}
