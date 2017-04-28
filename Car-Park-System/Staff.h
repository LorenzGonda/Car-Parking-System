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

	void showUsersInfo() const;

	// Staff functions
	void createCarpark(vector<Carpark>&) const;
	void editCarpark(vector<Carpark>&) const;
	void removeCarpark(vector<Carpark>&) const;
	void createAccount(vector<User>&) const;
	void editAccount(vector<User>&) const;
	void removeAccount(vector<User>&) const);
	void checkCarparkSlotStatus() const;
	void checkParkBalance() const;
};