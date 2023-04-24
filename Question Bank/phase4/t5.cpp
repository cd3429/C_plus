/*

5. Devansh gives a list of random numbers to his
colleague Rohan to distinguish all odd and even numbers,
and store them in different lists. Help Rohan by building
such a solution with help of C++.

*/

#include <iostream>
using namespace std;

main()
{
    int n;
    cout << "Enter the number of elements in the list: ";
    cin >> n;
    
    int arr[n], even[n], odd[n];
    int e_count = 0, o_count = 0;

 
    for (int i = 0; i < n; i++)
    {
    	cout << "\nEnter the elements of the list: ";
        cin >> arr[i];
        if (arr[i] % 2 == 0)
        {
            even[e_count] = arr[i];
            e_count++;
        }
        else
        {
            odd[o_count] = arr[i];
            o_count++;
        }
    }

    cout << "\nEven numbers: ";
    for (int i = 0; i < e_count; i++)
    {
        cout << even[i] << " ";
    }

    cout << "\nOdd numbers: ";
    for (int i = 0; i < o_count; i++)
    {
        cout << odd[i] << " ";
    }

}

