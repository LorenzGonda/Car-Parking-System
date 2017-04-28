#include "CarparkSlot.h"
#include <iostream>
using namespace std;
CarparkSlot::CarparkSlot(int id, string carpark, string vehicleType, string status) {
	_id = id;
	_carpark = carpark;
	_vehicleType = vehicleType;
	_slotStatus = status;
}
int CarparkSlot::getID() const
{
	return _id;
}
void CarparkSlot::setSlotID(int slotID)
{
	_id = slotID; 
}
string CarparkSlot::getCarpark() const
{
	return _carpark;
}
void CarparkSlot::setCarpark(string Carpark)
{
	_carpark = Carpark;
}
string CarparkSlot::getVehicleType() const
{
	return _vehicleType;
}
void CarparkSlot::setVehicleType(string VehicleType)
{
	_vehicleType = VehicleType;
}
string CarparkSlot::getSlotStatus() const
{
	return _slotStatus;
}
void CarparkSlot::setSlotStatus(string SlotStatus)
{
	_slotStatus = SlotStatus;
}