/*Determine if  string has unique characters*/

#include<iostream>
#include<string>
using namespace std;

bool uniqueCharacters(string s, int n)
{
	for (int i = 0; i < n; i++){

		for (int j = i + 1; j < n; j++){

			if (s.at(i) == s.at(j)){

				return false;
			}

		}
	}

	return true;

}


void main()
{
	string s = "Arniika";
	int n = s.length();
	bool result= uniqueCharacters(s, n);

	cout << "The string has unique characters: " << result<<endl;


}