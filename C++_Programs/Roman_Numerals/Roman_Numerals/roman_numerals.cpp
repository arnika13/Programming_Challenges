#include<iostream>
#include<string>
using namespace std;


string convert_to_roman(int num)
{
	string roman = "";
	string romannum[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
	
	

	if (num >= 1000)
	{
		int n=num / 1000;
		for (int i = 0; i <= n; i++)
		{
			roman += "M";
		}
		num = num % 1000;
	}
	
	return roman;

}


int main()
{
	string result= convert_to_roman(476);
	cout << result;


}