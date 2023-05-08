#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <cctype>
#include <map>
#include <math.h>
using namespace std;
int main()
{
	//< in.txt > out.txt
	int n, m, x[100001], mx, mn;
	cin >> n;
	for (int j = 0; j < n; j++)
	{
		cin >> m;
		for (int i = 0; i < m; i++)
		{
			cin >> x[i];
			mn = mx = x[0];
		}
		int MAX = -999999999;
		for (int i = 1; i < m; i++)
		{
			MAX = max(MAX, max(mx - x[i], mn - x[i]));
			mx = max(x[i], mx);
			mn = min(x[i], mn);
		}
		cout << MAX << endl;
	}
	return 0;
}