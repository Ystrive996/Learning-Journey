#include <iostream>
#include "GradeBook.h"
using namespace std;

int main()
{
	GradeBook gradebook1("CS101 Introduction to C++ Programming", "Sam Smith");
	gradebook1.displayMessage();
	gradebook1.setTeacherName("Judy Jones");
	gradebook1.displayMessage();

}