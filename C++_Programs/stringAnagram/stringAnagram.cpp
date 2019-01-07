/*Check if two string are anagram of each other
 for Example- string1= listen
              string2 = silent
 both strings are anagram of each other

*/

#include<iostream>
#include<string>
using namespace std;

void stringAnagram(string str1, string str2)
{
	int count = 0;
	int n1 = str1.length();
	int n2 = str2.length();

	// check if the the length of both the strings are same , if not then return false
	if (n1 != n2)
	{
		cout << "The strings are not anagram of each other as their length is different";
	}
	else 
	{

		for (int i = 0; i < n1; i++)
		{
			for (int j = 0; j < n2; j++)
			{
				if (str1[i] == str2[j])
					count++;

			}
		}

	}

	if (count == n2)
	{
		cout << "The strings are anagram of each other"<<endl;
	}
	else
	{
		cout << "Both strings are not anagram of each other as the charcters doesn't match"<<endl;
	}


}

void main()
{

	string str1 = "hello";
	string str2 = "ohiio";

	stringAnagram(str1, str2);



}