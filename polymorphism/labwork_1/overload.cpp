/*
1. WAP to overload < operator to find which object
contains higher value from given 2 numbers.
*/

#include<iostream>

using namespace std;

class compare1
{
    int a,b;

    public :

    input(){

        cout<<"Enter Input : "; cin>>a ;

    }

    compare1 operator < (compare1 z)
    {
        if(a<z.a)
        {
            cout<<"Object Q is larger : "<<z.a;
        }
        else
        {
            cout<<"Object P is larger "<<a;
        }
    }

};

main()

{
    compare1 p;
    compare1 q;
    compare1 r;
    p.input();
    q.input();
    r=p<q;
}



