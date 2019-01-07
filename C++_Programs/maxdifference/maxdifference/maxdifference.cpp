#include<iostream>
using namespace std;
void main()
{

	
		int arr[] = { 4,5,8,1,3,7,11,13,2 };
		int Num = sizeof(arr) / sizeof(arr[0]);
		cout << "sizeof(arr)" << sizeof(arr) <<endl<< sizeof(arr[0]) << endl;
		int max_diff = arr[1]-arr[0];

		for (int i = Num - 1; i >= 0; i--) 
		{
			for (int j = 0; j<i; j++) 
			{
				if (arr[i] > arr[j])
				{
					if (arr[i] - arr[j] > max_diff) 
						max_diff = arr[i] - arr[j];
				}
			}
		}
		cout << "Maximum difference is " << max_diff << endl;
		
	}