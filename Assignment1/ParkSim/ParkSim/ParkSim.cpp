/*
Aaron Canda
Programming III
Assignment 1

This program uses two class aggregations to form a parking ticket
simulator. This program should demonstrate the Parking Ticket simulation.
The program contains a class car that hold data members for the make, model, color
and license plate for a car. The car class is implemented into the parked car class, which
contains a data member for a number of minutes that the car has parked. ParkingMeter class
contains the number of minutes that the car user has purchased. The parking ticket class
will calculate the fine depending on how long the car has stayed past the amount purchased.
if the user has parked longer than the amount purchased, the car will be issued a ticket for $25
for the first hour, and then add $10 for every additional hour or part of an hour.

*/

//#include "pch.h"
#include <iostream>
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "ParkingTicket.h"
#include "PoliceOfficer.h"
using namespace std;

int main()
{
	ParkingTicket *ticket = nullptr;

	ParkedCar car("Volkswagen", "1972", "Red", "147RHZM", -5);

	ParkedCar car2("Honda", "2015", "Copper", "213HMD", 1500);

	ParkingMeter meter(60);

	PoliceOfficer officer("Joe Friday", "4788");

	ticket = officer.patrol(car, meter);
	if (ticket != nullptr)
	{
		cout << officer;

		cout << *ticket;

		delete ticket;
		ticket = nullptr;
	}
	else
		cout << "No crimes were committed.\n";

	return 0;
}
