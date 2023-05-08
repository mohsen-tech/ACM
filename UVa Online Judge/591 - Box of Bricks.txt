#include <iostream>
#include<string>
#include <iostream>
#include <sstream>
using namespace std;
int main()
{
	int n, sum, avg, s[100], answer, cnt = 1;
	while (cin >> n && n)
	{
		sum = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> s[i];
			sum += s[i];
		}
		avg = sum / n;
		answer = 0;
		for (int i = 0; i < n; i++)
		{
			if (s[i] > avg)
				answer += s[i] - avg;
		}
		cout << "Set #" << cnt++ << "\nThe minimum number of moves is " << answer << ".\n\n";
	}
	return 0;
}