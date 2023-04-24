/*

8. Design a system in C++ which automatically transpose
any given Matrix of RxC dimension. Where R is number of
Rows and C is number of Columns. Help three musketeers
for passing an interview round by solving this last
question.

*/

#include <iostream>
using namespace std;

int main() {
    int R = 3;
    int C = 3;
    int matrix[R][C],T[R][C];
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            cout<<"Enter the array element a["<<i<<"]["<<j<<"] : ";
			cin>>matrix[i][j];
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
    
    cout << "Transposed Matrix:\n";
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            cout << T[i][j] << "\t";
        }
        cout << "\n";
    }

}

