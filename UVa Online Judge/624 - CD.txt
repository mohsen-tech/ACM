#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int ans[21], MiN[21];
int MaX = -9999;
bool sw = false;
int f_sum(int a[], int size)
{
	int sum = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (ans[i] == 1)
		{
			sum += a[i];
		}
	}
	return sum;
}
void f(int a[], int n, int index, int sum)
{
	if (sw == false)
	{
		if (index == n)
		{
			int res = f_sum(a, n);
			if (res == sum)
			{
				sw = true;
				for (size_t i = 0; i < n; i++)
				{
					if (ans[i] == 1)
					{
						cout << a[i] << " ";
					}
				}
				cout << "sum:" << sum << endl;
			}
			else if (res < sum)
			{
				if (MaX < res)
				{
					MaX = res;
					memcpy(MiN, ans, sizeof(ans));
				}
			}
			return;
		}
		ans[index] = 1;
		f(a, n, index + 1, sum);
		ans[index] = 0;
		f(a, n, index + 1, sum);
	}
}
int main()
{
	int sum, n;
	while (cin >> sum >> n)
	{
		int A[21];
		for (size_t i = 0; i < n; i++)
		{
			cin >> A[i];
		}
		f(A, n, 0, sum);
		if (sw == false)
		{
			int sum1 = 0;
			for (size_t i = 0; i < n; i++)
			{
				if (MiN[i] == 1)
				{
					sum1 += A[i];
					cout << A[i] << " ";
				}
			}
			cout << "sum:" << sum1 << endl;
		}
		sw = false;
		MaX = -9999;
		for (size_t i = 0; i < 21; i++)
		{
			ans[21] = MiN[21] = 0;
		}
	}
	return 0;
}