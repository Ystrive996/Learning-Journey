#include <iostream>
#include <string>
#include "GradeBook.h"
using namespace std;

int main()
{
	string nameOfCourse;
	GradeBook myGradeBook("abcdefghiuvwxy ");

	cout << "Initial course name is: " << myGradeBook.getCourseName() << endl;

	cout << "\nPlease enter the course name: " << endl;
	getline(cin, nameOfCourse);
	myGradeBook.setCourseName(nameOfCourse);

	cout << endl;
	myGradeBook.displayMessage();
	cout << endl;
	myGradeBook.determineClassAverage();
}