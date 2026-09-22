#include <iostream>
#include "HugeInt.h"
using namespace std; 
int main()
{
	int in[3] = { 0 };
	const char* s = "321";
	for (int i = 0; i <= 2 && i <= strlen(s) - 1; ++i)
	{
		in[2 - i] = s[strlen(s) - 1 - i];
		cout << in[2 - i] << " ";


	}

}