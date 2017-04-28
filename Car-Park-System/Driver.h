#pragma once
#include "User.h"
#include "Staff.h"
#include <string>
using namespace std;

class Driver : public User {
	friend class Staff;

private:
	string _vehicleType;
	string _plateNumber;
	double _accBal;
	
public:
	// Constructor and destructor
	Driver(int, string, string, string, string, double);
	~Driver();

	// Accessor functions
	string getVehicleType() const;
	string getPlateNumber() const;
	double getAccBal() const;


	void setAccBal(double accBal);
	

	// Driver Functions

	void checkAccBal(); //(ii)
	void increaseAccountBalance(); //(iii)


};
