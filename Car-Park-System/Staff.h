#pragma once
#include "Carpark.h"
#include "User.h"
#include <string>
#include <vector>
using namespace std;

class Staff : public User {
public:
	// Constructor and destructor
	Staff(int, string, string);
	~Staff();

	void showUsersInfo();

	// Staff functions
	void createCarpark(vector<Carpark>&) const;
	void editCarpark(vector<Carpark>&) const;
	void removeCarpark(vector<Carpark>&) const;
	void createAccount();
	void editAccount();
	void removeAccount();
	void checkCarparkSlotStatus() const;
	void checkParkBalance() const;
};