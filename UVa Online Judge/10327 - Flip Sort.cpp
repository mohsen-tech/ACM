#include <iostream>
#include<string>
#include <iostream>
#include <sstream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int n, a[1000];
	while (cin >> n)
	{
		for (int i = 0; i < n; i++)
			cin >> a[i];
		int cnt = 0;
		for (int i = 1; i < n; i++)
			for (int j = 0; j < i; j++)
				if (a[j] > a[i])
					cnt++;
		cout << "Minimum exchange operations : " << cnt << endl;
	}
	return 0;
}