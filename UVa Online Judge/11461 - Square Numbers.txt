#include <iostream>
#include<string>
#include <iostream>
#include <sstream>
#include <cmath>
#include <iomanip>
#include<algorithm>
using namespace std;
int main()
{
	int a, b;
	while (cin >> a >> b && a + b)
	{
		int cnt = 0;
		for (int i = a; i <= b; i++)
		{
			int m = sqrt(i);
			if (m * m == i)
				cnt++;
		}
		cout << cnt << endl;
	}
	return 0;
}