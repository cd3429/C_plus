/*

9. Columbian army arranged all 9 forbidden refugees in a
3x3 matrix formation. An army cadets have to find that
which one of the refugees stats the highest weight and
which one weighs the lowest weight. Help army cadets by
preparing C++ solution for their undercover mission.

*/


#include <iostream>
using namespace std;

int main() {
    int R = 3;
    int C = 3;
    int count[9], cc=0 ,temp;
    int matrix[R][C],T[R][C];
    int index[9];
    
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            cout<<"Enter the weight of refugee number a["<<i<<"]["<<j<<"] : ";
			cin>>matrix[i][j];
			count[cc]=matrix[i][j];
			index[cc]=cc+1;
			cc++;
        }
    }
    cout << "Original Matrix:\n";
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            cout << matrix[i][j] << "\t";
            T[j][i]=matrix[i][j];
        }
        cout << "\n";
    }
        
    for(int k=1; k<=9;k++){
	    for (int i = 0; i < 8 ; i++) {
	    	if(count[i]<count[i+1])
	    	{
	    		temp=count[i];
	    		count[i]=count[i+1];
	    		count[i+1]=temp;
	    		
	    		temp=index[i];
	    		index[i]=index[i+1];
	    		index[i+1]=temp;
	    		
			}
	    }
	}
	
	cout<<"\n\nThe refugee number "<<index[0]<<" has the highest weight "<<count[0]<<" kg"<<endl;
	cout<<"The refugee number "<<index[8]<<" has the lowest weight "<<count[8]<<" kg"<<endl;
	
}

