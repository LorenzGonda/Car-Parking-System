#include "User.h"
User::User(int id, string username, string name)
{
	_id = id;
	_username = username;
	_name = name;
}

User::~User() {}

int User::getID() const {
	return _id;
}
string User::getUsername() const {
	return _username;
}
string User::getName() const {
	return _name;
}