#include <iostream>
#include <set>
#include <string>
using namespace std;

string caesarCipher(string s, int k) 
{
	// Complete this function
	for (int i = 0; i < s.length(); i++) {
		// First check whether the character is an alphabet (lower or upper)
		if (isalpha(s[i])) {
			k = k % 26;
			if (isupper(s[i]) && (s[i] + k) > 90) {
				s[i] = (((s[i] + k) % 90) + 65 - 1);
			}
			else if (islower(s[i]) && (s[i] + k) > 122) {
				s[i] = (((s[i] + k) % 122) + 97 - 1);
			}
			else {
				s[i] += k;
			}
		}
	}
	return s;
}

int main() {
	int n;
	cout << "Enter the length of string:" << endl;
	cin >> n;
	string s;
	cout << "Enter the string :" << endl;
	cin >> s;
	int k;
	cout << "Enter the rotation shift :" << endl;
	cin >> k;
	string result = caesarCipher(s, k);
	cout << result << endl;
	return 0;
}
