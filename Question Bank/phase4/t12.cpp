/*

12. A College wants to celebrate all degree holder
students to throwing their hats in a predefined way:
First all 25 students have to arranged in a Square
Matrix. First, an upper half of triangle matrix will
throwing hats and then a lower half of triangle matrix
will. Help them to achieve this unique idea by using C++.

*/

#include <iostream>
using namespace std;

int main() {
    int R = 5;
    int C = 5;
    char matrix[R][C];
  
    cout << "\nAll students wearing hat :\n";
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
        	matrix[i][j]='H';
            cout << matrix[i][j] << "\t";
        }
        cout << "\n";
    }
    
    cout << "\nFirst half students are throwing the hat :\n";
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C-i; j++) {
        	matrix[i][j]='O';
        }
    }
    
     for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << "\n";
    }
    
    cout << "\nSecond half students are throwing the hat :\n";
   
     for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
        	if(matrix[i][j]=='H')
        	{
        		matrix[i][j]='O';	
			}
        }
    }
    
     for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << "\n";
    }
    
}
