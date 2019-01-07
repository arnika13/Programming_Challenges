#include<iostream>
using namespace std;

int print(int n)
{
	if (n == 1)
	{
		return 2;
	}
	else
	{
		return 2 * print(n - 1);
	}
}

void main()
{

	cout << print(4);
}