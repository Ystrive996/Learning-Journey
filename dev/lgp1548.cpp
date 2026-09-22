#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	int m = 0;
	cin >> n>> m;
	int nt = n;
	int mt = m;
	int square = 0;
	int rectangle = 0;
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= m; ++j)
		{
			rectangle += i * j;
		}
	}

	for (int i = 1; i <= n && i <= m; ++i)
	{
		square += nt * mt;
		--nt;
		--mt;
	}

	cout << square << " "<<rectangle - square << endl;
	return 0;
}
