# 算法学习Note
## 二分法
#### eoj 木材切割
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
	cout << right;
}

不管循环结束前更新left or right ,循环结束时，left比right 大 1 ，故输出右值即可

####
