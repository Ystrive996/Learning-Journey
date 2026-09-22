#include <iostream>
using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	cout << "Enter two integers: " << endl;
	cin >> a >> b;

	//int c = 0;
	if (a%b == 0)
		cout << a << " is a multiple of " << b << endl;
	else
		cout << a << " is not a multiple of " << b << endl;
}