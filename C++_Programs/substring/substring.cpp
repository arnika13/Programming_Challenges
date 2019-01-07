/*
Write a function to find if a given string is a substring of another string.
*/

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int find(string s1, string s2)
{
	int s1length = s1.length();
	int s2length = s2.length();

	//if (s2length > s1length)
	//	return false;

	for (int i = 0; i < s1length; i++)
	{
		int j = 0;
		int temp = i;
		while (j < s2length && i < s1length && s1[i] == s2[j])
		{
			i++;
			j++;
		}
		if (j == s2length)
		{
			return temp;
		}
		i = temp;
	}
	return -1;
}

int main()
{	
	int found;
	found = find("Arnika", "nik");
	cout << found << endl;

	found = find("abcdaaba", "aba");
	cout << found << endl;

	found = find("abcdaaba", "cdc");
	cout << found << endl;

	found = find("cdc", "cdcdaaba");
	cout << found << endl;

	std::string str1("Arnika");
	found = str1.find("nik");

	return 0;
}
