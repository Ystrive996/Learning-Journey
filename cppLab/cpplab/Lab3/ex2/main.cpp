#include <iostream>
#include "Palindrome.h"
using namespace std;

int main()
{
	Palindrome a;
	int integer = 0;
	cout << "The 5-digits integer is: ";
	cin >> integer;
	a.checkPalindrome(integer);
	cout << "Press any key to continue";
}
