#include <iostream>
#include "Time.h"

int main()
{
	Time t1(23, 59, 55);
	t1.printUniversal();
	std::cout << std::endl;
	t1.printStandard();
	std::cout << std::endl;
	int c = 0;
	while (c!=60)
	{
		tick(t1);
		t1.printStandard();
		std::cout << std::endl;
		c++;
	}
}