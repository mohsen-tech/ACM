#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
void Rotate(char a[][100], int n)
{
	char ans[100][100];
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			ans[(n - 1) - j][i] = a[i][j];
		}
	}
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			a[i][j] = ans[i][j];
		}
	}
}
int Search(char a[][100], char b[][100], int n, int m)
{
	int cnt = 0;
	for (size_t i = 0; i <= n-m; i++)
	{
		for (size_t j = 0; j <= n-m; j++)
		{
			if (a[i][j] == b[0][0])
			{
				int tempI = i;
				bool sw = true;
				for (size_t ii = 0; ii < m; ii++)
				{
					int tempJ = j;
					for (size_t jj = 0; jj < m; jj++)
					{
						if (a[i][j++] != b[ii][jj])
						{
							sw = false;
						}
					}
					i++;
					j = tempJ;
				}
				i = tempI;
				if (sw == true)
				{
					cnt++;
				}
			}
		}
	}
	return cnt;
}
int main()
{
	int n, m;
	char a[100][100], b[100][100];
	while (cin >> n >> m && (m && n))
	{
		int i, j;
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				cin >> a[i][j];
			}
			a[i][j] = 0;
		}
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < m; j++)
			{
				cin >> b[i][j];
			}
			b[i][j] = 0;
		}
		int r1, r2, r3, r4;

		r1 = Search(a, b, n, m);

		Rotate(a, n);
		r2 = Search(a, b, n, m);

		Rotate(a, n);
		r3 = Search(a, b, n, m);

		Rotate(a, n);
		r4 = Search(a, b, n, m);

		cout << r1 << " " << r2 << " " << r3 << " " << r4 << endl;
	}
	return 0;
}