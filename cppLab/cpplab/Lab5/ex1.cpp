#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int a[9] = { };
	int b = 0;
	cout << "Enter employee gross sales (-1 to end): ";
	cin >> b; 
	do
	{
		double c = 200 + 0.09 * b;
		cout << "Employee Commission is $"<<fixed<<setprecision(2)<< c<<"\n"<<endl;
		
		int d = b * 0.09 / 100;
		if (d >= 8)
			++a[8];
		else
			++a[d];

		cout << "Enter employee gross sales (-1 to end): ";
		cin >> b;
	} while (b != -1);

	cout << "Employee in the range: "<<"\n"
		<< "$200-$299 : " << a[0] << "\n"
		<< "$300-$399 : " << a[1] << "\n"
		<< "$400-$499 : " << a[2] << "\n"
		<< "$500-$599 : " << a[3] << "\n"
		<< "$600-$699 : " << a[4] << "\n"
		<< "$700-$799 : " << a[5] << "\n"
		<< "$800-$899 : " << a[6] << "\n"
		<< "$900-$999 : " << a[7] << "\n"
		<< "Over $1000: " << a[8] << endl;
}