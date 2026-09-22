#include <iostream>
#include <iomanip>
using namespace std;
 
bool primenumber(int);
int main()
{
	int n = 10000;
	int counter = 0;
	cout << "The orime numbers from 1 to 10000 are: " << endl;
	
	for (int i = 1; i <= 10000; ++i)
	{
		if (primenumber(i))
		{
			cout << setw(6) << i;
			counter++;
			if (counter % 10 == 0)
				cout << endl;
		}
		
	}
}

bool primenumber(int n)
{
	int sum = 0;
	if (n == 1)
		return 0;
	for (int i = 2; i < n; ++i)
	{
		if (n%i == 0)
			sum += i;
	}
	if (sum > 1)
		return 0;
	else
		return 1;
}