#include "Staff.h"
#include <iostream>
using namespace std;
Staff::Staff(int id, string username, string name) : User(id, username, name) {}

void Staff::showUsersInfo() {
	cout << "User ID: " << getID() << endl;
	cout << "Username: " << getUsername() << endl;
	cout << "Name: " << getName() << endl;
}
