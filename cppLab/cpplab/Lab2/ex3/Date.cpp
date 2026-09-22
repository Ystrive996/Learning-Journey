#include <iostream>
#include "Date.h"
//using namespace std;

Date::Date(int m, int d, int y)
	:Day(d), Year(y)
{
	setMonth(m);
}
void Date::setMonth(int m)
{
	if (m >= 1 || m <= 12)
		Month = m;
	else
		Month = 1;
}
int Date::getMonth()
{
	return Month;
}
void Date::setDay(int d)
{
	Day = d;
}
int Date::getDay()
{
	return Day;
}
void Date::setYear(int y)
{
	Year = y;
}
int Date::getYear()
{
	return Year;
}
void Date::displayMessage()
{
	cout << Month << "/" << Day << "/" << Year << endl;
}