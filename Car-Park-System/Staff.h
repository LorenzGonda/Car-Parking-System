#pragma once
#include "User.h"
#include <string>
using namespace std;

class Staff : public User {
public:
	Staff(int, string, string);
	~Staff() {}
	void showUsersInfo();
};