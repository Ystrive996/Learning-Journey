#include <iostream>
#include <iomanip>
using namespace std;

int fibonacci(int);
int fibonacci2(int );
int fibonacci3(int );
double fibonacci4(int );

int main()
{
	//µ¥
	for (int i = 0;i<20; i++)
	{
		cout << "fibonacci(" << i << ")=" << fibonacci2(i) << endl;
	}
	cout << "fibonacci(" << 20 << ")=" << fibonacci2(20) << endl;
	cout << "fibonacci(" << 30<< ")=" << fibonacci2(30) << endl;
	cout << "fibonacci(" << 35 << ")=" << fibonacci2(35) << endl;

	for (int i = 0; i < 50; i++)
	{
		if (fibonacci2(i) < 0)
		{
			cout << i - 1 << endl;
			break;
		}
	}
	
	//Ë«
	for (int i = 0; i < 20; i++)
	{
		cout << "fibonacci(" << i << ")=" <<fixed<<setprecision(1)<< fibonacci4(i) << endl;
	}
	cout << "fibonacci(" << 20 << ")=" << fixed << setprecision(1) << fibonacci4(20) << endl;
	cout << "fibonacci(" << 30 << ")=" << fixed << setprecision(1) << fibonacci4(30) << endl;
	cout << "fibonacci(" << 35 << ")=" << fixed << setprecision(1) << fibonacci4(35) << endl;
	for (int i = 1470;i < 1480 ; i++)
	{
		
		if (fibonacci4(i) ==INFINITY)
		{
			cout << i - 1 << endl;
			break;
		}
	}
	
}

int fibonacci(int n)
{
	int a[100] = { 0 };
	a[1] = 1;
	for (int i = 2; i <= n; ++i)
	{
		a[i] = a[i - 1] + a[i - 2];
	}
	return a[n];
}

int fibonacci2(int n)
{
	int a = 0;
	int b = 1;
	
	if (n == 0)
		return a;
	else if (n == 1)
		return b;
	else
	{
		for (int i = 2; i <= n; ++i)
		{
			int temp = b;
			b = a + temp;
			a=temp;
		}
		return b;
	}
}

int fibonacci3(int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	else
		return fibonacci(n - 1) + fibonacci(n - 2);
}

double fibonacci4(int n)
{
	double a = 0.0;
	double b = 1.0;

	if (n == 0)
		return a;
	else if (n == 1)
		return b;
	else
	{
		for (int i = 2; i <= n; ++i)
		{
			double temp = b;
			b = a + temp;
			a = temp;
		}
		return b;
	}
}