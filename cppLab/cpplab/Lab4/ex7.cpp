#include <iostream>
using namespace std;

int gcd(int m, int n)
{
	if (m < n)
	{
		int temp = m;
		m = n;
		n = temp;
	}
	if (n == 0)
		return m;
	else
		return gcd(n, m%n);
}

int main()
{
	int m, n;
	cout << "Enter two ingeters: ";
	cin >> m >> n;
	cout << "Greastest common divisor of " << m << " and " << n << " is " << gcd(m, n) << endl;
}