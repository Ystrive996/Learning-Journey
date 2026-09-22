#include <iostream>
using namespace std;


void gcd0(int, int,int&);
int gcd1(int, int);
int gcd2(int , int );


int main()
{
	int m, n;
	cout << "Enter two integers:";
	cin >> m >> n;
	while (m > 0 && n > 0)
	{
		int gcd = gcd2(m,n);
		
		//gcd0(m, n, gcd);
		cout << "The greastest common divsor of " << m << " and " << n << " is " << gcd <<"\n\n"<< endl;
		cout << "Enter two integers:";
		cin >> m >> n;
	}
}

void gcd0(int m, int n,int &gcdref)
{
	for (int i = ((m > n) ? n : m); i > 0; --i)
	{
		if (m%i == 0 && n%i == 0)
		{
			gcdref = i;
			break;
		}
	}
}

int gcd1(int m, int n)
{
	int max, min;
	if (m > n)
	{
		max = m;
		min = n;
	}
	else 
	{
		max = n;
		min = m;
	}


	while (1)
	{
		if (max%min == 0)
			return min;
		else
		{
			int temp = min;
			min = max % min;
			max = temp;
		}
	}
}

int gcd2(int m, int n)
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
		return gcd2(n, m%n);
}