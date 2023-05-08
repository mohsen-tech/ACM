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
int s[20];
using namespace std;
int main()
{
	int n, cnt = 1;
	long long int r, p;
	while (cin >> n)
	{
		r = 0;
		p = 1;
		for (size_t i = 0; i < n; i++)
			cin >> s[i];
		for (size_t i = 0; i < n; i++)
		{
			p = s[i];
			r = max(r, p);
			for (size_t j = i + 1; j < n; j++)
			{
				p *= s[j];
				r = max(r, p);
			}
		}
		cout << "Case #" << cnt << ": The maximum product is " << r << ".\n\n";
		cnt++;
	}
	return 0;
}