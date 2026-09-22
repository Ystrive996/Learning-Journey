#include <iostream>
using namespace std;
int main()
{
	std::cout << "Welcome to cpp\n";
	int number1 = 0;
	int number2 = 0;
	cout << "Enter two numbers to comper : ";
	cin >> number1 >> number2;
	if (number1 == number2)
		cout << number1 << '==' << number2 << endl;
	if (number1 != number2)
		cout << number1 << "!=" << number2 << endl;
	
	
	return 0;
}