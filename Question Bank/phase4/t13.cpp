/*

13. A Math teacher wants to teach how to perform a dot
product of two matrices. Design a better approach in C++
to help this math teacher.

*/


#include <iostream>
using namespace std;

main() {
    int R = 3;
    int C = 3;
    int m1[R][C],m2[R][C],D[R][C];
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            cout<<"Enter the array element M1["<<i<<"]["<<j<<"] : ";
			cin>>m1[i][j];
        }
    }
    cout<<endl;
     for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            cout<<"Enter the array element M2["<<i<<"]["<<j<<"] : ";
			cin>>m2[i][j];
			D[i][j]=m1[i][j]*m2[i][j];
        }
    }
    
    cout << "\nOriginal Matrix M1:\n";
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            cout << m1[i][j] << "\t";
        }
        cout << "\n\n";
    }
    
    cout << "Original Matrix M2:\n";
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            cout << m2[i][j] << "\t";
        }
        cout << "\n\n";
    }
    
    cout << "Dot Matrix :\n";
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            cout << D[i][j] << "\t";
        }
        cout << "\n\n";
    }
    
}
