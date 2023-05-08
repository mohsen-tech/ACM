#include <iostream>
using namespace std;
long long int value[7500];
int main()
{
	long long int n, coin[5] = { 1,5,10,25,50 };
	value[0] = 1;
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = coin[i]; j <= 7500; j++)
		{
			value[j] += value[j - coin[i]];
		}
	}
	while (cin >> n)
		cout << value[n] << endl;
	return 0;
}