#include<iostream>

using namespace std ;

class employee{
	
	public :
			
		int emp_id;
		int emp_age;
		int emp_salary;
		int emp_experience;
		char emp_city[25];
		char emp_company_name[25];
		char emp_name[25];
		char emp_role[25];
		
	public :
		
		input()
		{
			cout<<"iD : "; cin>>emp_id;
			cout<<"Name : "; cin>>emp_name;
			cout<<"Role : "; cin>>emp_role;
			cout<<"Age : "; cin>>emp_age;
			cout<<"Salary : "; cin>>emp_salary;
			cout<<"Experience : "; cin>>emp_experience;
			cout<<"City : "; cin>>emp_city;
			cout<<"Company : "; cin>>emp_company_name;
		}
		
		
		output()
		{
			cout<<"iD : "<<emp_id<<endl;
			cout<<"Name : "<<emp_name<<endl;
			cout<<"Role : "<<emp_role<<endl;
			cout<<"Age : "<<emp_age<<endl;
			cout<<"Salary : "<<emp_salary<<endl;
			cout<<"Experience : "<<emp_experience<<endl;
			cout<<"City : "<<emp_city<<endl;
			cout<<"Company : "<<emp_company_name<<endl;
		}
		
};

main()
{
	employee emp[5] ;
	int i;
	
	emp[2].emp_city="Surat";
	
	cout<<emp[2].emp_city;
	/*
	for(i=0;i<5;i++)
	{
	cout<<"\n\nEmployee ["<<i<<"] : \n";
	emp[i].input();
	}
	
	cout<<"\n\n";
	
	for(i=0;i<5;i++)
	{
	cout<<"\n\nEmployee ["<<i<<"] : \n";
	emp[i].output();
	}
	*/
	
}
