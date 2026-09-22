#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double s[4][5] = { 0 };
	double row[4] = {};
	double column[5] = {};

	int a, b;
	double c;
	cout << "Enter the salesperson (1 - 4),product  number (1 - 5), and total sales.\n"
		<< "Enter -1 for the salesperson to end input. " << endl;
	cin >> a;
	while (a != -1)
	{
		cin >> b >> c;
		s[a-1][b-1] = c;
		cin >> a;
	}

	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 5; j++)
		{
			row[i] += s[i][j];
		}
	}
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 4; j++)
		{
			column[i] += s[j][i];
		}
	}

	cout << "\nThe total sales for each salesperson are displayed at the end of each row,"
		<< "\nand the total sales for each product are displayed at the bottom of each column.\n\n";

	cout << "  " << setw(11) << "project1" << setw(11) << "project2" << setw(11) << "project3" << setw(11) << "project4" << setw(11) << "project5" << setw(11) << "total" << endl;
	for (int i = 0; i < 4; ++i)
	{
		cout << i+1 << " ";
		for (int j = 0; j < 5; ++j)
		{
			cout <<fixed<<setprecision(2)<< setw(11) << s[i][j];
		}
		cout << fixed << setprecision(2) << setw(11) << row[i] << endl;
	}
	cout << "\nTotal" << fixed << setprecision(2) << setw(8) << column[0];
	for (int i = 1; i < 5; i++)
	{
		cout << fixed << setprecision(2) << setw(11) << column[i];
	}
}