/*
this is the implementation for the PoliceOfficer class.

here we use setters and getters for the data members name and badge
a parking ticket is issued if the meter is less than the minutes a car is parked
and will return the ticket to ParkingTicket class
*/

//#include "pch.h"
#include "PoliceOfficer.h"
#include <string>

using namespace std;

//setter
void PoliceOfficer::setName(string nam)
{
	this->name = nam;
}

void PoliceOfficer::setBadge(string bad)
{
	this->badge = bad;
}

//getter
string PoliceOfficer::getName()
{
	return this->name;
}

string PoliceOfficer::getBadge()
{
	return this->badge;
}

ParkingTicket* PoliceOfficer::patrol(ParkedCar car, ParkingMeter meter)
{
	if (meter.getMinutesPurchased() <= car.getMinutesParked())//issue new ticket if time expired
	{
		this->ticket = new ParkingTicket(car, meter.getMinutesPurchased());
	}
	return this->ticket;
}

// default constructor
PoliceOfficer::PoliceOfficer()
{
	this->name = "";
	this->badge = "";
}

//constructor
PoliceOfficer::PoliceOfficer(string nam, string badg)
{
	this->name = nam;
	this->badge = badg;
}

//operator overloading <<
ostream &operator << (ostream &strm, const PoliceOfficer &obj)
{
	strm << "Name: " << obj.name << endl
		<< "Enter Badge ID:" << obj.badge << endl;
	return strm;
}
