#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand((unsigned int)time(NULL));
	
	int num = rand() % 100 + 1;

	int val = 0;

	cout << "please input one num too guess: " << endl;
	cin >> val;

	while (val != num)
	{
		if (val > num)
		{
			cout << "too high,again" << endl;
			cin >> val;
		}
		else
		{
			cout << "too low,again" << endl;
			cin >> val;
		}

	}
	cout << "bingo,win" << endl;
}