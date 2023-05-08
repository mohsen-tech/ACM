#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <cctype>
#include <map>
#include <math.h>
#include <cstdio>
using namespace std;
int main()
{
	int n, m, s[1000];
	int j, k;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> m;
		int b = 0, a;
		for (j = 0; j < m; j++)
		{
			cin >> a;
			for (k = j - 1; k >= 0; k--)
				if (a < s[k])
					s[k + 1] = s[k];
				else
					break;
			s[k + 1] = a;
			b += k + 1;
		}
		cout << b << endl;
	}
	return 0;
}