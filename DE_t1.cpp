/*
1. WAP to get and display 5 Students information using
encapsulation by including below mentioned
attributes:
- stu_id
- stu_name
- stu_age
- stu_course
- stu_email
- stu_city
- stu_college
*/

#include<iostream>

using namespace std;


	class student {
		
		int id,age;
		string name,course,email,city,college;	
		
		public :
			
			setStud(int id,int age,string name,string course,string email,string city,string college){
				
				this->id=id;
				this->age=age;
				this->name=name;
				this->course=course;
				this->email=email;
				this->city=city;
				this->college=college;
				
			}
			
			getStud(){
			
				cout<<"\nStudent ID : "<<id ;
				cout<<"\nStudent Age : "<<age ;
				cout<<"\nStudent Name : "<<name ;
				cout<<"\nStudent Course : "<<course ;
				cout<<"\nStudent Email : "<<email ;
				cout<<"\nStudent City : "<<city ;
				cout<<"\nStudent College : "<<college ;
								
				cout<<"\n\n";
	
			}
		
	};
	
	
	
main(){
	
	student s[5];
	
	int id,age;
	string name,course,email,city,college;
	
	for(int i=0;i<5;i++)
	{	
		
		cout<<"Student number : "<<i+1<<endl;
		cout<<"\tStudent ID : "; cin>>id ;
		cout<<"\tStudent Age : "; cin>>age ;
		cout<<"\tStudent Name : "; cin>>name ;
		cout<<"\tStudent Course : "; cin>>course ;
		cout<<"\tStudent Email : "; cin>>email ;
		cout<<"\tStudent City : "; cin>>city ;
		cout<<"\tStudent College : "; cin>>college ;
				
		cout<<"\n\n";
		
		s[i].setStud(id,age,name,course,email,city,college);
		
	}
	
	for(int i=0;i<5;i++)
	{
	s[i].getStud();
	}
	
}
