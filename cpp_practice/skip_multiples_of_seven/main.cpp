#include <iostream>
using namespace std;

int main()
{
	for (int a = 1; a < 100; a++)
	{
		if (a % 7 == 0 || a % 10 == 7 || a / 10 == 7)
			cout << "Skip! " << endl;
		else
			cout << a << endl;
	}
}