#pragma once
#include <string>
using namespace std;

class User {
private:
	int _id;
	string _username;
	string _name;

public:
	User(int, string, string); // Constructor
	virtual ~User(); // Virtual destructor
	
	// Accesor Functions
	int getID() const;
	string getUsername() const;
	string getName() const;

	virtual void showUsersInfo() const = 0;
};

