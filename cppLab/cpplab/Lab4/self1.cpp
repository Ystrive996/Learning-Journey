#include <iostream>
#include <iomanip>
using namespace std;

int fah(int c)
{
	return 9 * c / 5 + 32;
}

int main()
{
	for (int i = 1; i <= 4; ++i)
		cout << setw(7) << "Celsius" << setw(11) << "Fahrenheit" << " ";
	cout << endl;
	for (int i = 0; i <= 25; ++i)
	{
		for (int j = 0; j < 4; ++j)
		cout << setw(7) << i+j*25 << setw(11) << fah(i+j*25) << " ";
		cout << endl;
}
}