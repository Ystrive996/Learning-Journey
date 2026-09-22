#include <iostream>
using namespace std;

int main()
{
	int a = 20;
	int b = 10;
	int* p = &a;
	std::cout << "a的地址" << &a << endl;
	cout << "p的地址" << p << endl;
	cout << "p的值" << *p << endl;
	cout << "p本身的地址" << &p << endl;
	cout << "p占用的内存空间" << sizeof(p) << endl;
	cout << "point 占用内存" << sizeof(int*) << endl;
	cout << "point 占用内存" << sizeof(double*) << endl;
	cout << "point 占用内存" << sizeof(float*) << endl;
	cout << "point 占用内存" << sizeof(char*) << endl;

	//空指针 0~255系统占用不可访问
	//int* p = NULL;
	//*p = 100;不可访问

	//1.const 修饰指针 常量指针
	const int* p1 = &a;
	//指针指向可以改变，指向的值不可以改变
	a = 900;
	cout << a;/*错误*/
	/*p1 = &b;*///正确

	//2.const 修饰常量 指针常量
	int* const p2 = &a;
	//指针指向不可以改变，指向的值可以改变
	*p2 = 90;//正确
	cout << *p2 << endl;



}