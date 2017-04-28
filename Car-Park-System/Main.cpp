#include "Carpark.h"
#include "CarparkSlot.h"
#include "Staff.h"
#include "Driver.h"
#include <iostream>
#include <typeinfo>
using namespace std;
int main(int argc, char** argv) {
	Carpark** carparkList = new Carpark*[3];

	// Car Parks:
	string name = "Happy Parking", location = "Happy Valley";
	int numSlots[3] = { 6,30,20 }, int fees[3] = { 25,28,28 };
	carparkList[0] = new Carpark(1, name, location, numSlots, fees);

	string name = "Weathly Parking", location = "Mong Kok";
	int numSlots[3] = { 1, 5, 3 }, int fees[3] = { 30, 36, 32 };
	carparkList[1] = new Carpark(2, name, location, numSlots, fees);

	string name = "Come Parking", location = "Kowloon Tong";
	int numSlots[3] = { 8, 20, 10 }, int fees[3] = { 15, 22, 20 };
	carparkList[2] = new Carpark(3, name, location, numSlots, fees);

	// Users:
	int userNum = 4;
	User** userList = new User*[4];

	// Staff:
	string username = "ken"; name = "Ken Lee";
	userList[0] = new Staff(1, username, name);

	username = "aaron"; name = "Aaron Chan";
	string vehicleType = "Motor cycle", number = "AC1234";
	userList[1] = new Driver(2, username, name, vehicleType, number, 1580.0);

	// Driver:
	username = "ben"; name = "Ben Wong";
	string vehicleType = "Light goods vehicle", number = "BW88";
	userList[2] = new Driver(2, username, name, vehicleType, number, 805.5);

	username = "carman"; name = "Carman Lam";
	string vehicleType = "Private car", number = "CL660";
	userList[3] = new Driver(3, username, name, vehicleType, number, 50);

	int input = 1;
	bool loggedIn = false;
	bool isDriver = false; // True if driver, false if staff
	while (input != 0) {
		if (!loggedIn) {
			string input;
			cout << "Please enter your id";
			cin >> input;

			for (int i = 0; i < userNum; i++) {
				if (userList[i]->getName() == input) {
					loggedIn = true;
					isDriver = typeid(*userList[i]).name() == typeid(Driver).name() ? true : false;
					break;
				}
			}
		}

		else {
			cout << "Invalid Input \n Please try again \n";
		}
	}
	system("pause");
	return 0;
}
	// If logged in, do sth:
			// If driver, go to driver home page
			// If staff, go to staff home page
