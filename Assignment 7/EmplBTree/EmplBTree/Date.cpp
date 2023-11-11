#include "pch.h"
#include "Date.h"
#include <iostream>

using namespace std;

Date::Date()
{
	day = 1, month = 1, year = 1500;
}


Date::Date(int d, int m, int y)
{
	this->day = d;
	this->month = m;
	this->year = y;
}

void Date::setDay(int d)
{
	day = d;
}

void Date::setMonth(int m)
{
	month = m;
}

void Date::setYear(int y)
{
	year = y;
}

// Accessor functions
int Date::getDay() const
{
	return day;
}

int Date::getMonth() const
{
	return month;
}

int Date::getYear() const
{
	return year;
}

void Date::print() const
{

	switch (month)
	{
	case 1:
		cout << "January";
		break;
	case 2:
		cout << "February";
		break;
	case 3:
		cout << "March";
		break;
	case 4:
		cout << "April";
		break;
	case 5:
		cout << "May";
		break;
	case 6:
		cout << "June";
		break;
	case 7:
		cout << "July";
		break;
	case 8:
		cout << "August";
		break;
	case 9:
		cout << "September";
		break;
	case 10:
		cout << "October";
		break;
	case 11:
		cout << "November";
		break;
	case 12:
		cout << "December";
		break;
	}
	cout << day << ", " <<  year;
}

