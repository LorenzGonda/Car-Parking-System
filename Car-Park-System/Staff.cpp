#include "Staff.h"
#include "Driver.h"
#include <iostream>
#include <typeinfo>
using namespace std;

// Constructor
Staff::Staff(int id, string username, string name) : User(id, username, name) {
}

// Destructor
Staff::~Staff() {
}

void Staff::showUsersInfo() const {
	cout << "==============================================" << endl;
	cout << "User ID: " << getID() << endl;
	cout << "Username: " << getUsername() << endl;
	cout << "Name: " << getName() << endl;
	cout << "==============================================" << endl;
}

// Staff functions
void Staff::createCarpark(vector <Carpark>& vC) const {
	int id;
	cout << "Please enter the ID (must be unique): ";
	cin >> id;

	string name;
	cout << "Please enter the name: ";
	cin >> name;

	string location;
	cout << "Please enter the location: ";
	cin >> location;

	int slots[3];
	cout << "Please enter the number of motorcycle slots: ";
	cin >> slots[0];
	cout << "Please enter the number of private car slots: ";
	cin >> slots[1];
	cout << "Please enter the number of light goods vehicle slots: ";
	cin >> slots[2];
		
	int fees[3];
	cout << "Please enter the motorcycle slot fee: ";
	cin >> fees[0];
	cout << "Please enter the private car slot fee: ";
	cin >> fees[1];
	cout << "Please enter the light goods vehicle slot fee: ";
	cin >> fees[2];

	Carpark c(id, name, location, slots, fees);
	vC.push_back(c);
	cout << "The new carpark has been created" << endl;
}

void Staff::editCarpark(vector<Carpark>& vC) const {
	for (int i = 0; i < vC.size(); i++) {
		vC[i].showParkInfo();
	}

	int carpark;
	cout << "Which carpark would you like to edit? (Please input the ID) ";
	cin >> carpark;
	for (int i = 0; i < vC.size(); i++) {
		if (vC[i]._id == carpark) {
			carpark = i;
			break;
		}
	}

	int selection;
	cout << "Which information do you want to change?" << endl;
	cout << "1.) Car Park ID" << endl;
	cout << "2.) Car Park Name" << endl;
	cout << "3.) Location" << endl;
	cout << "4.) Balance" << endl;
	cout << "5.) Total number of slots" << endl;
	cout << "6.) Parking fees" << endl;
	cin >> selection;

	switch (selection) {
	case 1: // Change ID
		cout << "Please enter the new ID (must be unique): ";
		cin >> vC[carpark]._id;
		break;

	case 2: // Change name
		cout << "Please enter the new name: ";
		cin >> vC[carpark]._name;
		break;

	case 3: // Change location
		cout << "Please enter the new location: ";
		cin >> vC[carpark]._location;
		break;

	case 4:
		cout << "Please enter the new balance: ";
		cin >> vC[carpark]._accBal;

	case 5: {// Change total number of slots
			int oldSlotMotor = vC[carpark]._numSlots[0];
			int oldSlotPrivate = vC[carpark]._numSlots[1];
			int oldSlotLight = vC[carpark]._numSlots[2];

			cout << "Please enter the new number of motorcycle slots: ";
			cin >> vC[carpark]._numSlots[0];
			cout << "Please enter the new number of private car slots: ";
			cin >> vC[carpark]._numSlots[1];
			cout << "Please enter the new number of light goods vehicle slots: ";
			cin >> vC[carpark]._numSlots[2];


			// Refresh the CarparkSlot vector
			vector<CarparkSlot> temp;
			for (int i = 0; i < vC[carpark]._numSlots[0]; i++) {
				string vehicleType = "Motor cycle";
				if (i > oldSlotMotor) { // Need to add more slots
					temp.push_back(CarparkSlot(i, vC[carpark]._name, vehicleType));
				}
				else {
					temp.push_back(vC[carpark]._cs[i]);
					temp[i]._id = i;
				}
			}

			for (int i = vC[carpark]._numSlots[0]; i < vC[carpark]._numSlots[0] + vC[carpark]._numSlots[1]; i++) {
				string vehicleType = "Private car";
				if (i - vC[carpark]._numSlots[0] > oldSlotPrivate) { // Need to add more slots
					temp.push_back(CarparkSlot(i, vC[carpark]._name, vehicleType));
				}
				else {
					temp.push_back(vC[carpark]._cs[i]);
					temp[i]._id = i;
				}
			}

			for (int i = vC[carpark]._numSlots[0] + vC[carpark]._numSlots[1]; i < vC[carpark]._numSlots[0] + vC[carpark]._numSlots[1] + vC[carpark]._numSlots[2]; i++) {
				string vehicleType = "Light goods vehicle";
				if (i - vC[carpark]._numSlots[0] - vC[carpark]._numSlots[1] > oldSlotLight) { // Need to add more slots
					temp.push_back(CarparkSlot(i, vC[carpark]._name, vehicleType));
				}
				else {
					temp.push_back(vC[carpark]._cs[i]);
					temp[i]._id = i;
				}
			}

			vC[carpark]._cs = temp;
		}
		break;

	case 6:
		cout << "Please enter the new motorcycle slot fee: ";
		cin >> vC[carpark]._fees[0];
		cout << "Please enter the new private car slot fee: ";
		cin >> vC[carpark]._fees[1];
		cout << "Please enter the new light goods vehicle slot fee: ";
		cin >> vC[carpark]._fees[2];
		break;

	default:
		break;
	}
	
	cout << "Here is the updated carpark information." << endl;
	for (int i = 0; i < vC.size(); i++) {
		vC[i].showParkInfo();
	}
}

void Staff::removeCarpark(vector<Carpark>& vC) const {
	for (int i = 0; i < vC.size(); i++) {
		vC[i].showParkInfo();
	}

	int id;
	cout << "Which carpark would you like to remove? (Please enter the ID) ";
	cin >> id;

	int index = 0;
	for (int i = 0; i < vC.size(); i++) {
		if (vC[i]._id == id) {
			index = i;
			break;
		}
	}

	vC.erase(vC.begin() + index);
	cout << "That carpark has been removed." << endl;
}

void Staff::createAccount(vector<User>& uC) const {
	int input;
	cout << "Is this a staff (0) or driver (1) account? ";
	cin >> input;
	
	//int id, string username, string name, string type, string number, double bal;
	string username;
	cout << "Please enter a unique username: ";
	cin >> username;

	string name;
	cout << "Please enter the name: ";
	cin >> name;

	if (input == 1) { // Making a driver account
		string type;
		cout << "Please input vehicle type (Motor cycle, Private car, Light goods vehicle): ";
		cin >> type;

		string number;
		cout << "Please input the plate number: ";
		cin >> number;

		uC.push_back(Driver(uC.size(), username, name, type, number));
	}
	else {
		uC.push_back(Staff(uC.size(), username, name));
	}
}

void Staff::editAccount(vector<User>& uC) const {
	for (int i = 0; i < uC.size(); i++) {
		uC[i].showUsersInfo();
	}

	int user;
	cout << "Which user would you like to edit? (Please enter the ID)" << endl;
	cin >> user;

	int input;
	cout << "Which information do you want to change?" << endl;
	if (typeid(uC[user]).name() == typeid(Staff).name()) { // Do staff stuff

	}
	else { // Do driver stuff

	}

}

void Staff::removeAccount(vector<User>& uC) const {

}