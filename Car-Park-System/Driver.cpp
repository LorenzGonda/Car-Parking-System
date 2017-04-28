#include "Driver.h"
#include<iostream> 
using namespace std;

// Constructor
Driver::Driver(int id, string username, string name, string type, string number, double bal) 
: User(id,username,name) {
	_vehicleType = type;
	_plateNumber = number;
	_accBal = bal;
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

// Mutator functions
void Driver::setAccBal(double accBal) {
	_accBal = accBal;
}

// Driver Functions
void Driver::checkAccBal() {
	cout << "Account Balance: $" << _accBal;
}
void Driver::increaseAccountBalance() {
	double increase;

	cout << "Current Account Balance: $" << _accBal << endl;
	cout << "Enter Ammount: ";
	cin >> increase;
	_accBal += increase;
	cout << "Your current account balance: $" << _accBal << endl ;
}

