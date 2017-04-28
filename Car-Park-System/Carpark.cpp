#include "Carpark.h"
#include <iostream>
#include <vector>
using namespace std;
Carpark::Carpark(int id, string name, string location, int numSlots[3], int fees[3])
{
	_id = id;
	_name = name;
	_location = location;
	
	int totalSlots = 0;
	for (int i = 0; i < 3; i++) {
		_numSlots[i] = numSlots[i];
		totalSlots += _numSlots[i];
		_fees[i] = fees[i];
	}

	_accBal = 0;

	 vector<Carpark> cs;
	 for (int i = 0; i < _numSlots[0]; i++) { // Motor cycles
		 string vehicleType = "Motor cycle", slotStatus = "Free";
		  Carpark carparkSlots(i, name, location, numSlots, fees); 
		  cs.push_back(carparkSlots);
	 }
	 
	 for (int i = _numSlots[0]; i < _numSlots[0] + _numSlots[1]; i++) { // Private cars
		 string vehicleType = "Private car", slotStatus = "Free";
		 Carpark carparkSlots(i, name, location, numSlots, fees);
		 cs.push_back(carparkSlots);
	 }
	 
	 for (int i = _numSlots[0] + _numSlots[1]; i < _numSlots[0] + _numSlots[1] + _numSlots[2]; i++) { // Light goods vehicle
		 string vehicleType = "Light goods vehicle", slotStatus = "Free";
		 Carpark carparkSlots(i, name, location, numSlots, fees);
		 cs.push_back(carparkSlots);
	 }
	 
	/*_cs = new CarparkSlot*[totalSlots];

	for (int i = 0; i < _numSlots[0]; i++) { // Motor cycles
		string vehicleType = "Motor cycle", slotStatus = "Free";
		_cs[i] = new CarparkSlot(i, name, vehicleType, slotStatus);
	}

	for (int i = _numSlots[0]; i < _numSlots[0] + _numSlots[1]; i++) { // Private Cars
		string vehicleType = "Private car", slotStatus = "Free";
		_cs[i] = new CarparkSlot(i, name, vehicleType, slotStatus);
	}
	for (int i = _numSlots[1]; i < _numSlots[0] + _numSlots[1] + _numSlots[2]; i++) { // Light Goods Vehicle
		string vehicleType = "Light goods vehicle", slotStatus = "Free";
		_cs[i] = new CarparkSlot(i, name, vehicleType, slotStatus);
	}
	 for (unsigned int i = 0; i < _numSlots[0]; i++) {
		 string vehicleType = "Motor cycle", slotStatus = "Free";
		 _cs[i] = new CarparkSlot(i, name, vehicleType, slotStatus);
	 } */
}
Carpark::~Carpark() {
/*	int totalSlots = 0;
	for (int i = 0; i < 3; i++) {
		totalSlots += _numSlots[i];
	}

	for (int i = 0; i < totalSlots; i++)
		delete _cs[i];
	delete[] _cs;
	*/
}

int Carpark::getID() const {
	return _id;
}


string Carpark::getName() const {
	return _name;
}

string Carpark::getLocation() const {
	return _location;
}


void Carpark::showParkInfo() {
	cout << "Car Park ID: "<< _id << endl;
	cout << "Car Park Name: " << _name << endl;
	cout << "Location: " << _location << endl;
	cout << endl;
	cout << "Total Number of slots: " << _numSlots << endl;
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


