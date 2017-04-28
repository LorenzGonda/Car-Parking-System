#pragma once
#include <string>
#include <iostream>
using namespace std;

class CarparkSlot
{	
	friend class Staff;

private:
	int _id;
	string _carpark; 
	string _vehicleType;
	int _slotStatus[24]; // 0 is Free | 1 is Occupied | 2 is Out of Service
public:
	CarparkSlot(int, string, string);
	~CarparkSlot() {}

	int getID() const;
	void setSlotID(int slotID);
	string getCarpark() const;
	void setCarpark(string CarPark);
	string getVehicleType() const;
	void setVehicleType(string VehicleType);
	string getSlotStatus() const;
	void setSlotStatus(string SlotStatus);
};