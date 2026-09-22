#include <iostream>
using namespace std;

int main()
{
	long  n, k;
	const long  max_l = 100005;
	long   l[max_l] = { 0 };
	cin >> n >> k;
	for (long i = 1; i <= n; ++i)
		cin >> l[i];

	long  left = 1;
	long  right = 100000000;
	long mid = 0;
	while (left <= right)
	{
		long cnt = 0;
		mid = (left + right) / 2;
		for (long i = 1; i <= n; ++i)
		{
			cnt += l[i] / mid;
		}
		if (cnt >= k)
			left = mid + 1;
		else
			right = mid - 1;

	}
	cout << right ;
}