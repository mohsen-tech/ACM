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
	int n, a, b, c;
	cin >> n;
	for (size_t i = 0; i < n; i++)
	{
		cin >> a >> b >> c;
		bool sw = true;
		for (int i = -100; i <= 100 && sw; i++)
			if (i * i <= c)
				for (int j = -100; j <= 100 && sw; j++)
					if (j != i && i * i + j * j <= c)
						for (int k = -100; k <= 100 && sw; k++)
							if (k != i && k != j && i + j + k == a && i * j * k == b && i * i + j * j + k * k == c)
							{
								int aa = i, bb = j, cc = k;
								if (aa > bb)
								{
									swap(aa, bb);
								}
								cout << aa << " " << bb << " " << cc << endl;
								sw = false;
							}
		if (sw)
			cout << "No solution.\n";
	}
	return 0;
}