#pragma once
#include "User.h"
#include <string>
using namespace std;

class Driver : public User {
private:
	string _vehicleType;
	string _plateNumber;
	double _accBal;
	
public:
	Driver(int, string, string, string, string, double);
	~Driver();

	string getVehicleType() const;
	string getPlateNumber() const;
	
	double getAccBal() const;
	void setAccBal(double accBal);
	

	// Driver Functions

	void checkAccBal(); //(ii)
	void increaseAccountBalance(); //(iii)


};
