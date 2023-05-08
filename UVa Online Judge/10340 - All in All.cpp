#include <iostream>
#include<string>
#include <iostream>
#include <sstream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	string s1, s2;
	int n, cnt;
	while (cin >> s1 >> s2)
	{
		n = s1.size();
		cnt = 0;
		for (int i = 0; i < s2.size() && cnt < n; i++)
			if (s2[i] == s1[cnt])
				cnt++;

		if (cnt == n)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}