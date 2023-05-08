#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str;
	int ans[10000] = { 0 }, max = -999;
	while (cin >> str && str != "0")
	{
		int j = 0;
		for (int i = str.size() - 1; i >= 0; i--)
		{
			int temp = ans[j] + (str[i] - '0');

			if (temp >= 10)
			{
				ans[j] = temp - 10;
				ans[j + 1] += 1;
			}
			else
			{
				ans[j] = temp;
			}
			j++;
		}
		if (j > max)
		{
			max = j;
		}
	}
	for (size_t i = 0; i < max; i++)
	{
		if (ans[i] >= 10)
		{
			int temp = ans[i] % 10;
			ans[i + 1] += (ans[i] - temp) / 10;
			ans[i] = temp;
		}
	}
	if (ans[max] != 0)
		cout << ans[max];
	for (int i = max - 1; i >= 0; i--)
	{
		cout << ans[i];
	}
	cout << endl;
	return 0;
}