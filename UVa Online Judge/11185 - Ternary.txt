#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long long int n;
	while (cin >> n && n >= 0)
	{
		if (n)
		{
			int ans[1000];
			int size = 0;
			while (n)
			{
				ans[size++] = n % 3;
				n /= 3;
			}
			for (int i = size - 1; i >= 0; i--)
			{
				cout << ans[i];
			}
		}
		else
			cout << n;
		cout << "\n";
	}
}