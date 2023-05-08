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
	int n, s[100000];
	while (cin >> n && n)
	{
		for (size_t i = 0; i < n; i++)
			cin >> s[i];
		int max = 0, sum = 0;
		for (size_t i = 0; i < n; i++)
		{
			sum += s[i];
			if (sum > max)
				max = sum;
			if (sum < 0)
				sum = 0;
		}
		if (max > 0)
			cout << "The maximum winning streak is " << max << ".\n";
		else
			cout << "Losing streak.\n";
	}
	return 0;
}