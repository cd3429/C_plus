
#include<iostream>

using namespace std;

void swap(int a[],int b[],int temp[],int n)

{
	
	int i;
	for(i=0;i<n;i++)
	{
		temp[i]=a[i];
		a[i]=b[i];
		b[i]=temp[i];
	}
	cout<<"Swapped Array :\n";
	for(i=0;i<n;i++)
	{
		cout << "a[" << i+1 << "] : " << a[i] << endl;
	}
	
	cout<<endl;
	for(i=0;i<n;i++)
	{
		cout << "b[" << i+1 << "] : " << b[i] << endl;
	}
}

int main()
{
	int n,i;
	
	cout << "Enter the number of elements : ";
	cin >> n;
	
	int a[n],b[n],temp[n];
	
	for(i=0;i<n;i++)
	{
		cout << "a[" << i+1 << "] :";
		cin >> a[i];
	}
	cout<<endl;
	for(i=0;i<n;i++)
	{
		cout << "b[" << i+1 << "] :";
		cin >> b[i];
	}
	swap(a,b,temp,n);
}
