#include<iostream>
using namespace std;

int linearsearch(int *a, int n, int x)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
			return i;
	}
	return -1;

}

int main()
{
	int a[] = { 2,4,7,12,33,42,54};
	int n = sizeof(a) / sizeof(a[0]);
	cout << n<<endl;

	int x;
	cout << "Enter the number to be searched: " << endl;
	cin >> x;
	int result = linearsearch(a, n, x);
	if (result != -1)
		cout << "Number " << x << " is found at index " << result <<endl;
	else
		cout << "Number " << x << " is not found in the array." << endl;


}