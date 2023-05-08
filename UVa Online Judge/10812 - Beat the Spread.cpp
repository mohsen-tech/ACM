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
	int n;
	cin >> n;
	int s, d, x, y;
	for (size_t i = 0; i < n; i++)
	{
		cin >> s >> d;
		x = (s + d) / 2;
		y = s - x;

		if (((s + d) % 2 != 0) || (x + y != s) || abs(x - y) != d || x < 0 || y < 0)
			cout << "impossible" << endl;
		else
			cout << max(x, y) << " " << min(x, y) << endl;
	}
	return 0;
}