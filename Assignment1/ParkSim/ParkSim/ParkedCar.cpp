//#include "pch.h"
#include "ParkedCar.h"
#include <iostream>
#include <string>

using namespace std;

void ParkedCar::setMinutesParked(int minPark)
{
	this->minutesParked = minPark;
}

void ParkedCar::setCar(Car ccar)
{
	this->car = ccar;
}

int ParkedCar::getMinutesParked() const
{
	return this->minutesParked;
}

Car ParkedCar::getCar() const
{
	return this->car;
}

//default constructor
ParkedCar::ParkedCar()
{
	this->minutesParked = 0;
}

//constructor
ParkedCar::ParkedCar(string cMake, string cModel, string cColor, string cLicense, int mParked)
{
	this->car.setMake(cMake);
	this->car.setModel(cModel);
	this->car.setColor(cColor);
	this->car.setLicenseNumber(cLicense);
	this->minutesParked = mParked;
}

// copy constructor
ParkedCar::ParkedCar(const ParkedCar& parkedCar)
{}

// operator overloading <<
ostream &operator << (ostream &strm, const ParkedCar &car)
{
	strm << "Minutes parked: " << car.minutesParked << endl;
	return strm;
}
