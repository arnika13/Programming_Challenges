#include<iostream>
#include<algorithm>
using namespace std;

	


void main()
{
	int a[] = { 1,1,2,3,4,0,5,8,0};

	int n = sizeof(a) / sizeof(int);
	
	for (int i = 0,left=0,right=1; i < n, right < n; i++)
	{
		if (a[left] == 0 && a[right] != 0)
		{
			swap(a[left], a[right]);
			left++;
			right++;
		}
		else if (a[left] == 0 && a[right] == 0)
		{
			right++;
		}
		else
		{
			left++;
			right++;
		}
	
	}
	cout << "The array after pushing all zero's to last of array is :  " << endl;
	for (int i = 0; i < n; i++)
	{
		cout <<" "<<a[i];
	}


}
