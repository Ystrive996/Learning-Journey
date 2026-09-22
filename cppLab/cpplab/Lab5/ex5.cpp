#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;


void selectionSort(int[], int, int );
int main()
{
	int a[10] = {773,236,941,420,953,874,413,654,83,56};
	cout << "Unsorted array is: " << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << setw(4) << a[i]<<" ";
	}
	cout << endl;
	
	selectionSort(a, 10, 1);
	cout << "Sorted array is: " << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << setw(4) << a[i] << " ";
	}
	cout << endl;

	
}

void selectionSort(int arr[], int len,int a)
{
	if (a==len)
		return;
	else
	{
			int min = a-1;
			for (int i = a; i < len; ++i)
			{
				if (arr[i] < arr[min])
				{
					min = i;
				}
			}
			swap(arr[min], arr[a-1]);
			selectionSort(arr, len, a + 1);
	}

		
		
}