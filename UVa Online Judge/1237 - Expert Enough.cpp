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
	int tedad, n, m, q;
	cin >> tedad;
	while (tedad--)
	{
		int l[10000], h[10000];
		char Brand[10000][21];
		cin >> n;
		for (int i = 0; i < n; i++)
			cin >> Brand[i] >> l[i] >> h[i];
		cin >> m;
		while (m--)
		{
			cin >> q;
			int cnt = 0, k;
			for (int i = 0; i < n; i++)
			{
				if (l[i] <= q && q <= h[i])
					cnt++, k = i;
				if (cnt > 1)
					break;
			}
			if (cnt == 1)
				cout << Brand[k] << endl;
			else
				cout << "UNDETERMINED" << endl;
		}
		if (tedad)
			puts("");
	}
	return 0;
}