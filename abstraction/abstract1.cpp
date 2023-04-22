/*

1. WAP to abstract some attributes of class Admin to
prevent them to be inherited by its child classes.
- Class Admin -> Class Manager
- Class Manager -> Class Employee
- Class Admin has following members:
- company_name
- manager_salary
- employee_salary
- total_staff
- total_annual_revenue
- can_terminate
- use all attributes accessibility in parent class and
child class properly.
- override a method myAccess() in both child
classes to display all parent class’s members value
accordingly.

*/

#include<iostream>

using namespace std;

class Admin{
	
	string company_name;
	int manager_salary;
	string can_terminate;
	
	public :
		void input()
		{
			cout<<"Enter the name of the company : "; cin>>company_name;
			cout<<"Enter the salary of the manager : "; cin>>manager_salary;
			cout<<"Enter the yes or no for termination : "; cin>>can_terminate;
		}
		void myAccess()
		{
			cout<<"\nThe name of the company : "<<company_name;
			cout<<"\nThe salary of the manager : "<<manager_salary;
			cout<<"\ncan terminate? : "<<can_terminate;
		}
		
};

class Manager : public Admin{
	
	int employee_salary;
	int total_staff;
	
	public : 
		
		void input()
		{
			cout<<"Enter the salary of the employee : "; cin>>employee_salary;
			cout<<"Enter the total staff : "; cin>>total_staff;
		}
		
		void myAccess()
		{	
			cout<<"\nThe salary of the employee : "<<employee_salary;
			cout<<"\nThe the total staff : "<<total_staff;
		}
		
};

class Employee : public Manager{
	
	int total_annual_revenue ;
	
	public :
		
		void input()
		{
			cout<<"Enter the total annual revenue : "; cin>>total_annual_revenue;
		}
		
		void myAccess()
		{
			cout<<"\nTotal annual revenue : "<<total_annual_revenue;
		}
	
};

main()
{
	
	Employee e;
	e.Admin::input();
	e.Manager::input();
	e.Employee::input();
	
	e.Admin::myAccess();
	e.Manager::myAccess();
	e.Employee::myAccess();
	
}
