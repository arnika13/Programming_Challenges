#include<iostream>
using namespace std;

void bubblesort(int a[],int n)
{
	int i;
	
	for (i = 0; i < n-1; i++)
	{
		
		for (int j = 0; j < (n-i-1); j++)
		{
		
			if (a[j] > a[j + 1])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
				
			}
		
		}

	}
}



int main()
{
	int a[] = { 1,33,27,10,35,12,44,55,3,6};
	int i;
	int n = sizeof(a) / sizeof(a[0]);
	//cout << sizeof(a);
	cout << "The sorted list of array is :";
	bubblesort(a, n);
	for (i = 0; i < n; i++)
	{
		cout << a[i] << " ";

	}



}