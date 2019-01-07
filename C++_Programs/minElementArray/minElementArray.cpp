#include<iostream>
using namespace std;


int minElement(int arr[], int len)
{
	int min = arr[0];
	cout << "The minimum value at 0 index is : "<<min<<endl;

	for (int i = 1; i < len; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}

	}
	return min;


}

void main()
{
	int arr[] = { 2,4,1,6,7 };
	int n = sizeof(arr) / sizeof(int);

	int result= minElement(arr, n);
	cout << "The minimum element in array is : " << result<<endl;

}