#include "Driver.h"
#include<iostream> 
using namespace std;

// Constructor
Driver::Driver(int id, string username, string name, string type, string number) 
: User(id,username,name) {
	_vehicleType = type;
	_plateNumber = number;
	_accBal = 0;
}

// Destructor
Driver::~Driver() {
}

// Accessor functions
string Driver::getVehicleType() const {
	return _vehicleType;
}

string Driver::getPlateNumber() const {
	return _plateNumber;
}

double Driver::getAccBal() const {
	return _accBal;
}

void Driver::showUsersInfo() const {
	cout << "==============================================" << endl;
	cout << "User ID: " << getID() << endl;
	cout << "Username: " << getUsername() << endl;
	cout << "Name: " << getName() << endl;
	cout << "Vehicle type: " << _vehicleType << endl;
	cout << "Plate number: " << _plateNumber << endl;
	cout << "Account balance: " << _accBal << endl;
	cout << "==============================================" << endl;
}

// Mutator functions
void Driver::setAccBal(double accBal) {
	_accBal = accBal;
}

// Driver Functions
void Driver::checkAccBal() {
	system("cls");
	cout << "Account Balance: $" << _accBal;
}
void Driver::increaseAccountBalance() {
	double increase;
	system("cls");
	cout << "Current Account Balance: $" << _accBal << endl;
	cout << "Enter Ammount: ";
	cin >> increase;
	_accBal += increase;
	cout << "Your current account balance: $" << _accBal << endl ;
}

