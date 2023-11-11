#include "pch.h"
#include "EmployeeInfo.h"

EmployeeInfo::EmployeeInfo()
{
	empId = 0;
}

EmployeeInfo::EmployeeInfo(int id, int day, int month, int year, string nam, string add, string ci, string st, string ph)
{
	this->empId = id;
	hireDate.setDay(day);
	hireDate.setMonth(month);
	hireDate.setYear(year);
	empInfo.setName(nam);
	empInfo.setAddress(add);
	empInfo.setCity(ci);
	empInfo.setState(st);
	empInfo.setPhone(ph);
}



void EmployeeInfo::setEmpId(int iD)
{
	this->empId = iD;
}

void EmployeeInfo::setHireDate(int day, int month, int year)
{
	hireDate.setDay(day);
	hireDate.setMonth(month);
	hireDate.setYear(year);
}
void EmployeeInfo::setEmpInfo(string name, string address, string city, string state, string phone)
{
	empInfo.setName(name);
	empInfo.setAddress(address);
	empInfo.setCity(city);
	empInfo.setState(state);
	empInfo.setPhone(phone);	
}

int EmployeeInfo::getEmpId() const
{
	return empId;
}

Date EmployeeInfo::getHireDate() const
{
	return hireDate;
}

Person EmployeeInfo::getEmpInfo() const
{
	return empInfo;
}

void EmployeeInfo::print() const
{
	cout << "ID: " << empId << endl;
	empInfo.print();
	cout << endl;
	cout << "Hire Date: ";
	hireDate.print();
}

bool EmployeeInfo::operator<(EmployeeInfo &other) const
{
	return(empId < other.getEmpId());
}

bool EmployeeInfo::operator>(EmployeeInfo &other) const
{
	return(empId > other.getEmpId());
}

bool EmployeeInfo::operator ==(EmployeeInfo &other) const
{
	return(empId == other.getEmpId());
}

ostream &operator<<(ostream &strm, const EmployeeInfo &obj)
{
	strm << "ID: " << obj.getEmpId() << endl;
	obj.getEmpInfo().print();

	strm << endl << "Hire Date: ";

	obj.getHireDate().print();
	strm << endl;
	return strm;
}
