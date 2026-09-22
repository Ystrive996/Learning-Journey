#include <iostream>
#include "Factorial.h"
using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	
	cout << "Please input a nonnegative integer: ";
	cin >> a;
	cout << "The factorial of " << a << " is: " << nfactorial(a) << endl;

	cout << "\nPlease input the number of terms used to calculate e: ";
	cin >> b;
	cout << "The value of e is " << getE(b) << endl;

	cout << "\nPlease input the number of terms used to calculate ex: ";
	cin >> c;
	cout << "Please input the x: ";
	cin >> d;
	cout << "The value of ex is " << getEx(c, d) << endl;


}