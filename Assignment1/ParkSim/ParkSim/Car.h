/* 
this is the Car class
the class includes data members such as the make, model, color and license number of a car
*/

#pragma once
#ifndef CAR_H_
#define CAR_H_
#include <string>

using namespace std;

// Forward Declaration
class Car;

// Function prototype for overloaded stream operator
ostream &operator << (ostream &, const Car &);


class Car
{
private:
	string make;			// car make
	string model;			// car model
	string color;			// car color
	string licenseNumber;	// license number

public:
	// default constructor
	Car();

	//Mutators
	void setMake(string);
	void setModel(string);
	void setColor(string);
	void setLicenseNumber(string);

	//Accessors
	string getMake() const;
	string getModel() const;
	string getColor() const;
	string getLicenseNumber() const;

	// overloads the << operator
	friend ostream &operator << (ostream &, const Car &);
};

#endif

