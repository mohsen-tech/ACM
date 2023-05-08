#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <cctype>
#include <map>
#include <math.h>
#include <cstdio>
#include <vector>
#include <climits>
using namespace std;
int s[1001][1001];
int main()
{
	char a[1001], b[1001];
	while (cin.getline(a, 1000) && cin.getline(b, 1000))
	{
		int LenA, LenB;
		for (LenA = 0; a[LenA]; LenA++);
		for (LenB = 0; b[LenB]; LenB++);

		for (size_t i = 1; i < LenA + 1; i++)
		{
			for (size_t j = 1; j < LenB + 1; j++)
			{
				if (a[i - 1] == b[j - 1])
				{
					s[i][j] = 1 + s[i - 1][j - 1];
				}
				else
				{
					s[i][j] = max(s[i - 1][j], s[i][j - 1]);
				}
			}
		}
		cout << s[LenA][LenB] << endl;
	}
	return 0;
}