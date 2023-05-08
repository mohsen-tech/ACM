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
	int n, s[12], cnt = 0;
	while (cin >> n && n)
	{
		if (cnt++)
			cout << endl;
		for (size_t i = 0; i < n; i++)
			cin >> s[i];
		for (size_t a = 0; a < n - 5; a++)
			for (size_t b = a + 1; b < n - 4; b++)
				for (size_t c = b + 1; c < n - 3; c++)
					for (size_t d = c + 1; d < n - 2; d++)
						for (size_t e = d + 1; e < n - 1; e++)
							for (size_t f = e + 1; f < n; f++)
								printf("%d %d %d %d %d %d\n", s[a], s[b], s[c], s[d], s[e], s[f]);
	}
	return 0;
}