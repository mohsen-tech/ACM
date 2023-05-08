#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
	unsigned long long num;

	while (cin >> num)
	{
		num = num / 2 + 1;
		num = num * num;

		cout << 6 * num - 9 << '\n';
	}
	system("pause>0");
	return 0;
}