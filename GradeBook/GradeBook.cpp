#include <iostream>
#include <string>
#include <iomanip>
#include "GradeBook.h"

GradeBook:: GradeBook(std::string name)
{
	setCourseName(name);
}

void GradeBook::setCourseName(std::string name)
{
	if ( name.size() <= 25 )
	courseName = name;

	else
	{
		courseName = name.substr(0, 25);
		std::cerr << "Name \"" << name << "\" exceeds maxium length (25).\n"
			<< "Limiting courseName to first 25 characters.\n" << std::endl;
	}
}
std::string GradeBook::getCourseName() const
{
	return courseName;
}
void GradeBook:: displayMessage() const
{
	std::cout << "Welcome to the grade book for\n" << getCourseName() << "!"
		<< std::endl;
}
void GradeBook::determineClassAverage() const
{
	int total = 0;
	unsigned int gradeCounter = 0;
	
	std::cout << "Enter grade or -1 to quit: ";
	int grade = 0; 
	std::cin >> grade;

	while ( grade != -1)
	{ 
		total = total + grade;
		gradeCounter += 1;

		std::cout << "Enter grade or -1 to quit; ";
		std::cin >> grade;
	}
	
	if (gradeCounter != 0)
	{
		double average = static_cast<double>(total) / gradeCounter;
		std::cout << "\nTotal of all " << gradeCounter << " grades entered is " << total << std::endl;
		std::cout << std::setprecision(2) << std::fixed;
		std::cout << "Class average is " << average << std::endl;
	}
	else
		std::cout << "No grades were entered" << std::endl;
}