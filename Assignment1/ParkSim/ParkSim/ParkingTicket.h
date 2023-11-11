/*
This is the header file for the ParkingTicket class
Here we implement the ParkedCar class and include double fine and int minutes data members
the double fine data member holds the value of the calculated parking fine
int minutes holds the value of how many minutes the car was illegally parked
the parkingticket class also includes a private member function that calculates double fine.
*/

#pragma once
#ifndef PARKINGTICKET_H_
#define PARKINGTICKET_H_
#include "ParkedCar.h"
#include<iostream>

using namespace std;

// forward declaration
//class ParkingMeter;

//overloading operator
//ostream &operator << (ostream &, const ParkingTicket &);


class ParkingTicket
{
private:
	ParkedCar parkedCar;
	double fine;			// calculated parking fine
	int minutes;			// minutes illegally parked
	double calculateFine();	//private method to calculate fine
public:
	//mutators
	void setParkedCar(ParkedCar);
	void setFine(double);
	void setMinutesParkedIllegally(int);

	//accessors
	ParkedCar getParkedCar();
	double getFine();
	int getMinutesParkedIllegally();

	//default constructor
	ParkingTicket();

	//constructor
	ParkingTicket(ParkedCar, int);

	//operator overloading <<
	friend ostream &operator << (ostream &, const ParkingTicket &);
};

#endif
