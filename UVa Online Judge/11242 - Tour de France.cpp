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
int main()
{
	int n, m, k, i, j, a[15], b[15];
	double answer, s[105];
	while (cin >> n && n)
	{
		cin >> m;
		for (i = 0; i < n; i++)
			cin >> a[i];
		for (i = 0, k = 0; i < m; i++)
		{
			cin >> b[i];
			for (j = 0; j < n; j++)
				s[k++] = (double)b[i] / a[j];
		}
		sort(s, s + k);
		for (i = 1, answer = -1; i < k; i++)
			answer = max(answer, s[i] / s[i - 1]);
		printf("%.2lf\n", answer);
	}
	return 0;
}