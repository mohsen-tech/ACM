#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
	long long int n, m;
	while (cin >> n >> m && (n || m))
	{
		int cnt = 0, temp;
		long long int sum = n + m;
		while (sum)
		{
			temp = n % 10 + m % 10;
			if (temp > sum % 10)
				cnt++;
			sum /= 10;
			n /= 10;
			m /= 10;
		}
		if (cnt > 1)
			cout << cnt << " carry operations.\n";
		else if (cnt == 1)
			cout << "1 carry operation.\n";
		else
			cout << "No carry operation.\n";
	}
	system("pause>0");
	return 0;
}