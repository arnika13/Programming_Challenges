#include<iostream>
using namespace std;

int maxElement(int arr[], int len){

	int max = arr[0];

	for (int i = 0; i < len; i++){

		if (arr[i] > max) {
			
			max = arr[i];
		
		}

	}
	return max;

}

void main()
{
	int arr[] = { 2,3,12,22,32,43,56};

	int n = sizeof(arr) / sizeof(int);

	int result= maxElement(arr,n);
	cout << "The maximum element in the array is : " << result << endl;

}