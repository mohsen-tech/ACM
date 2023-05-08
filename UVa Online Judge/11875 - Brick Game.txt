#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin >> t;
	for (size_t i = 1; i <= t; i++)
	{
		int n, a[15];
		cin >> n;
		for (size_t j = 0; j < n; j++)
		{
			cin >> a[j];
		}
		cout << "Case " << i << ": " << a[n / 2] << "\n";
	}

	return 0;
}