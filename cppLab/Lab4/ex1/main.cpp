#include <iostream>
#include <iomanip>
#include <fstream>
#include <ctime>
#include <sstream>
#include <algorithm>
#include <vector>
using  namespace std;


int getRand(int min, int max)
{
	return (rand() % (max - min + 1) + min);
}

string gentimes()
{
	int year = getRand(2020, 2026);
	int month = getRand(1, 12);
	int day = getRand(1, 28);
	int hour = getRand(0, 23);
	int minute = getRand(0, 59);
	int second = getRand(0, 59);

	stringstream ss;
	ss << year << "-" << setw(2) << setfill('0') << month << "-"
		<< setw(2) << setfill('0') << day << " "
		<< setw(2) << setfill('0') << hour << ":"
		<< setw(2) << setfill('0') << minute << ":"
		<< setw(2) << setfill('0') << second;
	return ss.str();
}

string genip()
{
	int a = getRand(0, 255);
	int b = getRand(0, 255);
	int c= getRand(0, 255);
	int d= getRand(0, 255);
	stringstream ss;
	ss << a << "." << b << "."
		<< c << "." << d;
	return ss.str();
}

int main()
{
	srand(time(0));
	vector<string> times;
	
	for (int i = 0; i < 100; i++) 
	{
		times.push_back(gentimes());
	}
	sort(times.begin(), times.end());

	ofstream ofstreamA;
	ofstreamA.open("record.txt", ios::out);

	for (int i = 0; i < 100; ++i)
	{
		ofstreamA << genip()<<" " << times[i] << endl;
	}


	ofstreamA.close();

	ifstream inf;
	inf.open("record.txt", ios::in);
	string line;

	int ca = 0;
	int cb = 0;
	int cc = 0;
	int cd = 0;
	int  ce=0;
	while (getline(inf, line))
	{
		int num = stoi(line);
		if (num >= 0 && num < 128) ca++;
		else if (num >= 128 && num < 192) cb++;
		else if (num >= 192 && num < 224) cc++;
		else if (num >= 224 && num < 240) cd++;
		else if (num >= 240 && num <= 247) ce++;
	}

	
	cout << "Number of classA addresses: " << ca << endl;
	cout << "Number of classB addresses: " << cb << endl;
	cout << "Number of classC addresses: " << cc << endl;
	cout << "Number of classD addresses: " << cd << endl;
	cout << "Number of classE addresses: " << ce << endl;

	inf.close();

}