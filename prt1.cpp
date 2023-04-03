//1. WAP to create a class to read and add two distance. (e.g. 8 feet 16 inch + 4 feet 14 inch = 14 feet 6 inch)

#include<iostream>

using namespace std;

class convertFI{
	
	int f,i ; // f=feet , i=inch ;
	
	public :
		
		getvalues(){
		
		cout<<"Enter the feet value : "; cin>>f ;
		cout<<"Enter the inch value : "; cin>>i ;
		
		}
	
		printdata(convertFI d1,convertFI d2)
		{
			
			f=d1.f+d2.f ;
			i=d1.i+d2.i ;
			
			while(i>=12)
			{
				f++;
				i-=12;
			}
			
			cout<<"\nThe sum of two distance is : "<<f<<" feet "<<i<<" inch" ;
		}
	
};

main()
{
	convertFI d1,d2,d;
	d1.getvalues();
	d2.getvalues();
	d.printdata(d1,d2);
}
