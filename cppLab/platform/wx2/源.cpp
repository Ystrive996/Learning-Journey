#include <iostream>
using namespace std;

int main()
{
	int n, m, x, y;
	cin >> n >> m >> x >> y;
	unsigned int arr[30][30] = { 0 };

	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= m; j++)
			arr[i][j] = 1;
	}

	arr[x][y] = 0;
	if (x + 2 <= n && y - 1 >= 0) { arr[x + 2][y - 1] = 0; }
	if (x + 2 <= n && y + 1 <= m) { arr[x + 2][y + 1] = 0; }
	if (x + 1 <= n && y + 2 <= m) { arr[x + 1][y + 2] = 0; }
	if (x - 1 >= 0 && y + 2 <= m) { arr[x - 1][y + 2] = 0; }
	if (x - 2 >= 0 && y + 1 <= m) { arr[x - 2][y + 1] = 0; }
	if (x - 2 >= 0 && y - 1 >= 0) { arr[x - 2][y - 1] = 0; }
	if (x - 1 >= 0 && y - 2 >= 0) { arr[x - 1][y - 2] = 0; }
	if (x + 1 <= n && y - 2 >= 0) { arr[x + 1][y - 2] = 0; }

	
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= m; j++)
		{
			if (i == 0 && j == 0)
				continue;
			if (arr[i][j] == 0)
				continue;
			if (i == 0)
				arr[i][j] = arr[i][j - 1];
			else if (j == 0)
				arr[i][j] = arr[i - 1][j];
			else
				arr[i][j] = arr[i - 1][j] + arr[i][j - 1];

			
		}

		
	}

	cout << arr[n][m];
}