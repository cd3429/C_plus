/*

2. A Businessman was bankrupted in a Scam with a minimal amount left in 
a bank of INR 18,000. After some months of hardwork, he earned external amount of INR 1,20,000. 
Now he might be goes to the bank and do a deposit or withdraw some money as he wants. 
Prepare a C++ solution for this scenario with all required validations and criterias. 

*/

#include <iostream>

using namespace std;

int main() {
    double balance = 18000.0;
    double deposit, withdraw;

    cout << "Welcome to the Bank!" << endl;
    cout << "Your current balance is: " << balance << endl;

    while (true) {
        int choice;
        cout << endl << "Please choose an option:" << endl;
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Exit" << endl;
        cout << "Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter deposit amount: ";
                cin >> deposit;
                if (deposit < 0) {
                    cout << "Invalid deposit amount!" << endl;
                } else {
                    balance += deposit;
                    cout << "New balance: " << balance << endl;
                }
                break;
            case 2:
                cout << "Enter withdraw amount: ";
                cin >> withdraw;
                if (withdraw < 0) {
                    cout << "Invalid withdraw amount!" << endl;
                } else if (withdraw > balance) {
                    cout << "Insufficient balance!" << endl;
                } else {
                    balance -= withdraw;
                    cout << "New balance: " << balance << endl;
                }
                break;
            case 3:
                cout << "Thank you for using our services!" << endl;
                return 0;
            default:
                cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}


