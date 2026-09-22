#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n = 0;
	int m = 0;
	cin >> n >> m;

	int a = min(n,m );

	int s = (a+1) * n * m + a * (a + 1) * (2*a + 1) / 6 - a * (a + 1) * (m + n) / 2;
	int r = m * n * (n + 1) * (m + 1) / 4 - s;
	cout << s << " " << r;
}
