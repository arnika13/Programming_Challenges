#include <iostream>
#include <string>

using namespace std;

long maximumProgramValue(int n) {
	/*
	* Write your code here.
	*/
	int x = 0;
	string instruction;
	long long  y = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> instruction;
		cin >> y;
		if (instruction == "add" && y > 0) {
			x += y;
		}
		else if (instruction == "set" && y > x) {
			x = y;
		}
	}
	return x;
}

int main()
{
	int n;
	cin >> n;
	cout << maximumProgramValue(n);
	return 1;
}