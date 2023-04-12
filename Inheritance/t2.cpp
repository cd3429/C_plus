/*

2. WAP to convert given degree celsius temperature into
fahrenheit and convert that fahrenheit temperature
into kelvin by implementing multilevel inheritance:
Class P -> Class Q -> Class R
- Class P has following members: temperature
attribute in float
- Class Q has following members: toFehrenheit()
method
- Class R has following members: toKelvin() method

*/


#include<iostream>

using namespace std ;

class P 
{
	protected :
		
		int C ; 
		
	public :
		
		void takeC()
		{
			cout<<"Enter the temperature in degree celsius : "; cin>>C ;  
		}
		
};

class Q : public P

{

	protected :
		
		float F ;
	
	public :
		
		void toFahrenheit()
		{
			
			F = C*1.8 + 32 ;
			cout<<"\nTemperature in Fahrenheit : "<<F ;
			
		}
	
	
};

class R : public Q
{
	
	protected :
		
		float K ;
		
	public :
		
		void toKelvin()
		{
			K = (F-32)*0.56 + 273.15 ;
			cout<<"\nTemperature in Kelvin : "<<K ;
		}
};

main()
{
	
	R r ;
	r.takeC() ;
	r.toFahrenheit() ;
	r.toKelvin() ;
	
}
