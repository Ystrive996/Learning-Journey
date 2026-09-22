#include <iostream>
#include "GradeBook.h"
using namespace std;

GradeBook::GradeBook(string cname, string tname)
	: courseName(cname), teacherName(tname)
{

}

void GradeBook::setCourseName(string name)
{
	courseName = name;
}

string GradeBook::getCourseName() const
{
	return courseName;
}
void GradeBook::displayMessage() const
{
	cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
	cout << "This course is presented by: " << getTeacherName() << "!" << endl;
}
void GradeBook::setTeacherName(string name)
{
	teacherName = name;
	cout << "Changing instructor name to " << name << endl;
}
string GradeBook::getTeacherName() const
{
	return teacherName;
}