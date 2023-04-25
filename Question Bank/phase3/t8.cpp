/*

8. Build a C++ program which detects if a given word
contains any vowels or not. And if it contains, then
count how many total vowels are present and which they
are. Also returns average value of total vowels’ ASCII
values’. Based on that average value, decide word’s
level!
 If 10<=average<=1 , then a word is SMOOTHER
 If 1 <average<=30, then a word is SOBER
 If average>=30, then a word is HARDER
 If average==0, then a word is GORGEOUS
 
*/

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char word[50];
    cout << "Enter a word: ";
    cin >> word;
    
    int num_vowels = 0, sum_vowel_ascii = 0;
    for (int i = 0; i < strlen(word); i++) {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U') {
            num_vowels++;
            sum_vowel_ascii +=word[i];
        }
    }
    
    if (num_vowels == 0) {
        cout << "GORGEOUS" << endl;
    } else {
        double avg_vowel_ascii = sum_vowel_ascii / num_vowels;
        if (avg_vowel_ascii >= 10 && avg_vowel_ascii <= 15) {
            cout << "SMOOTHER" << endl;
        } else if (avg_vowel_ascii > 15 && avg_vowel_ascii <= 30) {
            cout << "SOBER" << endl;
        } else if (avg_vowel_ascii > 30) {
            cout << "HARDER" << endl;
        } else {
            cout << "Error: Invalid input" << endl;
        }
    }
    
    return 0;
}

