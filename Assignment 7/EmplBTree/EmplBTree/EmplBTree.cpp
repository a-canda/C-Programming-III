/*
Aaron Canda
Programming III
Assignment 7

this assignment uses the binary tree provided from the textbook.
it includes a class called Date, which includes day, month and year.
The date class includes a method to print the date in the following format: january 1, 2018.
this program includes a class called Person, which includes the employee's information
such as their name, address, city, state, and phone. The employeeInfo class will inherit this
class, as well as the date class. In addition it will contain the employee's ID number.

this part of the program is the main.cpp. wll demonstrate the methods and will show that all
methods work. It will prompt the user for an Employee Id to search for and the program will
show all information fromthe person and date class. If the employee id is invalid, the program
will dsplay a message to the user that the person does not exist and to try again.

*/

#include "pch.h"
#include "EmployeeInfo.h"
#include "BinaryTree.h"
#include <iostream>
#include <string>

using namespace std;


int main()
{
	BinaryTree<EmployeeInfo> tree;
	
	EmployeeInfo emp1(1000, 1, 2, 2001, "Aaron", "123 Rock Quarry Rd", "Philadelphia", "Pennsylvania", "483-494-2224");
	tree.insertNode(emp1);

	EmployeeInfo employee2(1001, 2, 3, 2002, "Adrian", "456 Peanut Lane", "Franklin",
		"Tennessee", "929-392-4254");
	tree.insertNode(employee2);

	EmployeeInfo employee3(1002, 3, 4, 2003, "James", "594 Jamestown Ave", "Jefferson",
		"Alaska", "239-234-3425");
	tree.insertNode(employee3);

	EmployeeInfo employee4(1003, 4, 5, 2004, "Zach", "203 Zachston Rd", "Lanky",
		"New Jersey", "493-293-2359");
	tree.insertNode(employee4);

	EmployeeInfo employee5(1004, 5, 6, 2005, "Brian", "933 Brainy Lane", "Blondy",
		"New York", "293-249-5543");
	tree.insertNode(employee5);

	EmployeeInfo employee6(1005, 6, 7, 2006, "Kim", "2344 Mouse Rd", "Cableton",
		"Maine", "293-394-5493");
	tree.insertNode(employee6);

	EmployeeInfo employee7(1006, 7, 8, 2007, "Jeffery", "291 Pottstown Pike", "Lansdale",
		"Pennsylvania", "293-203-3392");
	tree.insertNode(employee7);

	EmployeeInfo employee8(1007, 8, 9, 2008, "Mark", "994 MarkyMark Circle", "Seattle",
		"Washington", "392-403-3393");
	tree.insertNode(employee8);

	EmployeeInfo employee9(1008, 9, 10, 2009, "Rachael", "853 Coffee Lane", "Cheese",
		"Wisconsin", "949-390-9942");
	tree.insertNode(employee9);

	EmployeeInfo employee10(1009, 10, 11, 2010, "Kaylie", "293 Shadyside Rd", "Downingtown",
		"Pennsylvania", "119-223-3954");
	tree.insertNode(employee10);

	tree.displayInOrder();
	cout << endl;
	tree.displayPostOrder();
	cout << endl;
	tree.displayPostOrder();
	cout << endl;

	EmployeeInfo checkEmp;
	char again = 'y';
	int idNum;

	while (toupper(again) == 'Y')
	{
		cout << "Search for employee by entering in the employee ID number: ";
		cin >> idNum;

		checkEmp.setEmpId(idNum);
		cout << endl;

		
		if (!tree.searchNode(checkEmp))
		{
			cout << "\tEmployee ID not found." << endl << endl;
		}

		cout << "\tWould you like to search again? (Y/N): ";
		cin >> again;
		cout << endl;
	
		
	}

	system("pause");
	return 0;

}
