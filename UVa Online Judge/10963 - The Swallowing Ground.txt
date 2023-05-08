#include <iostream>
using namespace std;
int main()
{
	int n, m, a, b, change;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> m;
		int sw = 1;
		for (int j = 0; j < m; j++)
		{
			cin >> a >> b;
			if (j == 0)
				change = a - b;
			else if (change != a - b)
				sw = 0;
		}
		if (sw)
			cout << "yes\n";
		else
			cout << "no\n";
		if (n)
			puts("");
	}
	return 0;

}