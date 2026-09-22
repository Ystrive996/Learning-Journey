#include "Calculator.h"
#include <iomanip>
#include <iostream>
using namespace std;

void calculatorPi(int n)
{
	double pi = 0;
	cout << left << setw(4) << "term" << right << setw(21) << "pi"<<endl;
	for (int i = 1; i <= n; i++)
	{
		if(i%2==1)
			pi += static_cast<double>(4) / (2 * i - 1);
		else
			pi -= static_cast<double>(4) / (2 * i - 1);
		cout << left << setw(4) << i << right << setw(21) << setprecision(8)<<fixed<<pi<<endl;
	}

}
