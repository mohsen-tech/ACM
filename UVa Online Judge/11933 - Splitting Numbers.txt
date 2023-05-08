#include <iostream>
#include <string>
using namespace std;
int main()
{
	long long int num;
	while (cin >> num && num)
	{
		long long int a = 0, b = 0, toAdd = 1;
		bool addToA = true;

		while (num)
		{
			if (num & 1)
			{
				if (addToA)
					a += toAdd;
				else
					b += toAdd;

				addToA = !addToA;
			}
			toAdd *= 2;
			num /= 2;
		}
		cout << a << " " << b << "\n";
	}
	system("pause>0");
	return 0;
}