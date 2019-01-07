/*Largest Sum Contiguous Subarray
Write an efficient C program to find the sum of contiguous subarray 
within a one - dimensional array of numbers which has the largest sum*/

#include<iostream>
using namespace std;

int maxsum(int *arr, int n)
{
	int initial_sum = 0,max_sum = 0;
	for (int i = 0; i < n; i++)
	{
		max_sum += arr[i];
		cout << max_sum << endl;
		if (max_sum < 0)
			max_sum = 0;

		else  if (initial_sum < max_sum)
			initial_sum = max_sum;

	}
	return initial_sum;

}


void main()
{
	int arr[] = {2,-1,4,3,-2,-6};
	int size = sizeof(arr) / sizeof(int);

	int result= maxsum(arr, size);
	cout << " The maximum  contiugous sum of subarray is : " << result;


}