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
	for (int a = 6; a <= 200; a++)
	{
		int aaa = a * a * a;
		for (int b = 2; b <= 200; b++)
		{
			int bbb = b * b * b;
			for (int c = b; c <= 200; c++)
			{
				int ccc = c * c * c;
				for (int d = c; d <= 200; d++)
				{
					int ddd = d * d * d;
					if (aaa == bbb + ccc + ddd)
						cout << "Cube = " << a << ", Triple = " << "(" << b << "," << c << "," << d << ")\n";
					else if (aaa < bbb + ccc + ddd)
						break;
				}
			}
		}
	}
	return 0;
}