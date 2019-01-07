/* Balancing parentheses using stack*/
#include<iostream>
#include<string>
#include<stack>

using namespace std;

bool balancedparentheses(const string& str)
{
	int len = str.length();
	stack<char> s;

	for (int i = 0; i < len; i++)
	{
		if (str[i] == '[' || str[i]=='{' || str[i]== '(')
		{
			s.push(str[i]);
			
		}
		else if(str[i] == ']' || str[i] == '}' || str[i]==')')
		{
			if (s.empty())
				return false;

			if ((str[i] == ']' && s.top() != '[') ||
				(str[i] == '}' && s.top() != '{') ||
				(str[i] == ')' && s.top() != '('))
				return false;

			s.pop();
		}
	}
	return s.empty();
}

void checkTest(bool actualResult, bool expectedResult)
{
	if (actualResult == expectedResult)
		cout << "Test Passed" << endl;
	else
		cout << "Test Failed" << endl;
}

void runAutomatedTests()
{
	string str;
	bool result = false;

	// Test Case 1:
	str = "[(){}()]";
	result = balancedparentheses(str);
	checkTest(result, true);

	// Test Case 2:
	str = "[(){}(])";
	result = balancedparentheses(str);
	checkTest(result, false);

	// Test Case 3:
	str = "[(){}()[";
	result = balancedparentheses(str);
	checkTest(result, false);

	// Test Case 4:
	str = "{[({([";
	result = balancedparentheses(str);
	checkTest(result, false);
}

void runManualTesting()
{
	string str;
	cout << "Enter the string: ";
	cin >> str;

	bool result = balancedparentheses(str);
	cout << result << endl;
}

void main()
{
	runAutomatedTests();
	//runManualTesting();
	
}