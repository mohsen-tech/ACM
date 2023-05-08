#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
	int n, m, Max;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> m;
		Max = 0;
		for (int j = 0; j < m; j++)
		{
			int x;
			cin >> x;
			Max = max(Max, x);
		}
		cout << "Case " << i + 1 << ": " << Max << endl;
	}
	return 0;
}