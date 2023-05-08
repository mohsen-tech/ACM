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
	int n, m, s[500], avg, sum;
	cin >> n;
	for (int j = 0; j < n; j++)
	{
		cin >> m;
		for (int i = 0; i < m; i++)
		{
			cin >> s[i];
		}
		sort(s, s + m);
		avg = s[m / 2];
		sum = 0;
		for (int i = 0; i < m; i++)
		{
			sum += abs(avg - s[i]);
		}
		cout << sum << endl;
	}
	return 0;
}