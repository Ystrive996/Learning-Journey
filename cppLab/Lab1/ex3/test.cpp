#include "HugeInteger.h"
#include <iostream>
using namespace std;

int main()
{
	const char* a = "7654321";
	HugeInteger n0(a);
	HugeInteger n1("7891234");
	HugeInteger n2(5);
	HugeInteger n3;

	n0.output();
	cout << " + ";
	n1.output();
	cout << " = ";
	n0.add(n1).output();
	cout<< "\n"<<endl;

	n1.output();
	cout << " - ";
	n2.output();
	cout << " = ";
	n1.subtract(n2).output();
	cout << "\n" << endl;

	if (n0.isEqualTo(n0))
	{
		n0.output();
		cout << " is equal to ";
		n0.output();
		cout << "\n" << endl;
	}

	if (n0.isNotEqualTo(n1))
	{
		n0.output();
		cout << " is not equal to ";
		n1.output();
		cout << "\n" << endl;
	}

	if (n1.isGreaterThan(n0))
	{
		n1.output();
		cout << " is greater than ";
		n0.output();
		cout << "\n" << endl;
	}

	if (n2.isLessThan(n1))
	{
		n2.output();
		cout << " is less than ";
		n1.output();
		cout << "\n" << endl;
	}

	if (n2.isLessThanOrEqualTo(n2))
	{
		n2.output();
		cout << " is less than or equal to ";
		n2.output();
		cout << "\n" << endl;
	}

	if (n3.isLessThanOrEqualTo(n3))
	{
		n3.output();
		cout << " is greater than or equal to ";
		n3.output();
		cout << "\n" << endl;
	}

	cout << "n3 contains value ";
	n3.output();
}