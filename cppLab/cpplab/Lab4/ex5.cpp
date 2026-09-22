#include <iostream>
using namespace std;

int power(int n, int m)
{
	if (m == 1)
		return n;
	else
		return n * power(n, m - 1);
}

int main() {
	int n, m;
	cout << "Enter a base and an exponent: ";
	cin>> n >> m;
	cout << n << " raised to the " << m << " is " << power(n, m) << endl;
}