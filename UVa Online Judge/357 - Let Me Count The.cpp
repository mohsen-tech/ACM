#include <iostream>
using namespace std;
long long int value[30000];
int main()
{
	long long int n, coin[5] = { 1,5,10,25,50 };
	value[0] = 1;
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = coin[i]; j <= 30000; j++)
		{
			value[j] += value[j - coin[i]];
		}
	}
	while (cin >> n)
	{
		if (value[n] == 1)
			cout << "There is only 1 way to produce " << n << " cents change.\n";
		else
			cout << "There are " << value[n] << " ways to produce " << n << " cents change.\n";
	}
	return 0;
}