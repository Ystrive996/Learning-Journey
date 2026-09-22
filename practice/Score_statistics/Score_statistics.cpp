#include <iostream>

int main()
{
	int scores[3][3] =
	{
		{100,00,100},
		{90,50,100},
		{60,70,80}
	};
	std::string names[3] = { "张三","李四","玄武" };
	
	for (int i = 0; i < 3; i++)
	{
		int sum = 0;
		for (int j = 0; j < 3; j++)
		{
			std::cout << scores[i][j] << " ";
			sum += scores[i][j];
		}
		std::cout << names[i] << " sum: " << sum << std::endl;
	}

	
	
}