/*#Array of Array Products

Given an array of integers arr, write a function that returns another array at the same length where the value at each index i is the product of all array values except arr[i].

Example: given the array [2,  7,  3,  4]
your function would return: [84, 24, 56, 42]
(by calculating: [7*3*4, 2*3*4, 2*7*4, 2*7*3])

Method 1:
i loop Go through each element of a
{
j loop Go through each element of a
{
if(i != j)
{
p *= a[j];
}
}
// here I have the product. save it.
v.push_back(p);
}



*/


// at a[0] = 7*3*4
#include <iostream>
#include <vector>
using namespace std;

vector<int> getArrayMultiplication(vector<int> a)
{

	vector<int> v;

	for (int i = 0; i < a.size(); i++)
	{
		int p = 1;

		for (int j = 0; j < a.size(); j++)
		{

			if (j != i)
			{
				p *= a[j];
			}

		}
		v.push_back(p);
	}
	return v;
}
/*
vector<int> getArrayMultiplication2(vector<int> &a)
{

	vector<int> v;
	int m = 1;
	//1. multiplying the complete array elements and storing it in the variable 'm'
	for (int i = 0; i < a.size(); i++)
	{
		m *= a[i];

	}
	//2. visiting each array element and dividing the variable m by that element
	for (int j = 0; j < a.size(); j++)
	{

		v.push_back(m / a[j]);

	}

	return v;
}
*/

int main()
{
	vector<int> a = { 2,7,3,4 };
	vector<int> b = getArrayMultiplication(a);

	for (auto it = b.begin(); it != b.end(); it++) {
		std::cout << *it << " ";
	}

}
