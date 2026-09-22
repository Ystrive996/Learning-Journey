#include <iostream>
using namespace std;

int main()
{
	//花仙猪
	/*int a = 0;
	int b = 0;
	int c = 0;
	cout << "请输入三只小猪的体重：" << endl;
	cin >> a >> b >> c;
	cout << "a,b,c分别重 " << a << "," << b << "," << c << endl;

	int max = (a > b ? a : b) > c ? (a > b ? a : b) : c;
	
	switch (max)
	{
	case 3:
		cout << "the msot : " << max << endl;
		break;
	case 4:
		cout << "the msot moost : " << max << endl;
		break;
	default :
		cout << "too high!" << endl;
	}*/
	
	
	//while循环输出1~10
	/*int num = 0;
	while (num<10)
	{
		num++;
		cout << num << endl;
	}
	cout << num << endl;*/
	
	
	//for 循环输出1~10,for循环按照如下1234的顺序执行
	//for (int a = 1/*1*/; a < 11/*2*/; a++/*4*/)
	//{
	//	cout << a << endl;/*3*/
	//}


	//10方矩阵星星*
	/*for(int s = 0;s<10;s++)
	{
		for (int t = 0; t < 10; t++)
		{
			cout << "* ";
		}
		cout << endl;
	}*/


	int counter = 0;
	while (counter++ <10)
		cout << counter << " ";
	cout << endl;
} 