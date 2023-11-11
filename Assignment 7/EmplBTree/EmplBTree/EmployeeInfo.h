#pragma once
#ifndef EMPLOYEEINFO_H
#define EMPLOYEEINFO_H
#include "Person.h"
#include "Date.h"
#include<iostream>
#include <string>

using namespace std;

class EmployeeInfo
{
private:
	int empId;
	Date hireDate;
	Person empInfo;

public:
	EmployeeInfo();
	EmployeeInfo(int, int, int, int, string, string, string, string, string);

	void setEmpId(int);
	void setHireDate(int, int, int);
	void setEmpInfo(string, string, string, string, string);

	int getEmpId() const;
	
	Date getHireDate() const;

	Person getEmpInfo() const;

	void print() const;

	bool operator < (EmployeeInfo &other) const;
	bool operator > (EmployeeInfo &other) const;
	bool operator == (EmployeeInfo &other) const;

	friend ostream &operator<<(ostream &strm, const EmployeeInfo &obj);

};
#endif