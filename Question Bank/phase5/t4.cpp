/*

4. Design a C++ UDF which producing cubes of all elements
of provided array in form of another array. ¶hen, find
average value of that new array. Based on that average
value decide that array’s kindµ
 If 22<=average<=35, then an array is tighter
 If 35<average<=50, then an array is balanced
 If average>50, then an array is toxic
 If average<22, then an array is looser

*/

#include<iostream>
using namespace std;

void doit(int r[])
{
	int count = 0;
	float average,sum=0 ;
	cout<<"Original Array : ";
	for(int i=0; r[i]!=NULL ; i++)
	{
		cout<<r[i]<<" ";
		count++;
	}
	cout<<"\nArray with cube : ";
	int cube_array[count];
	for(int i=0; i<count;i++)
	{
		cube_array[i]=r[i]*r[i]*r[i];
		sum=sum+cube_array[i];
		cout<<cube_array[i]<<" ";
	}
	average=sum/10;
	
	 cout << "\nAverage of cubed array: " << average << endl;
	 
    if (average >= 22 && average <= 35)
    {
        cout << "Array is HIGH" << endl;
    }
    else if (average > 35 && average <= 50)
    {
        cout << "Array is BALANCED" << endl;
    }
    else if (average > 50)
    {
        cout << "Array is TOXIC" << endl;
    }
    else if (average < 22)
    {
        cout << "Array is LOOSE" << endl;
    }

}

main()
{
	
	int r[11]={1,2,3,4,5,6,7,8,9,10};
	doit(r);

}



