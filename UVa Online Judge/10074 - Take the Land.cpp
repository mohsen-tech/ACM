#include <iostream>
#include <queue>
#include <vector>
#include <stack>
#include <cstdio>
using namespace std;
int main()
{
	int n, m;
	while (cin >> n >> m && (n && m))
	{
		int mat[101][101];
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				cin >> mat[i][j];

		int a[101] = { 0 }, maxSum = -999;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (mat[i][j] == 0)
					a[j]++;
				else
					a[j] = 0;
			}
			for (int j = 0; j < m; j++)
			{
				int sum[101] = { 0 }, width, length = -1;
				for (int k = j; k < m; k++)
				{
					if (length == -1 && a[k])
						length = a[k];
					if (a[k] == 0)
						break;
					width = k - j + 1;
					if (length != -1)
					{
						if (length > a[k])
							length = a[k];
						if (a[k] < length * width)
							sum[k] = length * width;
						else
							sum[k] = a[k];
					}
				}
				for (int j = 0; j < m; j++)
					if (sum[j] > maxSum)
						maxSum = sum[j];
			}
		}
		cout << maxSum << endl;
	}
	system("pause>0");
	return 0;
}