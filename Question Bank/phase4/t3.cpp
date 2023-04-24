/* 		phase 4 , task 3

Design a C++ system which automatically identifies if
a given word contains any letter or symbol between both
SHIFT keys from our regular PC Keyboard.

*/

#include<iostream>
using namespace std;

main()
{
	// german keyboard layout 
    char mykeys[25] = { '<', '>', '|', 'y', 'x', 'c', 'v', 'b', 'n', 'm', ';', ',', ':', '.', '-', '_', 'Y', 'X', 'C', 'V', 'B', 'N', 'M', 'µ' };
    char key;
    int flag=0;
	
    cout<<"Press any key : "; 
    cin>>key;
	
    for(int i=0; i<25; i++)
    {
        if(key==mykeys[i])
        {
            flag++;
        }
    }
	
    cout<<"\n\n";
	
    if(flag>=1)
    {
        cout<<"You have pressed one of the keys between two shift buttons!";
    }
    else
    {
        cout<<"The key you pressed doesn't lay between two shift buttons!";
    }

}

