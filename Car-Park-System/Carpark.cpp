#include "Carpark.h"
#include <iostream>
#include <vector>
using namespace std;

// Constructor
Carpark::Carpark(int id, string name, string location, int numSlots[3], int fees[3])
{
	_id = id;
	_name = name;
	_location = location;
	_accBal = 0;
	
	int totalSlots = 0;
	for (int i = 0; i < 3; i++) {
		_numSlots[i] = numSlots[i];
		totalSlots += _numSlots[i];
		_fees[i] = fees[i];
	}

	for (int i = 0; i < _numSlots[0]; i++) { // For Motor Cycles
		string vehicleType = "Motor cycle";
		_cs.push_back(CarparkSlot(i, name, vehicleType));
	}

	for (int i = _numSlots[0]; i < _numSlots[0] + _numSlots[1]; i++) { // Private Cars
		string vehicleType = "Private car";
		_cs.push_back(CarparkSlot(i, name, vehicleType));
	}
	for (int i = _numSlots[1]; i < _numSlots[0] + _numSlots[1] + _numSlots[2]; i++) { // Light Goods Vehicle
		string vehicleType = "Light goods vehicle";
		_cs.push_back(CarparkSlot(i, name, vehicleType));
	}
}

// Destructor
Carpark::~Carpark() {
}

// Accessor functions
int Carpark::getID() const {
	return _id;
}

string Carpark::getName() const {
	return _name;
}

string Carpark::getLocation() const {
	return _location;
}


void Carpark::showParkInfo() const {
	cout << "==============================================" << endl;
	cout << "Car Park ID: "<< _id << endl;
	cout << "Car Park Name: " << _name << endl;
	cout << "Location: " << _location << endl;
	cout << "Balance: " << _accBal << endl;
	cout << endl;
	cout << "Total number of slots: " << _numSlots << endl;
	cout << "Motorcycles: " << _numSlots[0] << endl;
	cout << "Private Cars: " << _numSlots[1] << endl;
	cout << "Light goods vehicles: " << _numSlots[2] << endl;
	cout << endl;
	cout << "Parking fees: " << endl;
	cout << "Motorcycles: " << _fees[0] << endl;
	cout << "Private Cars: " << _fees[1] << endl;
	cout << "Light goods vehicles: " << _fees[2] << endl;
	cout << "==============================================" << endl;
}

void Carpark::accBal() {}
void  Carpark::remove(int carID){
	
}


