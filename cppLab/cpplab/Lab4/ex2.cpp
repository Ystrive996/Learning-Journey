#include <iostream>
using namespace std;

bool perfect(int);
int main()
{
	int n = 1000;

	cout << "Perfect integers between 1 and 1000: " << endl;
	for (int i = 1; i <= n; ++i)
	{
		if (perfect(i))
		{
			cout << i << " = 1";
			for (int j = 2; j < i; ++j)
			{
				if (i%j == 0)
					cout << " + " << j;
			}
			cout << endl;
		}
	}
}

bool perfect(int integer)
{
	int sum = 0;
	for (int i = 1; i < integer; ++i)
	{
		
		if (integer%i == 0)
		{
			sum += i;	
		}
	}
	if (sum == integer)
		return 1;
	else
		return 0;
}