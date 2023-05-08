#include <iostream>
#include <string>
using namespace std;
char s[2000005];
int main()
{
	int n;
	while (cin >> n && n)
	{
		int start = -1, end = -1, min = 999999, sw = 1, cntR = 0, cntD = 0;
		cin >> s;
		for (size_t i = 0; s[i]; i++)
		{
			if (start != -1 && end != -1 && cntD == 1 && cntR == 1)
			{
				int result = end - start;
				if (result < min)
					min = result;
				start = -1;
				end = -1;
				cntD = 0;
				cntR = 0;
				i--;
			}
			if (s[i] == 'D')
			{
				cntD = 1;
				if (start == -1)
					start = i;
				else if (cntD == 1 && cntR == 0)
					start = i;
				else
					end = i;
			}
			else if (s[i] == 'R')
			{
				cntR = 1;
				if (start == -1)
					start = i;
				else if (cntR == 1 && cntD == 0)
					start = i;
				else
					end = i;
			}
			else if (s[i] == 'Z')
			{
				sw = 0;
				break;
			}
		}
		if (start != -1 && end != -1 && cntD == 1 && cntR == 1)
		{
			int result = end - start;
			if (result < min)
				min = result;
			start = -1;
			end = -1;
			cntD = 0;
			cntR = 0;
		}
		if (sw == 0)
			cout << 0 << endl;
		else
			cout << min << endl;
	}
	return 0;
}