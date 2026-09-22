#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int a[10] ={ 6, 4,2,8,10,12,37,45,68,89};
	cout << "Data items in original order" << endl;
	for (int i = 0; i < 10; ++i)
	{
		cout << setw(4) << a[i];
	}
	cout <<"\n" <<endl;

	for (int i = 9; i >0; --i)
	{
		int counter = 0;
		for (int j = 0; j < i; ++j)
		{
			if (a[j] > a[j + 1])
			{
				swap(a[j], a[j + 1]);
				counter++;
			}
		}
		if (counter == 0)
			break;
		cout << "After pass " << 9 - i << ": ";
		for (int j = 0; j < i+1; ++j)
		{
			cout << setw(4) << a[j];
		}
		cout << endl;
	}
	
	cout << "\nData items in ascending order " << endl;
	for (int i = 0; i < 10; ++i)
	{
		cout << setw(4) << a[i];
	}
	cout << endl;
}
