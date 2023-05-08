#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		char ch[3][3];
		int a[3][3], ans[3][3];
		for (size_t i = 0; i < 3; i++)
		{
			for (size_t j = 0; j < 3; j++)
			{
				cin >> ch[i][j];
				a[i][j] = ch[i][j] - '0';
			}
		}
		int result = -1;
		while (!false)
		{
			int cnt = 0;
			for (size_t i = 0; i < 3; i++)
			{
				for (size_t j = 0; j < 3; j++)
				{
					if (a[i][j] == 0)
						cnt++;
				}
			}
			if (cnt == 9)
				break;

			ans[0][0] = (a[0][1] + a[1][0]) % 2;
			ans[0][1] = (a[0][0] + a[1][1] + a[0][2]) % 2;
			ans[0][2] = (a[0][1] + a[1][2]) % 2;

			ans[1][0] = (a[0][0] + a[1][1] + a[2][0]) % 2;
			ans[1][1] = (a[0][1] + a[1][0] + a[1][2] + a[2][1]) % 2;
			ans[1][2] = (a[1][1] + a[0][2] + a[2][2]) % 2;

			ans[2][0] = (a[2][1] + a[1][0]) % 2;
			ans[2][1] = (a[2][0] + a[1][1] + a[2][2]) % 2;
			ans[2][2] = (a[2][1] + a[1][2]) % 2;

			for (size_t i = 0; i < 3; i++)
				for (size_t j = 0; j < 3; j++)
					a[i][j] = ans[i][j];
			result++;
		}
		cout << result << "\n";
	}
	system("pause>0");
	return 0;
}