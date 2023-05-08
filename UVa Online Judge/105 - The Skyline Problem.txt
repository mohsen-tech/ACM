#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <cctype>
#include <map>
#include <math.h>
#include <cstdio>
using namespace std;
int Answer[10001], l, h, r;
int main()
{
	while (cin >> l >> h >> r)
	{
		for (int i = l; i < r; i++)
		{
			if (Answer[i] < h)
			{
				Answer[i] = h;
			}
		}
	}
	for (int i = 0, j = 1; i <= 10000; i++)
	{
		if (Answer[i - 1] != Answer[i])
		{
			if (j == 1)
			{
				cout << i << " " << Answer[i];
				j++;
			}
			else
			{
				cout << " " << i << " " << Answer[i];
			}
		}
	}
	cout << endl;
	return 0;
}