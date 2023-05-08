#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <cstring> 
using namespace std;
int main()
{
	int n, m, t;
	while (cin >> n >> m >> t)
	{
		int a[2][10001];
		memset(a, -1, sizeof(a));
		a[0][0] = a[1][0] = 0;

		for (int i = n; i <= t; i++)
			if (i % n == 0)
				a[0][i] = i / n;
		// Sakhtan arraye avali ba zarayebe n

		for (int i = 0; i <= t; i++)
			a[1][i] = a[0][i];
		// Copy krdn avali

		for (int i = m; i <= t; i++)
			if (a[1][i - m] != -1)
				a[1][i] = max(a[1][i - m] + 1, a[0][i]);
		// Mix avali ba payinish va update krdn ba max

		int index;
		for (int i = t; i >= 0; i--)
			if (a[1][i] != -1)
			{
				index = i;
				break;
			}
		// Peyda krdn on zaman nakhordan

		if (t - index == 0)
			cout << a[1][index] << "\n";
		else
			cout << a[1][index] << " " << t - index << "\n";
	}
	return 0;
}