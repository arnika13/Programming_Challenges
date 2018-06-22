#include<iostream>
using namespace std;
void selectionsort(int *a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int imin = i;
		for (int j = i + 1; j < n; j++)
		{
			if (a[j] < a[imin])
			{
				imin = j;

			}

		}


		int temp = a[i];
		a[i] = a[imin];
		a[imin] = temp;
	}

}


int main()
{
	int i;
	int a[] = {14,33,27,10,35,19 };
	selectionsort(a, 6);
	cout << "The sorted list is :";
	for (i = 0; i < 6; i++)
	{
		cout << a[i] << " ";

	}

}