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
	virtual ~User() = 0; // Pure virtual destructor to make User an ABC
	
	// Accesor Functions
	int getID() const;
	string getUsername() const;
	string getName() const;
};

