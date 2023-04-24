/*
7. A Frontman can randomly assign two 3x3 matrices to all
participants in Squid Games. All participants have to add
that matrices and store final answer as a separate matrix
to win this type of round in the game. Build a C++ system
to help them all.
*/

#include<iostream>
using namespace std;

main()
{
    int matrix1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrix2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int resultMatrix[3][3];

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            resultMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    cout << "Resultant Matrix: " << endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << resultMatrix[i][j] << " ";
        }
        cout << endl;
    }

}

