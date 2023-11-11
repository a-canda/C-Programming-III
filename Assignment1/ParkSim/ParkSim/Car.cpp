//#include "pch.h"
#include "Car.h"
#include <iostream>
#include <string>

using namespace std;

// mutator functions
void Car::setMake(string cMake)
{
	this->make = cMake;
}

void Car::setModel(string cModel)
{
	this->model = cModel;
}

void Car::setColor(string cColor)
{
	this->color = cColor;
}

void Car::setLicenseNumber(string cLicen)
{
	this->licenseNumber = cLicen;
}

// accessor functions
string Car::getMake() const
{
	return this->make;
}

string Car::getModel() const
{
	return this->model;
}

string Car::getColor() const
{
	return this->color;
}

string Car::getLicenseNumber() const
{
	return this->licenseNumber;
}

//constructor
Car::Car()
{
	this->make = "";
	this->model = "";
	this->color = "";
	this->licenseNumber = "";
}

//operator overloating <<
ostream &operator << (ostream &strm, const Car &obj)
{
	strm << "Make: " << obj.make << endl
		<< "Model: " << obj.model << endl
		<< "Color: " << obj.color << endl
		<< "License Number: " << obj.licenseNumber << endl;
	return strm;
}

