#include "IntegerSet.h"
#include <iostream>
using namespace std;



IntegerSet::IntegerSet(int* a)
{
	if (!a) {
		for (int i = 0; i <= 100; ++i) set[i] = 0;
	}
	else {
		for (int i = 0; i <= 100; ++i) set[i] = a[i];
	}
}
IntegerSet::IntegerSet(int* a, int len)
{
	for (int i = 0; i <= 100; ++i)set[i] = 0;
	for (int i = 0; i < len; ++i) insertElement(a[i]);
}

void IntegerSet::input()
{
	int a = 0;
	cout << "Enter an element (-1 to end): ";
	cin >> a;
	while (a != -1)
	{
		insertElement(a);
		cout << "Enter an element (-1 to end): ";
		cin >> a;
	}
	cout << "Entry complete" << endl;
}

IntegerSet IntegerSet::unionOfSets(IntegerSet& oth)
{
	IntegerSet temp;
	for (int i = 0; i <= 100; ++i)
	{
		if (set[i] || oth.set[i])temp.set[i] = 1;
	}
	return temp;
}
IntegerSet IntegerSet::intersectionOfSets(IntegerSet& oth )
{
	IntegerSet temp;
	for (int i = 0; i <= 100; ++i)
	{
		if (set[i] && oth.set[i])temp.set[i] = 1;
	}
	return temp;
}
void IntegerSet::insertElement(int k)
{
	if (validEntry(k))
		set[k] = 1;
}
void IntegerSet::deleteElement(int k)
{
	if (validEntry(k))
		set[k] = 0;
}
void IntegerSet::printSet()
{
	cout << "{ ";
	for (int i = 0; i <= 100; ++i)
	{
		if (set[i])cout << i << " ";
	}
	cout << "}" << endl;
}
bool IntegerSet::isEqualTo(IntegerSet& oth)
{
	for (int i = 0; i <= 100; i++)
	{
		if (set[i] == oth.set[i])continue;
		else return 0;
	}
	return 1;
}

bool IntegerSet::validEntry(int a)
{
	if (a >= 0 && a <= 100)return 1;
	else
	{
		cout << "Invalid insert attempted!" << endl;
		return 0;
	}
}