#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	while (cin >> n)
	{
		long long int weight[32769] = { 0 }, potency[32769] = { 0 };
		long long int max = 0;
		long long int size = pow(2, n);
		for (size_t i = 0; i < size; i++)
		{
			cin >> weight[i];
		}
		for (size_t i = 0; i < size; i++)
		{
			for (size_t j = 0; j < n; j++)
			{
				potency[i] += weight[(i ^ (1 << j))];
			}
		}
		for (size_t i = 0; i < size; i++)
		{
			for (size_t j = 0; j < n; j++)
			{
				if (max < potency[(i ^ (1 << j))] + potency[i])
				{
					max = potency[(i ^ (1 << j))] + potency[i];
				}
			}
		}
		cout << max << endl;
	}
	return 0;
}