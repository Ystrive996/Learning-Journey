#include <iostream>
#include "Date.h"//头文件中包含using namespace std;


int main()
{
	Date date1(15, 2, 2023);
	Date date2(11, 28, 2020);
	date1.displayMessage();
	date2.displayMessage();
	cout << "Updating date1 month to 12" << endl;
}