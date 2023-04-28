/*

5. An Indian Airport needs an identification system to
easily extract all types of vowels, consonants, digits
and spacial symbols from Highjackers’ communicative
messages to identify their next move. Help Indian
Airlines by building a C++ program which prime purpose is
to identify all string literals.

*/

#include <iostream>
#include <string>

using namespace std;

class secretMessage
{
	
	public :
		
	string message;
    int vowels = 0, consonants = 0, digits = 0, symbols = 0;

	public :
		
		void inputMessage()
		{
		 	cout << "Enter the message : ";
    		getline(cin, message);	
		}
		
		void scanMessage()
		{
			for (int i = 0; i < message.length(); i++) 
				{
			        if ( (message[i]>=65 && message[i]<=90 ) || (message[i]>=97 && message[i]<=122 ) ) {
			            if (message[i] == 'a' || message[i] == 'e' || message[i] == 'i' || message[i] == 'o' || message[i] == 'u' ||
			                message[i] == 'A' || message[i] == 'E' || message[i] == 'I' || message[i] == 'O' || message[i] == 'U') 
							{
			                vowels++;
			            	} 
						else 
							{
			                consonants++;
			            	}
			        } else if (message[i]>=48 && message[i]<=57) {
			            digits++;
			        } else {
			            symbols++;
			        }
			    }
		}
		
		void identifyKeys(){
			
			cout << "\n\tVowels: " << vowels << endl;
		    cout << "\tConsonants: " << consonants << endl;
		    cout << "\tDigits: " << digits << endl;
		    cout << "\tSpecial symbols: " << symbols << endl;

		}

};

main() {
	
secretMessage M ;

    M.inputMessage();
    M.scanMessage();
    M.identifyKeys();
   
}

