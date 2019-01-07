#include <iostream>
using namespace std;

void rangeiterative(int x, int y)
{
	for (int i = x; i <= y; i++)
	{
		cout <<"\n"<<i;
	}
}

void rangerecursive(int x, int y)
{
	if (x == y)
	{
		return;
	}
	cout << x;
	rangerecursive(x+1, y);

}

int main()
{

	rangeiterative(1, 20);
	rangerecursive(1, 10);
}
