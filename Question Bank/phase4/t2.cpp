/*		phase 4 , task 2

Hitler ordered a 10 soldiers pared to align in a row.
He wants to know that which soldier have the highest
killing score. Help him by design a C++ Program.

*/

#include<iostream>
using namespace std ;

main() {
	
    int soldiers[10],index[10];; 

    // killing score
    for (int i = 0; i < 10; i++) {
        cout << "Enter the killing score of soldier " << i + 1 << ": ";
        cin >> soldiers[i];
        index[i]=i+1;
    }
    
    int temp;
    
    for(int count=1; count<=10;count++){
	    for (int i = 0; i < 9 ; i++) {
	    	if(soldiers[i]<soldiers[i+1])
	    	{
	    		temp=soldiers[i];
	    		soldiers[i]=soldiers[i+1];
	    		soldiers[i+1]=temp;
	    		
	    		temp=index[i];
	    		index[i]=index[i+1];
	    		index[i+1]=temp;
			}
	    }
	}
	
	cout << "\nThe soldier with highest killing is : " << index[0] << " whose killing score is :  "<<soldiers[0];
}


