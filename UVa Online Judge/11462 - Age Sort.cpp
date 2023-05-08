#include <iostream>
using namespace std;
int a[2000005];
int main()
{
	int n, t ;
	while (cin >> n && n)
	{
		t = 0;
		int s[101] = { 0 };
		for (size_t i = 1; i <= n; i++)
		{
			cin >> a[i];
			s[a[i]]++;
		}
		for (size_t i = 1; i <= 100; i++)
		{
			if (s[i])
				for (size_t j = 0; j < s[i]; j++)
				{
					t++;
					cout << i;
					if (t != n)
						cout << " ";
				}
		}
		cout << "\n";
	}
	return 0;
}