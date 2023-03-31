#include<iostream>

using namespace std ;

class car{
	
	public :
			
		int car_id;
		int car_release_year;
		char car_company_name[25];
		char car_color[25];
		char car_model[25];
		
	public :
		
		input()
		{
			cout<<"Car ID "; cin>>car_id;
			cout<<"Car Company Name :"; cin>>car_company_name;
			cout<<"Car Color"; cin>>car_color;
			cout<<"Car Model "; cin>>car_model;
			cout<<"Car Release Year "; cin>>car_release_year;
		}
		
		
		output()
		{
			cout<<"Car ID "<<car_id<<endl;
			cout<<"Car Company Name :"<<car_company_name<<endl;
			cout<<"Car Color"<<car_color<<endl;
			cout<<"Car Model "<<car_model<<endl;
			cout<<"Car Release Year "<<car_release_year<<endl;
		}
		
};

main()
{
	car c[4] ;
	int i;
	
	
	for(i=0;i<5;i++)
	{
	cout<<"\n\nCar Number ["<<i<<"] : \n";
	c[i].input();
	}
	
	cout<<"\n\n";
	
	for(i=0;i<5;i++)
	{
	cout<<"\n\nCar Number ["<<i<<"] : \n";
	c[i].output();
	}
	
}
