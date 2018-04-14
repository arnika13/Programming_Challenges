#include <iostream>
#include <string>

using namespace std;

string super_reduced_string(string s)
{
	bool changed = true;
	// Complete this function
	while (changed)
	{
		changed = false;
		for (int i = 0; s.length() > 0 && i < s.length() - 1; )
		{
			if (i + 1 < s.length() && s[i] == s[i + 1])
			{
				s.erase(i, 2);
				changed = true;
			}
			else {
				i++;
			}
		}
	}
	if (!s.empty())
	{
		return s;
	}
	else
	{
		cout << "Empty String" << endl;
	}
	return s;
}

int main() {
	string s;
	cin >> s;
	string result = super_reduced_string(s);
	cout << result << endl;
	return 0;
}
