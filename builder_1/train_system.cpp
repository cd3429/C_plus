/*

1. WAP to make Railway Reservation System.
Requirements:
(A) User Input Train Number , Train Name , Source , Destination , Train Time.
(B) Display Record By Search Train Number.
(C) Minimum 3 Input Train Record.

*/

#include <iostream>
#include <string>

using namespace std;

class Train {
public:
    int trainNumber;
    string trainName;
    string source;
    string destination;
    string trainTime;

    Train() {}

    Train(int trainNumber, string trainName, string source, string destination, string trainTime) {
        this->trainNumber = trainNumber;
        this->trainName = trainName;
        this->source = source;
        this->destination = destination;
        this->trainTime = trainTime;
    }

    void displayTrainDetails() {
    	cout <<"\n\n==================================================\n" ;
	    cout << "\n\t-----------------------------------------";
		cout << "\n\t|  Train number\t : "<<trainNumber<<"\t\t\t|";
		cout << "\n\t|  Train name\t : "<<trainName<<"\t\t\t|";
		cout << "\n\t|  Arriving at\t : "<<trainTime<<"\t\t\t|";
		cout << "\n\t|  Route\t : From "<<source<<" to "<<destination<<"\t|";
	    cout << "\n\t-----------------------------------------";
	    cout <<"\n\n==================================================\n" ;
    }
};

Train trains[15];

void addTrain() {
    static int count = 0;
    if (count >= 15) {
        cout << "Maximum number of trains added!" << endl;
        return;
    }
    int trainNumber;
    string trainName, source, destination, trainTime;
	cout<<"You are adding the train details now : \n\n";
    cout << "\tEnter train number: ";
    cin >> trainNumber;

    cout << "\tEnter train name: ";
    cin >> trainName;

    cout << "\tEnter source: ";
    cin >> source;

    cout << "\tEnter destination: ";
    cin >> destination;

    cout << "\tEnter train time: ";
    cin >> trainTime;

	cout << "\n\tThe following train has been added successfully!";
	cout << "\n\t-----------------------------------------";
	cout << "\n\t|  Train number\t : "<<trainNumber<<"\t\t\t|";
	cout << "\n\t|  Train name\t : "<<trainName<<"\t\t\t|";
	cout << "\n\t|  Arriving at\t : "<<trainTime<<"\t\t\t|";
	cout << "\n\t|  Route\t : From "<<source<<" to "<<destination<<"\t|";
    cout << "\n\t-----------------------------------------";
    
    cout <<"\n\n==================================================\n" ;
    		
    trains[count] = Train(trainNumber, trainName, source, destination, trainTime);
    count++;
}

void displayTrainByNumber() {
    int trainNumber;
    int found = 0;

    cout << "Enter train number to search: ";
    cin >> trainNumber;

    for (int i = 0; i < 15; i++) {
        if (trains[i].trainNumber == trainNumber) {
            trains[i].displayTrainDetails();
            found = 1;
            break;
        }
    }

    if (found==0) {
        cout << "\noops! Train not found!\n" << endl;
    }
}

int main() {
    int choice;
    do {
        cout << "\n1. Add train" << endl;
        cout << "2. Search train by number" << endl;
        cout << "3. Exit" << endl;
        cout << "\nEnter your choice: ";
        cin >> choice;
		cout <<"\n==================================================\n" ;
        switch (choice) {
        case 1:
            addTrain();
            break;
        case 2:
            displayTrainByNumber();
            break;
        case 3:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice! Try again." << endl;
            break;
        }
    } while (choice != 3);

    return 0;
}

