/*

26. By using Multilevel Inheritance, implement below
mentioned structure in C++ for employee records system.

see graph in phase 7 :

Use proper implementation of Encapsulation, static
keyword and Inheritance when needed.

*/

#include<iostream>

using namespace std;

class P {
	
	public :
		
	int id,age,salary,experience;
	string name,email,city,role;
	static string company_name;
	
	public : 
			void setterP(int id, string name, int age)
			{
				this->id=id;
				this->name=name;
				this->age=age;
			}
};

string P::company_name = "Badmash Company";

class Q : public P {
	
	public :
			void setterQ(string role,int salary,int experience)
			{
				this->role=role;
				this->salary=salary;
				this->experience=experience;
			}
	
};

class R : public Q {
	
	public :
			void setterR(string email, string city)
			{
				this->email=email;
				this->city=city;
			}
			void getterR()
			{
				cout<<"\n\tID of the employee : "<<id;
				cout<<"\n\tRole of the employee : "<<role;
				cout<<"\n\tSalary of the employee : "<<salary<<endl;
			}
};

class S : public R {
	
	public :
		void getterS()
		{
			cout<<"\n\tEmployee ID : "<<id ;
			cout<<"\n\tEmployee Name : "<<name ;
			cout<<"\n\tEmployee Age : "<<age ;
			cout<<"\n\tEmployee Salary : "<<salary ;
			cout<<"\n\tEmployee Experience : "<<experience ;
			cout<<"\n\tEmployee Email : "<<email ;
			cout<<"\n\tCompany Name : "<<company_name;
			cout<<"\n\tEmployee City : "<<city ;
			cout<<"\n\tEmployee Role : "<<role<<endl; 
		}
	
};

main()
{
		
	int id,age,salary,experience;
	string name,email,city,role;
	
	S s ;
	
	s.setterP(23,"Rohit",25);
	s.setterQ("Artist",50000,3);
	s.setterR("rohit1234@gmail.com","Surat");
	
	s.getterR();
	s.getterS();
	
}
