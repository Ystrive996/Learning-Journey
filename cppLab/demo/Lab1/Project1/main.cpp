#include <iostream>
using namespace std;

int main()
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	cout << "Input three different integers: " << endl;
	cin >> num1 >> num2 >> num3;
	
	int sum = num1 + num2 + num3;
	int average = sum / 3;
	int product = num1 * num2 * num3;
	int min = ((num1 <= num2 ? num1 : num2) <= num3 ? (num1 <= num2 ? num1 : num2) : num3);
	int max = ((num1 >= num2 ? num1 : num2) >= num3 ? (num1 >= num2 ? num1 : num2) : num3);
	
	cout << "Sum is " << sum << endl;
	cout << "Average is " << average << endl;
	cout << "Product is " << product << endl;
	cout << "Smallest is " << min << endl;
	cout << "Largest is " << max << endl;

	return 0;
}