#include <iostream>
#include <iomanip>
#include <string>
#include <map>
using namespace std;
int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		map <char, int> ans;
		int m;
		cin >> m;
		while (m--)
		{
			char ch;
			cin >> ch;
			cin >> ans[ch];
		}
		int line;
		cin >> line;
		string str;
		getline(cin, str);
		double sum = 0;
		while (line--)
		{
			getline(cin, str);
			for (size_t i = 0; i < str.length(); i++)
			{
				sum += (ans[str[i]] * 1.00 / 100);
			}
		}
		cout << fixed << setprecision(2) << sum << "$" << endl;
	}
	return 0;
}