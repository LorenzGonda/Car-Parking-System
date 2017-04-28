#pragma once
#include "CarparkSlot.h"
#include <string>
#include <iostream>
using namespace std;

class Carpark {
private:
	int _id;
	string _name;
	string _location;
	int _numSlots[3];
	int _fees[3];
	double _accBal;
	CarparkSlot** _cs;

public:
	Carpark(int, string, string, int[3], int[3]);
	~Carpark();

	int getID() const;
	string getName() const;
	string getLocation() const;
	double getAccBal() const;
	
	void showParkInfo();
	void accBal();
	void remove(int x); 
};
