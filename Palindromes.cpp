#include "Palindromes.h"
#include <algorithm>

using namespace std;

int lps(const string& s)
{
	const int n = s.length();
	int* pal = new int[n];  // Longest palindrome subsequence length for all 
	int* prev = new int[n];  // subsegments of the given length, only last
	int* prev2 = new int[n]; // three arrays stored for memory optimization

	for (int i = 0; i < n; i++)
	{
		prev2[i] = 0;
		prev[i] = 1;
	}
	for (int len = 2; len <= n; len++)
	{
		for (int beg = 0; beg <= n - len; beg++)
		{
			if (s[beg] == s[beg + len - 1])
			{
				pal[beg] = prev2[beg + 1] + 2;
			}
			else
			{
				if (prev[beg] > prev[beg + 1])
				{
					pal[beg] = prev[beg];
				}
				else
				{
					pal[beg] = prev[beg + 1];
				}
			}
		}

		swap(prev2, prev);
		swap(prev, pal);
	}

	int res = prev[0];
	delete pal;
	delete prev;
	delete prev2;
	return res;
}