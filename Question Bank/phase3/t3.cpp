/*

3. An IT company named "HARM Pvt. Ltd." released an open competition to create a startup level User Authentication system. 

This system must have these functionalities: 

• User can register with email and password 
• User can login with proper email and password 
• User can delete his/her account 

Criterias for user authentication: 

• A password must contain at least one digit, one special symbol, one lowercase letter and one uppercase letter while user try to register 
• Email and Password must be same while user login 
• After user account deletion, user cannot be able to login again 

Design a C++ system for this competition for the price money 8.2500. Hint: You can use multiple String Arrays.

*/

#include <iostream>
#include <string>
using namespace std;

struct User {
    string email;
    string password;
    bool isDeleted;
};

const int MAX_USERS = 100;
User users[MAX_USERS];
int numUsers = 0;

bool validatePassword(string password) {
    bool hasDigit = false, hasSpecial = false, hasLower = false, hasUpper = false;
    for (int i = 0; i < password.length(); i++) {
        if (isdigit(password[i])) {
            hasDigit = true;
        } else if (ispunct(password[i])) {
            hasSpecial = true;
        } else if (islower(password[i])) {
            hasLower = true;
        } else if (isupper(password[i])) {
            hasUpper = true;
        }
    }
    return hasDigit && hasSpecial && hasLower && hasUpper;
}

void registerUser() {
    if (numUsers >= MAX_USERS) {
        cout << "Cannot register more users." << endl;
        return;
    }
    string email, password;
    cout << "Enter email: ";
    cin >> email;
    for (int i = 0; i < numUsers; i++) {
        if (users[i].email == email) {
            cout << "Email already registered." << endl;
            return;
        }
    }
    cout << "Enter password: ";
    cin >> password;
    if (!validatePassword(password)) {
        cout << "Password must contain at least one digit, one special symbol, one lowercase letter, and one uppercase letter." << endl;
        return;
    }
    users[numUsers].email = email;
    users[numUsers].password = password;
    users[numUsers].isDeleted = false;
    numUsers++;
    cout << "User registered." << endl;
}

void loginUser() {
    string email, password;
    cout << "Enter email: ";
    cin >> email;
    for (int i = 0; i < numUsers; i++) {
        if (users[i].email == email) {
            if (users[i].isDeleted) {
                cout << "Account deleted." << endl;
                return;
            }
            cout << "Enter password: ";
            cin >> password;
            if (users[i].password == password) {
                cout << "Login successful." << endl;
            } else {
                cout << "Incorrect password." << endl;
            }
            return;
        }
    }
    cout << "Email not found." << endl;
}

void deleteUser() {
    string email;
    cout << "Enter email: ";
    cin >> email;
    for (int i = 0; i < numUsers; i++) {
        if (users[i].email == email) {
            users[i].isDeleted = true;
            cout << "Account deleted." << endl;
            return;
        }
    }
    cout << "Email not found." << endl;
}

int main() {
    while (true) {
        cout << "1. Register\n2. Login\n3. Delete Account\n4. Exit\nEnter choice: ";
        int choice;
        cin >> choice;
        switch (choice) {
            case 1:
                registerUser();
                break;
            case 2:
                loginUser();
                break;
            case 3:
                deleteUser();
                break;
            case 4:
                return 0;
            default:
                cout << "Invalid choice." << endl;
        }
    }
}

