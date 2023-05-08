#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	char ch[1000001];
	int i, j, n, cnt = 1;
	while (cin >> ch) 
	{
		cin >> n;
		cout << "Case " << cnt++ << ":\n";
		while (n--) 
		{
			cin >> i >> j;
			int a = max(i, j), b = min(i, j);
			bool sw = true;
			for (;b < a; b++) 
			{
				if (ch[b] != ch[b + 1]) 
				{
					sw = false;
					break;
				}
			}
			if (sw)
				cout << "Yes\n";
			else 
				cout << "No\n";
		}
	}

	system("pause>0");
	return 0;
}