#include "Factorial.h"

long long nfactorial(int n)
{
	if (n > 1)
	{
		long long nn = n;
		for (; n > 1; n--)
		{
			nn *= (n - 1);
		}
		return nn;
	}
	if (n == 0 || n == 1)
	{
		return 1;
	}
}

double getE(int n)
{
	double e = 1.0;
	for (int i = 1; i <= n; i++)
	{
		e += 1.0 / nfactorial(i);
	}
	return e;
}

double getEx(int n, int x)
{
	double exn = 1.0;
	for (int i = 1; i <= n; i++)
	{
		long long xn = 1;
		for (int j = 0; j < i; j++)
		{
			xn *= x;
		}

		exn += (static_cast<double>(xn) / nfactorial(i));
	}
	return exn;
}