#include <iostream>
#include<string>
#include <iostream>
#include <sstream>
using namespace std;
int main()
{
	int n, m, s[100];
	cin >> n;
	while (n--)
	{
		cin >> m;
		for (int i = 0; i < m; i++)
			cin >> s[i];

		int cnt = 0, sw;
		for (int i = 0; i < m; i++)
		{
			sw = 0;
			for (int j = 1; j < m - i; j++)
			{
				if (s[j] < s[j - 1])
				{
					swap(s[j], s[j - 1]);
					cnt++;
					sw = 1;
				}
			}
			if (!sw)
				break;
		}
		cout << "Optimal train swapping takes " << cnt << " swaps.\n";
	}
	return 0;
}