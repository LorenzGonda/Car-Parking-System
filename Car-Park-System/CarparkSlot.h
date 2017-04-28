#pragma once
#include <string>
#include <iostream>
using namespace std;

class CarparkSlot
{	
private:
	int _id;
	string _carpark; 
	string _vehicleType;
	string _slotStatus;
public:
	CarparkSlot(int, string, string, string);
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