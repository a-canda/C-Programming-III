/*
This is the ParkedCar class
The car class is implemented into the private data members
Another integer data member is added that includes a number of minutes that the car is parked

*/

#pragma once
#include "Car.h"
#ifndef PARKEDCAR_H_
#define PARKEDCAR_H_
#include <string>

using namespace std;

// Forward Declaration.
class ParkedCar;

//overloading operator
ostream &operator << (ostream &, const ParkedCar &);


class ParkedCar
{

private:
	Car car;
	int minutesParked; // Number of minutes that a car is parked

public:
	//setter
	void setCar(Car);
	void setMinutesParked(int);

	//getter
	int getMinutesParked() const;
	Car getCar() const;

	// default constructor
	ParkedCar();

	// constructor
	ParkedCar(string, string, string, string, int);

	// copy constructor
	ParkedCar(const ParkedCar&);

	// operator overloading
	friend ostream &operator << (ostream &, const ParkedCar &);
	//friend istream& operator >> (istream&, ParkedCar &);
};

#endif
