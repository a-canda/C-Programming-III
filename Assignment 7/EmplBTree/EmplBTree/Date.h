#pragma once
#ifndef DATE_H
#define DATE_H
class Date
{
private:
	int day, month, year;
public:
	Date();
	Date(int, int, int);

	// Mutator functions
	void setDay(int);
	void setMonth(int);
	void setYear(int);


	// Accessor functions
	int getDay() const;
	int getMonth() const;
	int getYear() const;

	// prints date in format: January 1, 2018
	void print() const;
};
#endif
