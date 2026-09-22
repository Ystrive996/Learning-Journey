#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	bool a[1000] = { 0 };
	for (int i = 0; i < 1000; ++i)
	{
		a[i] = true;
	}
	int counter = 0;
	for (int i = 2; i < 1000; ++i)
	{
		for (int j = i+1; j < 1000; ++j)
		{
			
			if (j % i == 0)
			{
				a[j] = false;
			}
		}
	}
	cout << "The prime number between 1 and 1000 are: " << endl;
	for (int i = 2; i < 1000; ++i)
	{
		if (a[i])
		{
			cout << setw(5) << i;
			counter++;
			if (counter % 16 == 0)
				cout << endl;
		}
		

	}
}