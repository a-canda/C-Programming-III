/*
This is the PoliceOfficer class header file.
The class includes data members for their name and badge id
It also examines the ParkedCar object and a ParkingMeter object and determines if
the car's time has expired.
The class will issue a parking ticket if the car's time expired.
*/

#pragma once
#ifndef POLICEOFFICER_H_
#define POLICEOFFICER_H_
#include <iostream>
#include <string>
#include "ParkingTicket.h"
#include "ParkingMeter.h"

using namespace std;

// forward declaration
class PoliceOfficer;

//overloading operator funct prototype
ostream &operator << (ostream &, const PoliceOfficer &);


class PoliceOfficer
{
private:
	string name;
	string badge;
	ParkingTicket *ticket;
public:
	//mutators
	void setName(string);
	void setBadge(string);

	//accessors
	string getName();
	string getBadge();
	ParkingTicket* patrol(ParkedCar, ParkingMeter);

	//default constructor
	PoliceOfficer();
	PoliceOfficer(string, string);


	//overloading operator <<
	friend ostream &operator << (ostream &, const PoliceOfficer &);
};

#endif