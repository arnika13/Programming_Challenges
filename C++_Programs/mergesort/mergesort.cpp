#include <iostream>
#include <vector>

using namespace std;


void merge(int *a, int l, int m, int r)
{
	int nl = m - l + 1;
	int nr = r - m;

	int i=0, j=0, k=0;
	std::vector<int> L(nl);
	std::vector<int> R(nr);

	// Copy the arrays
	for (i = 0; i < nl; i++)
	{
		L[i] = a[l + i];
	}
	for (j = 0; j < nr; j++)
	{
		R[j] = a[m + 1 + j];
	}

	// Merge
	i = 0; j = 0; k = l;
	while (i < nl && j < nr)
	{
		if (L[i] <= R[j])
		{
			a[k++] = L[i++];
		}
		else
		{
			a[k++] = R[j++];
		}
	}

	// Copy remaining values
	while (i < nl)
	{
		a[k++] = L[i++];
	}
	while (j < nr)
	{
		a[k++] = R[j++];
	}
}

void mergesort(int *a, int l, int r)
{
	if (l < r)
	{
		int mid = (l + r) / 2;

		mergesort(a, l, mid);
		mergesort(a, mid + 1, r);
		merge(a, l, mid, r);
	}
}

int main()
{
	int a[] = { 12,3,2,1,44,14 };
	int n = sizeof(a) / sizeof(a[0]);
	mergesort(a, 0, n-1);
	for (int i=0; i < n; i++)
	{
		std::cout << a[i] << endl;
	}
}