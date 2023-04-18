// 2. WAP to add two distances using binary plus (+) operator overloading.


#include<iostream>

using namespace std;

class dis
{
    int m;

    public :

    input(){

        cout<<"Enter the distance in Kilometer : "; cin>>m ;

    }

    dis operator + (dis z)
    {
        cout<<"The sum of the distance is : "<<m+z.m<<" km";
    }

};

main()

{
    dis p;
    dis q;
    dis r;
    p.input();
    q.input();
    r=p+q;
}



