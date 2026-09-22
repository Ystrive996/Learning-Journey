#include <iostream>
using namespace std;

int main()
{
	const int n = 10;
	const int days = n + 1;
	int a[days];
	a[n] = 1;

	for (int i = 9; i > 0; i--)
	{
		a[i] = (a[i + 1] + 1) * 2;

	}

	cout << a[1];
}