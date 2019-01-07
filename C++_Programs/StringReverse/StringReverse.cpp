/*Reverse a string*/

#include<iostream>
#include<string>
using namespace std;

void reverse(string s, int n)
{

	for (int i = n - 1; i >= 0; i--)
	{
		cout << s[i];
	}

}

void main()
{

	string s = "Ravi";
	int n = s.length();

	reverse(s, n);


}
