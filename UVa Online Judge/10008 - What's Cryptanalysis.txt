#include <iostream>
#include <string>
using namespace std;
struct Sample
{
	int cnt;
	char ch;
}a[100];
int main()
{
	int n;
	cin >> n;
	string str;
	cin.ignore();
	while (n--)
	{
		getline(cin, str);
		for (size_t i = 0; i < str.size(); i++)
		{
			if ('a' <= str[i] && str[i] <= 'z')
			{
				a[str[i] - 32].cnt++;
				a[str[i] - 32].ch = str[i] - 32;
			}
			else if ('A' <= str[i] && str[i] <= 'Z')
			{
				a[str[i]].cnt++;
				a[str[i]].ch = str[i];
			}
		}
	}
	for (size_t i = 0; i < 100; i++)
		for (size_t j = i + 1; j < 100; j++)
			if (a[i].cnt < a[j].cnt)
				swap(a[i], a[j]);
			else if (a[i].cnt == a[j].cnt)
				if (a[i].ch > a[j].ch)
					swap(a[i], a[j]);

	for (size_t i = 0; i < 100; i++)
		if (a[i].cnt)
			cout << a[i].ch << " " << a[i].cnt << endl;

	return 0;
}