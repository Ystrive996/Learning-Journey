#include "HugeInteger.h"
#include <iostream>
#include <cstring>
using namespace std;

static void initialize( int a[40])
{
	for (int i = 0; i < 40; ++i) a[i] = 0;
}

HugeInteger::HugeInteger(int value)
{
	initialize(integer);
	if (value < 0)return;
	
	for (int i = 39; i >= 0; --i)
	{
		integer[i] = value % 10;
		value /= 10;
	}
}
HugeInteger::HugeInteger(const char* a)
{
	input(a);
}

HugeInteger HugeInteger::add(const HugeInteger& a)
{
	HugeInteger result;
	int carry = 0;
	for (int i = 39; i >= 0; --i)
	{
		int sum = integer[i] + a.integer[i] + carry;
		result.integer[i] = sum % 10;
		carry = sum / 10;
	}
	return result;
}
HugeInteger HugeInteger::add(int a)
{
	HugeInteger temp(a);
	return add(temp);
}
HugeInteger HugeInteger::add(const char* a)
{
	HugeInteger temp(a);
	return add(temp);
}

HugeInteger HugeInteger::subtract(const HugeInteger& a)
{
	HugeInteger result;

	int borrow = 0;
	for (int i = 39; i >= 0; --i)
	{
		int diff = integer[i] - a.integer[i] - borrow;
		if (diff < 0) 
		{
			result.integer[i] = 10 + diff;
			borrow = 1;
		}
		else
		{
			result.integer[i] = diff;
			borrow = 0;
		}
	}
	return result;
}
HugeInteger HugeInteger::subtract (int a)
{
	HugeInteger temp(a);
	return subtract(temp);
}
HugeInteger HugeInteger::subtract(const char* a)
{
	HugeInteger temp(a);
	return subtract(temp);
}

bool HugeInteger::isEqualTo(HugeInteger& other)
{
	for (int i = 39; i >= 0; --i)
	{
		if (integer[i] == other.integer[i])continue;
		else return 0;
	}
	return 1;
}

bool HugeInteger::isNotEqualTo(HugeInteger& other) 
{
	for (int i = 39; i >= 0; --i)
	{
		if (integer[i] == other.integer[i])continue;
		else return 1;
	}
	return 0;
}

bool HugeInteger::isGreaterThan(HugeInteger& other)
{
	for (int i = 0; i <= 39; ++i)
	{
		if (integer[i] > other.integer[i])return 1;
		if (integer[i] == other.integer[i])continue;
		else return 0;
	}
	return 0;
}

bool HugeInteger::isLessThan(HugeInteger& other)
{
	for (int i = 0; i <= 39; ++i)
	{
		if (integer[i] > other.integer[i])return 0;
		if (integer[i] == other.integer[i])continue;
		else return 1;
	}
	return 0;
}

bool HugeInteger::isGreaterThanOrEqualTo(HugeInteger& other)
{
	for (int i = 0; i <= 39; ++i)
	{
		if (integer[i] > other.integer[i])return 1;
		if (integer[i] == other.integer[i])continue;
		else return 0;
	}
	return 1;
}

bool HugeInteger::isLessThanOrEqualTo(HugeInteger& other)
{
	for (int i = 0; i <= 39; ++i)
	{
		if (integer[i] > other.integer[i])return 0;
		if (integer[i] == other.integer[i])continue;
		else return 1;
	}
	return 1;
}

bool HugeInteger::isZero()
{
	for (int i = 0; i <= 39; ++i)
	{
		if (integer[i] != 0)return 0;
	}
	return 1;
}

void HugeInteger::input(const char* a)
{
	initialize(integer);
	size_t len = strlen(a);
	for (int i = 0; i+1 <= len; ++i)
	{
		integer[39 - i] = a[len - 1 - i] - 48;
	}
}

void HugeInteger::output()
{
	int i = 0;
	while (i < 40 && integer[i] == 0)++i;
	if (i == 40)
	{
		cout << 0;
		return;
	}
	for (; i < 40; ++i)
	{
		cout << integer[i];
	}
}