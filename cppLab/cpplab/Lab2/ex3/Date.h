#include <iostream>
using namespace std;

class Date
{
private:
	int Month;
	int Day;
	int Year;
public:
	Date(int, int, int);
	void setMonth(int);
	int getMonth();
	void setDay(int);
	int getDay();
	void setYear(int);
	int getYear();
	void displayMessage();


};
