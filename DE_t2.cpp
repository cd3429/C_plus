/*
2. WAP to get and display 5 Customers
information using encapsulation by including
below mentioned attributes:
- cust_id
- cust_name
- cust_age
- cust_telecome_brand_name (like Jio, Airtel, Vi, etc.)
- cust_mobile_number
- cust_city
- cust_simcard_validity (in years)

*/

#include<iostream>

using namespace std;


	class customer {
		
		int id,age,validity,mobile_no;
		string name,telecome_name,city;	
		
		public :
			
			setcust(int id,int age,int validity,int mobile_no,string name,string telecome_name,string city){
				
				this->id=id;
				this->age=age;
				this->validity=validity;
				this->mobile_no=mobile_no;
				this->name=name;
				this->telecome_name=telecome_name;
				this->city=city;
			
			}
			
			getcust(){
			
				cout<<"\nCustomer ID : "<<id ;
				cout<<"\nCustomer Age : "<<age ;
				cout<<"\nCustomer Validity : "<<validity ;
				cout<<"\nCustomer Mobile Number : "<<mobile_no ;
				cout<<"\nCustomer Name : "<<name ;
				cout<<"\nCustomer Telecome Brand Name : "<<telecome_name ;
				cout<<"\nCustomer City : "<<city ;
								
				cout<<"\n\n";
	
			}
		
	};
	
	
	
main(){
	
	customer c[5];
		
	int id,age,validity,mobile_no;
	string name,telecome_name,city;	
			
	for(int i=0;i<5;i++)
	{	
		
		cout<<"Customer number : "<<i+1<<endl;
		cout<<"\tCustomer ID : "; cin>>id ;
		cout<<"\tCustomer Age : "; cin>>age ;
		cout<<"\tSimcard Validity : "; cin>>validity ;
		cout<<"\tCustomer Mobile Number : "; cin>>mobile_no ;
		cout<<"\tCustomer Name: "; cin>>name ;
		cout<<"\tCustomer Telecome Brand Name : "; cin>>telecome_name ;
		cout<<"\tCustomer City : "; cin>>city ;
				
		cout<<"\n\n";
		
		c[i].setcust(id,age,validity,mobile_no,name,telecome_name,city);
		
		
	}
	
	for(int i=0;i<5;i++)
	{
	c[i].getcust();
	}
	
}
