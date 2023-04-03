//5. WAP which illustrates the use of PUBLIC access modifiers. 

#include<iostream>

using namespace std;

class house {
	
	public : // public access modifiers 
	
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
		
};

main()
{
	house h;
	h.getvalues();
	
		cout<<"\n\nThe area of the house is "<<h.area_size<<" meter square.\n";
		cout<<"There are "<<h.num_room<<" rooms in the house\n";
		cout<<"The color of the house is "<<h.color<<".\n";
		cout<<"The location of the house is "<<h.location<<".\n";
}
