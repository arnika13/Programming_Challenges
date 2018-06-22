/*Segregate Even and Odd Numbers
Given an array of integers, segregate even and odd numbers in the array.All the even numbers should be present first, and then the odd numbers.

Example:

Input : [1, 9, 5, 3, 2, 6, 7]
	Output : [2, 6, 5, 3, 1, 9, 7]*/

#include<iostream>
using namespace std;

void segregateevenodd(int *arr,int n)
{
	int i = -1, j=0;

	while (j != n)
	{
		if (arr[j] % 2 == 0)
		{
			i++;

			swap(arr[i], arr[j]);

		}
		
			j++;
		

	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " " ;
	}



}



void main()
{
	int arr[] = { 2,1, 6, 4, 3, 5, 10, 7 };
	int n = sizeof(arr) / sizeof(int);
	segregateevenodd(arr,n);

}