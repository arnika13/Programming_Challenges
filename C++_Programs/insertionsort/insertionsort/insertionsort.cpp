#include<iostream>
using namespace std;

void insertionsort(int *a, int n)
{
	for (int i = 1; i < n; i++)
	{
		 int value = a[i];
		 int hole = i;
		 while (hole > 0 && a[hole - 1] > value)
		 {

			 a[hole] = a[hole - 1];
			 hole = hole -1 ;

		 }
		 a[hole] = value;
	}
}




int main()
{
	int a[] = {12,3,4,55,34,2,13};
	int n = sizeof(a) / sizeof(a[0]);

	insertionsort(a, n);
	for (int i = 0; i < n; i++)
	{
		cout <<a[i] << " ";
	}

}