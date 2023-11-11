//#include "pch.h"
#include "ParkingTicket.h"
#include <iostream>

using namespace std;

// private method to calculate Fine
double ParkingTicket::calculateFine()
{
	int temp = 0;

	//first hour
	this->fine = 25;
	temp %= 60;

	while (temp > 0)
	{
		this->fine += 10;
	}

	return temp;
}

// setter
void ParkingTicket::setParkedCar(ParkedCar car)
{
	this->parkedCar = car;
}

void ParkingTicket::setFine(double cfine)
{
	this->fine = cfine;
}

void ParkingTicket::setMinutesParkedIllegally(int min)
{
	this->minutes = min;
}

//getter

ParkedCar ParkingTicket::getParkedCar()
{
	return this->parkedCar;
}

double ParkingTicket::getFine()
{
	return this->fine;
}

int ParkingTicket::getMinutesParkedIllegally()
{
	return this->minutes;
}

// default constructor
ParkingTicket::ParkingTicket()
{
	this->fine = 0;
	this->minutes = 0;
}

ParkingTicket::ParkingTicket(ParkedCar car, int min)
{
	this->parkedCar = car;
	this->minutes = min;
}

//operator overloading <<
ostream &operator << (ostream &strm, const ParkingTicket &obj)
{
	strm << obj.parkedCar << endl
		<< "Minutes Parked illegally: " << obj.minutes << endl
		<< "Fine: " << obj.fine << endl;
	return strm;
}