#include <iostream>
using namespace std;

//p1001
//int main()
//{
//    int a, b;
//    cin >> a >> b;
//    int sum = a + b;
//    cout << sum;
//    return 0;
//}

//p1046
//int main()
//{
//	int arr[10] = {};
//	for (int i = 0; i < 10; i++)
//	{
//		cin >> arr[i];
//	}
//	int ad = 0;
//	cin >> ad;
//	int counter = 10;
//
//	for (int i = 0; i < 10; i++)
//	{
//		if (arr[i]> ad + 30)
//		{
//			counter--;
//		}
//	}
//	cout << counter;
//
//}

//1035
//int main()
//{
//	int a = 0;
//	cin >> a;
//	int n = 0;
//	double s = 0;
//	for (int i = 1; s <= a; i++)
//	{
//		s += 1.0 / i;
//		n++;
//	}
//	cout << n;
//}


//1047
int main()
{
	int l, m;
	cin >> l >> m;
	int arr[m] = {};
	int sum = 0;
	for (int i = 0; i < m; i++)
	{
		cin >> arr[i] >> arr[i + 1];
		sum += arr[i+1] - arr[i] + 1;
	}
	cout << sum;
}