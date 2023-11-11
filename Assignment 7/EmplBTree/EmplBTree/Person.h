#pragma once
#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>

using namespace std;

class Person
{
protected:
	string name, address, city, state, phone;

public:
	// Default constructor
	Person();

	// Constructor
	Person(string, string, string, string, string);
	

	// Mutators
	void setName(string);
	void setAddress(string);
	void setCity(string);
	void setState(string);
	void setPhone(string);

	// Accessors
	string getName() const;
	string getAddress() const;
	string getCity() const;
	string getState() const;
	string getPhone() const;

	void print() const;
};
#endif