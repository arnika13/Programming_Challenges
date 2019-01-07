#include<iostream>
using namespace std;
void main()
{
	int sum(int n);
	int trailzero(int n);
	int fac(int n);
	int n=0;
	cout << "Enter the number :" << endl;
	cin >> n;
	int y=sum(n);
	
	cout << "the sum of digits in a number is :" << y << endl;

	cout << "Enter the number :" << endl;
	cin >> n;
	int f = fac(n);
	cout << "The factorial of a number is :" << f << endl;

	cout << "Enter the number to find the trailing zeros :" << endl;
	cin >> n;
	int z = trailzero(n);
	cout << "The number of trailing zeros in an given integer is :" << z << endl;
}

int fac(int x)
{
	int factorial = 1;
	for (int i = 1; i <= x; i++)
		factorial = factorial*i;
	return (factorial);
}

int sum(int n)
{
	int a = 0;
	while (n > 0)
	{ 
		a += n % 10;
		n /= 10;
	}
	return a;

}

int trailzero(int n)
{
	int mod = 0, count = 0;
	while (n > 0)
	{
		mod = n % 10;
		if (mod == 0)
			count++;
		else
			break;
		n = n / 10;
	}
	return count;
}