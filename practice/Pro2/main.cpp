#include <iostream>
using namespace std;

int main()
{
	//数组长度及内存位置
	/*int arr[5] = { 1,1,2,3,4 };
	cout << sizeof(arr) / sizeof(arr[3]) << endl;
	cout << (int)&arr << endl;
	cout << (int)&arr[0] << endl;
	cout << (int)&arr[1] << endl;*/

	//五只小组称最重，打擂台法
	/*int arr[5] = { 100,200,300,400,500 };
	int max = arr[1];
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	cout << max << endl;*/

	//元素逆置，创建临时temp
	/*int arr[] = {1,3,2,5,4};
	cout << "逆置前："<<endl;
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		cout << arr[i] << endl;
	}

	int start = 0;//起始下标
	int end = sizeof(arr) / sizeof(arr[0]) - 1;//结束下标

	while (start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}

	cout << "逆置后："<<endl;
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		cout << arr[i] << endl;
	}*/

	//冒泡排序
	//int arr[] = { 5,6,7,8,9,1,4 };
	//cout << "排序前：";
	//for (int i = 0; i < 7; i++)
	//{
	//	cout << arr[i]<<" ";
	//}
	//cout << endl;
	//
	////排序总轮数 = 元素个数 - 1
	//for (int i = 0; i < 7 - 1; i++)
	//{
	//	//每轮对比次数 = 元素个数 - 排序轮数 - 1
	//	for (int j = 0; j < 7 - i - 1; j++)
	//	{
	//		if (arr[j] > arr[j + 1])
	//		{
	//			int temp = arr[j];
	//			arr[j] = arr[j + 1];
	//			arr[j + 1] = temp;
	//		}
	//	}
	//}
	//cout << "排序后：";
	//for(int i = 0;i<7;i++)
	//{
	//	cout << arr[i]<<" ";
	//}
	//cout << endl;

	//二维数组
	int arr[][3] =
	{
		{1,2,3},
		{4,5,6}
	};
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl;

	int* p = arr[0];
	for (int i = 0; i < 6; i++)
		{
		cout << *p << " ";
		p++;
	}
}