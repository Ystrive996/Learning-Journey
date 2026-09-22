#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double sum = 0;
	int n = 0;
	
	int a[31] = { 0 };
	a[0] = 1;
	a[1] = 1;

	for (int i = 2; i <= 30; ++i)
	{
		a[i] = a[i - 1] + a[i - 2];
	}

	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		sum += static_cast<double> (a[i - 1]) / a[i];
	}
	cout <<fixed<<setprecision(3)<< sum;
}