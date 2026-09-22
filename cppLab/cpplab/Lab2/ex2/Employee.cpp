#include <iostream>
#include <string>
#include "Employee.h"
using namespace std;

Employee::Employee(string f, string l, int s)
	:firstName(f), lastName(l)
{
	setYearlySalary(s);
}

void Employee::setFirstName(string n)
{
	firstName = n;
}

string Employee::getFirstName()
{
	return firstName;
}

void Employee::setLastName(string n)
{
	lastName = n;
}

string Employee::getLastName()
{
	return lastName;
}

void Employee::setYearlySalary(int i )
{
	if (i > 0)
		yearlySalary = i;
	else
		yearlySalary = 0;
}

int Employee::getYearlySalary()
{
	return yearlySalary;
}

void Employee::displayMessage(string n)
{
	cout << n << "; " << getFirstName() << " " << getLastName() << "; YearlySalary: " << getYearlySalary() << endl;
}

