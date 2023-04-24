//1) WAP to illustrate the abstract class in C++.

#include<iostream>

using namespace std;

class pattern{
	
	protected :
		
	int n;
	char sym;
	
	public :
		virtual void pyramid()=0;
};

class draw_pattern : public pattern{
	
	public :
		void pyramid()
		{
			
			cout<<"Enter the number of raw : "; cin>>n;
			cout<<"Enter the symbol : "		  ; cin>>sym;
			
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<=i;j++)
				{
				cout<<sym;
				}
				cout<<endl;
			}
		}
};

main()
{
	pattern *p = new draw_pattern();
	p->pyramid();
}
