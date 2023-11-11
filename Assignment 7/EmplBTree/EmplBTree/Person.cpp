#include "pch.h"
#include "Person.h"

Person::Person()
{
	name = "", address = "", city = "", state = "", phone = "";
}

Person::Person(string nam, string add, string ci, string st, string ph)
{
	name = nam, address = add, city = ci, state = st, phone = ph;
}

// Mutators
void Person::setName(string nam)
{
	name = nam;
}

void Person::setAddress(string add)
{
	address = add;
}

void Person::setCity(string ci)
{
	city = ci;
}

void Person::setState(string st)
{
	state = st;
}

void Person::setPhone(string ph)
{
	phone = ph;
}

// Accessors
string Person::getName() const
{
	return name;
}

string Person::getAddress() const
{
	return address;
}

string Person::getCity() const
{
	return city;
}

string Person::getState() const
{
	return state;
}

string Person::getPhone() const
{
	return phone;
}

void Person::print() const
{
	cout << "Name: " << name << endl;
	cout << "Address: " << address << endl;
	cout << "City: " << city << endl;
	cout << "State: " << state << endl;
	cout << "Phone: " << phone;
}