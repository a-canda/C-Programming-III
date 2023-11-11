//#include "pch.h"
#include "ParkingMeter.h"
#include<iostream>

using namespace std;

//setter
void ParkingMeter::setMinutesPurchased(int minPurchase)
{
	this->minutesPurchased = minPurchase;
}

//getter
int ParkingMeter::getMinutesPurchased()
{
	return this->minutesPurchased;
}

// default constructor
ParkingMeter::ParkingMeter()
{
	this->minutesPurchased = 0;
}

//constructor
ParkingMeter::ParkingMeter(int minPurchase)
{
	this->minutesPurchased = minPurchase;
}

//operator overloading <<

ostream &operator << (ostream &strm, const ParkingMeter &obj)
{
	strm << obj.minutesPurchased << endl;
	return strm;
}