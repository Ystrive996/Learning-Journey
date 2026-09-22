#include <iostream>
#include "Palindrome.h"
using namespace std;

void Palindrome::checkPalindrome(int integer)
{
	int a = integer / 10000;
	int b = integer / 1000 % 10;
	int c = integer / 100 % 10;
	int d = integer / 10 % 10;
	int e = integer % 10;

	cout << "Each digit of the 5-digits integer is: ";
	cout << a << " " << b << " " << c << " " << d << " " << e<<endl;

	if (a == e && b == d)
		cout << "This integer is a palindrome!" << endl;
	else
		cout << "This integer is not a palindrome!" << endl;
}