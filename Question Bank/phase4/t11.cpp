/*

11. A one-sided open Tennis ball jar has capacity of
storing total 5 different balls. Each ball has unique
number attached as a label itself. Arrange all that balls
in a jar in such a way that their order is stats as a
reverse by referring attached numbers as a label. Create
a C++ system for doing such type of task.

*/

#include <iostream>

using namespace std;

main()
{
    int labels[5],temp;

    cout << "Enter the labels of the balls:\n";
    for (int i = 0; i < 5; i++) {
        cin >> labels[i];
    }

     for(int k=1; k<=5;k++){
	    for (int i = 0; i < 4 ; i++) {
	    	if(labels[i]>labels[i+1])
	    	{
	    		temp=labels[i];
	    		labels[i]=labels[i+1];
	    		labels[i+1]=temp;	    		    		
			}
	    }
	}

    cout << "Labels of the balls in reverse order:\n";
    for (int i = 0; i < 5 ; i++) {
        cout << labels[i] << endl;
    }
    
}

