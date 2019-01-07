/* Reversing a string using stack*/
#include<iostream>
#include<string>
#include<stack>
using namespace std;

void reverse(char *str, int len)
{
	stack<char> s;
	int i;

	for (i = 0; i < len; i++)
		s.push(str[i]);

	for (i = 0; i < len; i++)
	{
		str[i] = s.top();
		s.pop();
	}
}

int main()
{
	char str[20];
	cout << "Enter a string: " << endl;
	cin >> str;
	int len = strlen(str);

	reverse(str, len);
	cout << "The reversed string is : "<<str<<endl;

}