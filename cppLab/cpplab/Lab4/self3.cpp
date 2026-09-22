#include <iostream>

using namespace std;

void han(int n, int x, int z, int y)
{
	if(n==1)
		cout << x << " -> " << z<<endl;
	else 
	{
		han(n - 1, x, y, z);
		cout << x << " -> " << z<<endl;
		han(n - 1, y, z, x);
	}
}

int main()
{
	han(3, 1, 3, 2);
}