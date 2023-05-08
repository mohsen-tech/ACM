#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int P[10];
int Ans[200][10];
int Index = 0;

bool Check(int j)
{
	for (int i = 0; i < j; i++)
		if (P[i] == P[j] || abs(i - j) == abs(P[i] - P[j]))
			return false;
	return true;
}

void NQ(int j)
{
	if (j == 8)
	{
		memcpy(Ans[Index++], P, sizeof(P));
		return;
	}
	for (int i = 0; i < 8; i++)
	{
		P[j] = i;
		if (Check(j))
		{
			NQ(j + 1);
		}
	}
}

int main()
{
	NQ(0);

	int a, input[10], cnt = 1;
	while (cin >> a)
	{
		int MiN = 999999;
		input[0] = a;
		for (size_t i = 1; i < 8; i++)
		{
			cin >> input[i];
		}
		for (size_t i = 0; i < 8; i++)
		{
			input[i];
		}
		int sum = 0;
		for (size_t i = 0; i < Index; i++)
		{
			for (size_t j = 0; j < 8; j++)
			{
				if (Ans[i][j] != input[j])
				{
					sum++;
				}
			}
			if (sum < MiN)
			{
				MiN = sum;
			}
		}
		cout << "Case " << cnt++ << ": " << MiN << endl;
	}
	return 0;
}