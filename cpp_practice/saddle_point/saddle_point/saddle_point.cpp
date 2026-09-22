#include <iostream>
using namespace std;

int main()
{
	//初始化列表
	const int rm = 100;
	const int cm = 100;
	int r, c;
	int arr[rm][cm] = {};

	//输入数据
	cout << "Input row and column: ";
	cin >> r >> c;
	cout << "The integer: ";
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
			cin >> arr[i][j];
	}

	//找鞍点
	for (int i = 0; i < r; i++)
	{
		//先找出每行最大值
		int r_max = arr[i][0];
		int a = 0;
		for (int j = 0; j < c; j++)
		{
			if (arr[i][j] > r_max)
			{
				r_max = arr[i][j];
				a = j;
			}
		}

		//再找出行最大值对应的列最小值
		int c_min = arr[0][a];
		for (int k = 0; k < r; k++)
		{
			if (arr[k][a] < c_min)
			{
				c_min = arr[k][a];
			}
		}

		//判断两个数是否是一个数
		if (r_max == c_min)
		{
			cout << "有鞍点: " << i+1 << " " << a+1 << " " << arr[i][a]<<endl;
		}
		else
			cout << "无鞍点"<<endl;

	}

}