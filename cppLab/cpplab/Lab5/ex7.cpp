#include <iostream>
using namespace std;

void stringReverse(char [], int);

int main()
{
	char s[10] ="Hello";
	

	stringReverse(s, 10);
}

void stringReverse( char s[],int n)
{
	if (n <= 0)
		return;
	cout << s[n - 1] ;
	stringReverse(s, n - 1);
}