/*

10. Help Martin to solve a special kind of puzzle by
designing a C++ system. Total 25 random numbers arranged
in a form of Square Matrix. To solve that puzzle, he has
to find addition of all diagonally aligned numbers on
puzzle cardboard.

*/

#include <iostream>
using namespace std;

int main() {
    int R = 5;
    int C = 5;
    int matrix[R][C];
    int sum=0;
	 
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            cout<<"Enter the random number a["<<i<<"]["<<j<<"] : ";
			cin>>matrix[i][j];		
			if(i==j)
			{
				sum=sum+matrix[i][j];
			}
        }
    }
    cout << "\nOriginal Matrix:\n";
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << "\n";
    }
    
    cout<<"\n\nThe sum of all diagonally aligned numbers is : "<<sum;
    
}
