//4. WAP to create a class which Read and Print House details along with Room details.

#include<iostream>

using namespace std;

class house {
	
	int area_size;
	int num_room;
	char color[15];
	char location[100];
	
	
	public :
		
		getvalues(){
		
		cout<<"Enter the area in meter square : "; 	cin>>area_size ; 
		cout<<"Enter the number of rooms : "; 	cin>>num_room ;
		cout<<"Enter the color of house : "; 	cin>>color ;
		cout<<"Enter the location of house(north/south/east/west) : "; 	cin>>location ;
		
		}
	
		printdata()
		{
	
		cout<<"\n\nThe area of the house is "<<area_size<<" meter square.\n";
	
		cout<<"There are "<<num_room<<" rooms in the house\n";
		
		cout<<"The color of the house is "<<color<<".\n";
		
		cout<<"The location of the house is "<<location<<".\n";
		}
	
};

main()
{
	house h;
	h.getvalues();
	h.printdata();
}
