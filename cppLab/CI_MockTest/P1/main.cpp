#include <iostream>
using namespace std;
int mystery(int n)
{
	if (n <= 1) {
		cout << n << " ";
		return n;
	}
	int result = mystery(n - 2) + mystery(n - 1);
	cout << result << endl;
	return result;
}

int main()
{
	cout << "Output:" << endl;
	mystery(4);
	cout << endl;
	return 0;
}