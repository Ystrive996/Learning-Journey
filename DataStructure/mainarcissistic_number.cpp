#include <iostream>
using namespace std;

int main()
{
	int num = 100;
	do
	{
		//cout << num << endl;
		int a = num % 10;
		int b = num / 10 % 10;
		int c = num / 100;
		if (a * a * a + b * b * b + c * c * c == num)
		{
			cout << num << " is a narcissistic number." << endl;
		}
		
		num++;
	} while (num < 1000);

}
