#include<iostream>
using namespace std;
int binarysearch(int *a, int n, int x)
{
	int start = 0;
	int end = n - 1;
	while (start <= end)
	{
		int mid = start + (end - start) / 2;

		if (a[mid] == x)
			return mid;
		else if (x > a[mid])
			start = mid + 1;
		else
			end = mid - 1;


	}
	return -1;

}



int main()
{
	int a[] = { 2,3,4,17,23,35 };
	int n = sizeof(a) / sizeof(a[0]);
	int x;
	cout << "Enter the element to search :" << endl;
	cin >> x;
	int c = binarysearch(a, n, x);
	if (c != -1)
		cout << "Number " << x << " is at index " << c << endl;
	else
		cout << "Number "<<x<<" is not found in the array.";
	
}