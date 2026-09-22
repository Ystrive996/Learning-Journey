#include <iostream>
using namespace std;

void square(char, int);
void diamond(char, int);
void triangle(char, int);

int main()
{
	char c; 
	do
	{
		int n = 0;
		char a;
		int b = 0;
		
		cout << "Choose the shape to graph\n"
			<< "1 for square\n"
			<< "2 for diamond\n"
			<< "3 for triangle.\n"
			<< "? ";
		cin >> n;

		cout << "Enter a character and size: ";
		cin >> a >> b;
		cout << endl;
		
		switch (n)
		{
		case 1:
			square(a, b);
			break;
		case 2:
			diamond(a, b);
			break;
		case 3:
			triangle(a, b);
			break;
		}
			cout << "\n\n\nDo you want to continue (y or n)?: ";
			cin >> c;
			cout << endl;
	} while (c == 'y' );
}


void square(char a, int b)
{
	for (int i = 1; i <= b; ++i)
	{
		for (int j = 1; j <= b; ++j)
			cout << a;
		cout << endl;
	}
}

void diamond(char a, int b)
{
	if (b % 2 == 1)
	{
		int t = b / 2 + 1;
		for (int i = 1; i <= t; ++i)
		{
			for (int j = 1; j <= b; ++j)
			{
				if (j > t - i && j < t + i)
					cout << a;
				else
					cout << " ";
			}
			cout << endl;
		}
		for (int i = 1; i <= b - t; ++i)
		{
			for (int j = 1; j <= b; ++j)
			{
				if (j > i && j <= b - i)
					cout << a;
				else
					cout << " ";
			}
			cout << endl;
		}
	}
	else
		cout << "Just kidding!Input odd!" << endl;
}

void triangle(char a, int b)
{
	for (int i = 1; i <= b; ++i)
	{
		for (int j = 1; j <= 2*b-1; ++j)
		{
			if (j > b - i && j < b + i)
				cout << a;
			else
				cout << " ";
		}
		cout << endl;
	}
}
