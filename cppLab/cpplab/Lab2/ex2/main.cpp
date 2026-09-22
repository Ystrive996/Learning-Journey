#include <iostream>
#include "Employee.h"

int main()
{
	Employee employee1("Bob", "Jones", 34500);
	Employee employee2("Susan", "Baker", 37800);
	employee1.displayMessage("Employee1");
	employee2.displayMessage("Employee2");
	cout << "Increasing employee salaries by 10% " << endl;
	employee1.setYearlySalary(employee1.getYearlySalary() * 1.1);
	employee2.setYearlySalary(employee2.getYearlySalary() * 1.1);
	employee1.displayMessage("Employee1");
	employee2.displayMessage("Employee2");

}