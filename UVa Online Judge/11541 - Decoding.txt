#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n, cnt = 1;
	string str;
	cin >> n;
	while (n--)
	{
		cin >> str;
		cout << "Case " << cnt++ << ": ";
		for (size_t i = 0; i < str.size(); )
		{
			char ch;
			ch = str[i];
			i++;
			int num = 0;
			while (isdigit(str[i]))
			{
				num = (10 * num) + (str[i++] - '0');
			}
			for (size_t j = 0; j < num;j++)
			{
				cout << ch;
			}
		}
		cout << "\n";
	}
	return 0;
}