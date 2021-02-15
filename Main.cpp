#include "Palindromes.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	string s;
	if (argc != 2)
	{
		cout << "Please enter a word:" << endl;
		cin >> s;
	}
	else
		s = argv[1];

	int result = lps(s);
	cout << "The longest palindrome subsequence has length " << result << endl;
}