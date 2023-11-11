/*
this is the header file for the ParkingMeter class
this includes the private data member which holds the amount of minutes
purchased
*/

#pragma once
#ifndef PARKINGMETER_H_
#define PARKINGMETER_H_
#include <iostream>

using namespace std;

// forward declaration
class ParkingMeter;

//overloading operator
ostream &operator << (ostream &, const ParkingMeter &);

class ParkingMeter
{
private:
	int minutesPurchased;

public:

	//mutator
	void setMinutesPurchased(int);
	//accessor
	int getMinutesPurchased();

	//default constructor
	ParkingMeter();

	//constructor
	ParkingMeter(int);

	//overload operator <<
	friend ostream &operator << (ostream &, const ParkingMeter &);
};

#endif