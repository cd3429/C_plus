/*

6. A Teacher gives a list to students in which a list
contains many years in numeric format i.e 1994, 1947,
2002, 1996, etc. All students supposed to find all
duplicate years which occurs more than once and store
them into another list. Design such type of system with
help of C++.

*/

#include <iostream>
using namespace std;

main() {
    int years[] = { 1994, 1947, 2002, 1996, 1947, 2002, 1985, 2005, 1994, 2002 };
    int n = sizeof(years)/sizeof(years[0]);
    int duplicates[10] = {0}; 
    int duplicateCount = 0;

  
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(years[i] == years[j]) {
            
                bool alreadyAdded = false;
                for(int k=0; k<duplicateCount; k++) {
                    if(duplicates[k] == years[i]) {
                        alreadyAdded = true;
                        break;
                    }
                }
                if(!alreadyAdded) {
                    duplicates[duplicateCount++] = years[i];
                }
                break;
            }
        }
    }

    if(duplicateCount > 0) {
        cout << "Duplicate years found: ";
        for(int i=0; i<duplicateCount; i++) {
            cout << duplicates[i] << " ";
        }
    } else {
        cout << "No duplicate years found.";
    }

}

