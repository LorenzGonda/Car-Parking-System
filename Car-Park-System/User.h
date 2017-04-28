#pragma once
#include <string>
using namespace std;

class User
{
private:
	int _id;
	string _username;
	string _name;

public:
	User(int, string, string);
	virtual ~User() = 0;
	
	int getID() const;
	string getUsername() const;
	string getName() const;
};

