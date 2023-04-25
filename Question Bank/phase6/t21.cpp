/*

21. Build a C++ solution which returns array of all ASCII
values of alphabets skipping 3 characters. Use concept of
Constructors. After returning that array, find addition
of that values and decide whether it is a odd or even
number.

*/

#include <iostream>

using namespace std;

class AlphabetArray {
public:
    AlphabetArray() {
        // Initialize array
        int index = 0;
        for (int i = 'A'; i <= 'Z'; i++) {
            if (i != 'D' && i != 'W' && i != 'Z') {
                array[index++] = i;
            }
        }
    }

    int* getArray() {
        return array;
    }

    int getSum() {
        int sum = 0;
        for (int i = 0; i < size; i++) {
            sum += array[i];
        }
        return sum;
    }

    bool isSumEven() {
        return (getSum() % 2 == 0);
    }

public:
    static const int size = 23;
    int array[size];
};

int main() {
    AlphabetArray alphabet;
    int* array = alphabet.getArray();
    for (int i = 0; i < alphabet.size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    int sum = alphabet.getSum();
    cout << "Sum of ASCII values: " << sum << endl;
    if (alphabet.isSumEven()) {
        cout << "Sum is even." << endl;
    } else {
        cout << "Sum is odd." << endl;
    }

    return 0;
}

